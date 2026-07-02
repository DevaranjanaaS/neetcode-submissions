class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit=0;
        int x=0,y=prices.size() - 1;
        while(x<y){
            //if(prices[y]<prices[x]) x++;
            //else{
                max_profit=max(max_profit,prices[y]-prices[x]);
                int temp=y-1;
                while(x<temp){
                    max_profit=max(max_profit,prices[temp]-prices[x]);
                    temp--;
                }
                x++;
           // }
        }
        return max_profit;
    }
};
