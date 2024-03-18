#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    vector<int> v{1,5,10,20,100};
    int ans=0;
    for(int i = v.size()-1;i>=0;i--){
        if(n/v[i]==0){
            continue;
        }else{
            ans += n/v[i];
            n = n%v[i];
        }
    }
    cout<<ans<<endl;
    return 0;
}