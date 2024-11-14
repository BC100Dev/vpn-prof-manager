set(APP_COMPILATION_LibType STATIC)

if (DEFINED Application_LibraryType)
    string(TOLOWER "${Application_LibraryType}" PRIV_LIB_TYPE)
    if (PRIV_LIB_TYPE STREQUAL "shared")
        set(APP_COMPILATION_LibType SHARED)
    elseif (PRIV_LIB_TYPE STREQUAL "static")
        set(APP_COMPILATION_LibType STATIC)
    else ()
        message(WARNING "Unknown Library Type ${Application_LibraryType}; expected SHARED or STATIC")
    endif ()

    message(STATUS "Compiling ${APP_COMPILATION_LibType} based libraries")
endif ()