class Solution {
public:
    int countCollisions(string directions) {
        int n = directions.size();
        int l = 0;
        while(l<n && directions[l]=='L'){
            l++;
        }
        int r = n-1;
        while(r>=0 && directions[r]=='R'){
            r--;
        }
        int collisions = 0;
        for(int i=l;i<=r;i++){
            if(directions[i] != 'S') collisions++;
        }
        return collisions;
    }
};