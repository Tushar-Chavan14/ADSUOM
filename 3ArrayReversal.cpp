// 2. Program to perform Array reversal
#include <iostream>
using namespace std;

int main()
{
    int i, a[10], n;
    cout << "Enter array size " << endl;
    cin >> n;
    for (i = 0; i < n; cin >> a[i], i++)
        ;
    for (i = 0; i < n; cout << a[i], i++)
        ;
    cout << endl;
    cout << "In reverse order " << endl;
    for (i = n - 1; i >= 0; cout << a[i], --i)
        ;
    return 0;
}