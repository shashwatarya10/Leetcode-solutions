class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int single = 0;
        //if only one element in array
            if(n==1){
            return nums[0];
            }
        //first element
            if(nums[0]!=nums[1]){
                return nums[0];
            }
        //last element
            if(nums[n-1] != nums[n-2]){
               return nums[n-1];
            }
        //middle element 
            for(int i = 1; i < n-1; i++){
            if(nums[i-1]!=nums[i] and nums[i+1]!=nums[i]){
            return nums[i];
            break;
            }
        }
    return 0;
    }
};
