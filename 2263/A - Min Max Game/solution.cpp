#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        int cnt = 0;
 
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
 
            if (x == 1)
                cnt++;
        }
 
        int elsieMoves = (n - 1) / 2;
 
        if (cnt > elsieMoves)
            cout << "Bessie
";
        else
            cout << "Elsie
";
    }
 
    return 0;
}