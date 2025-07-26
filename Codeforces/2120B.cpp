#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<algorithm>
#include<cmath>

using namespace std;

void fun(){
    int n,s,cnt=0; cin>>n>>s;
    for (int i=0;i<n;i++){
        int dx,dy,x,y; cin>>dx>>dy>>x>>y;
        if ((x-y==0 && dx*dy==1) || (x+y==s && dx*dy==-1)) {cnt++;}
    }
    cout<<cnt<<endl;
}
int main(){
    int t; cin>>t;
    while(t--){fun();}
}
