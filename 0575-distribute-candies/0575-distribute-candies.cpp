class Solution 
{
public:
    int distributeCandies(vector<int>& candyType) 
    {
        int n = candyType.size();

        int candies = n / 2;
        int unique = 0;

        for(int i = 0; i < n; i++)
        {
            bool flag = false;

            for(int j = 0; j < i; j++)
            {
                if(candyType[i] == candyType[j])
                {
                    flag = true;
                    break;
                }
            }

            if(!flag)
            {
                unique++;
            }
        }

        return min(candies, unique);
    }
};