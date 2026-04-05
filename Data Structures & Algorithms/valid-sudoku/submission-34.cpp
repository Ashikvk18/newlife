class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<set<char>> r(9),c(9),b(9);
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                char ch = board[i][j];
                int x = (i/3)*3 + (j/3);
                if(ch!='.'){
                    if(r[i].count(ch)||c[j].count(ch)||b[x].count(ch)){
                        return false;}
                    else{
                        r[i].insert(ch);
                        c[j].insert(ch);
                        b[x].insert(ch);
                    }
                }
            }
        } 
         return true;
    }  
 };
