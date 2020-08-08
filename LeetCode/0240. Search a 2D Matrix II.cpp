class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size() == 0 || matrix[0].size() == 0)
            return false;
        
        int rows = matrix.size() - 1;
        int cols = matrix[0].size() - 1;
        
        if(target > matrix[rows][cols] || target < matrix[0][0])
            return false;
        
        int left = 0;
        int right = cols;
        
        while(left <= rows && right >= 0) {
            if(target == matrix[left][right])
                return true;
            else if(target < matrix[left][right])
                right--;
            else
                left++;
        }
        
        return false;
    }
};
