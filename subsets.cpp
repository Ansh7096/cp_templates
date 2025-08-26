#include <bits/stdc++.h>
using namespace std;

void subsets(int idx, vector<int> &curr, int n)
{
    if (idx > n)
    {
        for (auto ii : curr)
            cout << ii << " ";
        cout << endl;
        return;
    }
    subsets(idx + 1, curr, n);
    curr.push_back(idx);
    subsets(idx + 1, curr, n);
    curr.pop_back();
}

int main()
{
    int n;
    cin >> n;
    vector<int> ans;
    subsets(1, ans, n);
}

// #include <bits/stdc++.h>

// using namespace std;
// long long mod = 1e9 + 7;
// long long expo(int a, int b)
// {
//     if (b == 0)
//         return 1;
//     long long half = expo(a, b / 2);
//     if (b & 1)
//     {
//         long long z = (a * half * half) % mod;
//         return z;
//     }
//     else
//     {
//         long long z = (half * half) % mod;
//         return z;
//     }
// }
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         long long n;
//         cin >> n;
//         long long ans = 2;
//         cout << ans << endl;
//     }
//     return 0;
// }