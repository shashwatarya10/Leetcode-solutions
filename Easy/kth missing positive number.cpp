class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int>missing;
        int n = arr.size();
        for(int i = 1; missing.size() <= k; i++){
            bool found = false;
           for(int j = 0; j < n; j++ ){
                if(i == arr[j]){
                    found = true;
                    break;
                }
               }
            if (found == false) {
             missing.push_back(i);
            }
        }
        return missing[k-1];
    }
};
