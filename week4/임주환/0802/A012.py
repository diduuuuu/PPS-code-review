class Solution:
    def countPrimes(self, n: int) -> int:

        if n == 0:
            return 0
        
        prime = [0] * n

        for i in range(2, n):
            check = i
            if prime[i] == 0:
                for j in range(i, n):
                    if check * j > (n - 1):
                        break
                    prime[check * j] = 1

        result = 0    
        for i in range(2, len(prime)):
            if prime[i] == 0:
                result += 1
                
        return result