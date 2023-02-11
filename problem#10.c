#include<stdio.h>
void main(){
    int i,j,Array[10],Even[10],Odd[10],limit,e=0,o=0;
    printf("enter the number of elements");
    scanf("%d",&limit);
    for(i=0;i<limit;i++){
        printf("Element -%d :",i);
        scanf("%d",&Array[i]);
    }

  
    for(i=0;i<limit;i++){
        if(Array[i]%2==0){
            Even[e]=Array[i];
            e++;
        }else{
            Odd[o]=Array[i];
            o++;
        }
    }
    printf("Even Numbers in Array are ");
     for(i=0;i<e;i++){
        if(Even[i]%2==0){
              printf("%d  ",Even[i]);
        }
      
        
    }

    printf("Odd Numbers in Array are ");
     for(i=0;i<o;i++){
         if(Odd[i]%2!=0){
              printf("%d ",Odd[i]);
        }
      
        
        
    }

}