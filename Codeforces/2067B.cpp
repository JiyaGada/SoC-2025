#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<algorithm>
#include<cmath>

using namespace std;
const int MOD = 1e9+7;



void fun(){
    int n,min; cin>>n;
    map<int, int>mp;
    cin>>min; mp[min]++;
    int max=min;
    bool flag =true;
    for (int i=1;i<n;i++){
        int x; cin>>x;
        mp[x]++;
        if (x<min){min=x;}
        else if (x>max){max=x;}
    }
    while (min!=max){
        if (mp[min]==0){min++;}
        else if (mp[min]==1){cout<<"No"<<endl; flag=false;break;}
        else {
            mp[min+1]+=mp[min]-2;
            mp[min]=0;
            min++;
        }
    }
    if (flag){
        if (mp[max]%2==0){cout<<"Yes"<<endl;}
        else {cout<<"No"<<endl;}
    }
}

int main(){
    int t; cin>>t;
    while (t--){fun();}
}
