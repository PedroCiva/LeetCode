class Solution {
public:    
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        int j = nums.size()-1;
        while (i<j)
        {
            if(nums[i] ==  nums[j])            
                nums.erase(nums.begin() + j);
            
            if(j==i+1)
            {
                i++;
                j=nums.size()-1;
            }else
            {
                --j;
            }            
        }
        return nums.size();
    }
};