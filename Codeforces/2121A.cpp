#include<iostream>
#include<algorithm>

using namespace std;

int fun(){
    int n,s;
    cin>>n>>s;
    int arr[n];
    for (int i=0;i<n;i++){cin>>arr[i];}
    if (s>=arr[n-1]){return s-arr[0];}
    else if (s<=arr[0]){return arr[n-1]-s;}
    else {
        return arr[n-1]-arr[0]+min(s-arr[0],arr[n-1]-s);
    }
}
int main(){
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        cout<<fun()<<endl;
    }
}
