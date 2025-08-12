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
    seti lehmät;
    loop(i, 0, m)
    {
        int a;
        char evt;
        cin >> evt >> a;
        switch (evt)
        {
        case '-':
            lehmät.erase(a);
            break;
        case '+':
            lehmät.insert(a);
            break;
        case '?':
            cout << (lehmät.count(a) ? "10-4" : "QAQ") << "\n";
            break;
        default:
            break;
        }
    }
    return 0;
}
