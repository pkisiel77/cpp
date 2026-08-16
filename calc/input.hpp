#ifndef CALC_INPUT_HPP
#define CALC_INPUT_HPP

#include <string>

#include "operations.hpp"

double readNumber(const std::string &message);
Operation readOperation();

#endif
