// Product.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int A1[10] = { 1, 2, 3, 4 ,5 , 6, 7, 8, 9, 10 };
    int A2[10];
    int count = (sizeof(A1) / sizeof(A1[0])) - 0;
    
    if (count < 3)
    {
        std::cout << "Insuficient quantity" << std::endl;
    }
    else
    {
        for (int i = 0; i < count; i++)
        {
            switch (i)
            {
               case  0:
               case  1: A2[i] = -1;
                break;

               default: A2[i] = A1[i] * A1[i - 1] * A1[i - 2];
                break;
            }
        }
    }
    
    for (int x : A2)
    {
        std::cout << x << std::endl;
    }
      

    std::cout << "Done!" << std::endl;
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
