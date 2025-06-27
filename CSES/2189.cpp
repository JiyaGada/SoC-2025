#include<iostream>
#include<vector>
using namespace std;
 
void fun(){
    int x1,y1,x2,y2,x3,y3; cin>>x1>>y1>>x2>>y2>>x3>>y3;
    long long ax=x2-x1; long long ay=y2-y1;
    long long bx=x3-x1; long long by=y3-y1;
    long long z=(ax*by)-(ay*bx);
    if (z==0) {cout<<"TOUCH"<<endl;}
    else if (z>0) {cout<<"LEFT"<<endl;}
    else {cout<<"RIGHT"<<endl;}
}
 
int main(){
    int t; cin>>t;
    for (int i=0;i<t;i++){fun();}
}