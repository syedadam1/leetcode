class Solution {
public:
    int countDominantElements(vector<int>& nums) {
        int cnt=0;
        int n=nums.size();
        if(n==1){
            cnt++;
        }
        if(n>1){
            cnt+=(nums[0]>=nums[1])+(nums[n-1]>=nums[n-2]);
        }
        for(int i=1;i<n-1;i++){
            if(nums[i]>=(static_cast<double>(nums[i-1])+nums[i+1])/2){
                cnt++;
            }
        }
        return cnt;
    }
};