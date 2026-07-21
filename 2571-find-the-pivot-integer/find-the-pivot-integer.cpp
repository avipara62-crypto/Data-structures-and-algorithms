class Solution {
public:
    int pivotInteger(int n) {
        int totalsum = (n*(n+1))/2;
        vector<int> nums(n);
        nums[0]=1;
        for(int i=1;i<n;i++){
            nums[i]=nums[i-1]+(i+1);
        }
        //edge case 
        if (nums[0] == totalsum)
            return 1;
        for(int i=1;i<n;i++){
            if(nums[i]==totalsum-nums[i-1])
            return i+1;
        }
        return -1;
    }
};