class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        for(auto& x : nums){
            map[x]++;
        }
        vector<pair<int,int>> ve;
        for(auto& x : map){
            v.push_back({x.second, x.first});
        }
        sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int>b){
            return a.first > b.first;
        });
        vector<int> result;
        for(auto i{0uz}; i < k; i++){
            result.push_back(v[i].second);
        }
        return result;
    }
};
