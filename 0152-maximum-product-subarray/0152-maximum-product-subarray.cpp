class Solution 
{
public:
    int maxProduct(vector<int>& nums) 
    {
        int currentMax = nums[0];
        int currentMin = nums[0];
        int answer = nums[0];

        for(int i = 1; i < nums.size(); i++)
        {
            int x = nums[i];

            int newMax = max({x, x * currentMax, x * currentMin});
            int newMin = min({x, x * currentMax, x * currentMin});

            currentMax = newMax;
            currentMin = newMin;

            answer = max(answer, currentMax);
        }

        return answer;
    }
};