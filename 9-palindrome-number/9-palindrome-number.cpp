class Solution {
public:
    bool isPalindrome(int x) {
        int temp = x;
        long long chk = 0;
        
        while(temp>0){
            chk*=10;
            chk+=(temp%10);
            temp/=10;
        }
        
        if(chk==x){
            return true;
        }
        return false;
    }
};