// program to find missing element
#include<stdio.h>
int findMissingElement(int* A, int s){

    int sum=0;
    for(int i=0;i<s;i++){
        sum=sum+A[i];
    }
     s++;
    return (s*(s+1))/2-sum;

}
void main(){

    int size,Array[10],temp;
    printf("Enter the Array Size:");
    scanf("%d",&size);

    printf("Enter the Array Elements\n");
    for(int i=0;i<size;i++){
        printf("Element - %d: ",i);
        scanf("%d",&Array[i]);
    }

    printf("Array Elements Entered are:\n");
    for(int i=0;i<size;i++){
         printf(" %d ",Array[i]);
    }

     int missingElement=findMissingElement(Array,size);

     printf("\nMissing Element is: %d",missingElement);

}