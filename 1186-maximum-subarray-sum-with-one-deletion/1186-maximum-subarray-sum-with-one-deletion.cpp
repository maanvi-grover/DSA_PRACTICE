class Solution {
public:
    int maximumSum(vector<int>& arr) {

        int nodelete = arr[0];
        int onedelete = INT_MIN;
        int result = arr[0];

        for(int i = 1; i < arr.size(); i++) {

            int prev_nodelete = nodelete;
            int prev_onedelete = onedelete;

            nodelete = max(prev_nodelete + arr[i], arr[i]);

            int v2;

            if(prev_onedelete == INT_MIN) {
                v2 = INT_MIN;
            }
            else {
                v2 = prev_onedelete + arr[i];
            }

            onedelete = max(prev_nodelete, v2);

            result = max(result, max(nodelete, onedelete));
        }

        return result;
    }
};