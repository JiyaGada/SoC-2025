#include<iostream>
#include<cmath>

using namespace std;

void fun(){
    int n,j,k; cin>>n>>j>>k;
    int arr[n]; cin>>arr[0];
    int max=arr[0];
    for (int i=1;i<n;i++){
        cin>>arr[i];
        if (arr[i]>max){max=arr[i];}
    }
    bool flag=false;
    for (int i=0;i<n;i++){
        if (arr[i]<max){flag=true; break;}
    }
    if (k==1 && max!=arr[j-1] && flag) {cout<<"NO"<<endl;}
    else {cout<<"YES"<<endl;}
}

int main(){
    int t; cin>>t;
    for (int i=0;i<t;i++){
        fun();
    }
}
