cmake_minimum_required(VERSION 3.23)

project(TestProgram)

add_executable(TestProgram)

target_sources(TestProgram
    PRIVATE
        src/main.cpp
)

add_library(ATransformer)

target_sources(ATransformer
    PRIVATE
        src/arrayTransformer.cpp
        
    PUBLIC
        FILE_SET headerFiles
        TYPE HEADERS
        BASE_DIRS
            include
        FILES
            include/arrayTransformer.hpp
)

target_link_libraries(TestProgram
    PRIVATE
        ATransformer
)
