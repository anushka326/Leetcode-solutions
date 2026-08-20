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
            ans[j]=rev[i];
 
 
        //===== optimal solution without taking a rev array we can directly use ====
        // for(int i=0; i<n; i++)
        // {
        //     ans[i]=nums[i];
        //     ans[2*n-1-i]= nums[i];
        // }


        return ans;

    }
};