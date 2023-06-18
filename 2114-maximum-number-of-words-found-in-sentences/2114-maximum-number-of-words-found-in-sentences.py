class Solution:
    def mostWordsFound(self, sentences: List[str]) -> int:
        g_max = 0;
        for sent in sentences:
            ln = 1;
            for char in sent:
                if char==" ":
                    ln+=1;
            if ln>g_max:
                g_max = ln;
        return g_max;
        