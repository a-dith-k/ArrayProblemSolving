#include<stdio.h>
void main(){
    int Matrix[10][10],i,j,rows,cols,sum;

    printf("Enter Rows and coloumns of Matrix\n");
    printf("Rows=");
    scanf("%d",&rows);
    printf("Coloumns=");
    scanf("%d",&cols);

    for(i=0;i<rows;i++){
        for ( j = 0; j < cols; j++){
            printf("Element [%d][%d]: ",i,j);
            scanf("%d",&Matrix[i][j]);
        }
        
    }

     printf(" Current Matrix Elements \n");
    for(i=0;i<rows;i++){
        for ( j = 0; j < cols; j++){
            printf(" %d ",Matrix[i][j]);
             
        }
        printf("\n");
        
    }

      
     for(i=0;i<rows;i++){
        for ( j = 0; j < cols; j++){
            if(i!=j){
                 Matrix[j][i]=0;
            }
           
        }
        break;
        
    }

    for(i=rows-1;i<rows;i++){
        for ( j = 0; j < cols; j++){
            if(i!=j){
                 Matrix[i][j]=0;
            }
           
             
        }
        break;
        
    }


    printf(" Final Matrix \n");
    for(i=0;i<rows;i++){
        for ( j = 0; j < cols; j++){
            printf(" %d ",Matrix[i][j]);
             
        }
        printf("\n");
        
    }


}