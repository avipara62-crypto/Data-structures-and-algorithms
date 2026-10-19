class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        vector<int> even;
        vector<int> odd;
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                even.push_back(nums[i]);
            }else{
                odd.push_back(nums[i]);
            }
        }
        int j=0;
        for(int i=0;i<n;i+=2){
            nums[i]=even[j];
            nums[i+1]=odd[j];
            j++;
        }
        return nums;
    }
};