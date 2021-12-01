#include <cstdint>
#include "aoc/macro.h"
#include "aoc/read_input.h"

namespace aoc2021{

void task_one(std::vector<std::uint16_t>& swep){
    FUNCTIONCALL

    std::int16_t counter = 0, init_value = 0;
    for(auto const& ele : swep) {
        if (init_value < ele) counter++;
        init_value = ele;
    }

    ANSWER1(counter-1)
}

void task_two(std::vector<std::uint16_t>& swep){
    FUNCTIONCALL
    std::int16_t counter = 0, init_value = 0;
    for(std::uint16_t i = 0; i < swep.size()-2; i++) {
        std::uint16_t ele = swep[i] + swep[i+1] + swep[i+2];

        if (init_value < ele) counter++;
        init_value = ele;
    }

    ANSWER2(counter-1)
}

}

int main(){
    std::vector<std::uint16_t> swep{};
    aoc::read_input::each_line(swep);

    aoc2021::task_one(swep);
    aoc2021::task_two(swep);
}