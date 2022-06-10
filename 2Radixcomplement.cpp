// 2. Program to perform Radix Complement Notation
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int range, r, n, size;
    cout << "enter the value of R and n " << endl;
    cin >> r >> n;
    range = ((pow(r, n)) / 2); //  -((r^n)/2) to (+(r^n)/2)-1
    size = (pow(r, n));        //  r^n
    cout << "Range = ( " << -range << " to + " << range - 1 << " )" << endl;
    cout << "Size = " << size;
    return 0;
}