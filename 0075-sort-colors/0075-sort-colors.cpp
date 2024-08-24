class Solution {
public:
    void sortColors(vector<int>& nums) {
        int numZeros = 0;
        int numOnes = 0;
        int numTwos = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0)
                numZeros++;
            else if(nums[i]==1)
                numOnes++;
            else
                numTwos++;
        }
        cout << numZeros << endl;
        cout << numOnes << endl;
        cout << numTwos << endl;
        int i;
        for(i=0; i<numZeros; i++)
            nums[i] = 0;
        for(; i<numOnes+numZeros; i++)
            nums[i] = 1;
        for(; i<nums.size(); i++)
            nums[i] = 2;
        
    }
};