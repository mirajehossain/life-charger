#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct str{
    char string[20];
};
int main() {
    int n,q,i;
    scanf("%d",&n);
    
     struct str s[n];
        for(i=0;i<n;i++){
            scanf("%s",s[i].string);
        }
    scanf("%d",&q);
    struct str qu[q];
        for(i=0;i<q;i++){
            scanf("%s",qu[i].string);
        }
    
    int flag,count=0;
    
    for(i=0;i<q;i++){
        count = 0;
        for(j=0;j<n;j++){
            flag =  strcmp(qu[i].string , s[j].string);
                if(flag==0){
                    count++;
                }
        }
        printf("%d\n",count);
    }    
    
    return 0;
}
