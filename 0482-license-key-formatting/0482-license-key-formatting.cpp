class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        string no_dash = "";
        for(int i=0; i<s.length();i++){
            if(s[i]!='-')
                no_dash += s[i];
        }
        if(no_dash.length()<k)
            return no_dash;
        int first = (no_dash.length())%k;
        string res="";
        if(first==0){
            int count = k;
            for(int i = 0; i < no_dash.length(); i++){
                if(no_dash[i] >= 97)
                    no_dash[i] -= 32;
                res += no_dash[i];
                count--;
                if(count==0 && i<no_dash.length()-1){
                    res += "-";
                    count = k;
                }
            }
        }
        else{
            int i = 0;
            while(first>0){
                if(no_dash[i]>=97)
                    no_dash[i] -=32;
                res += no_dash[i++];
                first--;
            }
            res += "-";
            int count = k;
            for(; i<no_dash.length(); i++){
                if(no_dash[i] >= 97)
                    no_dash[i] -= 32;
                res += no_dash[i];
                count--;
                if(count==0 && i<no_dash.length()-1){
                    res += "-";
                    count = k;
                }
            }
        }
        return res;
    }
};