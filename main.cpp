class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int> res(A.size());
        int startIndex = 0;
        int endIndex = A.size() - 1;
        
        for (int i = 0; i < A.size(); ++i) {
            if (A[i] % 2 == 0) {
                res[startIndex++] = A[i];
            }
            else {
                res[endIndex--] = A[i];
            }
        }
        
        return res;
    }
};
