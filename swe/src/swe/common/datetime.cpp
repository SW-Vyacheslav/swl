#include "common/datetime.hpp"

#include <ctime>
#include <chrono>

#include <fmt/format.h>

namespace swe
{

DateTime DateTime::ToLocal() const
{
    if (!IsValid())
        return *this;

    tzset();

    int64_t ts = ToUnixTimestamp() + -timezone * 1'000'000'000l;

    return FromUnixTimestamp(ts);
}

DateTime DateTime::Now()
{
    return DateTime{ std::chrono::duration_cast<std::chrono::nanoseconds>(
                         std::chrono::system_clock::now().time_since_epoch())
                         .count() };
}

} // namespace swe
