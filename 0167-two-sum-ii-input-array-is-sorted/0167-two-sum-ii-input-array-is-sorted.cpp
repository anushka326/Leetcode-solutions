// two pointers approach

class Solution
{
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        int left=0;
        int right=numbers.size()-1;
        
        while(left<right)
        {
            int sum=numbers[left] + numbers[right];
            if(sum == target)
            {
                return{left+1, right+1};
            }
            else if(sum > target)
            {
                right--;
            }
            else
            {
                left++;
            }
        }
        return {};
    }
};


//My approach - Brute Force
// class Solution 
// {
// public:
//     vector<int> twoSum(vector<int>& numbers, int target) 
//     {
//         vector<int> ans;
//         for(int i=0; i<numbers.size(); i++)
//         {
//             for(int j=i+1; j<numbers.size(); j++)
//             {
//                 if(numbers[i]+numbers[j] == target)
//                 {
//                     ans.push_back(i+1);
//                     ans.push_back(j+1);
//                 }
//             }
//         }
//         return ans;
//     }
// };