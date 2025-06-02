#include <bits/stdc++.h>
using namespace std;

int fast_expo(int a, int b)
{
    if (b == 0)
        return 1;
    int half = fast_expo(a, b / 2);
    if (b & 1)
        return a * half * half;
    else
        return half * half;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << fast_expo(a, b) << endl;
}