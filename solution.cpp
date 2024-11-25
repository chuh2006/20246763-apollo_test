#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void solve(vector<vector<char>>& board) {
        for(int row=0; row<board.size(); row++){
            for(int col=0; col<board[row].size(); col++){
                if((row==0 || row==board.size()-1 || col==0 || col==board[row].size()-1) && board[row][col]=='O'){
                    nengjinshou(board, row, col);
                }
            }
        }
        for(int row=0; row<board.size(); row++){
            for(int col=0; col<board[row].size(); col++){
                if(board[row][col]=='O') board[row][col] = 'X';
                if(board[row][col]=='0') board[row][col] = 'O';
            }
        }
    }
private:
    void nengjinshou(vector<vector<char>>& board, int row, int col){
        if(row<0 || row>=board.size() || col<0 || col>=board[row].size() || board[row][col]!='O') return;
        board[row][col] = '0';
        nengjinshou(board, row-1, col);
        nengjinshou(board, row+1, col);
        nengjinshou(board, row, col-1);
        nengjinshou(board, row, col+1);
    }
};
