class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        if(sx==fx && sy==fy) return t!=1;
        // chebyshev distance concept 
        // two points -> p(x1,y1),q(x2,y2) 
        // d = max(abs(x1-x2),abs(y1-y2))
        int distance = max(abs(sx-fx),abs(sy-fy));
        return distance <= t;
    }
};