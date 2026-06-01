class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i {0uz};
        int j = nums.size()-1;
        while(i<j){
            if(nums[i]+nums[j]==target){
                return true;
            }
            else if (nums[i]+nums[j]<target){
                i++;
            }
            else{
                j--;
            }
        } 
        return false;      
    }
};
