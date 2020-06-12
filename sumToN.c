// by Palash Saha
// 05-06-2020

#include <stdio.h>
#include <stdlib.h>

int sumToN (int n);

int main (int argc, char *argv[]){

    int n;
    int answer;

    printf ("enter an number:\n");
    scanf("%d", &n);

    answer = sumToN (n);

    printf("sum 1.. n = %d\n", answer);
    return 0;
}

int sumToN (int n){
    int sum;
    if (n ==0){
        sum =0;
    } else {
        sum = n + sumToN (n-1);
    }
    return sum;

}
