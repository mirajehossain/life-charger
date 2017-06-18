#include<stdio.h>
int main(){
    char str[100];

     scanf("%[^\n]",ch); /// take all string  before new line.
   /// scanf("%[a-z A-Z0-9]",str); ///%[] for filter
    printf("%s",str);


    scanf("%s%*c",str);  /// scanf er pore jodi get nei tyle %s%*c dite hobe tyle r prob korbe na input newar somoy
    printf("%s",str);

    gets(str);
    printf("%s",str);

    gets(str);
    printf("%s",str);
    return 0;
}
