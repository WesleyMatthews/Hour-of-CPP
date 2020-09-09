#include <iostream>

int main()
{
    // Prints "Hello" to the console 5 times
    // Defines i as a variable, with the value of zero
    // The code below will run as long as i < 5, and will increment i by 1 each time
    for (int i = 0; i < 5; ++i)
    {
        std::cout << "Hello\n";
    }

    // Just for spacing; ignore
    std::cout << "\n";

    // Does the exact same as the above loop, but uses a while loop instead
    // In the way we are using a loop, we have to define i outside of the loop
    int i = 0;
    // While loops are structured simarily to an if statement
    while (i < 5)
    {
        std::cout << "Hello\n";
        // We have to increase i by one here, otherwise the loop will run forever
        i++;
    }

    return 0;
}