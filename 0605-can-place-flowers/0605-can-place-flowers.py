class Solution:
    def canPlaceFlowers(self, f: list[int], n: int) -> bool:
        for i in range(len(f)):
            leftOk = i == 0 or f[i-1] == 0
            rightOk = i == len(f) -1 or f[i+1] == 0
            if leftOk and f[i] == 0 and rightOk:
                f[i] = 1
                n -= 1
        return n <= 0