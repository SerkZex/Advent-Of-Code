#include <cstdint>
#include <numeric>
#include <iostream>
#include <string>
#include <sstream>

#include "aoc/macro.h"
#include "aoc/read_input.h"
#include "aoc/checks.h"
namespace aoc2021{

std::int32_t task_one(std::vector<std::string>& swep){
    FUNCTIONCALL

    std::string dir;
    int val, d = 0, h = 0;
    for(auto const& direc : swep){
        std::stringstream ss;
        ss.str(direc);
        ss >> dir >> val;

        if(dir.compare("forward") == 0) {
            h += val;   
        } else if(dir.compare("down") == 0) {
            d += val;
        } else if(dir.compare("up") == 0){
            d -= val;
        }
    }
    return(d*h);
}

std::int32_t task_two(std::vector<std::string>& swep){
    FUNCTIONCALL
    std::string dir;
    int val, d = 0, h = 0, aim = 0;
    for(auto const& direc : swep){
        std::stringstream ss;
        ss.str(direc);
        ss >> dir >> val;
        if(dir.compare("forward") == 0) {
            h += val;
            d += val*aim;   
        } else if(dir.compare("down") == 0) {
            aim += val;
        } else if(dir.compare("up") == 0){
            aim -= val;
        }
        // std::cout << dir << " " << val  << " --- " << d << " " << h << " " << aim << std::endl;
    }
    return(d*h);
}

}

int main(){
    std::vector<std::string> swep{};
    aoc::read_input::each_line(swep);

    aoc::checks::verify_result(aoc2021::task_one(swep), "1804520");
    aoc::checks::verify_result(aoc2021::task_two(swep), "1971095320"); 
}