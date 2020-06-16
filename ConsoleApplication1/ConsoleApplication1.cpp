// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <sstream>

int main()
{
    int n1, n2, res;
    /*std::cin >> n;
    std::cout << std::hex << 10 << '\n';
    std::cout << "Hello World!\n";*/

    std::string inpStrN1;
    std::string inpStrN2;
    std::string action;
    std::cout << "Please input a hex expression without the preceding 0x:";
    std::cin >> std::hex >> n1;
    std::cin >> action;
    std::cin >> std::hex >> n2;

    std::stringstream ss1;
    std::stringstream ss2;


    if (action == "plus")
        res = n1 + n2;
    else
        res = n1 - n2;
    std::cout << "The first parameter: " << std::dec << n1 << " in decimal\n";
    std::cout << "The second parameter: " << std::dec << n2 << " in decimal\n";
    std::cout << std::hex << res;
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
