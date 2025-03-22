#include <stdio.h> 
 
int main(){ 
 
    int num, reverse = 0, last; 
    printf("Enter a number: "); 
    scanf("%d", &num); 
 
    while(num !=0){ 
        last = num % 10; 
        reverse = (reverse* 10) + last; 
        num = num / 10; 
    } 
 
    printf("Reversed number: %d", reverse); 
 
    return 0; 
}
