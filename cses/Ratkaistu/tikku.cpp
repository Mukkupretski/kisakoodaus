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

void split( priority_queue<pair<int,int>>& pq, int pos){
  int start = pq.top().second;
  int end = pq.top().first + start;
  pq.pop();
  pq.push({pos - start, start});
  pq.push({end - pos, pos});
}

void pop_pq(priority_queue<pair<int,int>>& pq, set<int>& ch){
  while(!ch.empty()){
    int start = pq.top().second;
    int end = pq.top().first + start;
    auto it = ch.lower_bound(start);
    if(it == ch.end() || *it > end) break;
    split(pq, *it);
    ch.erase(it);
  }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // priorirty_queue [length, start] as min heap to keep track of smallest
    // store post-poned deletions in a set<int>. When the top element of heap is changed, 
    // Find for deletions that affect it
    priority_queue<pair<int,int>> pq;
    int x,n;
    cin >> x >> n;
    set<int> cuts;
    pq.push({x, 0});
    loop(i,0,n){
      int k;
      cin >> k;
      if(pq.top().second < k && pq.top().second+pq.top().first > k){
        split(pq, k);
        pop_pq(pq, cuts);
      }else{
        cuts.insert(k);
      }
      cout << pq.top().first << "\n";
    }
    return 0;
}
