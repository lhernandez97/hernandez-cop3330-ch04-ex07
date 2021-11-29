/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Luis Hernandez
 */

#include "std_lib_facilities.h"
using namespace std;
//class to calculate
class Calculator {
    public:
        void calculate(string op, int a, int b) {
            //initialize the result variable
            int result = 0;
            //now calculate and print out the results
            if(op == "+") {
                result = a + b;
                cout << "The sum of " << a << " and " << b << " is " << result;
            }
            else if(op == "-") {
                result = a - b;
                cout << "The difference of " << a << " and " << b << " is " << result;
            }
            else if(op == "*") {
                result = a * b;
                cout << "The product of " << a << " and " << b << " is " << result;
            }
            else if(op == "/") {
                if(b == 0) {
                    cout << "Cannot divide by zero";
                }
                else {
                    result = a / b;
                    cout << "The quotient of " << a << " and " << b << " is " << result;
                }
            }
            else {
                cout << "Invalid operation.";
            }
        }
};

int main() {
    //Object to class Calculator
    Calculator calc;
    //necessary variables
    string op;
    string num1;
    string num2;
    int n1 = 0;
    int n2 = 0;
    //prompt the user for the necessary inputs
    cout << "Enter the operation of the equation, and the two numbers, either as whole numbers or spelled out.";
    cin >> op;
    cin >> num1;
    cin >> num2;
    //get the number for the first string
    if(num1 == "0" || num1 == "zero") {
        n1 = 0;
    }
    else if(num1 == "1" || num1 == "one") {
        n1 = 1;
    }
    else if(num1 == "2" || num1 == "two") {
        n1 = 2;
    }
    else if(num1 == "3" || num1 == "three") {
        n1 = 3;
    }
    else if(num1 == "4" || num1 == "four") {
        n1 = 4;
    }
    else if(num1 == "5" || num1 == "five") {
        n1 = 5;
    }
    else if(num1 == "6" || num1 == "six") {
        n1 = 6;
    }
    else if(num1 == "7" || num1 == "seven") {
        n1 = 7;
    }
    else if(num1 == "8" || num1 == "eight") {
        n1 = 8;
    }
    else if(num1 == "9" || num1 == "nine") {
        n1 = 9;
    }
    else {
        cout << "First number is not between 0 and 9, or it is not a number."
        return 0;
    }
    //get the number for the second string
    if(num2 == "0" || num2 == "zero") {
        n2 = 0;
    }
    else if(num2 == "1" || num2 == "one") {
        n2 = 1;
    }
    else if(num2 == "2" || num2 == "two") {
        n2 = 2;
    }
    else if(num2 == "3" || num2 == "three") {
        n2 = 3;
    }
    else if(num2 == "4" || num2 == "four") {
        n2 = 4;
    }
    else if(num2 == "5" || num2 == "five") {
        n2 = 5;
    }
    else if(num2 == "6" || num2 == "six") {
        n2 = 6;
    }
    else if(num2 == "7" || num2 == "seven") {
        n2 = 7;
    }
    else if(num2 == "8" || num2 == "eight") {
        n2 = 8;
    }
    else if(num2 == "9" || num2 == "nine") {
        n2 = 9;
    }
    else {
        cout << "Second number is not between 0 and 9, or it is not a number."
        return 0;
    }
    //get the results
    calc.calculate(op, n1, n2);
    //end main
    return 0;
}