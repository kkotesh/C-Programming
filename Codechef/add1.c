#include <stdio.h>

long int add(long int x,long int y){
    long int count=0;
    while(y>0){
        long int u=x^y;
        long int v=x&y;
        x=u;
        y=v*2;
        count++;
    }
    return count;
}
    int main(){
        long int t;
        scanf("%ld",&t);
        while(t--){
            long int a,b,sum;
            scanf("%ld\n%ld\n",&a,&b);
            printf("%ld\n",add(a,b));
        }
    }