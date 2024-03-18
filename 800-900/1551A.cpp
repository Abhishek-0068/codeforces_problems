#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        if(n%3==0){
            int p = n/3;
            cout<<p<<" "<<p<<endl;
        }else{
            if(n%3<2){
                int p = n/3;
                cout<<p+1<<" "<<p<<endl;
            }else{
                int p = n/3;
                cout<<p<<" "<<p+1<<endl;
            }
        }
    }
    return 0;
}