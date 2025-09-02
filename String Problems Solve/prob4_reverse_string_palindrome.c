#include <stdio.h>
#include <string.h>

int main(){
    char str[100], reversed[100];
    int i, length;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove newline character
    if(str[strlen(str)-1] == '\n'){
        str[strlen(str)-1] = '\0';
    }
    
    length = strlen(str);
    
    // Reverse the string
    for(i = 0; i < length; i++){
        reversed[i] = str[length - 1 - i];
    }
    reversed[length] = '\0';
    
    printf("Original string: %s\n", str);
    printf("Reversed string: %s\n", reversed);
    
    // Check if string is palindrome
    if(strcmp(str, reversed) == 0){
        printf("The string is a palindrome\n");
    }
    else{
        printf("The string is not a palindrome\n");
    }
    
    return 0;
}