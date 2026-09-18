class Solution {
public:
    int totalFruit(vector<int>& fruits) {

        unordered_map<int, int> f;

        int low = 0;
        int maxLength = 0;

        for (int high = 0; high < fruits.size(); high++) {

            // Add current fruit
            f[fruits[high]]++;

            // More than 2 types
            while (f.size() > 2) {

                f[fruits[low]]--;

                if (f[fruits[low]] == 0) {
                    f.erase(fruits[low]);
                }

                low++;
            }

            // Current valid window
            int len = high - low + 1;

            maxLength = max(maxLength, len);
        }

        return maxLength;
    }
};