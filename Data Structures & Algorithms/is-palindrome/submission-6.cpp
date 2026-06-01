class Solution {
public:
    bool valid(char c){
            return ('A' <= c && c <= 'Z' )||('a' <= c && c <= 'z')||('0' <= c && c <= '9');
        }
    bool isPalindrome(string s) {
        int i {0uz};
        int j = s.length()-1;
        while(i<j){
            while(i<j && !valid(s[i])){
                i++;
            }
            while(j>i && !valid(s[j])){
                j--;
            }
            if(s[i].to_lower()=s[j].to_lower()){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
