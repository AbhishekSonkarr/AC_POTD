class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int n = numBottles/numExchange;
        int m = numBottles%numExchange;
        int sum = numBottles+n;
    while(n>0){
        n = m = n+m; 
        n=n/numExchange;
        m=m%numExchange;
        sum+=n;
    }
        return sum;
    }
};