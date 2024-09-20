/**
* Done by:
 * Student Name: Denis Tkachenko
 * Student Group: 121
 * Lab 1.5
 */

#include <iostream>

using namespace std;

int main() {
    bool bVar1 = true;
    bool bVar2 = false;
    const int CONSTA = 85;
    int nB = 27;
    int nE = 6;
    int nC;
    int* pnC = &nC;

    *pnC = -16;
    int resultR = (nB + nE);
    int resultL = nB * nE;
    bool bRez = ((CONSTA ^ ~nB) + *pnC) < (1 * (nE << sizeof(short)));

    cout << "Logical variable 1: " << bVar1 << endl;
    cout << "Logical variable 2: " << bVar2 << endl;
    cout << "Constant CONSTA: " << CONSTA << endl;
    cout << "Result of R-expression: " << resultR << endl;
    cout << "Result of L-expression: " << resultL << endl;
    cout << "Result of expression bRez: " << bRez << endl;

    return 0;
}