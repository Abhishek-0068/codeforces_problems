#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while (t--)
    {
        vector<int>v(4);
        for(int i = 0;i<4;i++){
            cin>>v[i];
        }
        if((max(v[0],v[1])>min(v[2],v[3]))&& (min(v[0],v[1])<max(v[2],v[3]))){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    
    return 0;
}