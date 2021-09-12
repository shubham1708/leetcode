class Solution {
public:
    bool isPalindrome(int x) {
        int xin=x;
        if(x<0){return false;}
        
        else{
            long long int rev=0;
            while(x>0){
                
                rev=rev*10+x%10;
                x/=10;
            }
            if(xin==rev){return true;}
            else{ return false;}
        }
    }
};
