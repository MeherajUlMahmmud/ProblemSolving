class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // Start our at a location where we have reduced search space. How do we know our search space
        // is reduced at the bottom left? Because at that location we can either go right, finding greater
        // numbers, or up, finding lower numbers. If we started at the bottom right, regardless of 
        // where we go, (up or left), we are finding lower numbers, the computer would be confused
        // as to which direcction it should take, given that both directions lead to lower numbers.
        // Starting at the bottom left we force the computer to either go to a lower number or higher number.
        int x = matrix.size() - 1;
        int y = 0;
        while (x >= 0 && y >=0 && x != matrix.size() && y != matrix[0].size()) { // Don't go off the grid
            if (matrix[x][y] == target) {
                return true;
            } else if (matrix[x][y] > target) { // If too big, we need to go down.
                x--;
            } else { // Too small? Go right.
                y++;
            }
        }
        return false;
    }
};