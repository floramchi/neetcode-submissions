class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> last(256, -1);
        int maxi = 0, l = 0;
        for(int r = 0; r < s.size(); r++) {
            char c = s[r];
            if(last[c] >= l) {
                l = last[c] +1;
            }

            last[c] = r;
            maxi = max(maxi, r-l+1);
        }

        return maxi;
    }
};
