/*
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~JJ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~!&&!~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~G&&G~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Y&&&&Y~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~7&&&&&&7~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~B&&&&&&B~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~7Y55YYYYYYYYYYG&&&&&&&&GYYYYYYYYYY55Y7~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~!?P#&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&#P?!~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~?P#&&&&&&&&&&&&&&&&&&&&&&&&#P?~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~?P#&&&&&&&&&&&&&&&&&&#P?!~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~!?B&&&&&&&&&&&&&&B?!~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~!#&&&&&&&&&&&&&&#!~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~G&&&&&&&&&&&&&&&&G~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Y&&&&&&&G??G&&&&&&&Y~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~7&&&&&GJ!~~~~!JG&&&&&7~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~B&&GJ!~~~~~~~~~~!JG&&B~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~JGJ!~~~~~~~~~~~~~~~~!JGJ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~!~~~~~~~~~~~~~~~~~~~~~~!~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~/K1ethoang/~~~~~~~~~~~~~~~~~~/K1ethoang/~~~~~~~~~~~~~~~~~~/K1ethoang/~~~~~~~~~~~~~~~~~~~
~~~~~/K1ethoang/~~~~~~~~/K1ethoang/~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~/K1ethoang/~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~/K1ethoang/~~~~~~~~~~~~~~~~~~~~/K1ethoang/~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~/K1ethoang/~~~~~~~~~~~~~~~~~/K1ethoang/~~~~~~~~~~~~~~~~~~~~~~~~/K1ethoang/~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~/K1ethoang/~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~/K1ethoang/~~~~~~~~~~~~~/K1ethoang/~~~~~~~~~~~~
~~~~~~~~~~/K1ethoang/~~~~~~~~~~~~/K1ethoang/~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~/K1ethoang/~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~/K1ethoang/~~~~~~~~~~~~~~~~~~/K1ethoang/~~~~~~~~~~~~~~
 */

#include <bits/stdc++.h>
using namespace std;

#define faster()                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define test()    \
    int test;     \
    cin >> test;  \
    cin.ignore(); \
    while (test--)
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define all(p) p.begin(), p.end()
#define For(i, a, b) for (int i = a; i < b; i++)
#define Fori(i, a, b) for (int i = b - 1; i >= a; i--)
#define Sort(p) sort(all(p))
#define Sortr(p) sort(p.rbegin(), p.rend())
#define rev(p) reverse(all(p))
#define FILEIN freopen("input.txt", "r", stdin)
#define FILEOUT freopen("output.txt", "w", stdout)
#define sy cout << "YES" << endl
#define sn cout << "NO" << endl
#define pause system("pause")
const ll MOD = (int)10e9 + 7;
/*
    Link problem: https://codeforces.com/contest/1846/problem/A
    Completion time: Jul/07/2023 21:56 (UTC+7)
 */
int main()
{
    faster();
    test()
    {
        int n;
        cin >> n;
        vi va(n), vb(n);
        For(i, 0, n)
        {
            cin >> va[i];
            cin >> vb[i];
        }
        int count = 0;
        For(i, 0, n)
        {
            if (vb[i] < va[i])
                count++;
        }
        cout << count << endl;
    }
    return 0;
}