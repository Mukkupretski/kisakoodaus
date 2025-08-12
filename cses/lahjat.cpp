#include <bits/stdc++.h>

using namespace std;

// read from file instead of console:
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);

const int M = 1000000007;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<vector<vector<int>>> vvvi;
typedef pair<int, int> pi;
typedef queue<int> qi;
typedef stack<int> si;
typedef priority_queue<int> pqi;
typedef unordered_set<int> seti;
#define loop(i, a, b) for (int i = a; i < b; i++)
#define rloop(i, a, b) for (int i = a; i > b; i--)
#define all(x) x.begin(), x.end()
#define printdl(x, d) printf("%.*f\n", d, x)
#define PI M_PI
#define pb push_back
#define mp make_pair
#define mt make_tuple
#define f first
#define s second

int power(ll x, ll y)
{
    ll res = 1;
    x = x % M;
    while (y > 0)
    {
        if (y & 1)
        {
            res = (res * x) % M;
        }
        y = y >> 1;
        x = (x * x) % M;
    }
    return res % M;
}

int modInverse(int x)
{
    return power(x, M - 2);
}
vector<ll> factorial, inv_factorial;
void fact(int n)
{
    factorial.resize(n + 1);
    inv_factorial.resize(n + 1);
    factorial[0] = 1;
    loop(i, 1, n + 1)
    {
        factorial[i] = (factorial[i - 1] * i) % M;
    }
    inv_factorial[n] = modInverse(factorial[n]);
    rloop(i, n - 1, -1)
    {
        inv_factorial[i] = inv_factorial[i + 1] * (i + 1) % M;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    fact(n);
    ll result = 0;
    loop(i, 2, n + 1)
    {
        if (i & 1)
        {
            result = (result - (factorial[n] * (inv_factorial[i])) % M + M) % M;
            continue;
        }
        result = (result + (factorial[n] * (inv_factorial[i])) % M) % M;
    }
    cout << result;

    return 0;
}
