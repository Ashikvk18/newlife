#include <iostream>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> set;
        for(auto& x : nums){
            if(set.contains(x)){
                return true;
            }
            else{
                set.insert(x);
            }
        }
        return true;
        }
};