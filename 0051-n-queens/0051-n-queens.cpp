
class Solution {
public:
    vector<vector<string>> ans;
    bool valid(vector<string>& mat, int n, int r, int c) {
        for (int i = 0; i < r; i++) {
            if (mat[i][c] == 'Q')
                return false;
        }
        int i = r - 1;
        int j = c - 1;

        while (i >= 0 && j >= 0) {
            if (mat[i][j] == 'Q')
                return false;
            i--;
            j--;
        }

        i = r - 1;
        j = c + 1;

        while (i >= 0 && j < n) {
            if (mat[i][j] == 'Q')
                return false;
            i--;
            j++;
        }

        return true;
    }

    void allNQueens(int r, vector<string>& mat, int n) {
        if (r == n) {
            ans.push_back(mat);
            return;
        }
        for (int c = 0; c < n; c++) {
            if (valid(mat, n, r, c)) {
                mat[r][c] = 'Q';
                allNQueens(r + 1, mat, n);
                mat[r][c] = '.';
            }
        }
        return;
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<string> mat(n, string(n, '.'));
        allNQueens(0, mat, n);
        return ans;
    }
};
