class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int x = 2*n;
        int totalsum = x*(x+1)/2;
        int evensum=0;
        for(int i=0;i<=x;i++){
            if(i%2==0){
                evensum+=i;
            }
        }
        int oddsum=totalsum-evensum;
        return gcd(oddsum,evensum);
    }
};