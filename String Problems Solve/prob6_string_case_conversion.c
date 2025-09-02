#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char str[100];
    int i;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove newline character
    if(str[strlen(str)-1] == '\n'){
        str[strlen(str)-1] = '\0';
    }
    
    printf("Original string: %s\n", str);
    
    // Convert to uppercase
    printf("Uppercase: ");
    for(i = 0; str[i] != '\0'; i++){
        printf("%c", toupper(str[i]));
    }
    printf("\n");
    
    // Convert to lowercase
    printf("Lowercase: ");
    for(i = 0; str[i] != '\0'; i++){
        printf("%c", tolower(str[i]));
    }
    printf("\n");
    
    // Toggle case
    printf("Toggle case: ");
    for(i = 0; str[i] != '\0'; i++){
        if(isupper(str[i])){
            printf("%c", tolower(str[i]));
        }
        else if(islower(str[i])){
            printf("%c", toupper(str[i]));
        }
        else{
            printf("%c", str[i]);
        }
    }
    printf("\n");
    
    return 0;
}