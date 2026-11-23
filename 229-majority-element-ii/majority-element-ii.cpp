class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        map<int,int> m;
        vector<int> ans;
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        for(auto[key,val]:m){
            if(val>(n/3)){
                ans.push_back(key);
            }
        }
        return ans;
    }
};