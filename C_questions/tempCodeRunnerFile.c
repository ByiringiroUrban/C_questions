#include<stdio.h>
main(){
 int i, j;
 for(j=1;j<=6; j++){
    for(i=1;i>=5; i--){
        printf("%d", i);
    }
    printf("%d\n", j);
 }
}