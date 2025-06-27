#include<iostream>
#include<cmath>
using namespace std;
void fun(){
    int n,count=0; cin>>n;
    for (int i=1;i<ceil(sqrt(n));i++){
        if (n%i==0){count++;}
    }
    if (sqrt(n)==floor(sqrt(n))) {cout<<2*count +1;}
    else {cout<<2*count;}
}
int main(){
    int t; cin>>t;
    while (t--){
        fun();
        cout<<endl;
    }
}