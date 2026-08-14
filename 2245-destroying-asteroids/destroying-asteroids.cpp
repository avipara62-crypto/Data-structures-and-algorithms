class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        int n = asteroids.size();
        sort(asteroids.begin(),asteroids.end());
        // to avoid integer overflow , long long is used
        long long currmass = mass;
        for(int i=0;i<n;i++){
            if(asteroids[i]>currmass) return false;
            else{
                currmass+=asteroids[i];
            }
        }
        return true;
    }
};