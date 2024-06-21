class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>hmap;
        int i = 0;
        for(auto x: hmap){
            //x.first = i;
            x.second = 0;
            //i++;
        }
        for(auto num: nums){
            hmap[num] += 1;
        }
        unordered_map<int, int>::iterator itr;
        for(itr = hmap.begin(); itr!=hmap.end(); itr++){
            //cout<<itr->first<<" "<<itr->second<<endl;
            if(itr->second ==1)return itr->first;
        }
        //itr = hmap.find(hmap.second==1);
        //if(itr!=hmap.end())return itr->first;
        return -1;
    }
};