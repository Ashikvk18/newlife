class Solution {
public:
    bool isAnagram(string s, string t) {
    unordered_map<char,int>map;
    if(s.length()!=t.length()){
        return false;
    }
    for(auto& x : s){
        map[x]++;
    }
     for(auto& y : t){
        map[y]--;
    }
    for(auto& z : map){
        if(z.second != 0){
            return false;
        }
    }
    return true;
    }
};
