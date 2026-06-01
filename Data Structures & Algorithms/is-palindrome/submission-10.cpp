class Solution {
public:
    bool isPalindrome(string s) {
        int i {0uz};
        int j = s.size()-1;
        while(i<j){
            while(i<j && !alphaNum(s[i])){
                i++;
            }
            while(j<i && !alphaNum(s[j])){
                j--;
            }
            if(tolower(s[i])!=tolower(s[j])){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
