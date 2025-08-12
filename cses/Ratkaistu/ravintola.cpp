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
    vector<pair<int, bool>> restaurant;
    int n;
    cin >> n;
    loop(i, 0, n)
    {
        int start, end;
        cin >> start;
        cin >> end;
        restaurant.push_back({start, 0});
        restaurant.push_back({end, 1});
    }
    sort(all(restaurant));
    int visitors = 0;
    int maxVisitors = 0;
    loop(i, 0, 2 * n)
    {
        if (restaurant[i].second)
            visitors--;
        else
            maxVisitors = max(++visitors, maxVisitors);
    }
    cout << maxVisitors;
    return 0;
}
