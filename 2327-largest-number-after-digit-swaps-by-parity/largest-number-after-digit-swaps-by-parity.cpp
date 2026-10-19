class Solution {
public:
    int largestInteger(int num) {
        vector<int> even;
        vector<int> odd;
        int temp = num;
        while(num > 0){
            int digit = num%10;
            if(digit %2==0) even.push_back(digit);
            else odd.push_back(digit);
            num/=10;
        }
        sort(even.rbegin(),even.rend());
        sort(odd.rbegin(),odd.rend());

        num = temp;
        vector<int> digits;

        while (num > 0) {
            digits.push_back(num % 10);
            num /= 10;
        }

        reverse(digits.begin(), digits.end());
        int e = 0, o = 0;
        int ans = 0;

        for (int digit : digits) {
            if (digit % 2 == 0) {
                ans = ans * 10 + even[e];
                e++;
            } else {
                ans = ans * 10 + odd[o];
                o++;
            }
        }

        return ans;
    }
};