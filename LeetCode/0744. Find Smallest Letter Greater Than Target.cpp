class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        if (target < letters[0] || target >= letters.back())
			return letters[0];
        
        int left = 0;
        int right = letters.size() - 1;
        
        while(left <= right) {
            int mid = left + (right - left) / 2;
            if(letters[mid] <= target)
                left = mid + 1;
            else
                right = mid - 1;
        }
        return letters[left];
    }
};
