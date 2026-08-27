class Solution 
{
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        int n=nums1.size();
        int m=nums2.size();
        int target;
        vector<int> arr;

        for(int i=0; i<n; i++ )
        {
            for(int j=0; j<m; j++)
            {
                if(nums1[i] == nums2[j] )
                {
                    target=nums1[i];
                    if(find(arr.begin(), arr.end(), target) != arr.end())
                        continue;
                    else 
                        arr.push_back(nums1[i]);
                }
            }
        }
        return arr;
    }
};