#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    
    int dice_value;
    srand(time(0));
    dice_value = (rand() % 6) + 1;
    printf("%d",dice_value);
    return 0;
}