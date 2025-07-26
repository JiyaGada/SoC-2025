#include<iostream>
using namespace std;
void fun(){
    int n,ones=0,zeros=0;
    cin>>n;
    for (int i=0;i<n;i++){
        char x; cin>>x;
        if (x=='1') {ones++;}
        else if (x=='0') {zeros++;}
    }
    cout<<(n-1)*ones+zeros;
    
}
int main(){
    int t;cin>>t;
    for (int i=0;i<t;i++){fun();cout<<endl;}
}
