#include <stdio.h>

int main(void) {
    int num;
    int i;
    int max=0;
    for(i=1;i<=10;i++) {
        printf("numero %d: ",i);
        scanf("%d",&num);
        if(num>max)
            max=num;
    }
   printf("il numero piu' grande inserito e' %d ",max);
}
