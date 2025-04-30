//
//  functions.cpp
//  RPN-Calculator
//
//  Created by Jesse Thompson on 4/11/25.
//

#include "functions.hpp"
#include <vector>
#include <cmath>

void multiply(std::vector<double> &stack)
{
    double one = stack.back();
    stack.pop_back();
    
    double two = stack.back();
    stack.pop_back();
    
    stack.push_back(two * one);
}

void divide(std::vector<double> &stack)
{
    double one = stack.back();
    stack.pop_back();
    
    double two = stack.back();
    stack.pop_back();
    
    stack.push_back(two / one);
}

void add(std::vector<double> &stack)
{
    double one = stack.back();
    stack.pop_back();
    
    double two = stack.back();
    stack.pop_back();
    
    stack.push_back(two + one);
}

void subtract(std::vector<double> &stack)
{
    double one = stack.back();
    stack.pop_back();
    
    double two = stack.back();
    stack.pop_back();
    
    stack.push_back(two - one);
}

void exponent(std::vector<double> &stack)
{
    double one = stack.back();
    stack.pop_back();
    
    double two = stack.back();
    stack.pop_back();
    
    stack.push_back(pow(one, two));
}

void square(std::vector<double> &stack)
{
    double one = stack.back();
    stack.pop_back();
    
    stack.push_back(pow(one, 2));
}

void root(std::vector<double> &stack)
{
    double one = stack.back();
    stack.pop_back();
    
    double two = stack.back();
    stack.pop_back();
    
    stack.push_back(pow(one, 1/two));
}

void squareRoot(std::vector<double> &stack)
{
    double one = stack.back();
    stack.pop_back();
    
    stack.push_back(sqrt(one));
}

void naturalLog(std::vector<double> &stack)
{
    double one = stack.back();
    stack.pop_back();
    
    stack.push_back(log(one));
}

void logb10(std::vector<double> &stack)
{
    double one = stack.back();
    stack.pop_back();
    
    stack.push_back(log10(one));
}

void logbN(std::vector<double> &stack)
{
    double one = stack.back();
    stack.pop_back();
    
    double two = stack.back();
    stack.pop_back();
    
    stack.push_back(log(one)/log(two));
}

void e(std::vector<double> &stack)
{
    double one = stack.back();
    stack.pop_back();
    
    stack.push_back(exp(one));
}

void SIN(std::vector<double> &stack)
{
    double one = stack.back();
    stack.pop_back();
    
    stack.push_back(sin(one));
}

void COS(std::vector<double> &stack)
{
    double one = stack.back();
    stack.pop_back();
    
    stack.push_back(cos(one));
}

void TAN(std::vector<double> &stack)
{
    double one = stack.back();
    stack.pop_back();
    
    stack.push_back(tan(one));
}

void ASIN(std::vector<double> &stack)
{
    double one = stack.back();
    stack.pop_back();
    
    stack.push_back(asin(one));
}

void ACOS(std::vector<double> &stack)
{
    double one = stack.back();
    stack.pop_back();
    
    stack.push_back(acos(one));
}

void ATAN(std::vector<double> &stack)
{
    double one = stack.back();
    stack.pop_back();
    
    stack.push_back(atan(one));
}
