
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

// int getMax(int arr[], int N)
// {

//   // int max = arr[0];
//   // for (int i = 1; i <= N; i++)
//   //   if (arr[i] > max)
//   //     max = arr[i];

//   return *max_element(arr, arr + N);
// }
// int largest(int arr[], int n)
// {
//   int i;

//   // Initialize maximum element
//   int max = arr[0];

//   // Traverse array elements
//   // from second and compare
//   // every element with current max
//   for (i = 1; i < n; i++)
//     if (arr[i] > max)
//       max = arr[i];

//   return max;
// }
void solve()
{
  int i, j, n, m;
  int N, M, X, cnt, rem, k, max = 0;
  cnt = 0;
  rem = 0;
  k = 1;
  cin >> N >> M >> X;

  // int i, j, n, m;
  // int N, M, X, cnt, rem, k, max = 0;
  // cnt = 0;
  // rem = 0;
  // k = 1;
  // cin >> N >> M >> X;
  int arr[N];
  vector<int> v;

  for (int i = 1; i <= N; i++)
  {

    cin >> arr[i];
  }
  // for (int i = 1; i <= N; i++)
  // {

  //   cout << arr[i];
  // }
  // cout << endl;
  for (int i = 1; i <= N; i++)
  {
    if (arr[i] >= M)
    {
      cnt++;
      v.push_back(i);
      arr[i] = 0;
    }
  }
  // for (int i = 1; i <= N; i++)
  // {

  //   cout << arr[i];
  // }
  // cout << endl;

//   cout << cnt;
  int getset = v.size();
//   cout << getset<<endl; //fine

  if (getset < X)
  {
    
    if(getset==0){
        rem = X+1;
    }else{
        rem = N - getset;
    }
    while (k < rem)
    {
      max = *max_element(arr+1,arr+N+1);
    //   cout << max << endl;
      for (int i = 1; i <= N; i++)
      {
        if (arr[i] == max)
        {
          arr[i]=0;
          v.push_back(i);
          break;
        }
      }

      k++;
    }
  }
//   cout<<rem<<endl;
cout << v.size() << " ";
 sort(v.begin(),v.end());
  
 for (auto it = v.begin(); it != v.end(); it++)
  {
      cout << *it << " ";
   }
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  srand(chrono::high_resolution_clock::now().time_since_epoch().count());

  int T = 1;
  cin >> T;
  while (T--)
  {
    solve();
    cout<<endl;
  }
  return 0;
}
