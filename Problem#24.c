#include<stdio.h>
void main(){
    int i,j,size,sum,Matrix[10][10];
    printf("Enter Matrix size");
    scanf("%d",&size);


    printf("Enter The Elements of  Matrix\n");
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            printf("Element [%d][%d]:",i,j);
            scanf("%d",&Matrix[i][j]) ;
        }
    }


    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            if(i+j==size-1){
                 sum=sum+Matrix[i][j];
            }
        
        }
    }

    printf("sum of diagonals =%d",sum);
}
