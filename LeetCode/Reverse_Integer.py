from math import pow
class Solution:
    def rev(self, n: int) -> int:
        new_arr = 0
        while n > 0:
                new_arr = new_arr * 10 + n % 10
                n //= 10
        return new_arr

    def reverse(self, x: int) -> int:
        sign = -1 if x < 0 else 1
        x = abs(x)

        res = self.rev(x)

        res *= sign

        if not (-(2**31) <= res <= 2**31 - 1):
            return 0

        return res

