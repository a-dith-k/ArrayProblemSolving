/*Program to find second Smallest element in the Array*/

#include<stdio.h>
void  main(){

    int size,i,j,Array[40],temp;
    printf("Enter the Array Size");
    scanf("%d",&size);
 

    printf("Enter the Array Elements:");
    for(i=0;i<size;i++){
        printf("\nElement - %d: ",i);
        scanf("%d",&Array[i]);
    }


    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(Array[i]<Array[j]){
                temp=Array[i];
                Array[i]=Array[j];
                Array[j]=temp;
            }
        }
    }

   printf("The  Sorted Array Elements are:");
    for(i=0;i<size;i++){
        printf(" %d ",Array[i]);
    }

    
    printf("The Second Smallest Element is : %d",Array[size-2]);

}