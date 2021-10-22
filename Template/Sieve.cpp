#include <bits/stdc++.h>
using namespace std;
#define ll long long
/*
vector<ll> sieve(int n)
{
    int *arr = new int[n + 1]();
    vector<ll> vect;
    for (int i = 2; i <= n; i++)
        if (arr[i] == 0)
        {
            vect.push_back(i);
            for (int j = 2 * i; j <= n; j += i)
                arr[j] = 1;
        }
    return vect;
}
*/

/** 
 * !   Sieve Algo to Find Prime and Store it in isPrime vector in TC of O(n*loglogn) 
const int N = 1e6 + 10;
vector<bool> isPrime(N, 1);  //for prime it is true or 1

void seive(int n)
{
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i < n; i++)
    { //i * i <n
        if (isPrime[i] == true)
        {
            for (int j = 2 * i; j < N; j = j + i)
            {
                isPrime[j] = false;
            }
        }
    }
}
*/

/** 
 * ! Lowest Prime and Highest Prime in Prime Factorization eg. for 10 = 2*5 lp= 2 hp= 5 ,
36 = 2*2*3*3 lp = 2 and hp = 3  
const int N = 1e6 + 10;
vector<bool> isPrime(N, 1);

vector<int> lowest_primes(N, 0);
vector<int> highest_primes(N, 0);
void seive(int n)
{
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i < n; i++)
    { //i * i <n
        if (isPrime[i] == true)
        {
            lowest_primes[i] = highest_primes[i] = i; // i who is the prime number lp and hp will always be itself
            for (int j = 2 * i; j < N; j = j + i)
            {
                isPrime[j] = false;
                highest_primes[j] = i;
                if (lowest_primes[j] == 0)
                {
                    lowest_primes[j] = i;
                }
            }
        }
    }
}

*/

/**
 * !finding primefactors and storing in vector

* TODO: First we need to compute the lp or hp any one will be work

vector<int> getPrimefactors(int n)
{
    vector<int> prime_factors;
    //wthis will catch all the prime factors in logn time
    while (n > 1)
    {

        int prime_factor = highest_primes[n];
        while (n % prime_factor == 0)
        {
            n = n / prime_factor;
            prime_factors.push_back(prime_factor);
        }
    }
    return prime_factors;
}
*/

/**
 * ! to stor all the divisors of the number in Array of Vectors  
const int N = 1e5 + 10;
vector<int> divisors[N];
* ! this loop will run for the O(n*logn) total hence will not support for 1e6 it will only run for 1e5  
for (int i = 2; i < N; i++) //run for n
{
    for (int j = i; j < N; j = j + i) //run for logn
    {
        divisors[j].push_back(i);

    }
}
*/

int main()
{
    // seive(N);
    // int x;
    // cout << " Enter the Number " << endl;
    // cin >> x;
    // if (isPrime[x])
    // {
    //     cout << x << " is a Prime Number " << endl;
    // }
    // else
    // {
    //     cout << x << " is a Non-Prime Number " << endl;
    // }

    // cout << lowest_primes[x] << " is the lowest prime of x " << endl;
    // cout << highest_primes[x] << " is the highest prime " << endl;

    // vector<int> prf = getPrimefactors(x);
    // for (auto factor : prf)
    // {
    //     cout << factor << " ";
    // }

    const int N = 1e5 + 10;
    vector<int> divisors[N];

    for (int i = 2; i < N; i++)
    {
        for (int j = i; j < N; j = j + i)
        {
            divisors[j].push_back(i);
        }
    }
    // to print all the divisors of 1 to 10 numbers
    for (int i = 1; i <= 10; i++)
    {
        for (auto div : divisors[i])
        {
            cout << div << " ";
        }
        cout << endl;
    }

    return 0;
}
