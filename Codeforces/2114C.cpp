#include <iostream>
#include <vector>
using namespace std;

void fun(){
    int n,count=1; cin>>n;
    vector <int> s;
    for (int i=0;i<n;i++){ int x; cin>>x; if (i==0 || x!=s.back()){s.push_back(x);} }
    if (s.size()==1){cout<<1;}
    else {
        if (s[1]-s[0]>1){count ++;}
        for (int i=2;i<s.size();i++){
            if (s[i]-s[i-1]==1 && s[i-1]-s[i-2]==1){
                count ++;
                s[i-1]=-5;
            } else if (s[i]-s[i-1]>1){count ++;}
        }
        cout<<count;
    }
}

int main(){
    int t; cin>>t;
    for (int i=0;i<t;i++){ fun();cout<<endl; }  
}
