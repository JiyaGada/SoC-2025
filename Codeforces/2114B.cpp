#include <iostream>
#include <cmath>
using namespace std;

void fun(){
    int n,k,count1=0,count0=0; cin>>n>>k;
    for (int i=0;i<n;i++){
        char x; cin>>x;
        if (x=='1'){count1++;}
        else if (x=='0') {count0++;}
    }
    if ((count1-(n/2)+k)>=0 && (count1-(n/2)+k)%2==0 && (count0-(n/2)+k)>=0 && (count0-(n/2)+k)%2==0){
        cout<<"YES";
    }
    else {cout<<"NO";}
}

int main(){
    int t; cin>>t;
    for (int i=0;i<t;i++){ fun();cout<<endl; }  
}
