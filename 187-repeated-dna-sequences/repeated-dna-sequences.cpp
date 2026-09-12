class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        map<string,int> m;
        int n=s.size();
        int start=0;
        while(start<=n-10){
            string temp=s.substr(start,10);
            m[temp]++;
            start++;
        }
        vector<string> ans;
        for(auto x:m){
            if(x.second>1){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};