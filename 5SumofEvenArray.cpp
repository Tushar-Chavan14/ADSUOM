// 5.Sum of even numbers in an array.
#include <iostream>
using namespace std;

int main()
{
    int i, a[10], n, sum = 0;
    cout << "Enter array size " << endl;
    cin >> n;
    for (i = 0; i < n; cin >> a[i], i++)
        ;
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
            sum += a[i];
    }
    cout << "Sum of even number in an array = " << sum;
    return 0;
}