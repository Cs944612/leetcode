class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        # create an empty list
        result = []
        # calculate the min_len to handle the alternative part 
        min_len = min(len(word1), len(word2))
        # Iterate both strings up to the min_len, append alternative char 
        for i in range (min_len):
            result.append(word1[i])
            result.append(word2[i])
        # Append remaining chars
        result += word1[min_len:]
        result += word2[min_len:]
        # return the final result in string format
        return ''join(result)

