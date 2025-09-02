#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char str[100];
    int i, vowels = 0, consonants = 0, digits = 0, spaces = 0, others = 0;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove newline character
    if(str[strlen(str)-1] == '\n'){
        str[strlen(str)-1] = '\0';
    }
    
    printf("String: %s\n", str);
    
    for(i = 0; str[i] != '\0'; i++){
        char ch = tolower(str[i]);
        
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            vowels++;
        }
        else if(ch >= 'a' && ch <= 'z'){
            consonants++;
        }
        else if(ch >= '0' && ch <= '9'){
            digits++;
        }
        else if(ch == ' '){
            spaces++;
        }
        else{
            others++;
        }
    }
    
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Spaces: %d\n", spaces);
    printf("Other characters: %d\n", others);
    
    return 0;
}