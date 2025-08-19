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

int res = 0;

void nqueens(vi& pos, int i, vector<vector<bool>>& board){
  if(i==8){
    res++;
    return;
  }
  loop(j,0,8){
    if (board[i][j]){
      continue;  
    }
    bool f = 0;
    loop(k,0,8){
      if(pos[k] == -1) continue;
      if(pos[k] == i - abs(j-k)) f = 1;
    }
    if(pos[j] != -1) f = 1;
    if(f) continue;
    pos[j] = i;
    nqueens(pos, i+1, board);
    pos[j] = -1;
  }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<vector<bool>> board(8,vector<bool>(8,0));
    loop(i,0,8){
      string s;
      cin >> s;
      loop(j,0,8){
        if(s.at(j) == '*') board[i][j] = 1;
      }
    }
    vi pos(8,-1);
    nqueens(pos, 0, board);
    cout << res;
    return 0;
}
