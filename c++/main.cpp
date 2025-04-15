//
//  main.cpp
//  RPN-Calculator
//
//  Created by Jesse Thompson on 4/11/25.
//

#include <iostream>
#include "functions.hpp"
#include <list>
#include <string>
#include <stdexcept>



int main(void)
{
    bool working = true; // true while calculator runs
    std::list<double> calcStack; // RPN stack;
    std::string action; // what user enters
    double numberInput; // what action becomes if action is a number
        
    // Intro
    std::cout << "This is an RPN Calculator\n Available functions:\n +, -, *, /, ln, logN, log10, sqrt, root, e, ^, ^2, sin , cos, tan, asin, acos, and atan" << std::endl;
    std::cout << "Trig Functions use radians" << std::endl;
    std::cout << "Enter q to quit, c to clear, and d to drop most recent item in stack\n" << std::endl;
    
    while (working) // Where calculator runs
    {
        for (double value : calcStack) // print stack elements in a column
            std::cout << value << std::endl;
        
        // give user a clear command line
        std::cout << "> " << std::endl;
        
        // take input
        std::cin >> action;
        
        // What do we do with this input?
        if (action == "*") // calcStack[1] * calcStack[0]
        {
            if (calcStack.size() >= 2) // only execute function requiring 2 inputs if stack has 2 inputs to give
                multiply(calcStack);
            else
                std::cout << "Not enough arguments in stack" << std::endl;
        }
        else if (action == "/") // calcStack[1] / calcStack[0]
        {
            if (calcStack.size() >= 2) // only execute function requiring 2 inputs if stack has 2 inputs to give
                divide(calcStack);
            else
                std::cout << "Not enough arguments in stack" << std::endl;
        }
        else if (action == "+") // calcStack[1] + calcStack[0]
        {
            if (calcStack.size() >= 2) // only execute function requiring 2 inputs if stack has 2 inputs to give
                add(calcStack);
            else
                std::cout << "Not enough arguments in stack" << std::endl;
        }
        else if (action == "-") // calcStack[1] - calcStack[0]
        {
            if (calcStack.size() >= 2) // only execute function requiring 2 inputs if stack has 2 inputs to give
                subtract(calcStack);
            else
                std::cout << "Not enough arguments in stack" << std::endl;
        }
        else if (action == "logN") // log base calcStack[1] of calcStack[0]
        {
            if (calcStack.size() >= 2) // only execute function requiring 2 inputs if stack has 2 inputs to give
                logbN(calcStack);
            else
                std::cout << "Not enough arguments in stack" << std::endl;
        }
        else if (action == "root") // calcStack[1] root of calcStack[0]
        {
            if (calcStack.size() >= 2) // only execute function requiring 2 inputs if stack has 2 inputs to give
                root(calcStack);
            else
                std::cout << "Not enough arguments in stack" << std::endl;
        }
        else if (action == "^") // calcStack[0] to the calcStack[1], or calcStack[0]^calcStack[1]
        {
            if (calcStack.size() >= 2) // only execute function requiring 2 inputs if stack has 2 inputs to give
                exponent(calcStack);
            else
                std::cout << "Not enough arguments in stack" << std::endl;
        }
        else if (action == "sqrt") // square root of calcStack[0]
        {
            if (calcStack.size() >= 1) // only execute function requiring 2 inputs if stack has 2 inputs to give
                squareRoot(calcStack);
            else
                std::cout << "Not enough arguments in stack" << std::endl;
        }
        else if (action == "^2") // square calcStack[0]
        {
            if (calcStack.size() >= 1) // only execute function requiring 2 inputs if stack has 2 inputs to give
                square(calcStack);
            else
                std::cout << "Not enough arguments in stack" << std::endl;
        }
        else if (action == "ln") // ln of calcStack[0]
        {
            if (calcStack.size() >= 1) // only execute function requiring 2 inputs if stack has 2 inputs to give
                naturalLog(calcStack);
            else
                std::cout << "Not enough arguments in stack" << std::endl;
        }
        else if (action == "e") // e^calcStack[0]
        {
            if (calcStack.size() >= 1) // only execute function requiring 2 inputs if stack has 2 inputs to give
                e(calcStack);
            else
                std::cout << "Not enough arguments in stack" << std::endl;
        }
        else if (action == "log10") // log_10(calcStacl[0]
        {
            if (calcStack.size() >= 1) // only execute function requiring 2 inputs if stack has 2 inputs to give
                logb10(calcStack);
            else
                std::cout << "Not enough arguments in stack" << std::endl;
        }
        else if (action == "sin") // log_10(calcStacl[0]
        {
            if (calcStack.size() >= 1) // only execute function requiring 2 inputs if stack has 2 inputs to give
                SIN(calcStack);
            else
                std::cout << "Not enough arguments in stack" << std::endl;
        }
        else if (action == "cos") // log_10(calcStacl[0]
        {
            if (calcStack.size() >= 1) // only execute function requiring 2 inputs if stack has 2 inputs to give
                COS(calcStack);
            else
                std::cout << "Not enough arguments in stack" << std::endl;
        }
        else if (action == "tan") // log_10(calcStacl[0]
        {
            if (calcStack.size() >= 1) // only execute function requiring 2 inputs if stack has 2 inputs to give
                TAN(calcStack);
            else
                std::cout << "Not enough arguments in stack" << std::endl;
        }
        else if (action == "asin") // log_10(calcStacl[0]
        {
            if (calcStack.size() >= 1) // only execute function requiring 2 inputs if stack has 2 inputs to give
                ASIN(calcStack);
            else
                std::cout << "Not enough arguments in stack" << std::endl;
        }
        else if (action == "acos") // log_10(calcStacl[0]
        {
            if (calcStack.size() >= 1) // only execute function requiring 2 inputs if stack has 2 inputs to give
                ACOS(calcStack);
            else
                std::cout << "Not enough arguments in stack" << std::endl;
        }
        else if (action == "atan") // log_10(calcStacl[0]
        {
            if (calcStack.size() >= 1) // only execute function requiring 2 inputs if stack has 2 inputs to give
                ATAN(calcStack);
            else
                std::cout << "Not enough arguments in stack" << std::endl;
        }
        else if (action == "q") // if user wants to quit
            working = false;
        else if (action == "c") // if user wants to clear stack
            calcStack.clear();
        else if (action == "d") // if user wants to remove most recent entry
        {
            if (calcStack.size() >= 1) // only execute function requiring 2 inputs if stack has 2 inputs to give
                calcStack.pop_back();
            else
                std::cout << "No arguments on stack" << std::endl;
        }
        else
        {
            // this is either a number or an invalid input
            try
            {
                numberInput = std::stod(action);
                calcStack.push_back(numberInput);
            }
            catch (const std::invalid_argument& e)
            {
                std::cerr << "Invalid argument: " << e.what() << std::endl;
            }
            catch (const std::out_of_range& e)
            {
                std::cerr << "Out of range: " << e.what() << std::endl;
            }
        } // else
        
        // clear screen
        std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n" << std::endl;
    } // while
    // Program quit message
    std::cout << "Calculator turned off" << std::endl;
} // main
