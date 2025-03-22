#include <stdio.h> 
int main(){ 
 
    int num, count = 0; 
    printf("Enter a number: "); 
    scanf("%d", &num); 
 
    if(num < 0){ 
        num = -num; 
    } 
    if(num == 0){ 
        count = 1; 
    } 
    else{ 
        while(num != 0){ 
            num = num / 10; 
            count++; 
        } 
    } 
    printf("Number of digits: %d", count); 
    return 0; 
}
