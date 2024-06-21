class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans(n+1, 0);
        ans[0] = 0;
        int num = 2;
        for(int i = 1; i <= n; i++){
            //cout << "i=" << i<< endl;
            if(i==num){
                ans[i] = 1;
                num = 2<<1;
            }
            else{
                string str = to_binary(i);
                for(int j = 0; j<str.length(); j++){
                    if(str[j]=='1')
                        ans[i]++;
                }
            }
        }
        return ans;
    }
    string to_binary(int x){
        string ans = "";
        while(x!=0){
            //cout << "x%2=" << x%2<<endl;
            ans += to_string(x%2);
            x = x/2;
        }
        return ans;
    }
};