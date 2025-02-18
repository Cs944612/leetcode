class Solution:
    def gcdOfStrings(self, str1: str, str2: str) -> str:
        # check if the strings are equal in both order, if not return empty string
        if str1 + str2 != str2 + str1:
            return ""

        # return the substring of GCD length equal to the two string 
        return str1[:self.gcd(len(str1), len(str2))]

    def gcd(self, a: int, b: int) -> int:
        while b:
            a, b = b, a % b
        return a


solution = Solution()
print(solution.gcdOfStrings("ABCABC", "ABC"))  # Output: "ABC"
print(solution.gcdOfStrings("ABABAB", "ABAB"))  # Output: "AB"
print(solution.gcdOfStrings("LEET", "CODE"))    # Output: ""
