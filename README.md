## #Practice Task of Operators-Conditional-Statements

1. Take a number from user and check if its a even number or odd number.
2. Take a number from user and check if its a positive or negative number.
3. Explain if else ladder.

---

#### Answer:
- For one and tow, you have to go the `even_odd.c` and `positive_negative.c`.

- An `if-else` ladder is a series of `if-else` statements that are used when we have multiple conditions to check. It's essentially a chain of if statements followed by corresponding `else if` statements and ending with a final else block to handle any condition that doesn't match the previous ones.
In an `if-else` ladder, only one block of code gets executed, based on the first condition that is true. If no condition is true, the final else block (if present) will be executed.

Example of `if-else` ladder:

```c
#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Using if-else ladder to check the value of num
    if (num > 0) {
        printf("The number is positive.\n");
    } else if (num < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}
```