class Solution:
    def isPalindrome(self, x: int) -> bool:
        store = x
        number = 0
        while(x>0):
            remainder = x%10
            x = x // 10
            number = number*10 + remainder
        if(store == number):
            return True
        else:
            return False
