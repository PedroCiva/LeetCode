class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        int currentTime = releaseTimes[0];
        char currentKey = keysPressed[0];
        
        for(int i=1; i < releaseTimes.size();++i)
        {
            int temp_time = releaseTimes[i] - releaseTimes[i-1];
            if(temp_time > currentTime)
            {
                currentTime = temp_time; 
                currentKey = keysPressed[i];
            }
            else if (temp_time == currentTime)
            {
                if(currentKey < keysPressed[i])
                {
                    currentKey = keysPressed[i];
                }
            }
        }
        return currentKey;
    }
};