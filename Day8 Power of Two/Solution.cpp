class Solution {
public:
    bool isPowerOfTwo(int n) {
        // long num = 1;
        // while(num < n){
        //     num *= 2;
        // }
        // return num == n;
        return n > 0 && ((n & (n-1)) == 0);
    }
};
