class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n = nums.size();
        int index = 0;
        int largest = 0;
        for(int i = 0; i < n; i++){
            if(nums[i]>largest){
                largest = nums[i];
                index = i;
            }
    }
        int secondlargest = 0;
        for(int i = 0; i < n; i++){
        if(nums[i]<largest){
        secondlargest = max(secondlargest,nums[i]);
        }
    }
    if(largest>=2*secondlargest){
        return index;
    }
    else 
    return -1;
    }
};
