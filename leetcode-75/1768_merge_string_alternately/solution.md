# Merge Strings Alternately (LeetCode Problem 1768)

## Problem Statement

Given two strings `word1` and `word2`, merge them by alternating characters from each string. If one string is longer than the other, append the remaining characters of that string to the merged result.

**Example:**

- **Input:** word1 = "abc", word2 = "pqr"
- **Output:** "apbqcr"

---

## Approaches

### 1. Brute-Force Approach 

- **Description:**
  - A brute-force method might attempt to generate all possible interleavings of `word1` and `word2` and then filter out the one which exactly alternates between the two strings.
- **Time Complexity:**
  - Exponential \(O(2^{(n+m)})\), where `n` and `m` are the lengths of `word1` and `word2`. This is due to the combinatorial explosion of possible interleavings.
- **Space Complexity:**
  - Exponential space, since it would involve storing all possible interleavings.
- **Conclusion:**
  - The brute-force approach is not feasible and not optimal solution. 

### 2. Using Two-Pointer Approach

- **Description:**
  - Using two pointers, one for each string, to iterate through the characters.
  - In each iteration, append one character from `word1` and one from `word2` to the result.
  - Once one string is exhausted, append the remaining characters from the other string.
- **Pseudocode:**
  ```
  function mergeAlternately(word1, word2):
      result = empty list or string builder
      i = 0, j = 0
      
      while i < length(word1) and j < length(word2):
          append word1[i] to result
          append word2[j] to result
          i = i + 1
          j = j + 1
      
      if i < length(word1):
          append substring(word1, i) to result
      
      if j < length(word2):
          append substring(word2, j) to result
      
      return result as string
  ```
- **Time Complexity:**
  - \(O(n + m)\) — Each character from both strings is processed exactly once.
- **Space Complexity:**
  - \(O(n + m)\) — The result string is of length `n + m`.

---
