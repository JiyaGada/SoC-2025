#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<map>

using namespace std;

string fun(){
    int n; cin>>n;
    map<char, int>m;
    char last,first;
    cin>>first;
    for (int i=1;i<n-1;i++){char x; cin>>x;m[x]++;}
    cin>>last;
    for (auto pair : m){
        if (pair.second>=2) {return "Yes";}
    }
    if (m[last]==1 || m[first]==1){return "Yes";}
    return "No";
}
int main(){
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        cout<<fun()<<endl;
    }
}
