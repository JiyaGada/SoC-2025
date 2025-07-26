#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<algorithm>
#include<cmath>

using namespace std;
const int MOD = 1e9+7;



void fun(){
    int n,sum=0; cin>>n;
    int a1[n],a2[n],a3[n];
    for (int i=0;i<n;i++){cin>>a1[i];}
    for (int i=0;i<n;i++){cin>>a2[i];}
    for (int i=0;i<n;i++){
        int t=(a1[i]>a2[i]) ? a1[i] : a2[i];
        sum +=t;
        a3[i]=t;
    }
    int max=(a1[0]!=a3[0])? a1[0]: a2[0];
    for (int i=1;i<n;i++){
        int t=(a1[i]!=a3[i])? a1[i]: a2[i];
        if (t>max){max=t;}
    }
    cout<<sum+max<<endl;
}

int main(){
    int t; cin>>t;
    while (t--){fun();}
}
