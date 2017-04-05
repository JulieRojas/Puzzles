#include<stdio.h>
#include<stdlib.h>

int sum_div(int n, int max) {
    int r = n*(1 + max/n)*(max/n)/2;
    return r;
}

int main(int argc, char **argv){
    int max = atoi(argv[1]) -1;
    printf("%i\n", sum_div(3, max) + sum_div(5, max) - sum_div(15, max));
    return 0;
}
