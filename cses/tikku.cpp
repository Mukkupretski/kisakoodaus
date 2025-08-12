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
typedef unordered_multiset<int> mseti;
#define loop(i, a, b) for (int i = a; i < b; i++)
#define all(x) x.begin(), x.end()
#define printdl(x, d) printf("%.*f\n", d, x)
#define PI M_PI
#define pb push_back
#define mp make_pair
#define mt make_tuple
#define f first
#define s second

struct Node
{
    Node *left;
    Node *right;
    int val;
    Node(int x) : val(x), left(nullptr), right(nullptr) {}
    Node(int x, Node *left, Node *right) : val(x), left(left), right(right) {}
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, x;
    cin >> x >> n;
    pqi pq;
    mseti counts;
    pq.push(x);
    counts.insert(x);
    Node *root = new Node(x);
    loop(i, 0, n)
    {
        int cutPoint;
        cin >> cutPoint;
        Node *goal = root;
        int currPos = 0;
        while (goal->left != nullptr)
        {
            if (currPos + (goal->left->val) > cutPoint)
            {
                goal = goal->left;
            }
            else
            {
                currPos += goal->left->val;
                goal = goal->right;
            }
        }
        int cutLen = goal->val;
        int lp = cutPoint - currPos;
        int rp = cutLen - lp;
        Node *left = new Node(lp);
        Node *right = new Node(rp);
        goal->left = left;
        goal->right = right;
        counts.erase(counts.find(cutLen));
        while (!pq.empty() && !counts.count(pq.top()))
        {
            pq.pop();
        }
        counts.insert(lp);
        counts.insert(rp);
        pq.push(lp);
        pq.push(rp);
        cout << pq.top() << " ";
    }
    return 0;
}
