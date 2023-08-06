class Solution:
    def maxNumberOfBalloons(self, text: str) -> int:
        txt_list = list(text)

        b = txt_list.count("b")
        a = txt_list.count("a")
        l = int(txt_list.count("l") / 2)
        o = int(txt_list.count("o") / 2)
        n = txt_list.count("n")

        balloon = []

        balloon.append(b)
        balloon.append(a)
        balloon.append(l)
        balloon.append(o)
        balloon.append(n)

        return min(balloon)