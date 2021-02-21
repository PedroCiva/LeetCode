class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int num1 = 0;
        int num2 = 0;
        vector<int> result;
        for (int i = 0; i < nums.size(); ++i)
        {

            num1 = nums[i];
            for (int x = i + 1; x < nums.size(); ++x)
            {

                num2 = nums[x];

                if ((num1 + num2) == target)
                {
                    result.push_back(i);
                    result.push_back(x);
                    return result;
                }
            }
        }
        return result;
    }
};
