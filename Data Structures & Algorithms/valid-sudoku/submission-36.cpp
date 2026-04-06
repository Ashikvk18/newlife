class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<set<char>> r(9),c(9),b(9);
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                char ch = board[i][j];
                int x = (i/3)*3 + (j/3);
                if(c!='.'){
                    if(r[i].contains(c)||c[j].contains(c)||b[x].contains(c)){
                        return false;
                    }
                    else{
                        r[i].insert(c);
                        c[j].insert(c);
                        b[x].insert(c);
                    }
                }
            }
        }
        return true;
    }  
 };
