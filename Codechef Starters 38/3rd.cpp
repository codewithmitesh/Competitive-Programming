/**
 * @file 3rd.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2022-05-11
 *
 * @copyright Copyright (c) 2022
 *
 */
/* Code By Mitesh Tank (codewithmitesh) :- www.linkedin.com/in/mitesh-tank , https://github.com/codewithmitesh ,
   https://www.codechef.com/users/codewithmitesh ,https://leetcode.com/codewithmitesh/, https://auth.geeksforgeeks.org/user/codewithmitesh/practice/ ,https://codeforces.com/profile/codewithmitesh   */
// included Libraries and namespace
#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
// Macros
#define gc getchar_unlocked
#define fo(i, n) for (i = 0; i < n; i++)
#define Fo(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define ll long long
#define nl '\n'
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
// typedefs
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef unsigned long long ull;
typedef long double lld;

// Debuger Initiazation
#ifndef ONLINE_JUDGE
#define debug(x)       \
    cerr << #x << " "; \
    _print(x);         \
    cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t)
{
    cerr << t;
}
void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(lld t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(ull t) { cerr << t; }
void _print(bool t) { cerr << t; }
// Templates for Debuger
template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T, class V>
void _print(map<T, V> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(pair<T, V> p)
{
    cerr << "{";
    _print(p.F);
    cerr << ",";
    _print(p.S);
    cerr << "}";
}
template <class T>
void _print(vector<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(set<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(multiset<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T, class V>
void _print(map<T, V> v)
{
    cerr << "[ ";
    for (auto i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}

// mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
// int rng(int lim)
// {
//     uniform_int_distribution<int> uid(0, lim - 1);
//     return uid(rang);
// }
const int mod = 1'000'000'007;

void solve()
{ // Snippets Variables
    int i, j, n, m;
    // Code Variables
    cin >> n;
    vector<int> a;
    vector<int> b;
    // debug(n);
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        a.pb(tmp);
    }
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        b.pb(tmp);
    }

    // debug(a);
    // debug(b);
    long long cnt = 0;
    // unordered_map<int, int> ump;
    // ump[((a[0] * 10) + b[0])]++;
    // // debug(ump);
    // for (int i = 1; i < n; i++)
    // {
    //     if (ump.find(((b[i] * 10) + a[i])) != ump.end())
    //     {
    //         cnt += ump[(b[i] * 10) + a[i]];
    //     }
    //     ump[(a[i] * 10) + b[i]]++;
    // }

    map<pair<int, int>, int> mp;

    mp[{a[0], b[0]}]++;

    for (int i = 1; i < n; i++)
    {
        if (mp.find({b[i], a[i]}) != mp.end())
        {
            cnt += mp[{b[i], a[i]}];
        }
        mp[{a[i], b[i]}]++;
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cnt += mp[{b[i], a[i]}];
    //     mp[{a[i], b[i]}]++;
    // }

    // cout << "map " << nl;
    // for (auto ch : ump)
    // {
    //     cout << ch.first << " " << ch.second << nl;
    // }

    cout << cnt << nl;
}

int main()
{
    // Debug in error.txt
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int T = 1;
    cin >> T;
    while (T--)
    {
        // high_resolution_clock::time_point t1 = high_resolution_clock::now();

        solve();

        // high_resolution_clock::time_point t2 = high_resolution_clock::now();
        // duration<double> time_span = duration_cast<duration<double>>(t2 - t1);
        // cerr << " Time for Testcase " << T << " is :" << time_span.count() << " seconds.";
        // cerr << endl;
    }
    return 0;
}
