#include<iostream>
#include<cmath>

using namespace std;

void fun(){
    int n; cin>>n;
    if (n%4==0){cout<<"Bob"<<endl;}
    else {cout<<"Alice"<<endl;}
}

int main(){
    int t; cin>>t;
    for (int i=0;i<t;i++){
        fun();
    }
}
