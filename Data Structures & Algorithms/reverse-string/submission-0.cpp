class Solution {
public:
    void reverseString(vector<char>& s) {
        int i {0uz};
        int j = s.size()-1;
        int temp {0uz};
        while(i<j){
            s[i]=temp;
            temp=s[j];
            s[j]=s[i];
            i++;
            j--;
        }
    }
};