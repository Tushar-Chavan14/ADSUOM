// 1. Program to perform Diminished Radix Complement Notation.
#include <iostream>
#include <math.h>
using namespace std;
// Diminished Radix complement
int main()
{
    int range, r, n, size;
    cout << "enter the value of R and n " << endl;
    cin >> r >> n;
    range = ((pow(r, n)) / 2) - 1; //-((r^n)/2 to + ((r^n)/2))-1
    size = (pow(r, n)) - 1;        // (r^n)-1
    cout << "Range = ( " << -range << " to + " << range << " )" << endl;
    cout << "Size = " << size;
    return 0;
}