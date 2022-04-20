//
//  main.c
//  CTest
//
//  Created by Amol Nikam on 18/04/22.
//

#include <stdio.h>
void diagonalDifference(int arr[3][3]);

int main(int argc, const char * argv[]) {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    diagonalDifference(arr);
    return 0;
}

void diagonalDifference(int arr[3][3]) {
    int rightDiagonalSum = 0;
    int leftDiagonalSum = 0;
    int arrCount = sizeof(arr)/sizeof(int);

    for (int i = 0; i <= arrCount; i++) {
        for (int j = i; j<=i ; j++) {
            rightDiagonalSum = rightDiagonalSum + arr[i][j];
        }
    }
    
    for (int i = arrCount; i>= 0; i--) {
        leftDiagonalSum = leftDiagonalSum + arr[i][arrCount - i];
    }

    printf("Diagonal difference: %d\n", rightDiagonalSum - leftDiagonalSum);
}
