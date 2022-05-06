// Console App Quiz SWE.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int age;
    std::cout << "Input your Age: ";
    std::cin >> age;
    if (age < 15)
        std::cout << "Youre too young to be here!\n";
    else if (age < 30)
        std::cout << "Adult hood isn't as fun as you'd though it'd be huh?\n";
    else if (age < 50)
        std::cout << "woooooooooahhhhhhhhhh we're half way there.\n";
    else if (age < 70)
        std::cout << "Wisdom comes with years they say and you sure have many of those.\n";
    else
        std::cout << "Im Impressed you've made it this far.\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
