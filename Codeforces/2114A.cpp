#include <iostream>
#include <cmath>
using namespace std;

void fun(){
    int n; cin>>n;
    if (sqrt(n) == floor(sqrt(n))) {
        cout <<0<<" "<<floor(sqrt(n));
    } else {
        cout << -1;
    }
}

int main(){
    int t; cin>>t;
    for (int i=0;i<t;i++){ fun();cout<<endl; }  
}
