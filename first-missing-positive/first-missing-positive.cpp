class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if (nums.size() == 0)
            return 1;
        if (nums[nums.size() - 1] == 2147483647)
        {
            if (nums.size() > 1)
            {
                for (int i = 0; i <= 2147483647; i++)
                {
                    if (i > 0)
                    {
                        if (find(nums.begin(), nums.end(), i) == nums.end())
                        {
                            return i;
                        }
                    }

                }
            }
            else
            {

                if (nums[0] <= 0) //Only one number so if negative return 1
                    return 1;
                else if (nums[0] > 1)
                    return 1;
                else
                    return 2;

            }
        }
        else
        {
            if (nums.size() > 1)
            {
                for (int i = 0; i <= nums[nums.size() - 1] + 1; i++)
                {
                    if (i > 0)
                    {
                        if (find(nums.begin(), nums.end(), i) == nums.end())
                        {
                            return i;
                        }
                    }

                }
            }
            else
            {

                if (nums[0] <= 0) //Only one number so if negative return 1
                    return 1;
                else if (nums[0] > 1)
                    return 1;
                else
                    return 2;

            }
        }
        return 1;
        }
    };