
/* Code By Mitesh Tank (codewithmitesh) :- www.linkedin.com/in/mitesh-tank , https://github.com/codewithmitesh ,
   https://www.codechef.com/users/codewithmitesh ,https://leetcode.com/codewithmitesh/*/
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

// this Problems Contains multiple algorithms together like, palindrom number , implementing pow(,)in build function in O(n) , prefix sum technique using prefix array;

//user defined function to calculate chefora numbers here  i th chefora number is 'i' append pallindrome of i excluding right most digit of i
//eg. 256th chefora number is 256 append 52 = 25652 hence 256th chefora number is '25652'.
ll chefora(ll n)
{
    ll chefno = n;
    ll retnum = 0;
    if (n < 10)
    { //handeling 1 digit chefora numbers
        retnum = chefno;
    }
    else if (n >= 10)
    {
        n = n / 10; // eleminating the right most digit of n.
        
        while (n != 0)
        { //appending the pallindrome of n
            chefno = chefno * 10 + n % 10;
            n = n / 10;
        }
        retnum = chefno;
    }
    return retnum;
}

//getting pow() function in efficient way
ll powerefficient(ll base, ll power)
{
    ll ans = 1;
    while (power != 0)
    {
        if (power % 2 == 0)
        {
            base = ((base % mod) * (base % mod)) % mod;
            power = floor(power / 2);
        }
        else
        {
            ans = ((ans % mod) * (base % mod)) % mod;
            power = power - 1;
        }
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    ll arr[100001] = {0};    //dclaring arr of size 1e5+1 bcz given constrains in l<=r<=100001; //using long long to avoid int overflow
    ll prefix[100001] = {0}; // declaring  prefix array to store prifix sum of entire arr array;
                             //Also initialized Every element of both array with '0' to avoid garbage values.

    //adding the chefor numbers in arr also doing prefix sum together;

    for (ll i = 0; i <= 100001; i++)
    { //here i is declared in long long to avoid int overflow, here loop wil runb till (1e5 + 2 ) which is less than 1e8(1 Sec) hence it wont give TLE.
        arr[i] = chefora(i);
        prefix[i] = prefix[i - 1] + arr[i];
    }

    int T = 1; //Testcases Handler;
    cin >> T;
    while (T--)
    {
        ll L, R;
        cin >> L >> R;
        ll range = prefix[R] - prefix[L];              //here using base equal then sum of powers Basic property and calculating sum to L+1 to R chefora numbers using prefix array.
        cout << powerefficient(arr[L], range) << endl; //calculating power using user difined function powerefficient and that is our Ans.
    }
    return 0;
}
