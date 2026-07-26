#ifndef SWE_COMMON_DATETIME_HPP_
#define SWE_COMMON_DATETIME_HPP_

#include <cstdint>
#include <string>

namespace swe
{

struct DateTime
{
public:
    constexpr DateTime()
        : year(1970), month(1), day(1), hours(0), minutes(0), seconds(0), nanoseconds(0)
    {}

    constexpr DateTime(uint32_t year,
                       uint32_t month,
                       uint32_t day,
                       uint32_t hours,
                       uint32_t minutes,
                       uint32_t seconds,
                       uint32_t nanoseconds)
        : year(year), month(month), day(day), hours(hours), minutes(minutes), seconds(seconds), nanoseconds(nanoseconds)
    {}

    constexpr DateTime(uint32_t year, uint32_t month, uint32_t day)
        : year(year), month(month), day(day), hours(0), minutes(0), seconds(0), nanoseconds(0)
    {}

    constexpr DateTime(uint32_t hours, uint32_t minutes, uint32_t seconds, uint32_t nanoseconds)
        : year(1970), month(1), day(1), hours(hours), minutes(minutes), seconds(seconds), nanoseconds(nanoseconds)
    {}

    explicit constexpr DateTime(int64_t unix_ts)
        : DateTime(FromUnixTimestamp(unix_ts))
    {}

    constexpr bool IsValid() const
    {
        if (year < 1900u || year > 9999u)
            return false;

        if (month == 0u || month > 12u)
            return false;

        if (day == 0u || day > 31u)
            return false;

        if (month == 2u && day > (IsLeap() ? 29u : 28u))
            return false;

        if ((month == 4u || month == 6u || month == 9u || month == 11u) && day > 30u)
            return false;

        return hours < 24u && minutes < 60u && seconds < 60u && nanoseconds < 1'000'000'000u;
    }

    constexpr bool IsLeap() const
    {
        if (year % 4u != 0u)
            return false;

        if (year % 100u != 0u)
            return true;

        return year % 400u == 0u;
    }

public:
    DateTime ToLocal() const;

    // https://howardhinnant.github.io/date_algorithms.html#days_from_civil
    // calculate unix timestamp in ns
    constexpr int64_t ToUnixTimestamp() const
    {
        int64_t y   = static_cast<int64_t>(year) - (month <= 2u);
        int64_t era = ((y >= 0) ? y : (y - 399)) / 400;
        int64_t yoe = y - era * 400;
        int64_t doy =
            (153 * (static_cast<int64_t>(month) + ((month > 2u) ? -3 : 9)) + 2) / 5 + static_cast<int64_t>(day) - 1;
        int64_t doe  = yoe * 365 + yoe / 4 - yoe / 100 + doy;
        int64_t days = era * 146097 + doe - 719468;
        int64_t sec  = days * 86400 + static_cast<int64_t>(hours) * 3600 + static_cast<int64_t>(minutes) * 60 +
                       static_cast<int64_t>(seconds);

        return sec * 1'000'000'000 + static_cast<int64_t>(nanoseconds);
    }

public:
    // https://howardhinnant.github.io/date_algorithms.html#civil_from_days
    // calculate date and time from unix timestamp in ns
    static constexpr DateTime FromUnixTimestamp(int64_t ts)
    {
        bool is_neg = ts < 0;

        int64_t total_sec = ts / 1'000'000'000;

        int64_t days = total_sec / 86400;
        total_sec    = total_sec % 86400;

        int64_t hrs = total_sec / 3600;
        total_sec   = total_sec % 3600;

        int64_t min  = total_sec / 60;
        int64_t sec  = total_sec % 60;
        int64_t nsec = ts % 1'000'000'000;

        if (is_neg)
        {
            if (nsec < 0)
            {
                nsec = 1'000'000'000 + nsec;
                sec--;
            }

            if (sec < 0)
            {
                sec = 60 + sec;
                min--;
            }

            if (min < 0)
            {
                min = 60 + min;
                hrs--;
            }

            if (hrs < 0)
            {
                hrs = 24 + hrs;
                days--;
            }
        }

        int64_t z   = days + 719468;
        int64_t era = ((z >= 0) ? z : (z - 146096)) / 146097;
        int64_t doe = z - era * 146097;
        int64_t yoe = (doe - doe / 1460 + doe / 36524 - doe / 146096) / 365;
        int64_t y   = yoe + era * 400;
        int64_t doy = doe - (365 * yoe + yoe / 4 - yoe / 100);
        int64_t mp  = (5 * doy + 2) / 153;
        int64_t d   = doy - (153 * mp + 2) / 5 + 1;
        int64_t m   = (mp < 10) ? (mp + 3) : (mp - 9);

        return DateTime(y + (m <= 2), m, d, hrs, min, sec, nsec);
    }

public:
    static DateTime Now();

public:
    constexpr bool operator==(const DateTime& other) const
    {
        return year == other.year && month == other.month && day == other.day && hours == other.hours &&
               minutes == other.minutes && seconds == other.seconds && nanoseconds == other.nanoseconds;
    }

    constexpr bool operator!=(const DateTime& other) const { return !(*this == other); }

public:
    uint32_t year;
    uint32_t month;
    uint32_t day;
    uint32_t hours;
    uint32_t minutes;
    uint32_t seconds;
    uint32_t nanoseconds;
};

} // namespace swe

#endif // SWE_COMMON_DATETIME_HPP_
