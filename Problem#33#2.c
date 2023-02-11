#include<stdio.h>
int findMajorityElement(int *Array,int s){
    int count=0;
    int temp;
    for(int i=0;i<s;i++){
        for(int j=0;j<s;j++){
            if(Array[i]>Array[j]){
                temp=Array[i];
                Array[i]=Array[j];
                Array[j]=temp;
            }
        }
    }

    int majority=Array[s/2];
    for(int i=0;i<s;i++){
        if(majority==Array[i]){
            count++;

        }
    }

    if(count>s/2){
        printf("Majority element %d occurs %d times",majority,count);
    }else{
        printf("NO majority element found");
    }

}
void main(){
    int size,Array[20];
    printf("Enter the Array Size");
    scanf("%d",&size);
    

    printf("Enter The Array Elements\n");
    for(int i=0;i<size;i++){
        printf("Element - %d: ",i);
        scanf("%d",&Array[i]);
    }

    printf("\nThe Current Array Elements are\n");
    for(int i=0;i<size;i++){
        printf(" %d ",Array[i]);
    }
    findMajorityElement(Array,size);

 
}