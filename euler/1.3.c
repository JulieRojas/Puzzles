#include<stdio.h>
#include<stdlib.h>

int sum_div(int n, int max) {
    max /= n;
    return (n*(1 + max)*max)>>1;
}

int main(int argc, char **argv){
    int m = atoi(argv[1]) -1;
    printf("%d\n", sum_div(3, m) + sum_div(5, m) - sum_div(15, m));
    return 0;
}
