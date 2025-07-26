#include <iostream>
#include<cmath>
using namespace std;
int main() {
    int t; cin>>t;
    while (t--){
        int a,b,x,y; cin>>a>>b>>x>>y;
        if (a==b) {cout<<0<<endl;}
        else if (a%2==0){
            if (b>a){
                if (b%2==0){cout<<((b-a)/2)*(min(x,y)+x) <<endl;}
                else {cout<<((b-a)/2)*(min(x,y)+x)+min(x,y) <<endl;}
            }
            else {cout<<-1<<endl;}
        }
        else {
            if (b>a){
                if (b%2==1){cout<<((b-a)/2)*(min(x,y)+x) <<endl;}
                else {cout<<((b-a)/2)*(min(x,y)+x)+x <<endl;}
            }
            else if (a-b==1){cout<<y<<endl;}
            else {cout<<-1<<endl;}
        }
        
    }
}
