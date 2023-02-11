#include<stdio.h> 
void main()
{
    int Array[5],array[5];
    printf("Enter the Array Elements\n");
    for(int i=0;i<5;i++){
        printf("Element-%d:",i);
        scanf("%d",&Array[i]);
    }

    for(int i=0;i<5;i++){
        array[i]=Array[i];
    }


    printf("elements of first Array:\n");
    for(int i=0;i<5;i++){
        printf("%d\t",Array[i]);
    }
    printf("\n");

     printf("elements of Second Array:\n");
    for(int i=0;i<5;i++){
        printf("%d\t",array[i]);
    }

     
}