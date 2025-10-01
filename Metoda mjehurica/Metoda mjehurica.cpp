
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

