#include<iostream>
#include<algorithm>

using namespace std;

void fun(){
    int n; cin>>n;
    int arr[n]; int min_ele[n]; int max_ele[n];
    for (int i=0;i<n;i++){cin>>arr[i];}
    int min=arr[0]; int max=arr[n-1];
    for (int i=1;i<n-1;i++){
        if (arr[i-1]<min) {min=arr[i-1];}
        min_ele[i]=min;
    }
    for (int i=n-2;i>=1;i--){
        if (arr[i+1]>max){max=arr[i+1];}
        max_ele[i]=max;
    }
    cout<<1;
    for (int i=1;i<n-1;i++){
        if (arr[i]<max_ele[i]&& arr[i]>min_ele[i]) {cout<<0;}
        else {cout<<1;}
    }

    cout<<1<<endl;
}

int main(){
    int t; cin>>t;
    for (int i=0;i<t;i++){
        fun();
    }
}
