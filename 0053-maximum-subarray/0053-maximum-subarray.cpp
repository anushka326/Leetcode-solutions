class Solution
{
    public:
    int maxSubArray(vector<int>& nums)
    {
        // brute force not submitting
        /* int largesum=INT_MIN;
        for(int i=0; i<nums.size(); i++)
        {
            int sum = 0; 
            for(int j=i; j<nums.size(); j++)
            {
                sum = sum + nums[j];
                largesum = max(largesum, sum);
            }
        }
        return largesum; */

        // optimal one
        int currentSum = nums[0];
        int maximumSum = nums[0];
        for(int i = 1; i < nums.size(); i++)
        {
            currentSum = max(nums[i], currentSum + nums[i]);
            maximumSum = max(maximumSum, currentSum);
        }
        return maximumSum;
    }
};
