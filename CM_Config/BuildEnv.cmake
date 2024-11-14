## BuildEnv: an environment map that loads in build environments
# dependent on the Build Process, if affected

function(BuildEnv_LoadFile Filename)
    if (NOT EXISTS "${Filename}")
        message(STATUS "Ignoring loading file ${Filename} (404 not found bruh)")
        return()
    endif ()

    file(READ "${Filename}" FileContents)

    foreach (ContentLine IN LISTS FileContents)
        string(STRIP "${ContentLine}" ContentLine)

        if (ContentLine MATCHES "^#.*$" OR ContentLine STREQUAL "")
            continue()
        endif ()

        string(REGEX MATCH "([^=]+)=(.*)" ContentMatch "${ContentLine}")
        if (ContentMatch)
            set(key "${CMAKE_MATCH_1}")
            set(value "${CMAKE_MATCH_2}")

            # Trim any extra whitespace around key and value
            string(STRIP "${key}" key)
            string(STRIP "${value}" value)

            # Set the key-value pair as a CMake variable
            set("${key}" "${value}" CACHE INTERNAL "Loaded from ${Filename}")
        endif()
    endforeach ()
endfunction()