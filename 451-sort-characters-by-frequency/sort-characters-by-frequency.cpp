class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> m;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        vector<pair<int,int>> p;
        for(auto [key,val]:m){
            p.push_back({val,key});
        }
        sort(p.rbegin(),p.rend());
        string ans;
        for(int i=0;i<p.size();i++){
             for(int j=0;j<p[i].first;j++){
                ans.push_back(p[i].second);
             }
        }
        return ans;
    }
};