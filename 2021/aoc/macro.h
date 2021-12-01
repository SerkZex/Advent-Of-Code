#pragma once

#include <iostream>

namespace aoc::macro {

// clang-format off
// define logging and commands
#define FUNCTIONCALL std::cout << __PRETTY_FUNCTION__ << std::endl;
#define ANSWER1(msg) std::cout << "[Task 1]: The Answer is: " << msg << std::endl;
#define ANSWER2(msg) std::cout << "[Task 2]:The Answer is: " << msg << std::endl;

#define NOANSWERFOUND std::cout << "No Answer has been found!" << std::endl;
// clang-format on

} // namespace macro::aoc 
 