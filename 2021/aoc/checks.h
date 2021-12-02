#pragma once

#include <algorithm>
#include <iostream>
#include <cassert>
#include <cstring>

namespace aoc::checks {
//template <typename T, std::enable_if_t<std::is_arithmetic<T>::value>>
template <typename T>
auto inline digit_between_values(T lowest, T highest, T value) -> bool {
  return (lowest <= value && value <= highest);
}

auto inline is_digits(const std::string &str) -> bool{
  return std::all_of(str.begin(), str.end(), ::isdigit);
}

template<typename T>
auto inline result(T answer, std::string exptected) -> void {
  assert(std::to_string(answer).compare(exptected) == 0);
}

} // namespace aoc::checks
