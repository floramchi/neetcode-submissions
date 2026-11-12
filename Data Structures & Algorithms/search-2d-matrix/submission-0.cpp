class Solution {
public:
bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int> arr;
        for(auto &row: matrix) {
            for(int num: row) {
                arr.push_back(num);
            }
        }

        int left = 0;
        int right = arr.size()-1;

        while(left <= right) {
            int mid = (left + right)/2;
            if(arr[mid] == target) {
                return true;
            }

            else if(arr[mid] < target) {
                left++;
            }

            else {
                right--;
            }
        }

        return false;
    }
};
