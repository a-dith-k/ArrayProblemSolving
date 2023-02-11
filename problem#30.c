#include<stdio.h>
void main(){
    int rows,cols,i,j,Matrix1[6][6],Matrix2[6][6],count,noe;
    printf("Enter the rows and coloumns matrix: \n");
    printf("rows: ");
    scanf("%d",&rows);
    printf("coloumns: ");
    scanf("%d",&cols);
    
    printf("Enter the Elements of FIRST matrix: \n");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("Element [%d],[%d]: ",i,j);
            scanf("%d",&Matrix1[i][j]);
        }
    }


    printf("Enter the Elements of SECOND matrix: \n");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("Element [%d],[%d]: ",i,j);
            scanf("%d",&Matrix2[i][j]);
        }
    }

        count=0;
     for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
           if(Matrix1[i][j]==Matrix2[i][j]){
            count++;
           }
        }
    }
        noe=rows*cols;
    if(count==noe){
        printf("Matrixes are Equal");
    }else{
        printf("Matrixes are  NOT Equal");
    }

}