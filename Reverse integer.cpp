class Solution {
public:
    long long int reverse(int x) {
        int  rev = 0,rem=0;
        while (x!=0){
            if (rev > INT_MAX/10 || rev < INT_MIN/10){
                return 0;
            }
            rem=x%10;
            rev = rev*10+ rem;
            x= x/10;
        }
        return rev;
        
    }
};
