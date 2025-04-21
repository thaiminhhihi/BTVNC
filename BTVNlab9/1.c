#include <stdio.h>
void swap (int *a, int *b){

    int temp = *a;
    *a=*b;
    *b = temp;

// temp *a = &b 
// printf *temp = &a
}
int main(int argc, char const *argv[])
{
    int a =5;
    int b= 7;
    
    swap(&a,&b);
    printf("%d %d",a, b);
    return 0;
}
