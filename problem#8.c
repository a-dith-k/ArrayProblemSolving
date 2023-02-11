#include<stdio.h>
void main(){
    int limit,i,j,Array[20],fArray[20];
    printf("enter the number of elements to input");
    scanf("%d",&limit);
    for(i=0;i<limit;i++){
        printf("element - %d ",i);
        scanf("%d",&Array[i]);
    }

    for(i=0;i<limit;i++){
        int count=1;
        for(j=i+1;j<limit;j++){
            if(i!=j&&Array[i]!=0){
                if(Array[i]==Array[j]){
                    count++;
                    Array[j]=-1;
                }

            }
            fArray[i]=count;
            
        }
         
    }
    for(i=0;i<limit;i++){
        if(Array[i]!=-1){
            printf("%d occurs %d times\n",Array[i],fArray[i]);
        }
    }
}