#include<iostream>
using namespace std;
void fun(){
    int n,x;
    cin>>n>>x;
    if (n==1 || n==0){cout<<0;}
    else if (x<n) {
        for (int i=0;i<n;i++){
            if (i!=x){cout<<i<<" ";}
        }
        cout<<x;
    }
    else if (x==n) {
        cout<<0<<" ";
        for (int i=2;i<n;i++){cout<<i<<" ";}
        cout<<1;
    }
}
int main(){
    int t;cin>>t;
    for (int i=0;i<t;i++){fun();cout<<endl;}
}
