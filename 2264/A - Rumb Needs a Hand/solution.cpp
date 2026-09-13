#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> p(n + 1);
        vector<int> v;
 
        for (int i = 1; i <= n; i++) {
            cin >> p[i];
 
            if (p[i] != i) {
                v.push_back(i);
            }
        }
 
        bool possible = true;
 
        for (int i = 0; i < v.size(); i++) {
            if (p[v[i]] != v[v.size() - 1 - i]) {
                possible = false;
                break;
            }
        }
 
        if (possible)
            cout << "YES
";
        else
            cout << "NO
";
    }
 
    return 0;
}