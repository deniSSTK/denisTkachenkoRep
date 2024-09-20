/**
* Done by:
 * Student Name: Denis Tkachenko
 * Student Group: 121
 * Lab 1.4
 */

#include <iostream>
using namespace std;

int main() {
    unsigned int wA;
    int nB;
    float fltC;

    unsigned int *pwA;
    int *pnB;
    float *pfltC;

    void *pV;

    pwA = &wA;
    pnB = &nB;
    pfltC = &fltC;

    *pwA = 10;
    *pnB = -5;
    *pfltC = 3.14f;

    int sizewA = sizeof(wA);
    int sizenB = sizeof(nB);
    int sizefltC = sizeof(fltC);
    int sizepwA = sizeof(pwA);
    int sizepnB = sizeof(pnB);
    int sizepfltC = sizeof(pfltC);

    pV = &pwA;
    pV = &pnB;
    pV = &pfltC;

    cout << "wA: " << *pwA << ", Size: " << sizewA << endl;
    cout << "nB: " << *pnB << ", Size: " << sizenB << endl;
    cout << "fltC: " << *pfltC << ", Size: " << sizefltC << endl;
    cout << "Pointer pwA Size: " << sizepwA << endl;
    cout << "Pointer pnB Size: " << sizepnB << endl;
    cout << "Pointer pfltC Size: " << sizepfltC << endl;

    return 0;
}