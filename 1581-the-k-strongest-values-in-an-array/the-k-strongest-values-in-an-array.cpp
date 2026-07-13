class Solution {
public:
    vector<int> getStrongest(vector<int>& arr, int k) {
        int n = arr.size();
        vector<int> ans;
        sort(arr.begin(),arr.end());
        int median = arr[(n-1)/2];
        int left = 0 , right = n-1;
        while(k--){
            if(abs(arr[left]-median)>abs(arr[right]-median)){
                ans.push_back(arr[left]);
                left++;
            } else if(abs(arr[left]-median)<abs(arr[right]-median)){
                ans.push_back(arr[right]);
                right--;
            }else{
                int x = max(arr[left],arr[right]);
                ans.push_back(x);
                if(arr[left]>arr[right]) left++;
                else right--;
            }
        }
        return ans;

    }
};