#include<stdio.h>

int findMajoElement(int *Array, int size){
    
    int temp=0;
    int temp2;
    for(int i=0;i<size;i++){
        int count=0;
        for(int j=0;j<size;j++){
            if(Array[i]==Array[j]){
                count++;
            }
            if(count>temp){
                temp=count;
                temp2=Array[i];
            }

        }
    }
    if(temp>size/2){
        printf("The majority Element is %d occurs %d times",temp2,temp);
    }else{
        printf("No majority Element is Found");
    }
     

}
void main(){
    int size,i,Array[10];
    printf("Enter the Array Size");
    scanf("%d",&size);

    printf("Enter the Array Elements:\n");
    for(i=0;i<size;i++){
        printf("Element - %d: ",i);
        scanf("%d",&Array[i]);
        
    }

    printf("The Given Array is: \n");
    for(i=0;i<size;i++){
        printf(" %d ",Array[i]);
    }
    findMajoElement(Array,size);

}