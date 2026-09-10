class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
              m[nums[i]]++;
        }
        vector<int> ans;
        vector<pair<int,int>> p;
        for(auto [key,val]:m){
            p.push_back({val,key});
        }
        sort(p.rbegin(),p.rend());
        for(int i=0;i<p.size();i++){
            ans.push_back(p[i].second);
            k--;
            if(k==0){
                break;
            }
        }
        return ans;
    }
};