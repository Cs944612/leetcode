#include<stdio.h>
#include<stdlib.h>
#include<string.h>


char* mergeAlternately(const char* word1, const char* word2) {
  int len1 = strlen(word1);
  int len2 = strlen(word2);
  int total_len = len1 + len2;

  // Allocate memory for the result (+1 for the null terminator)
  char* result = (char*)malloc(total_len + 1);
  if (!result){
    return NULL;  //memory allocation failed
  }
  
  int i = 0, j = 0, index = 0;

  while (i < len1 && j < len2){
    result[index++] = word1[i++];
    result[index++] = word2[j++];
  }

  // append any remaining char from word 1
  while (i < len1) {
    result[index++] = word1[i++];
  }

  // append any remaining char from word 1
  while (j < len2) {
    result[index++] = word2[j++];
  }

  // NULL terminate the result 
  result[index] = '\0';

  return result;
}


int main() {
    const char* word1 = "abc";
    const char* word2 = "pqr";
    char* merged = mergeAlternately(word1, word2);
    
    if (merged) {
        printf("Merged String: %s\n", merged); 
        free(merged);  // Free the allocated memory
    } else {
        printf("Memory allocation failed.\n");
    }
    
    return 0;
}
