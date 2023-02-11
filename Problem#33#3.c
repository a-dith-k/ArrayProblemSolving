#include<stdio.h>
int findMajorElement(int *A,int s ){
    int indexMajorElement=0;
    int count=0;

    for (int i = 1; i < s; i++)
    {
        if (A[i] == A[indexMajorElement])
        {
            count++;
        }
        else
        {
            count--;
        }

        if (count == 0)
        {
            count = 1;
            indexMajorElement = i;
        }
    }

    if(count>0){
        count=0;
        for(int i=0;i<s;i++){
            if(A[i]==A[indexMajorElement]){
                count++;
            }
        }
        if(count>s/2){
            printf("Major Element %d occurs %d times",A[indexMajorElement],count);
        }

    }else{
            printf("\n No Major Elements found");
        }
}
void main(){
    int size,Array[10];
    printf("Enter  the size of Array ");
    scanf("%d",&size);


    printf("enter the array elements\n");
    for(int i=0;i<size;i++){
        printf("Element - %d: ",i);
        scanf("%d",&Array[i]);
    }

    printf("The Array Elements Entered are:\n");
    for(int i=0;i<size;i++){
        printf(" %d ",Array[i]);
    }
    

    findMajorElement(Array,size);

}