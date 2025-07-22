class Solution {
public:
    bool isPalindrome(int x) {
      int temp;
      long long ans = 0;
      int xc = x;
      while(x>0){
      temp = x % 10;
      ans = ans * 10 + temp;
      x /= 10;
      }
    if(xc == ans) return true;
    else return false;
    }
};