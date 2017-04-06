#include<math.h>
#include<stdio.h>


int even_fib(int maxx) {
    int curr = 2, prev = 0, even_sum = 0, tmp = 0;
    while(curr <= maxx) {
        if (curr & 1) {
            tmp = (curr<<2) + prev;
            prev = curr;
            curr = tmp;
        } else {
            even_sum += curr;
            tmp = (curr<<2) + prev;
            prev = curr;
            curr = tmp;
        }
    }
    return even_sum;
}

int main(void) {
    int maxx = 4*pow(10,6);
    for(int i=0; i<10000000; i++){
        even_fib(maxx);
    }
}
