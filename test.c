#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX_SIZE 100

int getIndex(testVal, lastAns, N){
    int ind;
    ind = (testVal ^ lastAns) % N;
    return ind;
}

int main() {
    int seqList[MAX_SIZE],N,Q;
    int lastAnswer = 0, i, j, k, index,sizeAr;
    int x[MAX_SIZE], y[MAX_SIZE], qType[MAX_SIZE];
    int seq1[MAX_SIZE], seq2[MAX_SIZE];

    scanf("%d%d",&N,&Q);
    for(i=0;i<Q;i++){
        scanf("%d",&qType[i]);
        scanf("%d",&x[i]);
        scanf("%d",&y[i]);

        if(qType[i] == 1){
            index = getIndex(x[i],lastAnswer,N);
            y[i] = index;
            seq1[index] = y[i];
        } else if(qType[i] == 2){
            index = getIndex(x[i],lastAnswer,N);
          ///  y[i] = index;
           /// seq1[index] = y[i];
            ///sizeAr = sizeof(seq1);
            ///lastAnswer =  y[i] % sizeAr;
            lastAnswer =  y[i] % index;
            printf("%d\n",lastAnswer);

        }
    }

    return 0;
}


