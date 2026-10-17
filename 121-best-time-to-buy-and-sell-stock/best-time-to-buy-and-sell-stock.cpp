class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice=INT_MAX,maxProfit=0;

        for (int i:prices){
            if(i<minPrice){
                minPrice=i;
            }
            int profit=i-minPrice;
            if(profit>maxProfit){
                maxProfit=profit;
            }
        }
        return maxProfit;
    }
};