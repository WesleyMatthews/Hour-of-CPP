#include <iostream>

int main()
{
    // Creates a double with a value of 3.5
    // Doubles are like integers, but with decimal points
    double x = 3.5;

    // Runs the below code "block" if x > 1
    if (x > 1)
    {
        std::cout << "x > 1\n";
    }
    // If x == 1 (if x is equal to 1), then this code will run
    // Else if is another way of saying "or, if this...then this"
    else if (x == 1)
    {
        std::cout << "x == 1\n";
    }
    // Otherwise it will run the below code
    // Else if is another way of saying "otherwise, then this"
    else
    {
        std::cout << "x < 1\n";
    }

    // Exercise 3 - Try running the code with "Local Windows". What is the result?
    // Now, change the value of x and see how that affects what the console prints

    return 0;
}