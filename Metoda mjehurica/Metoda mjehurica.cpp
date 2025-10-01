// Metoda mjehurica.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int polje[10] = { 11, 51, 34, 141, 204, 132, 167, 154, 10, 225 };
    int n = 0;
    while (n < 10) {
        for (int i = 0;i < 9;i++) {
            if (polje[i] < polje[i + 1]) {
                int pomocni = polje[i];
                polje[i] = polje[i + 1];
                polje[i + 1] = pomocni;
            }
        }
        n++;
    }
    for (int i = 0;i < 10;i++) {
        cout << polje[i] << " ";
    }
    cout << endl;
    return 0;;
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
