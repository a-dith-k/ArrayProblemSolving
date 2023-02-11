#include<stdio.h>
void main(){
    int Matrix[3][3],i,j,rows,cols,count,noe;


    printf("Enter the rows and coloumns of matrix\n");
    printf("rows");
    scanf("%d",&rows);
    printf("cols");
    scanf("%d",&cols);

    printf("Enter the Matrix Elements\n");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("Element [%d][%d]",i,j);
            scanf("%d",&Matrix[i][j]);
        }

    }

    printf("Matrix inputed is:\n");
     for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf(" %d ",Matrix[i][j]);
        }
        printf("\n");
    }
     count=0;
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            if(Matrix[i][j]==0){
                count++;
            }
        }
        
    }
    noe=cols*rows;
    if(count>(noe/2)){
        printf("THE given matrix is sparse Matrix and contains %d zeores",count);
    }




}