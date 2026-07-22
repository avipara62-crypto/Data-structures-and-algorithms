class Solution {
public:
    int reverse(int num){
    int rev = 0;
    while(num){
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev;
}
    bool sumOfNumberAndReverse(int num) {
        if (num == 0) return true;
        for(int i=num/2 ; i<=num;i++){
            if(i+reverse(i) == num) return true;
        }
        return false;
    }
};