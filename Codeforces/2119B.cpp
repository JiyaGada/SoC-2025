#include <iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main() {
    int t; cin>>t;
    while (t--){
        int n,px,qx,py,qy,m,sum=0;
        cin>>n>>px>>py>>qx>>qy;
        cin>>m;
        sum+=m;
        for (int i=0;i<n-1;i++){
            int x; cin>>x; sum+=x;
            if(x>m){m=x;}
        }
        float dist=sqrt(pow(px-qx,2)+pow(py-qy,2));
        if ((sum<dist) || (max(2*m-sum,0)>dist)) {cout<<"No"<<endl;}
        else {cout<<"Yes"<<endl;}
    }
}
