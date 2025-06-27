//1520B
#include<iostream>
#include<string>
using namespace std;

void fun(){
    int n,count=0; cin>>n;
    int no_of_digits=to_string(n).length();
    count += (no_of_digits-1)*9;
    for (int i=1;i<10;i++){
        char c=i+'0';
        string s(no_of_digits,c);
        int number=stoi(s);
        if (number<=n){count++;}
        else {break;}
    }
    cout<<count;
}
int main(){
    int t;
    cin>>t;
    for (int i=0;i<t;++i) {fun(); cout<<endl;}
}