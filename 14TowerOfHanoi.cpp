// 14 Program to demonstrate Tower of Hanoi
#include <iostream>
using namespace std;

void toh(int n, char fromrod, char torod, char auxrod)
{
    if (n == 0)
        return;

    toh(n - 1, fromrod, auxrod, torod);
    cout << "rod " << n << " from rod " << fromrod << " to rod " << torod << endl;
    toh(n - 1, auxrod, torod, fromrod);
}

int main()
{
    int n = 4;
    toh(n, 'A', 'C', 'B');
    return 0;
}