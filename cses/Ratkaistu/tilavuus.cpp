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
#define printdl(x, d) printf("%.*f\n", d, x)
#define PI M_PI

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    double r;
    cin >> r;
    double V = (double)4 / 3 * PI * r * r * r;
    printdl(V, 7);
    return 0;
}
