class Solution:
    def sumOfMultiples(self, n: int) -> int:
        sum=0;
        num = range(1,n+1);
        for item in num:
            if item%3==0 or item%5==0 or item%7==0:
                sum = sum+item;
        return sum;
        