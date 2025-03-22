#include <stdio.h>
int main(){
    int i;
    printf("The odd numbers form (1-500) are:\n");
    for(i = 0; i <=500; i+=2){
        printf("%d ", i);
    }
    printf("\nThe even numbers form (1-500) are:\n");
    for(i = 1; i <=500; i+=2){
        printf("%d ", i);
    }

    return 0;
}
