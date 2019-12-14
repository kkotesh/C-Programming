#include <stdio.h>
#include <math.h>

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

int bin(int z){
    while(z){
        int y = z%10;
        z = z/10;
        int bin_no =0;
        int binary= pow(2,y);
        bin_no = bin_no + binary;
        }
        return bin_no;
}
    int main(){
        long int t;
        scanf("%ld",&t);
        while(t--){
            long int a,b,sum;
            scanf("%ld\n%ld\n",&a,&b);
            int c= bin(a);
            int d= bin(b);
            printf("%ld\n",add(c,d));
        }
    }