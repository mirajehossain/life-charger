#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int getIndex(testVal, lastAns, N){
    int ind;
    ind = (testVal ^ lastAns) % N;
    return ind;
}


int main() {
    int seqList[100][100],Q,N;
    int seq [100];
    int lastAns = 0,len;
    int qType,x,y,i,j,index,temp;

    scanf("%d",&N);
    scanf("%d",&Q);



    for(i=0; i<Q;i++){

        scanf("%d",&qType);
        scanf("%d",&x);
        scanf("%d",&y);
        if(qType == 1){
            index = getIndex(x, lastAns, N);
            temp = seqList[index];
            seq[temp];
            len = sizeof(seq);
            seq[len]=y;
            seqList[index] = seq[len];
        }
        else if(qType == 2){
            index = getIndex(x, lastAns, N);
            seq = seqList[index];
            len = sizeof(seq);
            lastAns = seq[y % len];
            printf("%d \n", lastAns);
        }


    }
    return 0;
}

