//1353B
#include<iostream>
using namespace std;

void fun(){
    int n,k,key1,key2,swaps=0; cin>>n>>k;
    int a[n],b[n];
    cin>>a[0];
    for (int i=1;i<n;i++){
        cin>>key1;
        int j=i-1;
        while (j>=0 && a[j]>key1){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key1;
    }
    
    cin>>b[0];
    for (int i=1;i<n;i++){
        cin>>key2;
        int j=i-1;
        while (j>=0 && b[j]>key2){
            b[j+1]=b[j];
            j--;
        }
        b[j+1]=key2;
    }
    int i=0,j=n-1,sum=0;
    while (swaps<k && i>=0 && j>=0 && a[i]<b[j]){
        sum+=b[j];
        i++;j--;
        swaps+=1;
    }
    for (int m=n-1;m>=swaps;m--){
        sum+=a[m];
    }
    cout<<sum;
    return;
}

int main(){
    int t; cin>>t;
    for (int i=0;i<t;i++){fun();cout<<endl;}
}