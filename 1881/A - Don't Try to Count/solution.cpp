#include <bits/stdc++.h> 
using namespace std;
 
int main(){
    long long t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string x;
        cin>>x;
        string s;
        cin>>s;
        
        if(x.find(s) != string::npos){
            cout<<0<<endl;
            continue; 
        }
        
        bool found = false;
        for(int i=1;i<=6;i++){
            x=x+x;
            if(x.find(s) != string::npos){ 
                cout<<i<<endl;
                found = true;
                break;
            }
        }
        
        if(!found) {
            cout<<-1<<endl;
        }
    }
    return 0;
}