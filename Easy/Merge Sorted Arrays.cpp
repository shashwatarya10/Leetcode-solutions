class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>final;
        for(int i = 0; i <m; i++){
            final.push_back(nums1[i]);
        }
        for(int j = 0; j < n; j++){
            final.push_back(nums2[j]);
        }
        sort(final.begin(),final.end());
        nums1 = final;
    }
};
