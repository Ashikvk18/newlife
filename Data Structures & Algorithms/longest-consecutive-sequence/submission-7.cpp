class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>set(nums.begin(), nums.end());
        int maxR = 0;
        for(auto& x : set){
            if(!set.contains(x-1)){
                int current = x;
                int streak = 1;
                while(set.contains(x+1)){
                    current++;
                    streak++;
                    maxR = max(maxR, streak);
                }
            }
        }
        return maxR;
    }
};
