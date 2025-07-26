#include<iostream>
using namespace std;
void fun(){
    int n,k,sum;
    bool flag1=false;
    bool flag2=true;
    int index=-1;
    cin>>n>>k;
    int a[n];
    cin>>a[0];
    int min_a=a[0],max_a=a[0];
    for (int i=1;i<n;i++){cin>>a[i];if (a[i]<min_a){min_a=a[i];}else if (a[i]>max_a){max_a=a[i];}}
    for (int i=0;i<n;i++){
        int x;
        cin>>x;
        if (!flag1 && x!=-1){index=i;sum=a[i]+x;flag1=true;}
        else if (flag1 && x!=-1 && sum!=a[i]+x){flag2=false;} 
    }
    
    if (!flag1) {cout<<k-max_a+min_a+1;}
    else if (flag2 && sum-min_a<=k && sum-max_a>=0) {cout<<1;}
    else {cout<<0;}
}
int main(){
    int t;cin>>t;
    for (int i=0;i<t;i++){fun();cout<<endl;}
}
