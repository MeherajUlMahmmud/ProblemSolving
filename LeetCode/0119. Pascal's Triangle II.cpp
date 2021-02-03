class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> triangle;
        vector<int> row, prev_row;
        
        row.push_back(1);
        triangle.push_back(row);
        
        if(rowIndex == 0)
            return triangle[rowIndex];
        
        
        for(int i = 1; i < rowIndex + 1; i++) {
            row.clear();
            prev_row = triangle[i - 1];
            
            row.push_back(1);
            
            for(int j = 1; j < i; j++) {
                row.push_back(prev_row[j-1] + prev_row[j]);
            }
            row.push_back(1);
            triangle.push_back(row);
        }
        
        return row;
    }
};