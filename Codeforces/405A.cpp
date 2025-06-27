//405A
#include<iostream>
#include<string>
using namespace std;

int main(){
    int n,key; cin>>n;
    int a[n];
    cin>>a[0];
    for (int i=1;i<n;i++){
        cin>>key;
        int j=i-1;
        while (j>=0 && a[j]>key){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
    for (int i=0;i<n;i++){cout<<a[i]<<" ";}
}