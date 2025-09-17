#include <stdio.h>
#include <string.h>
#include <ctype.h>

void capitalizeWords(char str[]);
void toUpperCase(char str[]);
void toLowerCase(char str[]);
void toggleCase(char str[]);

int main() {
    char str[1000];
    char original[1000];
    int choice;
    
    printf("=== String Case Converter ===\n");
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove newline character
    str[strcspn(str, "\n")] = 0;
    strcpy(original, str);
    
    printf("\nOriginal string: \"%s\"\n", original);
    
    do {
        printf("\nChoose conversion type:\n");
        printf("1. Capitalize first letter of each word\n");
        printf("2. Convert to UPPERCASE\n");
        printf("3. Convert to lowercase\n");
        printf("4. Toggle case\n");
        printf("5. Reset to original\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // consume newline
        
        switch(choice) {
            case 1:
                strcpy(str, original);
                capitalizeWords(str);
                printf("Result: \"%s\"\n", str);
                break;
                
            case 2:
                strcpy(str, original);
                toUpperCase(str);
                printf("Result: \"%s\"\n", str);
                break;
                
            case 3:
                strcpy(str, original);
                toLowerCase(str);
                printf("Result: \"%s\"\n", str);
                break;
                
            case 4:
                strcpy(str, original);
                toggleCase(str);
                printf("Result: \"%s\"\n", str);
                break;
                
            case 5:
                strcpy(str, original);
                printf("Reset to original: \"%s\"\n", str);
                break;
                
            case 6:
                printf("Goodbye!\n");
                break;
                
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while(choice != 6);
    
    return 0;
}

void capitalizeWords(char str[]) {
    int i;
    int capitalize_next = 1;
    
    for(i = 0; str[i] != '\0'; i++) {
        if(isalpha(str[i])) {
            if(capitalize_next) {
                str[i] = toupper(str[i]);
                capitalize_next = 0;
            } else {
                str[i] = tolower(str[i]);
            }
        } else if(str[i] == ' ') {
            capitalize_next = 1;
        }
    }
}

void toUpperCase(char str[]) {
    for(int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
}

void toLowerCase(char str[]) {
    for(int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }
}

void toggleCase(char str[]) {
    for(int i = 0; str[i] != '\0'; i++) {
        if(islower(str[i])) {
            str[i] = toupper(str[i]);
        } else if(isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
    }
}