#pragma once
#include <optional>

namespace dsa{
    class BinarySearch{
        public:
        template<typename T, typename v>
        static std::optional<std::size_t> search(const T& data, const v item){
            std::size_t low_index = 0;
            std::size_t high_index = data.size();

            while (low_index < high_index){
                auto middle = low_index + (high_index - low_index) / 2;

                if (item == data[middle]){
                    return middle;
                }
                else if (item > data[middle] ){
                    low_index = middle + 1;
                }
                else{
                    high_index = middle;
                }

            }
            return std::nullopt;
        }
    };

};
