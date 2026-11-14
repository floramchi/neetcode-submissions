class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        for(int i=0; i<nums.size(); i++) {
            s.insert(nums[i]);
        }

        int maxLength = 0;
        for(auto num: s) {
            if(s.find(num-1) == s.end()) {
                int curr = num;
                int count = 1;

                while(s.find(curr+1) != s.end()) {
                    curr++;
                    count++;
                }

                maxLength = max(maxLength, count);
            }

        }

        return maxLength;
    }
};
