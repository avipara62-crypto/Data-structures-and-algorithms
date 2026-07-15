class Solution {
public:
    bool isprime(int x){
        if(x<=1) return false;
        for(int i=2;i*i<=x;i++){
            if(x%i==0) return false;
        }
        return true;
    }
    int NumberofOnebit(string x){
        int ans =0;
        for(int i=0;i<x.length();i++){
            if(x[i]=='1') ans++;
        }
        return ans;
    }
    string toBinary(int n) {
    if (n == 0) return "0";
    
    string binary = "";
    while (n > 0) {
        binary = to_string(n % 2) + binary;
        n = n / 2;
    }
    return binary;
}
    int countPrimeSetBits(int left, int right) {
        int cnt =0;
        for(int i=left;i<=right;i++){
            string x = toBinary(i);
            int ones = NumberofOnebit(x);
            if(isprime(ones)) cnt++;
        }
        return cnt;
    }
};