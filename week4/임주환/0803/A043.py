class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        prefix = ""

        min_len = len(strs[0])
        for str_i in strs:
            str_len = len(str_i)
            if min_len > str_len:
                min_len = str_len

        for i in range(min_len):
            flag = True
            current_char = strs[0][i]
            for str_i in strs:
                if str_i[i] != current_char:
                    flag = False
                    break
            if flag:
                prefix += strs[0][i]
            else:
                break

        return prefix