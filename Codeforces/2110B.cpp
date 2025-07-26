#include<iostream>
#include<string>
using namespace std;
void fun(){
    string s; cin>>s;
    int o=0,c=0;
    bool flag=false;
    for (int i=0;i<s.size()-1;i++){
        if (s[i]=='(') {o++;}
        else if (s[i]==')') {c++;}
        if (o==c){flag=true;break;}
    }
    if (flag){cout<<"YES";}
    else {cout<<"NO";}
}
int main(){
    int t;cin>>t;
    for (int i=0;i<t;i++){fun();cout<<endl;}
}
