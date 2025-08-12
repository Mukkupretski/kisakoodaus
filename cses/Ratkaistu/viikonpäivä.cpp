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
    int päiväkertymä[] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string date;
    cin >> date;
    int day, month, year;
    char dot1, dot2;
    std::istringstream iss(date);
    iss >> day >> dot1 >> month >> dot2 >> year;
    int vuosien_päivät = (year - 1800) * 365;
    int karkausvuodet = (year - 1 - 1800) / 4 - (year - 1 - 1800) / 100 + (year >= 2000);
    int kertymä = päiväkertymä[month - 1];
    int päivät = day - 1;
    int aloitus = 2;
    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0) && month > 2)
        päivät++;
    int lopputulos = (vuosien_päivät + karkausvuodet + kertymä + päivät + aloitus) % 7;
    switch (lopputulos)
    {
    case 0:
        cout << "maanantai";
        break;

    case 1:
        cout << "tiistai";
        break;

    case 2:
        cout << "keskiviikko";
        break;

    case 3:
        cout << "torstai";
        break;

    case 4:
        cout << "perjantai";
        break;

    case 5:
        cout << "lauantai";
        break;

    case 6:
        cout << "sunnuntai";
        break;

    default:
        break;
    }
    return 0;
}
