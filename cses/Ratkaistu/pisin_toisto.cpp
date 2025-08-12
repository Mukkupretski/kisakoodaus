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
    string s;
    cin >> s;
    int length = s.length();
    char prev = s.at(0);
    int maxLen = 1;
    int len = 1;
    loop(i, 1, length)
    {
        if (s.at(i) == prev)
        {
            maxLen = max(++len, maxLen);
        }
        else
        {
            len = 1;
        }
        prev = s.at(i);
    }
    cout << maxLen;
    return 0;
}
