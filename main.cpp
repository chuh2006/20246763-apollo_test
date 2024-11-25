#include <iostream>
#include <vector>
#include "solution.cpp"
using namespace std;

int main(){
    vector<vector<char>> board = {
        {'X', 'X', 'X', 'X'},
        {'X', 'O', 'O', 'X'},
        {'X', 'X', 'O', 'X'},
        {'X', 'O', 'X', 'X'}
    };
    Solution().solve(board);
    cout << "结果是：" << endl;
    for(int row=0; row<board.size(); row++){
        for(int col=0; col<board[row].size(); col++){
            cout << board[row][col] << " ";
        }
        cout << endl;
    }
    cin.get();
    return 0;
}
