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

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vi nums;
    seti siirrettävät;
    int maxSoFar = 0;
    loop(i, 0, n)
    {
        int a;
        cin >> a;
        if (maxSoFar > a)
            siirrettävät.insert(a);
        maxSoFar = max(maxSoFar, a);
        nums.pb(a);
    }
    int maxNext = 0;
    int result = siirrettävät.size();
    rloop(i, n - 1, -1)
    {
        if (siirrettävät.count(nums[i]))
            maxNext = max(nums[i], maxNext);
        else if (nums[i] < maxNext)
            result++;
    }
    cout << result;
    // kun jokin heitetään alkuun, kaikki sitä ennen tulleet sitä pienemmät tulee siirtää myös
    // jos lukua ennen tulee sitä isompia lukuja, se tulee siirtää alkuun

    // merkitään kaikki, joilla on suurempi luku takana
    // mennään toiseen suuntaan ja merkitään kaikki, joilla on suurempi alkuun siirrettävä luku edessä

    return 0;
}
