class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == pow(-2, 31) && divisor ==-1)
            return INT_MAX;

        bool isPos = false;
        if(dividend<0 && divisor<0 || divisor>0 && dividend>0)
            isPos = true;
        
        if(dividend>0)
            dividend *= -1;
        if(divisor>0)
            divisor *= -1;

        long num = dividend;
        int res = 0;

        while(num - divisor <= 0){
            int i=-1;
            while(divisor*pow(2,i+1) >= num)
                i++;
            cout << i << endl;
            cout << "num before: " << num<< endl;
            cout << "divisor: " << divisor << endl;
            num = num + divisor*pow(-2,i);
            cout << "num = " << num << endl;
            res += pow(-2,i);
        }
        //res = divisor*res;
        if(isPos){
            if(res == INT_MIN)
                return INT_MAX;
            return -res;
        }

        return res;
    }
};