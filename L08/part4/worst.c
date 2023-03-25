#include <stdio.h>
#include <stdbool.h>

int main() {

    //out of bounds array access
    int arr[5] = {1, 2, 3, 4, 5};
    int i = 0;
    for (i = 0; i <= 5; i++) {
        printf("%d\n", arr[i]);
    }

    //Incrementing a boolean variable
    bool my_bool = true;
    my_bool++;
    printf("%d\n", my_bool);


   //Matching if and else if conditions
    int x = 5;
    if (x > 10) {
        printf("x is greater than 10\n");
    }
    else if (x > 5) {
        printf("x is greater than 5\n");
    }
    else if (x > 0) {
        printf("x is greater than 0\n");
    }
    else {
        printf("x is not greater than 0\n");
    }

    //Zero division
    int w = 10;
    int y = 0;
    int z = w / y;
    printf("z is %d\n", z);

    return 0;
}
