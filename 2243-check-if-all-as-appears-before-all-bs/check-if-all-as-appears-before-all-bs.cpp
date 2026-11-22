class Solution {
public:
    bool checkString(string s) {
        bool x=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='b'){
                x=1;
            }
            if(s[i]=='a' && x==1){
                return false;
            }
        }
        return true;
    }
};