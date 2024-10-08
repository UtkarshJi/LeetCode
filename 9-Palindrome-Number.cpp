class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }

        long reverse = 0;
        long original = x;

        while(x!=0){
            int digit = x % 10;
            reverse = reverse * 10 + digit;
            x /= 10;
        }

        if(reverse == original){
            return true;
        }
        return false;
    }
};
