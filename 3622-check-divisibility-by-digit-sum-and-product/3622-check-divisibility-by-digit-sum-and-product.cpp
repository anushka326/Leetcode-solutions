class Solution 
{
public:
    bool checkDivisibility(int n) 
    {
        bool target = true;
        int num = n;
        int sum = 0;
        int mul = 1;

        while(num > 0)
        {
            int digit = num % 10;

            sum = sum + digit;
            mul = mul * digit;

            num = num / 10;             
        }

        if( n % (sum + mul) == 0)
            return target;
        else
            target = false;

        return target;
    }
};