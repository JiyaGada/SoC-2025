#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;
    if (n==1){cout<<"1";}
    else if (n<4){cout<<"NO SOLUTION";}
    else {
        int t=n-1;
        while (t>0){cout<<t<<" ";t-=2;}
        while (n>0){cout<<n<<" ";n-=2;}
    }
}