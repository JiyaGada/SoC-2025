#include <iostream>
using namespace std;
const int MOD = 1e9 +7;
long long power(long long base, long long exp) {
    long long res = 1;
    base %= MOD;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp /= 2;
    }
    return res;
}
int main()
{
    int n,m; cin>>n>>m;
    long long arr[n+m]; long long inv[n+m];
    arr[0]=1; 
    for (int i=1;i<n+m;i++){
        arr[i]=(i*arr[i-1])%MOD;
    }
 
    inv[n+m - 1] = power(arr[n+m - 1], MOD - 2); // Inverse of (N-1)!
    for (int i = n+m - 2; i >= 0; --i) {
        inv[i] = (inv[i + 1] * (i + 1)) % MOD; // (i!)^-1 = ((i+1)!)^-1 * (i+1)
    }
    cout<<(((arr[n+m-1]*inv[n-1])%MOD)*inv[m])%MOD;
}
