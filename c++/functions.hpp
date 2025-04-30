//
//  functions.hpp
//  RPN-Calculator
//
//  Created by Jesse Thompson on 4/11/25.
//

#ifndef functions_hpp
#define functions_hpp

#include <stdio.h>
#include <vector>
#include <cmath>

void multiply(std::vector<double> &stack);

void divide(std::vector<double> &stack);

void add(std::vector<double> &stack);

void subtract(std::vector<double> &stack);

void exponent(std::vector<double> &stack);

void square(std::vector<double> &stack);

void root(std::vector<double> &stack);

void squareRoot(std::vector<double> &stack);

void naturalLog(std::vector<double> &stack);

void logb10(std::vector<double> &stack);

void logbN(std::vector<double> &stack);

void e(std::vector<double> &stack);

void SIN(std::vector<double> &stack);

void COS(std::vector<double> &stack);

void TAN(std::vector<double> &stack);

void ASIN(std::vector<double> &stack);

void ACOS(std::vector<double> &stack);

void ATAN(std::vector<double> &stack);

#endif /* functions_hpp */
