#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        
        bool three_consecutive_empty = false;
        int total_empty = 0;
        
        for(int i=0;i<n;i++){
            if(i + 2 < n && s[i] == '.' && s[i+1] == '.' && s[i+2] == '.'){
                // three consecutive empty
                three_consecutive_empty = true;
                break;
            }
            if(s[i]=='.'){
                total_empty++;
            }
        }
        
        if(three_consecutive_empty){
            cout<<2<<endl;
        }
        else{
            cout<<total_empty<<endl;
        }
    }
    return 0;
}