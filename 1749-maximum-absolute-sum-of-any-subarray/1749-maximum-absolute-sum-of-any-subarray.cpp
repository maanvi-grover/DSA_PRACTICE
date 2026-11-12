class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {

        int max_sum = 0;
        int min_sum = 0;

        int current_max = 0;
        int current_min = 0;

        for(int i = 0; i<nums.size(); i++) {

            current_max = max(nums[i], current_max + nums[i]);
            current_min = min(nums[i], current_min + nums[i]);

            max_sum = max(max_sum, current_max);
            min_sum = min(min_sum, current_min);

        } 
        return max(max_sum, abs(min_sum));
    }
};