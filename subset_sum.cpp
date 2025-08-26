#include <bits/stdc++.h>
using namespace std;
long long ans = LLONG_MAX;
void backtrack(long long idx, vector<long long> &v, long long g1, long long g2)
{
    if (idx >= v.size())
    {
        ans = min(ans, abs(g1 - g2));
        return;
    }
    g1 += v[idx];
    backtrack(idx + 1, v, g1, g2);
    g1 -= v[idx];
    g2 += v[idx];
    backtrack(idx + 1, v, g1, g2);
    g2 -= v[idx];
}

signed main()
{

    long long n;
    cin >> n;
    vector<long long> v(n);
    for (long long i = 0; i < n; i++)
        cin >> v[i];
    long long idx = 0;

    backtrack(idx, v, 0, 0);
    cout << ans << endl;

    return 0;
}