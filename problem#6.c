#include<stdio.h>
void main(){
    int i,j,limit,Array[20],count,flag=0;
    printf("enter the number of elements to insert ");
    scanf("%d",&limit);
    for(i=0;i<limit;i++){
        printf("element - %d : ",i);
        scanf("%d",&Array[i]);
    }
    printf("Unique Elements in Array ");
    for(i=0;i<limit;i++){
        count=0;
        for(j=0;j<limit;j++){
            if(i!=j){
                if(Array[i]==Array[j]){
                    count++;
                }
            }
        }
        if(count==0){
            printf("%d ",Array[i]);
        }
        else{
            flag=1;
        }
    }
    if(flag==1){
        printf("=nill");
    }
}