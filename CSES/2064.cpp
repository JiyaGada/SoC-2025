#include <iostream>
#include <vector>
using namespace std;
 
const int MOD = 1e9 + 7;
const int MAX = 2e6 + 5;
 
vector<long long> fact(MAX), invFact(MAX);
 
 
long long modPow(long long base, long long exp) {
    long long result = 1;
    while (exp > 0) {
        if (exp & 1) result = (result * base) % MOD;
        base = (base * base) % MOD;
        exp >>= 1;
    }
    return result;
}
 
void precomputeFactorials(int n) {
    fact[0] = 1;
    for (int i = 1; i <= 2 * n; ++i)
        fact[i] = (fact[i - 1] * i) % MOD;
 
    invFact[2 * n] = modPow(fact[2 * n], MOD - 2); 
    for (int i = 2 * n - 1; i >= 0; --i)
        invFact[i] = (invFact[i + 1] * (i + 1)) % MOD;
}
 
long long binomial2nCn(int n) {
    return (((fact[2 * n] * invFact[n+1]) % MOD) * invFact[n]) % MOD;
}
 
int main() {
    int n;
    cin >> n;
    if (n%2==1) {cout<<0;}
    else {
        precomputeFactorials(n/2);
        cout<<binomial2nCn(n/2);
    }
}