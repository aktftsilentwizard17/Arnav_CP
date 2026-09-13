#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n, m;
        cin >> n >> m;
 
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        // Max heap containing the m-1 smallest elements
        priority_queue<long long> pq;
 
        long long sum = 0;
        long long ans = LLONG_MIN;
 
        for (int j = 0; j < n; j++) {
 
            // a[j] is considered as the last element.
            // We need m-1 elements before it.
            if ((int)pq.size() == m - 1) {
                long long score = m * a[j] - sum;
                ans = max(ans, score);
            }
 
            // Add a[j] to the collection for future positions.
            pq.push(a[j]);
            sum += a[j];
 
            // Keep only the m-1 smallest elements.
            if ((int)pq.size() > m - 1) {
                sum -= pq.top();
                pq.pop();
            }
        }
 
        cout << ans << '
';
    }
 
    return 0;
}