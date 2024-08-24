class Solution {
    unordered_map<int, int>hash;
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        for(int i=0; i<nums.size(); i++){
            if(hash.find(nums[i])!=hash.end()){
                cout << "inside if";
                hash[nums[i]]++;
            }                   
            else{
                cout << "inside else";
                hash[nums[i]] = 1;
            }
        }
        unordered_map<int, int>::iterator itr;
        for(itr = hash.begin(); itr!=hash.end(); itr++){
            cout <<itr->first << " " << itr->second << endl;
            if(itr->second > n/2)
                return itr->first;
        }
        return -1;
        
    }
};