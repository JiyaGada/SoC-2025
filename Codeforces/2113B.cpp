#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t; cin>>t;
    while (t--){
        int a,b,w,h,x1,y1,x2,y2;
        cin>>w>>h>>a>>b>>x1>>y1>>x2>>y2;
        if ((x1!=x2 && abs(x1-x2)%a==0)||(y1!=y2 && abs(y1-y2)%b==0)){
            cout<<"Yes"<<endl;
        }
        else {
            cout<<"No"<<endl;
        }
    }
}
