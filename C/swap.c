#include <stdio.h>

void swap(int *a, int *b){ 
    int temp = *a;  //temp is assigned pointer b
    *a = *b;        //pointer a points to where b is pointing
    *b=temp;        //pointer b is assigned value of temp
}

void main(){
    int p, q;
    printf("enter 2 numbers : \n");
    scanf("%d%d", &p, &q);
    printf("Before swapping, p=%d and q=%d \n", p, q);
    swap(&p, &q); //passing p and q as by reference
    printf("After swapping, p=%d and q=%d \n", p, q);

    int *c;
    c = &p;

    printf("c points a this memory location: %p \n", c);
    printf("which points a this other memory location: %d \n", *c);
}
