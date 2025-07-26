#include<iostream>
using namespace std;
void fun(){
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
    
    if ((a[0]+a[n-1])%2==0) {cout<<0;}
    else {
        int b,c;
        for (int i=0;i<n;i++){
            if ((a[i]+a[n-1])%2==0){
                b=i;
                break;
            }
        }
        for (int i=n-1;i>=0;i--){
            if ((a[i]+a[0])%2==0){
                c=n-1-i;
                break;
            }
        }
        cout<<min(b,c);
    }
}
int main(){
    int t; cin>>t;
    for (int i=0;i<t;i++){
        fun(); cout<<endl;
    }
}