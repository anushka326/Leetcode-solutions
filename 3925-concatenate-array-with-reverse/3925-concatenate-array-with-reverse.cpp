class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int> ans(2*n);
        vector<int> rev(n);

        for(int i=0, j=n-1; i<n; i++, j--)
        {
            ans[i]=nums[i];
            rev[i]=nums[j];
        }

        for(int i=0, j=n; i<n; i++, j++)
        {
            ans[j]=rev[i];
        }
        return ans;
    }
};