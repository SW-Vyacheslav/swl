message(STATUS "Build swe_editor")

set(SWE_EDITOR_EXECUTABLE_NAME "swe-editor-${SWE_VERSION}")

if (CMAKE_BUILD_TYPE MATCHES "(Debug)")
    string(APPEND SWE_EDITOR_EXECUTABLE_NAME "d")
elseif (CMAKE_BUILD_TYPE MATCHES "(RelWithDebInfo)")
    string(APPEND SWE_EDITOR_EXECUTABLE_NAME "rd")
endif ()

add_executable(swe_editor)

set_target_properties(swe_editor
    PROPERTIES
        OUTPUT_NAME "${SWE_EDITOR_EXECUTABLE_NAME}"
)

add_custom_command(
    TARGET swe_editor
    POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E create_symlink ${SWE_EDITOR_EXECUTABLE_NAME} "swe-editor"
)

target_sources(swe_editor
    PRIVATE
        swe_editor/main.cpp
)

target_link_libraries(swe_editor
    PRIVATE
        swe
)

message(STATUS)
