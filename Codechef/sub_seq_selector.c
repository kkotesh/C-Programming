#include <stdio.h>

int add(long int x,long int y){
    while(y>0){
        long int u=x^y;
        long int v=x&&y;
        long int a=u;
        long int b=v*2;
        long int count=0;
        count++;
    return count;

    }
}
    int main(){
        long int t;
        scanf("%ld",&t);
        while(t--){
            long int a,b,sum;
            scanf("%d\n%d\n",&a,&b);
            printf("%ld",add(a,b));
        }
    }