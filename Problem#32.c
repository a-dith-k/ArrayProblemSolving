/*Program to find the pair from array for the given sum*/
#include<stdio.h>
void main(){
    int Array[10],i,j,sum,size;

    printf("Enter the Array size: \n");
    scanf("%d",&size);

    printf("Enter the Array Elements: \n");
    for(i=0;i<size;i++){
        printf("Element - %d: ",i);
        scanf("%d",&Array[i]);
    }

    printf("The Current  Array Elements: \n");
    for(i=0;i<size;i++){
        printf(" %d ",Array[i]);
    }

    printf("\nEnter the sum of values\n");
    scanf("%d",&sum);


    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(Array[i]+Array[j]==sum){
                printf("Element at index %d and %d are added to get %d\n",i,j,sum);
            }
        }
    }





}

