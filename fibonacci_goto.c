#include <stdio.h>

int main(){
    int x=0,y=1,sum=0,i=0;
    int a;
    printf("0\n");
    loop:
        a = y;
        y = x + y;
        x = a;
        sum = sum + x;
        i=i+1;
        if(i==10){
            goto ex;
        }else{
            printf("%d\n",y);
            goto loop;
        }
    ex:
    
    printf("Sum=%d",sum);
    return 0;
}