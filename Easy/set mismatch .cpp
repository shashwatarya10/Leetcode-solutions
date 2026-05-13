class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        int duplicate;
        int missing;

        //duplicate
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                if(nums[i]==nums[j]){
                    duplicate = nums[i];
                }
            }
        }
        //missing
        for(int i = 1; i <= n; i++){
            bool found = false;
            for(int j = 0; j < n; j++){
                if(nums[j]==i){
                    found = true;
                    break;
                }
            }
            if(found == false)
            missing = i;
        }
        return {duplicate, missing};
    }
};
