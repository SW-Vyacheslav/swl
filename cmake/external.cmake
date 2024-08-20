add_subdirectory(external/fmt)

target_link_libraries(${PROJECT_NAME}
    INTERFACE
        fmt::fmt
)
