#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,x;
        cin>>n>>x;
        vector<long long> myarr;
        myarr.push_back(0);
        for(int i=0;i<n;i++){
            long long j;
            cin>>j;
            myarr.push_back(j);
        }
        myarr.push_back(x);
        int len = myarr.size();
        long long mininit = 0;
        for(int i=1;i<len;i++){
            if(i==len-1){
                mininit = max(mininit,2*(myarr[i]-myarr[i-1]));
            }
            else{
                mininit = max(mininit,myarr[i]-myarr[i-1]);
            }
        }
        cout<<mininit<<endl;
    }
    return 0;
}