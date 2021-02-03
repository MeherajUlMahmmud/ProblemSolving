class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxAltitude = 0, prev = 0;
        for(int i = 0 ; i < gain.size(); i++) {
            int alt = gain[i] + prev;
            maxAltitude = max(maxAltitude, alt);
            prev = alt;
        }
        
        return maxAltitude;
    }
};