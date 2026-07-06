class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int>hset;
        for(auto& x : nums){
            if(hset.contains(x)){
                return true;
            }
            else{
               hset.insert(x) ;
        }
    }
return false;
}
};