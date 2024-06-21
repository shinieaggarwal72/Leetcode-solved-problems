class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        /*if(left==right)
            return left;
        int res = 0xffff;
        int curr = left;
        for(int i = 0; i<=right-left; i++){
            res = curr&res;
            curr++;
        }
        return res;*/
        int shift = 0;
        while(left != right){
            left = left >> 1;
            right = right >> 1;
            shift++;
        }
        int res = left<<shift;
        return res;
    }
};