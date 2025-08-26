#include <bits/stdc++.h>
using namespace std;

struct DSU
{
    vector<int> p, r;
    DSU(int n)
    {
        p.resize(n + 1);
        r.assign(n + 1, 0);
        iota(p.begin(), p.end(), 0);
    }
    int find(int x)
    {
        if (p[x] == x)
            return x;
        return p[x] = find(p[x]);
    }
    void unite(int a, int b)
    {
        a = find(a);
        b = find(b);
        if (a == b)
            return;
        if (r[a] < r[b])
            swap(a, b);
        p[b] = a;
        if (r[a] == r[b])
            r[a]++;
    }
};

int main()
{
    int n, m, q;
    cin >> n >> m;
    DSU dsu(n);
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        dsu.unite(a, b);
    }
    cin >> q;
    while (q--)
    {
        int a, b;
        cin >> a >> b;
        cout << (dsu.find(a) == dsu.find(b) ? "YES" : "NO") << "\n";
    }
}