//
//  functions.hpp
//  RPN-Calculator
//
//  Created by Jesse Thompson on 4/11/25.
//

#ifndef functions_hpp
#define functions_hpp

#include <stdio.h>
#include <list>
#include <cmath>

void multiply(std::list<double> &stack);

void divide(std::list<double> &stack);

void add(std::list<double> &stack);

void subtract(std::list<double> &stack);

void exponent(std::list<double> &stack);

void square(std::list<double> &stack);

void root(std::list<double> &stack);

void squareRoot(std::list<double> &stack);

void naturalLog(std::list<double> &stack);

void logb10(std::list<double> &stack);

void logbN(std::list<double> &stack);

void e(std::list<double> &stack);

void SIN(std::list<double> &stack);

void COS(std::list<double> &stack);

void TAN(std::list<double> &stack);

void ASIN(std::list<double> &stack);

void ACOS(std::list<double> &stack);

void ATAN(std::list<double> &stack);

#endif /* functions_hpp */
