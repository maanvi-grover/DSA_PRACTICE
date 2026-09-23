class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int slow = 0;
        int fast = 0;
        int n = nums.size();

        while (fast < n) {
            if (nums[fast] == 0) {
                fast++;
            } else {
                swap(nums[fast], nums[slow]);
                slow++;
                fast++;
            }
        }
    }
};
 