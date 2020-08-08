class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int x = matrix.size() - 1;
        int y = 0;
        while (x >= 0 && y >=0 && x != matrix.size() && y != matrix[0].size()) {
            if (matrix[x][y] == target) {
                return true;
            } else if (matrix[x][y] > target) {
                x--;
            } else {
                y++;
            }
        }
        return false;
    }
};