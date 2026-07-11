set(FMT_DOC     OFF CACHE BOOL "")
set(FMT_INSTALL OFF CACHE BOOL "")
set(FMT_TEST    OFF CACHE BOOL "")

add_subdirectory(external/fmt)

function (add_fmt target)
    target_link_libraries(${target}
        PUBLIC
            fmt::fmt
    )
endfunction ()
