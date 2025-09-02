#include <stdio.h>
#include <string.h>

int main(){
    char str[100], search_char;
    int i, count = 0, positions[100], pos_count = 0;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove newline character
    if(str[strlen(str)-1] == '\n'){
        str[strlen(str)-1] = '\0';
    }
    
    printf("Enter character to search: ");
    scanf("%c", &search_char);
    
    printf("String: %s\n", str);
    printf("Searching for character: '%c'\n", search_char);
    
    // Search for character
    for(i = 0; str[i] != '\0'; i++){
        if(str[i] == search_char){
            count++;
            positions[pos_count] = i + 1;  // 1-based position
            pos_count++;
        }
    }
    
    if(count > 0){
        printf("Character '%c' found %d time(s)\n", search_char, count);
        printf("Positions: ");
        for(i = 0; i < pos_count; i++){
            printf("%d ", positions[i]);
        }
        printf("\n");
    }
    else{
        printf("Character '%c' not found in the string\n", search_char);
    }
    
    return 0;
}