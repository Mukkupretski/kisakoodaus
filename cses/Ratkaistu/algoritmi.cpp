#include <bits/stdc++.h>

using namespace std;

// read input:
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef queue<int> qi;
typedef stack<int> si;
typedef priority_queue<int> pqi;
typedef unordered_set<int> seti;
#define loop(i, a, b) for (int i = a; i < b; i++)
#define all(x) x.begin(), x.end()

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll a;
    cin >> a;
    while (a > 1)
    {
        cout << a << " ";
        if (a % 2 == 0)
            a /= 2;
        else
            a = 3 * a + 1;
    }
    cout << 1;
    return 0;
}
