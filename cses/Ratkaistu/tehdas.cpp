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

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    vi machines;
    int maxAi = 0;
    loop(i, 0, n)
    {
        int a;
        cin >> a;
        machines.pb(a);
        maxAi = max(maxAi, a);
    }
    sort(all(machines));
    ll l = 0;
    ll r = (ll)maxAi * m;
    while (l <= r)
    {
        ll tuotteet = 0;
        ll mid = (l + r) / 2;
        loop(i, 0, n)
        {
            tuotteet += mid / machines[i];
            if (tuotteet >= m)
            {
                break;
            }
        }
        if (tuotteet >= m)
            r = mid - 1;
        else
            l = mid + 1;
    }
    cout << l;
    return 0;
}
