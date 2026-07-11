message(STATUS "Build swe_editor")

add_executable(swe_editor)

target_sources(swe_editor
    PRIVATE
        swe_editor/main.cpp
)

target_link_libraries(swe_editor
    PRIVATE
        swe
)

message(STATUS)
