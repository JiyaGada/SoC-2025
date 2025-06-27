//1374D
#include<iostream>
#include<map>
using namespace std;


void fun(){
    int n,k; cin>>n>>k;
    map <int, int, greater<int>> a;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        if (x%k!=0){a[k-(x%k)]+=1;}
        else {a[0]+=1;}
    }
    int j=k-1,max=a[k-1];
    for (auto it: a){
        if (it.second>max && it.first>=1){max=it.second;j=it.first;}
    }
    if (k==1){cout<<0;}
    else {
        cout<<(unsigned long long)k*(max-1) + j+1;
    }
    return;
}

int main(){
    int t; cin>>t;
    for (int i=0;i<t;i++){fun();cout<<endl;}
}