#include <iostream>
using namespace std;
const int MOD = 1e9 +7;
int main()
{
    int n; cin>>n;
    long long arr[n];
    arr[0]=0; arr[1]=1;
    for (int i=2;i<n;i++){
        arr[i]=(i*(arr[i-1]+arr[i-2]))% MOD;
    }
    cout<<arr[n-1]  ;
    return 0;
}