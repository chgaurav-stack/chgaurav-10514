#include <stdio.h>

int main() {
    int num, originalNum, temp, digit, count = 0;
    int sum = 0, power, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;
    temp = num;

    while (temp != 0) {
        count++;
        temp /= 10;
    }

    temp = originalNum;

    while (temp != 0) {
        digit = temp % 10;

        power = 1;
        for (i = 0; i < count; i++) {
            power *= digit;
        }

        sum += power;
        temp /= 10;
    }

    if (sum == originalNum)
        printf("%d is an Armstrong number.\n", originalNum);
    else
        printf("%d is not an Armstrong number.\n", originalNum);

    return 0;
}
