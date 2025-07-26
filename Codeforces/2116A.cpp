#include<iostream>
#include<algorithm>
using namespace std;
void fun(){
    int a,b,c,d; cin>>a>>b>>c>>d;
    int x = min({a,b,c,d});
    if (x==b || x==d){cout<<"Gellyfish";}
    else {cout<<"Flower";}
}
int main(){
    int t;cin>>t;
    for (int i=0;i<t;i++){fun();cout<<endl;}
}
