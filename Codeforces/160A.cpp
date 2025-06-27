//160A
#include<iostream>
#include<string>
using namespace std;

int main(){
    int n,key; cin>>n;
    int a[n];
    cin>>a[0];
    int sum=a[0];
    for (int i=1;i<n;i++){
        cin>>key;
        sum += key;
        int j=i-1;
        while (j>=0 && a[j]>key){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
    int sum1,i;
    for (i=n-1;i>=0;i--){
        sum1+=a[i];
        if (sum1>sum/2){break;}
    }
    cout<<n-i;
}