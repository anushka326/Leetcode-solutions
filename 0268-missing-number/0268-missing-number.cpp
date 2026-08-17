class Solution 
{
public:
// optimal
    int missingNumber(vector<int>& nums) 
    {
        int n=nums.size();
        int missing = n;

        for(int i=0; i<n; i++)
        {
            missing = missing ^ nums[i] ^ i;
        }
        return missing;
    }
};