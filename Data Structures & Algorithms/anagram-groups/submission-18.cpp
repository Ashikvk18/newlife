class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, string> map;
     for(auto& x : strs){
        string s = x;
        sort(s.begin(),s.end());
        map[s].insert(x);
     }
     vector<vector<string>> result;
     for(auto& y: map){
        result.insert(y.second);
     }
     return result;
    }
};
