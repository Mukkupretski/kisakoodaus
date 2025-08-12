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
#define all(x) x.begin(), x.end()
#define printdl(x, d) printf("%.*f\n", d, x)
#define PI M_PI
#define pb push_back
#define mp make_pair
#define mt make_tuple
#define f first
#define s second

ll laske_uhkaavat_tilanteet(ll n)
{
    ll result = 0;
    if (n >= 3)
        result += 8;
    if (n >= 4)
        result += (ll)8 * (n - 3) * (n + 4) / 2 - (ll)(n - 3) * 16;
    return result;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin >> n;
    cout << ((ll)(n * n) * (n * n - 1) / 2 - (ll)laske_uhkaavat_tilanteet(n));
    return 0;
}
