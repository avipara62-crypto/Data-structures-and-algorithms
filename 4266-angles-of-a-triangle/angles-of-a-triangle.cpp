class Solution {
public:
    vector<double> internalAngles(vector<int>& sides) {
        sort(sides.begin(),sides.end());
        int a = sides[0];
        int b = sides[1];
        int c = sides[2];
        vector<double> ans(3);
        if(a+b<=c) return {};
            ans[0] = acos((b*b + c*c - a*a) / (2.0*b*c));
            ans[0] *= 180.0 / M_PI;

            ans[1] = acos((a*a + c*c - b*b) / (2.0*a*c));
            ans[1] *= 180.0 / M_PI;

            ans[2] = acos((a*a + b*b - c*c) / (2.0*a*b));
            ans[2] *= 180.0 / M_PI;
        sort(ans.begin(),ans.end());
        return ans;
    }
};