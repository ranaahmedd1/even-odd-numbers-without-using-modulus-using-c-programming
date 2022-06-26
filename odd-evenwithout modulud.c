#include <stdio.h>
int main(){
    int x;
    float y;
    printf("enter the num\n");
    scanf("%d",&x);
    y=x/2.0;
    if(y==(x/2)){
        printf("The number is odd = 0\n");
        printf("The number is even = 1");
    }
    else if(y!=(x/2)){
           printf("The number is odd = 1\n");
        printf("The number is even = 0");
    }
    else
    {

     printf("error\n");}

return 0;}
