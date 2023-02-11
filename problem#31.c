#include<stdio.h>
void main(){
    int Matrix[3][3],i,j,rows,cols,count,one,total;

    printf("Enter the rows and coloumns: \n");
    printf("Rows: ");
    scanf("%d",&rows);
    printf("Coloumns: ");
    scanf("%d",&cols);

    printf("Enter the Matrix Elements: \n");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("Element [%d][[%d]: ",i,j);
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
    one=0;
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            if(i!=j){
                if(Matrix[i][j]==0){
                    count++;
                }
            }else if(i==j){
                if(Matrix[i][j]==1){
                    one++;
                }
            }
        }
    }
    total=rows*cols;
    if(count+one==total){
        printf("The Matrix given is a identity Matrix");
    }


}