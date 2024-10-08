class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>prodPrefix(n);
        vector<int>prodSuffix(n);
        prodPrefix[0] = 1;
        for(int i=1; i<n; i++){
            prodPrefix[i] = prodPrefix[i-1]*nums[i-1];
            cout << i << " " << prodPrefix[i]<< endl;
        }

        prodSuffix[n-1] = 1;
        for(int i=n-2; i>=0; i--){
            prodSuffix[i] = prodSuffix[i+1]*nums[i+1];
        }
        vector<int>res(n);
        for(int i=0; i<n; i++){
            res[i] = prodPrefix[i]*prodSuffix[i];
        }
        return res;

    }
};