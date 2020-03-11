#include <stdio.h>
#include <stdlib.h>
int main (){
    int x,i;
    printf ("Introduzca el numero de asteriscos");
    scanf("%d",&x);
    for (i=0;i<x;i++){
        for (int y=x;y>i;y--)
            printf(" ");
    for (int z=0;z<i+1;z++)
        printf("* ");
        printf("\n");
}}
