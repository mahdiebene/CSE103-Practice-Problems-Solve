#include <stdio.h>

int main(){

    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if( num > 0){
        printf("The given number %d is positive", num);
    }
    else if( num < 0){
        printf("The given number %d is negative", num);
    }
    else{
        printf("The given number is: 0");
    }

    return 0;
}
