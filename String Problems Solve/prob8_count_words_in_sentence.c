#include <stdio.h>
#include <string.h>

int main(){
    char str[1000], words[100][50];
    int i, j = 0, k = 0, word_count = 0;
    int word_length[100];
    
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove newline character
    if(str[strlen(str)-1] == '\n'){
        str[strlen(str)-1] = '\0';
    }
    
    printf("Sentence: %s\n", str);
    
    // Extract words
    for(i = 0; i <= strlen(str); i++){
        if(str[i] == ' ' || str[i] == '\0'){
            if(k > 0){
                words[word_count][k] = '\0';
                word_length[word_count] = k;
                word_count++;
                k = 0;
            }
        }
        else{
            words[word_count][k] = str[i];
            k++;
        }
    }
    
    printf("Number of words: %d\n", word_count);
    printf("\nWords and their lengths:\n");
    
    for(i = 0; i < word_count; i++){
        printf("Word %d: %s (Length: %d)\n", i+1, words[i], word_length[i]);
    }
    
    // Find longest and shortest word
    int longest = 0, shortest = 0;
    for(i = 1; i < word_count; i++){
        if(word_length[i] > word_length[longest]){
            longest = i;
        }
        if(word_length[i] < word_length[shortest]){
            shortest = i;
        }
    }
    
    if(word_count > 0){
        printf("\nLongest word: %s (Length: %d)\n", words[longest], word_length[longest]);
        printf("Shortest word: %s (Length: %d)\n", words[shortest], word_length[shortest]);
    }
    
    return 0;
}