#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000];
    char words[100][50];
    int i, j, word_count = 0, word_start = 0;
    
    printf("=== Word Counter and Analysis ===\n");
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove newline character if present
    str[strcspn(str, "\n")] = 0;
    
    int len = strlen(str);
    
    // Extract words from the sentence
    for(i = 0; i <= len; i++) {
        if(str[i] == ' ' || str[i] == '\0') {
            if(word_start < i) {
                // Copy word to words array
                int word_len = i - word_start;
                strncpy(words[word_count], &str[word_start], word_len);
                words[word_count][word_len] = '\0';
                word_count++;
            }
            word_start = i + 1;
        }
    }
    
    printf("\nAnalysis Results:\n");
    printf("================\n");
    printf("Total characters (including spaces): %d\n", len);
    printf("Total words: %d\n", word_count);
    
    // Count characters without spaces
    int char_count = 0;
    for(i = 0; i < len; i++) {
        if(str[i] != ' ') {
            char_count++;
        }
    }
    printf("Characters (excluding spaces): %d\n", char_count);
    
    // Display all words
    printf("\nWords found:\n");
    for(i = 0; i < word_count; i++) {
        printf("%d. %s (Length: %lu)\n", i + 1, words[i], strlen(words[i]));
    }
    
    // Find longest and shortest words
    if(word_count > 0) {
        int longest_idx = 0, shortest_idx = 0;
        
        for(i = 1; i < word_count; i++) {
            if(strlen(words[i]) > strlen(words[longest_idx])) {
                longest_idx = i;
            }
            if(strlen(words[i]) < strlen(words[shortest_idx])) {
                shortest_idx = i;
            }
        }
        
        printf("\nLongest word: '%s' (%lu characters)\n", 
               words[longest_idx], strlen(words[longest_idx]));
        printf("Shortest word: '%s' (%lu characters)\n", 
               words[shortest_idx], strlen(words[shortest_idx]));
    }
    
    return 0;
}