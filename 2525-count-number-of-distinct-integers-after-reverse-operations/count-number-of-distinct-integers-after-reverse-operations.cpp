class Solution {
public:
    int reverse(int num){
    int rev = 0;
    while(num){
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev;
}
    int countDistinctIntegers(vector<int>& nums) {
        int n = nums.size();
        set<int> st;
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
            st.insert(reverse(nums[i]));
        }
        return st.size();
    }
};