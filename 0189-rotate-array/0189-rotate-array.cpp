class Solution 
{
public:
    void rotate(vector<int>& nums, int k) 
    {
        // // brute force
        // vector<int> ans(nums.size());
        // for(int i=0; i<nums.size(); i++)
        //     ans[(i+k)%nums.size()]=nums[i];

        // // copy into original one
        // nums=ans;

        // optimal one 
        k=k%nums.size();
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());

    }
};