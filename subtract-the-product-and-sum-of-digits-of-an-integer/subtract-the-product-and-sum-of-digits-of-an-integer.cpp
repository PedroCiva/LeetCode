class Solution {
public:
    int subtractProductAndSum(int n) {
        string number = to_string(n);
        int product = number[0] - 48;
        int sum = number[0] - 48;
        for (int i=1; i < number.length();i++)
        {
            product *= number[i]-48;
            sum += number[i]-48;
        }
        return (product - sum);
    }
};