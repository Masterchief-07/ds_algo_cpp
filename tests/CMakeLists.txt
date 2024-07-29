include(FetchContent)

FetchContent_Declare(
    catch2
    GIT_REPOSITORY https://github.com/catchorg/Catch2
    GIT_TAG v3.6.0
)

FetchContent_MakeAvailable(catch2)

add_executable(test_lib test.cpp)

target_link_libraries(test_lib PRIVATE Catch2::Catch2WithMain dsalgo)

add_test(NAME test_lib COMMAND test_lib)