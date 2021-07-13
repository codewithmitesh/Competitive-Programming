
/* Code By Mitesh Tank (codewithmitesh) :- www.linkedin.com/in/mitesh-tank , https://github.com/codewithmitesh ,   */

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

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  srand(chrono::high_resolution_clock::now().time_since_epoch().count());
  int i, j, n, m, res, k;
  int T = 1;
  cin >> T;
  while (T--)
  {
    cin >> n >> k;
    vector<int> arr(n);
    for (int &i : arr)
    {
      cin >> i;
    }
    vector<int> nums(31);
    int pt, tim1;
    for (int j = 0; j < 31; j++)
    {
      pt = 0;
      for (int &it : arr)
      {
        if (it % 2 != 0)
        {
          pt++;
        }
        it /= 2;
      }
      nums[j] = pt;
    }
    res = 0;
    for (int j = 0; j < 31; j++)
    {
      if (nums[j] % k == 0)
      {
        res += nums[j] / k;
      }
      else
      {
        res += nums[j] / k + 1;
      }
    }

    cout << res << endl;
  }
  return 0;
}
