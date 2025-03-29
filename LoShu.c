#include <stdio.h>

int isMagicSquare(int a[3][3]);

int main(void) {
    int i, j, k, sum1, sum2, sum3, sum4, sum5;
    int yes_loshu[3][3];
    int no_loshu[3][3];
    int flag = 1;

    yes_loshu[0][0] = 4;
    yes_loshu[0][1] = 9;
    yes_loshu[0][2] = 2;
    yes_loshu[1][0] = 3;
    yes_loshu[1][1] = 5;
    yes_loshu[1][2] = 7;
    yes_loshu[2][0] = 8;
    yes_loshu[2][1] = 1;
    yes_loshu[2][2] = 6;

    int result = isMagicSquare(yes_loshu);
    if (result == 1) {
        printf("yes_loshu is a magic square\n");
    } else {
        printf("yes_loshu is not a magic square\n");
    }

    no_loshu[0][0] = 4;
    no_loshu[0][1] = 6;
    no_loshu[0][2] = 3;
    no_loshu[1][0] = 9;
    no_loshu[1][1] = 5;
    no_loshu[1][2] = 1;
    no_loshu[2][0] = 2;
    no_loshu[2][1] = 7;
    no_loshu[2][2] = 8;

    result = isMagicSquare(no_loshu);
    if (result == 1) {
        printf("no_loshu is a magic square\n");
    } else {
        printf("no_loshu is not a magic square\n");
    }
    
    
}

int isMagicSquare(int a[3][3]) {
    int sum1, sum2, sum3, sum4, sum5;
    int i, j;

    // Calculate the sums of rows, columns and diagonals
    sum1 = a[0][0] + a[0][1] + a[0][2];
    sum2 = a[1][0] + a[1][1] + a[1][2];
    sum3 = a[2][0] + a[2][1] + a[2][2];
    sum4 = a[0][0] + a[1][0] + a[2][0];
    sum5 = a[0][2] + a[1][1] + a[2][0];

    // Check if all sums are equal
    return (sum1 == sum2 && sum2 == sum3 && sum4 == sum5 && sum1 == sum4);
}