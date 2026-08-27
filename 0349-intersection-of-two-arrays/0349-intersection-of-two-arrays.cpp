// Using VECTOR ONLY-BRUTE FORCE

// class Solution 
// {
// public:
//     vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
//     {
//         int n=nums1.size();
//         int m=nums2.size();
//         int target;
//         vector<int> arr;

//         for(int i=0; i<n; i++ )
//         {
//             for(int j=0; j<m; j++)
//             {
//                 if(nums1[i] == nums2[j] )
//                 {
//                     target=nums1[i];
//                     if(find(arr.begin(), arr.end(), target) != arr.end())
//                         continue;
//                     else 
//                         arr.push_back(nums1[i]);
//                 }
//             }
//         }
//         return arr;
//     }
// };


// USING SET TO STORE UNIQUE ELEMENTS-BRUTE FORCE

class Solution 
{
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        int n=nums1.size();
        int m=nums2.size();
        set<int> mySet;
        

        for(int i=0; i<n; i++ )
        {
            for(int j=0; j<m; j++)
            {
                if(nums1[i] == nums2[j] )
                {
                   mySet.insert(nums1[i]);
                }
                else
                    continue;
            }
        }
        
        vector<int> arr(mySet.begin(), mySet.end());
        
        return arr;
    }
};
