#include<stdio.h>
void main(){
    int Array[10],count=0;
    printf("Enter the Array elements");
    for(int i=0;i<6;i++){
        printf("Element-%d:",i);
        scanf("%d",&Array[i]);
    }

     for(int i=0;i<6;i++){
        for(int j=i+1;j<6;j++){
            if(Array[i]==Array[j]){
                count++;
            }
        }
    }
    printf("no of duplicate elements in array=%d",count);



}