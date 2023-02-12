//program to merge two sorted arrays

#include<stdio.h>
void mergeSortedArray(int *bigArr,int bigArrLength,int *smlArr, int smlArrLength){

        

            if(bigArr==NULL&& smlArr==NULL){
                return;
            }else{
                int bigArrIndex=bigArrLength-1,
                    smlArrIndex=smlArrLength-1,
                    mergeArrIndex=bigArrLength+smlArrLength-1;

                while(bigArrIndex>=0&&smlArrIndex>=0){

                    if(bigArr[bigArrIndex]>=smlArr[smlArrIndex]){
                        bigArr[mergeArrIndex]=bigArr[bigArrIndex];
                        bigArrIndex--;
                        mergeArrIndex--;
                    }else{
                        bigArr[mergeArrIndex]=smlArr[smlArrIndex];
                        mergeArrIndex--;
                        smlArrIndex--;
                    } 
                }
                if(bigArrIndex<0){
                    while(smlArrIndex>=0){
                        bigArr[mergeArrIndex]=smlArr[smlArrIndex];
                        mergeArrIndex--;
                        smlArrIndex--;
                    }
                }else if(smlArrIndex<0){
                    while(bigArrIndex>=0){
                        bigArr[mergeArrIndex]=bigArr[bigArrIndex];
                        mergeArrIndex--;
                        bigArrIndex--; 
                    }
                }    
                
            }
}
void main(){
    int bigArr[]={13,14,15,16,17,18,20,30};
    int smlArr[]={1,6,8,10,11,12,22};

    mergeSortedArray(bigArr,8,smlArr,7);
    printf("Array After merging\n");
    for(int i=0; i<15;i++){
        printf(" %d ",bigArr[i]);
    }
}
