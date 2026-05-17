class Solution {
public:
    int addDigits(int num) {
        while(num >= 10){
         int lastdigit = num%10;
         int firstdigit = num/10;
         num = lastdigit + firstdigit;
        }
        return num;
    }
};
