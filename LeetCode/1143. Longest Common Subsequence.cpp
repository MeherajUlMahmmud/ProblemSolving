class Solution {
public:
    int longestCommonSubsequence(string x, string y) {
        int m = x.size(), n = y.size();
        int matrix[m+1][n+1];

        for(int i = 0; i <= m; i++) {
            matrix[i][0] = 0;
        }

        for(int i = 0; i <= n; i++) {
            matrix[0][i] = 0;
        }
        
        for(int i = 1; i <= m; i++) {
            for(int j = 1; j <= n; j++) {
                if(x[i-1] == y[j-1]) {
                    matrix[i][j] = matrix[i-1][j-1] + 1;
                }
                else {
                    matrix[i][j] = max(matrix[i-1][j], matrix[i][j-1]);
                }
            }
        }
        
        return matrix[m][n];
    }
};
