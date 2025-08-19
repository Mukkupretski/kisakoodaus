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
    vi p;
    ll s = 0;
    loop(i,0,n){
      int a;
      cin >> a;
      s += a;
      p.pb(a);
    }
    ll res = s;
    loop(i,0,(1 << n)){
        ll ts = 0;
      loop(j,0,n){
       if(1&(i >> j)) {
         ts += p[j];
       }
       res = min(res, abs(s - 2*ts));
      }
    }
    cout << res;
    return 0;
}
