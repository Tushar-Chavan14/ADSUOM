// 2. Program to get min/max number in an array
#include <iostream>
using namespace std;

int main()
{
    int n, a[10], min, max, i;
    cout << "Enter array size ";
    cin >> n;
    for (i = 0; i < n; cin >> a[i], i++)
        ;
    min = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] < min)
            min = a[i];
    }
    max = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] > a[0])
            max = a[i];
    }
    cout << "minimum = " << min << endl;
    cout << "maximum = " << max;
    return 0;
}