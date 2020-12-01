/**
 * Find product of two numbers that add up to 2020 from 
 * a list of numbers
 */
#include <stdlib.h>
#include <stdio.h>
#include "data.h"

int *twoSum(int *arr, int size, int target);
int *threeSum(int *arr, int size, int target);


int main(int argc, char **argv) {
    for(int i=0; i<6; i++) {
        
        printf("%d\n", numbers[i]);
    }
    // this array consists of indices of the two number that add up to 2020
    int *array = twoSum(numbers, 200, 2020);
    // indices of the two numbers
    printf("%d\n%d\n", array[0], array[1]);
    // product of two numbers
    printf("answer1: %d\n", numbers[array[0]] * numbers[array[1]]);
    
     // this array consists of indices of the three number that add up to 2020
    int *array2 = threeSum(numbers, 200, 2020);
    // indices of the three numbers
    printf("%d\n%d\n%d\n", array2[0], array2[1], array2[2]);
    // product of three numbers
    printf("answer2: %d\n", numbers[array2[0]] * numbers[array2[1]] * numbers[array2[2]]);
    
    
    
    return 0;
}

int *twoSum(int *arr, int size, int target) {
    int *twoNum = (int *)malloc(sizeof(int) * 2);
    int num1 = -1;
    int num2 = -1;
    int i, j;
    
    for(i=0; i<size; i++) {
        for(j=0; j<size; j++) {
            // we only want to add numbers from different indexes
            if( i != j) {
                // check for the two numbers that add up to the target
                if(arr[i] + arr[j] == target) {
                    num1 = i;
                    num2 = j;
                }
            }
        }
    }
    twoNum[0] = num1;
    twoNum[1] = num2;
    return twoNum;
}

int *threeSum(int *arr, int size, int target) {
    int *threeNum = (int *)malloc(sizeof(int) * 3);
    int num1 = -1;
    int num2 = -1;
    int num3 = -1;
    int i, j, k;
    
    for(i=0; i<size; i++) {
        for(j=0; j<size; j++) {
            for(k=0; k<size; k++) {
            // we only want to add numbers from different indexes
                if( i != j && j != k && i != k) {
                // check for the two numbers that add up to the target
                    if(arr[i] + arr[j] + arr[k] == target) {
                        num1 = i;
                        num2 = j;
                        num3 = k;
                    }
                }
            }
        }
    }
    
    threeNum[0] = num1;
    threeNum[1] = num2;
    threeNum[2] = num3;
    return threeNum;
}