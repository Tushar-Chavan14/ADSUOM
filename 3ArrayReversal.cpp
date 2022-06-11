// 3. Program to perform Array reversal
#include <iostream>
using namespace std;

int main()
{
    int a[10], n;
    cout << "enter the size of array: " << endl;
    cin >> n;
    for (int i = 0; i <= n; cin >> a[i++])
        ;
    cout << "the elements entered are :";
    for (int i = 0; i <= n; cout << a[i++])
        ;
    cout << "In reverse order : ";
    for (int i = n; i >= 0; cout << a[i--])
        ;
    cout << endl;
    return 0;
}
