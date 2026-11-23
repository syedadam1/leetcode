class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //kadanes
        int current_sum=-100000;
        int max_sum=-100000;
        int n=nums.size();
        for(int i=0;i<n;i++){
            current_sum=max(nums[i],current_sum+nums[i]);
            max_sum=max(max_sum,current_sum);
        }
        return max_sum;
    }
};