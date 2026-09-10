#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t; 
    while (t--)
    {
        long long n; 
        cin >> n; 
        long long a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i]; 
 
        if (a[0] == 1) 
            cout << "YES" << endl; // If true, print "YES"
        else
            cout << "NO" << endl; // Otherwise, print "NO"
    }
    return 0; 
}