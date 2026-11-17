class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();
        int l = 0;
        vector<int> freq1(26, 0);
        vector<int> freq2(26, 0);
        if(n > m ) return false;
        for(auto c: s1) {
            freq1[c - 'a']++;
        }

        for(int r=0; r<m; r++) {
            freq2[s2[r] - 'a']++;

            if(r-l+1 > n) {
                freq2[s2[l] - 'a']--;
                l++;
            }

            if(freq1 == freq2){
                return true;
            }
        }

        return false;
    }
};
