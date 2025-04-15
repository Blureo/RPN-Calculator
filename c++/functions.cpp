//
//  functions.cpp
//  RPN-Calculator
//
//  Created by Jesse Thompson on 4/11/25.
//

#include "functions.hpp"
#include <list>
#include <cmath>

void multiply(std::list<double> &stack)
{
    double one = stack.back();
    stack.pop_back();
    
    double two = stack.back();
    stack.pop_back();
    
    stack.push_back(two * one);
}

void divide(std::list<double> &stack)
{
    double one = stack.back();
    stack.pop_back();
    
    double two = stack.back();
    stack.pop_back();
    
    stack.push_back(two / one);
}

void add(std::list<double> &stack)
{
    double one = stack.back();
    stack.pop_back();
    
    double two = stack.back();
    stack.pop_back();
    
    stack.push_back(two + one);
}

void subtract(std::list<double> &stack)
{
    double one = stack.back();
    stack.pop_back();
    
    double two = stack.back();
    stack.pop_back();
    
    stack.push_back(two - one);
}

void exponent(std::list<double> &stack)
{
    double one = stack.back();
    stack.pop_back();
    
    double two = stack.back();
    stack.pop_back();
    
    stack.push_back(pow(one, two));
}

void square(std::list<double> &stack)
{
    double one = stack.back();
    stack.pop_back();
    
    stack.push_back(pow(one, 2));
}

void root(std::list<double> &stack)
{
    double one = stack.back();
    stack.pop_back();
    
    double two = stack.back();
    stack.pop_back();
    
    stack.push_back(pow(one, 1/two));
}

void squareRoot(std::list<double> &stack)
{
    double one = stack.back();
    stack.pop_back();
    
    stack.push_back(sqrt(one));
}

void naturalLog(std::list<double> &stack)
{
    double one = stack.back();
    stack.pop_back();
    
    stack.push_back(log(one));
}

void logb10(std::list<double> &stack)
{
    double one = stack.back();
    stack.pop_back();
    
    stack.push_back(log10(one));
}

void logbN(std::list<double> &stack)
{
    double one = stack.back();
    stack.pop_back();
    
    double two = stack.back();
    stack.pop_back();
    
    stack.push_back(log(one)/log(two));
}

void e(std::list<double> &stack)
{
    double one = stack.back();
    stack.pop_back();
    
    stack.push_back(exp(one));
}

void SIN(std::list<double> &stack)
{
    double one = stack.back();
    stack.pop_back();
    
    stack.push_back(sin(one));
}

void COS(std::list<double> &stack)
{
    double one = stack.back();
    stack.pop_back();
    
    stack.push_back(cos(one));
}

void TAN(std::list<double> &stack)
{
    double one = stack.back();
    stack.pop_back();
    
    stack.push_back(tan(one));
}

void ASIN(std::list<double> &stack)
{
    double one = stack.back();
    stack.pop_back();
    
    stack.push_back(asin(one));
}

void ACOS(std::list<double> &stack)
{
    double one = stack.back();
    stack.pop_back();
    
    stack.push_back(acos(one));
}

void ATAN(std::list<double> &stack)
{
    double one = stack.back();
    stack.pop_back();
    
    stack.push_back(atan(one));
}
