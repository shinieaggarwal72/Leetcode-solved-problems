class Solution {
public:
    int minimumMoves(string s) {
        int res = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='X'){
                i += 2;
                res++;
            }
        }
        return res;
    }
};