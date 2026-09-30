class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==INT_MIN&&divisor==-1){
            return INT_MAX;
        }
        long long count=0;
        long long a=abs((long long)dividend);
        long long b=abs((long long)divisor);
        while(b<=a){
            long long temp=b;
            long long m=1;
            while((temp+temp)<=a){
                temp=temp+temp;
                m=m+m;
            }
            a=a-temp;
            count=count+m;
        }
        if(abs((long long)dividend)!=(dividend)&&abs((long long)divisor)!=divisor){
            return count;
        }
        else if(abs((long long)dividend)!=dividend||abs((long long)divisor)!=divisor){
            return 0-count;
        }
        else{
            return count;
        }
    }
};