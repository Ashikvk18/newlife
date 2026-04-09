class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        for(auto& x : nums){
            map[x]++;
        }
        vector<pair<int,int>> vector;
        for(auto& x : map){
            vector.push_back({x.second, x.first});
        }
        sort(vector.begin(), vector.end(), [](pair<int, int> a, pair<int, int>b){
            return a.first > b.first;
        });
        vector<int> result;
        for(auto i{0uz}; i < k; i++){
            result.push_back(vector[i].second);
        }
        return result;
    }
};
