#include <stdio.h>


int main() {
    int i, sum = 0;
    //declaring an array
    int numbers[10] = { 10,20,30,40,50,60,70,80,90,100 };

    //to find sum of the array numbers
    for (i = 0; i < 10; i++) {
        sum = sum + numbers[i];
    }

    printf("Sum is %d\n", sum);


    //to find maximum number of the array
    int max = numbers[0];
    for (i = 0; i < 7; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }

    printf("Max number is %d\n", max);


    return 0;

}