class Solution {
public:
    vector<int> countTasks(vector<int>& tasks, vector<int>& shifts) {
        int n = tasks.size();

        vector<long long> pref(n + 1, 0);
        for (int i = 0; i < n; i++)
            pref[i + 1] = pref[i] + tasks[i];

        long long total = pref[n];

        int idx = 0;
        long long done = 0;

        vector<int> ans;

        for (long long s : shifts) {
            long long completed = pref[idx] + done;
            long long target = completed + s;

            if (target >= total) {
                ans.push_back(0);
                idx = 0;
                done = 0;
                continue;
            }

            int nxt = upper_bound(pref.begin(), pref.end(), target) - pref.begin() - 1;

            idx = nxt;
            done = target - pref[idx];

            if (done == tasks[idx]) {
                idx++;
                done = 0;
            }

            ans.push_back(n - idx);
        }

        return ans;
    }
};