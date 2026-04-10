class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        int maxR = 0;
        for(auto& x : nums){
            s.insert(x);
        }
        for(auto& y : s){
            if(!s.contains(y-1)){
                int current = y;
                int streak = 1;
                while(s.contains(current + 1)){
                    current++;
                    streak++;
                }
                maxR = max(maxR, streak);
            }
        }
        return maxR;
    }
};
