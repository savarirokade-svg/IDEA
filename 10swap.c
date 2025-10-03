
#include <stdio.h>
int main() {
    int a=5, 
    b=10, temp;
    temp=a;
     a=b;
     b=temp;
    printf("a=%d, b=%d\n", a,b);
    return 0;
}
101 swap without  twmp
#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swap: a = %d, b = %d\n", a, b);

    a = a + b;  // Step 1
    b = a - b;  // Step 2
    a = a - b;  // Step 3

    printf("After swap: a = %d, b = %d\n", a, b);
    return 0;
}
