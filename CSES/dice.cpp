#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1e9 + 7; 

int countWays(int n, vector<int> &dp) {
    if (n == 0) return 1;     
    if (n < 0) return 0;     

    if (dp[n] != -1) return dp[n];  

    int res = 0;
    for (int i = 1; i <= 6; ++i) {
        res = (res + countWays(n - i, dp)) % MOD;
    }

    return dp[n] = res;
}

int main() {
    int n;
    cin >> n;  
    vector<int> dp(n + 1, -1); 
    cout << countWays(n, dp) << endl;
    return 0;
}
