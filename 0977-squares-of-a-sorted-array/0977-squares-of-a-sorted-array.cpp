class Solution {
public:
    vector<int> sortedSquares(vector<int>& a) {
        
        int siz = a.size();
        vector<int> neg;
        vector<int> pos;

        for(int i=0; i<siz; i++) { 
            if (a[i] < 0) {       //psitive numbers into array
                neg.push_back(a[i]);
            }
            else {
                pos.push_back(a[i]);
            }
        }
        if (neg.size() == 0) {              //no negative element
            for(int i=0; i<pos.size(); i++) {
                pos[i] = pos[i]*pos[i];
            }
            return pos;
        }
        if (pos.size() == 0) {           //no positive element 
            for (int i=0; i<neg.size(); i++) {
                neg[i]=neg[i]*neg[i];
            }
            reverse(neg.begin(),neg.end());

            return neg;
        }

        int i=0;
        int j=0;
        int index=0;
        int n = neg.size();
        int m = pos.size();
        vector<int> result(n+m);

        for (int i=0; i<n; i++) {
            neg[i] = neg[i]*neg[i];
        }
        reverse(neg.begin(),neg.end());


        for (int i=0; i<m; i++) {
            pos[i] =pos[i]*pos[i];

        }
        while(i<n and j<m) {
            if (neg[i] <= pos[j]) {
                result[index] = neg[i];
                index++;
                i++;
            }
            
         else {
            result[index] = pos[j];
            index++;
            j++;
         }
        }
        while (i<n) {
            result[index] = neg[i];
            index++;
            i++;
        }
        while (j<m) {
            result[index] = pos[j];
            index++;
            j++;
        }
        return result;



    }
};