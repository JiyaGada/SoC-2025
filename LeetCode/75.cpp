#include <map>
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x;
        map <int, int> m;
        for (int num : nums){m[num]+=1;}
        for (auto it : m){
            if (it.second==1){x= it.first;break;}
        }
        return x;
    }
};