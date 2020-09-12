#include <iostream>

int main()
{
    // Creates a array of strings, called "fruits", with a pre-determined length of 3
    std::string fruits[3] = { "Apple", "Banana", "Canteloupe" };

    // Creates a array of strings, called "vegetables", with a length determined by the given items
    std::string vegetables[] = { "Asparagus", "Broccoli", "Carrot" };

    // Loop through all of the fruit in the array
    // sizeof(fruits) / sizeof(fruits[0]) divides the total memory taken up from the array by the amount of memory taken up by the first element
    for (int i = 0; i < sizeof(fruits) / sizeof(fruits[0]); ++i)
    {
        // Print out the fruit and a new line character
        std::cout << fruits[i] + "\n";
    }
}