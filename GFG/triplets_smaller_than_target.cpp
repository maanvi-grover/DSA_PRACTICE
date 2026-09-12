#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int countTriplets(int target, vector<int>& nums) {
        
        int n = nums.size();
        int count = 0;
        
        sort(nums.begin(), nums.end());
        
        for(int i=0; i<n-2;i++) {
            
            int left = i+1;
            int right = n-1;
            
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                
                if (sum < target) {
                    count += right - left;
                    left++;
                } else {
                    right--;
                }
            }
        }  
        return count;

    }
};