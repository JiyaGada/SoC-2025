#include<iostream>
#include<algorithm>

using namespace std;

void fun(){
    int n,k,count=0; cin>>n>>k;
    for (int i=0;i<n;i++){
        char x; cin>>x;
        if (x=='1'){count++;}
    }
    if (count<=k || 2*k>n){cout<<"Alice"<<endl;}
    else {cout<<"Bob"<<endl;}
}

int main(){
    int t; cin>>t;
    for (int i=0;i<t;i++){
        fun();
    }
}
