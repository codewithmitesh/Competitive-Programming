
/* Code By Mitesh Tank (codewithmitesh) :- www.linkedin.com/in/mitesh-tank , https://github.com/codewithmitesh ,
   https://www.codechef.com/users/codewithmitesh ,https://leetcode.com/codewithmitesh/, https://codeforces.com/profile/codewithmitesh   */
#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i, n) for (i = 0; i < n; i++)
#define Fo(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define ll long long
#define si(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define ss(s) scanf("%s", s)
#define pi(x) printf("%d\n", x)
#define pl(x) printf("%lld\n", x)
#define ps(s) printf("%s\n", s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
int rng(int lim)
{
    uniform_int_distribution<int> uid(0, lim - 1);
    return uid(rang);
}
const int mod = 1'000'000'007;
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

void solve()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    int i, j, n, m;
    int X, Y;
    cin >> X >> Y;

    if (gcd(X, Y) > 1)
    {
        cout << 0 << endl;
        return;
    }
    else
    {

        if (gcd(X + 1, Y) > 1 || gcd(X, Y + 1) > 1)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }

   
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}
