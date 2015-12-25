#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool isValidSudoku(vector< vector<char> >& board) {
    bool validate[27][9] = {false};
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (board[i][j] == '.') continue;

            if (validate[i][board[i][j] - '1']) {
                return false;
            }
            validate[i][board[i][j] - '1'] = true;
        }
    }

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (board[j][i] == '.') continue;

            if (validate[9+i][board[j][i] - '1']) {
                return false;
            }
            validate[9+i][board[j][i] - '1'] = true;
        }
    }
    int k = 0;
    for (int i = 0; i < 9; i+=3) {
        for (int j = 0; j < 9; j+=3) {
            for (int m = 0; m < 3; m++) {
                for (int n = 0; n < 3; n++) {
                    if (board[i+m][j+n] == '.') continue;
                    if (validate[18+k][board[i+m][j+n] - '1']) {
                        return false;
                    } 
                    validate[18+k][board[i+m][j+n] - '1'] = true;
                }
            }
            k++;
        }
    }
    return true;
}

int main() {
    vector< vector<char> > board(9, vector<char>(9, '.'));
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            board[i][j] = '1' + j;
        }
    }
    bool result = isValidSudoku(board);
    cout << result << endl;

    return 0;
}
