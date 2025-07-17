#include<stdio.h>
int main(){
    int i,*ptr,**ptr_ptr;
    printf("i = ");
    scanf("%d",&i);
    ptr=&i;
    ptr_ptr=&ptr;

    printf("The value of i = %d\n",**ptr_ptr);
    return 0;
}
