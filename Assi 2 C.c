//C program to find the largest number in an array
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Your code goes here
    int n;
    int lar=0;
    scanf("%d",&n);
    int *arr = (int *)malloc(n * sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n-1;i++){
        if (arr[i]>arr[i+1]){
            lar=arr[i];
        }
        else{
            lar=arr[i+1];
        }   
    }
    printf("The largest number is: %d\n", lar);
    free(arr);
    return 0;
}

//Count positive and negative numbers.
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Your code goes here
    int n;
    int pos=0,neg=0;
    scanf("%d",&n);
    int *arr = (int *)malloc(n * sizeof(int));
    if (!arr) return 1;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            pos++;
        }
        else if(arr[i]<0){
            neg++;
        }
    }
    printf("Number of positive numbers: %d\n", pos);
    printf("Number of negative numbers: %d\n", neg);
    free(arr);
    return 0;
}

//Write function to find factorial.
#include <stdio.h>

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n-1);
    }
}
int main() {
    // Your code goes here
    int n;
    scanf("%d", &n);
    printf("Factorial of %d is %d\n", n, factorial(n));
    return 0;
}

//Add two matrices.
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Your code goes here
    int n, m;
    scanf("%d %d", &n, &m);
    int *arr1 = malloc(n * m * sizeof(int));
    int *arr2 = malloc(n * m * sizeof(int));
    int *sum = malloc(n * m * sizeof(int));
    if (!arr1 || !arr2 || !sum) {
        free(arr1);
        free(arr2);
        free(sum);
        return 1;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr1[i * m + j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr2[i * m + j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sum[i * m + j] = arr1[i * m + j] + arr2[i * m + j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", sum[i * m + j]);
        }
        printf("\n");
    }
    free(arr1);
    free(arr2);
    free(sum);
    return 0;
}
//Student Average Calculator
#include <stdio.h>;
int main() {
    // Your code goes here
    int n;
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    if (!arr) return 1;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    double average = (double)sum / n;
    printf("Average: %.2f\n", average);
    free(arr);
    return 0;

}