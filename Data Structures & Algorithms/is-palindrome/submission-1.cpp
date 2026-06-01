class Solution {
public:
    bool isPalindrome(string s) {
        int i {0uz};
        int j = s.length()-1;
        while(i<j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};
