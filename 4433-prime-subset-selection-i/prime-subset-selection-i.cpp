class Solution {
public:
    vector<int> prime;
    void primes(int n){
        vector<int> visited(n+1,0);

        for(int i=2;i*i<=n;i++){
            if(visited[i]==0){
                for(int j=i*i;j<=n;j+=i){
                    visited[j]=1;
                }
            }
        }
        for(int i=2;i<=n;i++){
            if(visited[i]==0){
                prime.push_back(i);
            }
        }
    }
    vector<int> maxPrimes(int n, int s) {
        primes(n);
        int sum=0;
        vector<int> ans;
        for(int i=0;i<prime.size();i++){
            sum+=prime[i];
            if(sum>s){
                break;
            }
            ans.push_back(prime[i]);
        }
        return ans;
    }
};