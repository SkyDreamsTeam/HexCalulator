// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <sstream>

int main()
{
    int n1, n2;
    /*std::cin >> n;
    std::cout << std::hex << 10 << '\n';
    std::cout << "Hello World!\n";*/

    std::string inpStr;
    std::cout << "Please input a hex string without the preceding 0x:";
   
   // std::cin >> inpStr;
    scanf_s("%s", &inpStr);
    std::stringstream ss2;

    ss2 << std::hex << inpStr;
    ss2 >> n1;
    std::cout << "The value of 0x" << inpStr << " in hex is actually: " << std::dec << n1 << " in decimal\n";
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
