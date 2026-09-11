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

        //My brute force approach but not acceptable
        // int maxprod=INT_MIN;
        // for(int i=0; i<nums.size(); i++)
        // {
        //     int prod=1;
        //     for(int j=i; j<nums.size(); j++)
        //     {
        //         prod=prod*nums[j];
                
        //         maxprod=max(maxprod, prod);
        //    }
        // }
        // return maxprod;
    }
};