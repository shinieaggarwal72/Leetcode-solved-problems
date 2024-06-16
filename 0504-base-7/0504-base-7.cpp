class Solution {
public:
    string convertToBase7(int num) {
        if(num == 0)
            return "0";
        bool neg = false;
        if(num<0){
            neg = true;
            num = num*-1;
        }
        string ans = "";
        stack<string>st;
        int curr = num;
        while(num != 0){
            string a = to_string(num%7);
            num = num/7;
            st.push(a);
            
        }
        if(neg)
            ans += "-";
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        return ans;
    }
};