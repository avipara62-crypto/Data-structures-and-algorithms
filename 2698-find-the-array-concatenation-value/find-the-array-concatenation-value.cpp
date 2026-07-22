class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long ans = 0;
        int n = nums.size();
        int low = 0;
        int high = n-1;
        while(low<high){
            string s="";
            s += (to_string(nums[low]));
            s += (to_string(nums[high]));
            ans += stoll(s);
            low++;
            high--;
        }
        if(low==high){
            ans+= nums[low];
        }
        return ans;

    }
};