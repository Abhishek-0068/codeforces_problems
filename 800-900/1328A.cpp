#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int a,b;
        cin>>a>>b;
        int r = a%b;
        int q = a/b;

        r==0?cout<<r:(cout<<b*(q+1) - a);
        cout<<endl;
    }
    return 0;
}