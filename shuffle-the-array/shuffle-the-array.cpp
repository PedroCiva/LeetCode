class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        //Declare 3 queues
        //1st containing the first half
        //2nd containing the second half
        //3rd containing result
        //Add first element of first queue
        //Add first element of second queue
        //Until nums/2 is over
        queue<int> firstQ;
        queue<int> secondQ;
        vector<int> result;
        
        int x = 0;
        for(int i = n; i < (2*n) ;++i)
        {
            firstQ.push(nums[x]);
            secondQ.push(nums[i]);
            ++x;
        }
        
        for(int i = 0; i < n;++i)
        {
            result.push_back(firstQ.front());
            result.push_back(secondQ.front());
            firstQ.pop();
            secondQ.pop();
        }
        return result;
    }
};