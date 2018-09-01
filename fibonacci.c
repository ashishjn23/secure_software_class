#include <stdio.h>

int main(){
    int x=0,y=1,sum=0;
    int i,a;
    for (i=0;i<10;i++){
        a = y;
        y = x + y;
        x = a;
        sum = sum + x;
        printf("%d\n",x);
    }
    printf("Sum=%d",sum);
    return 0;
}