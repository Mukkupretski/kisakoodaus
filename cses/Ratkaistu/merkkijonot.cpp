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

void permute(vector<bool>& p, int n, set<string>& res, string& s, string& curr){
  if (curr.size() == n) {
   res.insert(curr);
   return;
  }
  loop(i,0,n){
    if(p[i]) continue;
    p[i] = 1;
    curr += s.at(i);
    permute(p, n, res, s, curr);
    curr.pop_back();
    p[i] = 0;
  }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    set<string> res;
    string s;
    cin >> s;
    int n = s.length();
    vector<bool> p(n,0);
    string curr = "";
    permute(p, n, res, s, curr);
    cout << res.size() << "\n";
    for(const string& s : res){
      cout << s << "\n";
    }
    return 0;
}
