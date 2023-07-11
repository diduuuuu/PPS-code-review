class Solution:
    def generate(self, numRows: int) -> List[List[int]]:

        list_list = []
        
        for n in range(numRows):
            int_list = []
            for r in range(n + 1):
                nCr = int(math.factorial(n) / (math.factorial(r) * math.factorial(n - r)))

                int_list.append(nCr)
            
            list_list.append(int_list)

        return list_list