class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        int maxR = 0;
        
        for(auto& y : nums){
            if(!nums.contains(y-1)){
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
