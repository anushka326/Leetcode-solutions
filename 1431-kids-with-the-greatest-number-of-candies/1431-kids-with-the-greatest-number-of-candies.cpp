class Solution 
{
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) 
    {
        vector<bool> ans(candies.size());
        int maximum=0;

        for(int i=0; i<candies.size(); i++)
        {
            maximum=max(maximum,candies[i]);
        }

        for(int i=0; i<candies.size(); i++)
        {
            ans[i]=candies[i]+extraCandies >= maximum;
        }
        return ans;
    }
};