class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());
        int n = skill.size();
        int sk = skill[0]+skill[n-1];
        int low = 0 , high = n-1;
        long long ans = 0;

        while(low<high){
            if((skill[low] + skill[high]) != sk) 
            {
                return -1;
            }
            ans += 1LL * (skill[low] * skill[high]);
            low++;
            high--;
        }
        return ans;
    }
};