#include <catch2/catch_test_macros.hpp>

#include "dsalgocpp/search.hpp"
#include <array>
#include <vector>


TEST_CASE( "Search", "[BINARY]" ) {

    std::vector<int> data{1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto result = dsa::BinarySearch::search(data, 1);
    REQUIRE(result == 0);
    result = dsa::BinarySearch::search(data, 2);
    REQUIRE(result == 1);
    result = dsa::BinarySearch::search(data, 9);
    REQUIRE(result == 8);
    result = dsa::BinarySearch::search(data, 8);
    REQUIRE(result == 7);
    result = dsa::BinarySearch::search(data, 5);
    REQUIRE(result == 4);
    result = dsa::BinarySearch::search(data, 11);
    REQUIRE(result == std::nullopt);
    result = dsa::BinarySearch::search(data, 0);
    REQUIRE(result == std::nullopt);

    std::array<int, 9> data_array{1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto result_array = dsa::BinarySearch::search(data_array, 1);
    REQUIRE(result_array == 0);
    result_array = dsa::BinarySearch::search(data_array, 2);
    REQUIRE(result_array == 1);
    result_array = dsa::BinarySearch::search(data_array, 9);
    REQUIRE(result_array == 8);
    result_array = dsa::BinarySearch::search(data_array, 8);
    REQUIRE(result_array == 7);
    result_array = dsa::BinarySearch::search(data_array, 5);
    REQUIRE(result_array == 4);
    result_array = dsa::BinarySearch::search(data_array, 11);
    REQUIRE(result_array == std::nullopt);
}