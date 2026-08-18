class Solution 
{
public:
    int maxProfit(vector<int>& prices) 
    {
        int maximum=0;

        //optimal approach   
        int minPrice=prices[0];
        for(int i=0; i<prices.size(); i++)
        {
            int profit = prices[i] - minPrice;
            maximum = max(maximum, profit);
            minPrice = min(minPrice, prices[i]);
        }
 

        // Brute Force approach but not acceptable
        /*int price=0;
        for(int i=0; i<prices.size(); i++)
        {
            for(int j=i+1; j<prices.size(); j++)
            {
                price=prices[j]-prices[i];
                maximum=max(maximum, price);
            }  
        }*/

        return maximum;
    }
};