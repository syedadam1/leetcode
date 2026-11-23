class ProductOfNumbers {
public:
    vector<int> a;
    ProductOfNumbers() {
        
    }
    
    void add(int num) {
       a.push_back(num);
    }
    
    int getProduct(int k) {
         int i=a.size()-1;
         int ans=1;
         while(k--){
            ans*=a[i];
            i--;
         }
         return ans;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */