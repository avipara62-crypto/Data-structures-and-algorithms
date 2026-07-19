class Solution {
public:

    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n = arr.size();
        int sum = 0;
        int cnt = 0;
        int l=0,r=k;
        for(int i=0;i<k;i++){
            sum += arr[i];
        }
        if((sum/k)>=threshold) cnt++;
        int ans = cnt;
        while(r<n){
            sum -= arr[l];
            l++;
            sum += arr[r];
            if((sum/k) >= threshold) cnt++;
            ans = max(ans,cnt);
            r++;
        }
        return ans;
    }
};