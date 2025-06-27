#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(2 * n);
    for (int i = 0; i < 2 * n; ++i)
        cin >> arr[i];

    vector<pair<int, int>> pos(n + 1);  
    vector<int> count(n + 1, 0);        

    for (int i = 0; i < 2 * n; ++i) {
        int val = arr[i];
        if (count[val] == 0)
            pos[val].first = i;
        else
            pos[val].second = i;
        count[val]++;
    }

    long long sum = 0;
    for (int i = 0; i < n; ++i) {
        int a1 = pos[i].first, a2 = pos[i].second;
        int b1 = pos[i + 1].first, b2 = pos[i + 1].second;

        int minDiff = min({
            abs(a1 - b1)+abs(a2-b2),
            abs(a1 - b2)+abs(a2-b1)
        });

        sum += minDiff;
    }

    cout << sum << endl;

}

