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
    int n, k;
    cin >> n >> k;
    vi nums;
    ll sum = 0;
    loop(i, 0, n){
      int a;
      cin >> a;
      nums.pb(a);
      sum += a;
    }
    ll left = 0;
    ll right = sum;
    ll bestSum = sum;
    while(left <= right){
      ll mid = (left+right)/2;
      ll tsum = 0;
      int c = 0;
      ll minSum = 0;
      loop(i,0,n){
        if(nums[i] > mid) c += k + 1;
        if(tsum + nums[i] > mid){
          minSum = max(minSum, tsum);
          tsum = 0;
        } 
        if(tsum == 0) c++;
        tsum += nums[i];
      }
      minSum = max(minSum, tsum);
      if(c > k){
        left = mid + 1;
      }else{
        bestSum = min(bestSum, minSum); 
        right = mid - 1;
      }
    }
    cout << bestSum;
    return 0;
}
