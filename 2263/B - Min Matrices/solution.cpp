#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, k;
        cin >> n >> k;
 
        // Impossible cases
        if (k < n || k > 2 * n - 1) {
            cout << -1 << '
';
            continue;
        }
 
        vector<vector<int>> a(n, vector<int>(n, 0));
 
        int q = k - n + 1;
        int value = 1;
 
        // Create the zig-zag path
        for (int i = 0; i < q; i++) {
            // (i, i)
            a[i][i] = value++;
 
            // (i+1, i)
            if (i + 1 < q) {
                a[i + 1][i] = value++;
            }
        }
 
        // Fill the remaining diagonal cells
        for (int i = q; i < n; i++) {
            a[i][i] = value++;
        }
 
        // Fill all remaining cells with numbers > k
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (a[i][j] == 0) {
                    a[i][j] = value++;
                }
            }
        }
 
        // Print matrix
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << a[i][j] << " ";
            }
            cout << '
';
        }
    }
 
    return 0;
}