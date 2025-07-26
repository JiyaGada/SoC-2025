#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
#include<map>

using namespace std;

int fun(){
    int n,m;
    cin>>n>>m;
    int max=0;
    map<pair<int,int>,int> mp;
    int arr[n][m];
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){int x;cin>>x;arr[i][j]=x;if (x>max){max=x;}}
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            if (max==arr[i][j]){mp.insert({{i,j},0});}
        }
    }
    if (mp.size()<=2) {return max-1;}
    bool flag1=true,flag2=true,flag3=true,flag4=false,flag5=false;
    int row1=0,col1=0,col2=0,row2=0,row=0,col=0;

    for (auto entry : mp){
        pair<int, int> p = entry.first;
        if (flag1){row1=p.first;col1=p.second;flag1=false;}
        else if (flag2){row2=p.first;col2=p.second;flag2=false;
            if (row2==row1){row=row1;flag4=true;flag3=false;}
            else if (col2==col1){col=col1;flag5=true;flag3=false;}
        }
        else if (flag4 && p.first!=row){col=p.second;flag4=false;}
        else if (flag5 && p.second!=col){row=p.first;flag5=false;}
        else if (flag3){
            if (p.first==row1 || p.second==col2){row=row1;col=col2;}
            else if (p.first==row2 || p.second==col1){row=row2;col=col1;}
            else {return max;}
            flag3=false;
        }
        else {
            
            if (p.first!=row && p.second!=col){return max;}
        }
    }
    return max-1;
}
int main(){
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        cout<<fun()<<endl;
    }
}
