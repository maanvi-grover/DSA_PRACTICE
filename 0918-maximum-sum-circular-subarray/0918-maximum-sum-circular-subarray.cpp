class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {

        int bestmaxsum = nums[0];
        int bestminsum = nums[0];
        int result = nums[0];

        int sumofarray = 0;

        for(int i = 0; i < nums.size(); i++) {
            sumofarray += nums[i];
        }

        int currentmax = nums[0];
        int currentmin = nums[0];

        for(int i = 1; i < nums.size(); i++) {

            currentmax = max(currentmax + nums[i], nums[i]);
            currentmin = min(currentmin + nums[i], nums[i]);

            bestmaxsum = max(bestmaxsum, currentmax);
            bestminsum = min(bestminsum, currentmin);
        }

        if(bestmaxsum < 0) {
            return bestmaxsum;
        }

        result = max(bestmaxsum, sumofarray - bestminsum);

        return result;
    }
};