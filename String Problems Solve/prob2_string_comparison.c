#include <stdio.h>
#include <string.h>

int main(){
    char str1[100], str2[100];
    int result;
    
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    
    // Remove newline characters
    if(str1[strlen(str1)-1] == '\n'){
        str1[strlen(str1)-1] = '\0';
    }
    if(str2[strlen(str2)-1] == '\n'){
        str2[strlen(str2)-1] = '\0';
    }
    
    result = strcmp(str1, str2);
    
    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str2);
    
    if(result == 0){
        printf("Both strings are equal\n");
    }
    else if(result < 0){
        printf("String 1 is lexicographically smaller than String 2\n");
    }
    else{
        printf("String 1 is lexicographically greater than String 2\n");
    }
    
    return 0;
}