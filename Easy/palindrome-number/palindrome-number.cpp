#include <stack>
class Solution {
public:
    bool isPalindrome(int x) {
        stack<char> st;
        string num = to_string(x);
        
        //Push number to stack
        for(auto& l : num)
        {
            st.push(l);
        }
        
        //Compare 
        for(int i=0; i < num.size();++i)
        {
            if(num[i] != st.top())
            {
                return false;
            }
            st.pop();
        }
        return true;
    }
};