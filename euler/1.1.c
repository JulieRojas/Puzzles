#include<stdio.h>
#include<stdlib.h>

int sum_div(int n, int max) {
    int r = 0;
    for(int i = 0; i < max; i+=n){
        r+=i;
    }
    return r;
}

int main(int argc, char **argv){
    int max = atoi(argv[1]);
    printf("%d", sum_div(3, max) + sum_div(5, max) - sum_div(15, max));
    return 0;
}
