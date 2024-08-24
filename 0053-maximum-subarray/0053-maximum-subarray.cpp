    class Solution {
    public:
        /*tuple<int,int, int> maxCrossingSubarray(vector<int>&nums, int l, int mid, int h){
            int leftSum = INT_MIN;
            int rightSum = INT_MIN;
            int sum = 0;
            int maxleft = 0;
            int maxright = 0;
            for(int i = mid; i>=l; i--){
                sum += nums[i];
                if(sum>leftSum){
                    leftSum = sum; 
                    maxleft = i;
                    cout << leftSum << endl;
                }
            }
            sum = 0;
            for(int i = mid+1; i<=h; i++){
                sum += nums[i];
                if(sum>rightSum){
                    rightSum = sum;
                    maxright = i;
                    cout << rightSum << endl;
                }
            }
            return make_tuple(maxleft, maxright, leftSum+rightSum);
        }
        tuple<int, int, int> findMaxSubarray(vector<int>&nums, int low, int h){
            if(low == h)
                return make_tuple(low, h, nums[low]);
            else{
                int mid = (low+h)/2;
                tuple<int, int, int>l = findMaxSubarray(nums, low, mid);
                tuple<int, int, int>r = findMaxSubarray(nums, mid+1, h);
                tuple<int, int, int>c = maxCrossingSubarray(nums, low, mid, h);
                if(get<2>(l) >= get<2>(r) and get<2>(l) >= get<2>(c)){
                    return l;
                }
                else if(get<2>(r) >= get<2>(l) and get<2>(r) >= get<2>(c)){
                    return r;
                }
                else{
                    return c;
                }

            }
        }*/

        int maxSubArray(vector<int>& nums) {           
            int currSubarray = nums[0];
            int maxSubarray = nums[0];
            for(int i = 1; i < nums.size(); i++){
                int num = nums[i];
                currSubarray = max(num, currSubarray+num);
                maxSubarray = max(maxSubarray, currSubarray);
            }
            return maxSubarray;
        }

    };