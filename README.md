# basic_data_type_4problem_solved

There need to turn off scientific notation to print out double value.
if you want to turn off you need to use **setprecision() function which header file is <iomanip>**

**setprecision is a manipulator in C++ that sets the number of digits to be displayed on the output of floating-point values. It is defined in the header file <iomanip>**
Lets learn about it:

#include <iostream>
#include <iomanip>

int main() {
    double pi = 3.14159265358979323846;
    std::cout << std::setprecision(5) << pi << '\n'; // prints 3.1416
    std::cout << std::setprecision(9) << pi << '\n'; // prints 3.141592654
}

         

setprecision is a manipulator in C++ that sets the number of digits to be displayed on the output of floating-point values. It is defined in the header file <iomanip>
