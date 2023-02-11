#include<stdio.h>
int findMaxsum(int* A ,int s){

    int currentSum=0;
    int maxSum=0;
    for(int i=0;i<s;i++){
        currentSum=currentSum+A[i];
        
        if(currentSum>maxSum){
            maxSum=currentSum;
        }

        if(currentSum<0){
            currentSum=0;
        }
    }
    return maxSum;
}
void main(){
    

    int size,Array[10],sum=0,temp=0;
    printf("Enter the Array Size");
    scanf("%d",&size);

    printf("Enter the Array Elements:\n");
    for (int i = 0; i < size; i++){
        printf("Element - %d: ",i);
        scanf("%d",&Array[i]);
    }


    printf("Elements Entered are:\n");
    for (int i = 0; i < size; i++)
    {
        printf(" %d ",Array[i]);
    }

    int maxSum=findMaxsum(Array,size);

    printf("\nMaximum Sum Of Contigious Sub Array=%d",maxSum);
    
    
}