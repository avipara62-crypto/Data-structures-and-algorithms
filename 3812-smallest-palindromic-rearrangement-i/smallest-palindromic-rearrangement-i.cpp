class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.length();
        string first = s.substr(0,n/2);
        sort(first.begin(),first.end());

        string second = first;
        reverse(second.begin(),second.end());

        if(n%2)
        return first + s[n/2] + second;
        return first + second;
    }
};