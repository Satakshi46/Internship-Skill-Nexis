//Print hello world in C
#include <stdio.h>

int main() {
    // Your code goes here
    printf("Hello World.");
    return 0;
}
//Print sum of two numbers in C
#include <stdio.h>

int main() {
    // Your code goes here
    int n,m;

    scanf("%d %d", &n, &m);
    int c=n+m;
    printf("SUM=%d", c);
    return 0;
}
//Check whether a number is even or odd in C
#include <stdio.h>

int main() {
    // Your code goes here
    int n;
    if(n/2==0){
        printf("Even");
    }
    else{
        printf("Odd");
    }
    return 0;
}
//Print Fibonacci series in C
#include <stdio.h>

int main() {
    // Your code goes here
    int n, i, t1 = 0, t2 = 1, nt;

    printf("No. of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: %d, %d, ", t1, t2);

    for (i = 3; i <= n; ++i) {
        nt = t1 + t2;
        printf("%d, ", nt);
        t1 = t2;
        t2 = nt;
    }
    return 0;
}
// Basic calculator program in C
#include <stdio.h>

int main() {
    int num1, num2;
    char operator;
    int ans;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);
    if (operator=="+")
    {
        ans=num1+num2;
    }
    else if (operator=="-")
    {
        ans=num1-num2;
    }
    else if (operator=="*")
    {
        ans=num1*num2;
    }
    else if (operator=="/")
    {
        ans=num1/num2;
    }
    else
    {
        printf("Invalid operator");
        return 0;
    }
    printf("Result: %d", ans);

    return 0;
}