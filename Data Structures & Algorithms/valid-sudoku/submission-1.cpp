class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            unordered_set<char> rowcheck;
            for(int j=0;j<9;j++){
                if(board[i][j] == '.'){
                    continue;
                }
                if( rowcheck.find(board[i][j]) != rowcheck.end()){
                    return false;
                }
                rowcheck.insert(board[i][j]);
            }
        }
        for(int i=0;i<9;i++){
            unordered_set<char> colcheck;
            for(int j=0;j<9;j++){
                if(board[j][i] == '.'){
                    continue;
                }
                if( colcheck.find(board[j][i]) != colcheck.end()){
                    return false;
                }
                colcheck.insert(board[j][i]);
            }
        }

        for(int boxrow=0;boxrow<3;boxrow++){
            for(int boxcol =0;boxcol<3;boxcol++){
    
                unordered_set<char> box;
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
        
                int startrow= boxrow *3;
                int startcol = boxcol *3;
                if(board[startrow+i][startcol+j] == '.'){
                    continue;
                }
                if( box.find(board[startrow+i][startcol+j]) != box.end()){
                    return false;
                }
                box.insert(board[startrow+i][startcol+j]);
                    }
                }
            }
        }

        return true;
    }
};
