class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int, int> map;
    for(auto& x : nums){
        map[x]++;
    }
    vector<pair<int, int>>v;
    for(auto& y : map){
        v.push_back({y.second, y.first});
    }
    sort(v.begin(),v.end(),[](auto a, pair<int, int> b){
        return a.first>b.first;
    });
    vector<int> result;
    for(int i = 0; i < k; i++){
        result.push_back(v[i].second);
    }
    return result;
    }
};
