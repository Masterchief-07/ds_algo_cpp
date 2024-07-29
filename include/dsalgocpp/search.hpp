#pragma once
#include <cstddef>
#include <array>

class BaseSearch{
    virtual std::size_t search(int value) = 0;
};

class BinarySearch: public BaseSearch{

    BinarySearch();

    std::size_t search(int value){

        return 0;
    }


};