class Solution {
public:
    bool isPalindrome(int x) {
        long long int revnum = 0;
        int og = x;
        while(x>0){
            long long int ld = x%10;
            revnum = (revnum * 10) + ld;
            x = x/10;
        }
        return (revnum == og);
    }
};