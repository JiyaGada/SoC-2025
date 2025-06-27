#include <iostream>
#include <vector>
#include <map>
#include <climits>
using namespace std;

void fun() {
    int n; cin>>n;
    map<int, vector<int>> indexMap;
    for (int i = 0; i < n; ++i){
        int x; cin>>x;
        indexMap[x].push_back(i);
    }

    int minDiff = INT_MAX;

    for (auto& [val, idx] : indexMap)
        for (int i = 1; i < idx.size(); ++i)
            minDiff = min(minDiff, idx[i] - idx[i - 1]);

    cout << (minDiff == INT_MAX ? -1 : minDiff+1);
}
int main(){
    int t; cin>>t;
    for (int i=0;i<t;i++){
        fun(); cout<<endl;
    }
}