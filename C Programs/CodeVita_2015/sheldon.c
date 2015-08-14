// Program to get combination of size r in an array of size n
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void combinationUtil(int arr[], int n, int r, int count, int data[], int i, int x, int possibilities);
int count = 0;
// Needed for qsort.
int compare (const void * a, const void * b)
{
    return ( *(int*)a - *(int*)b );
}

// Function that prints all combinations of size r in arr[] of size n.
void printCombination(int arr[], int n, int r, int x, int possibilities)
{
    // A temporary array to store all combination one by one
    int data[r];

    // Sort array to handle duplicates
    qsort (arr, n, sizeof(int), compare);

    // Print all combination using temprary array 'data[]'
    combinationUtil(arr, n, r, 0, data, 0, x, possibilities);
}

void combinationUtil(int arr[], int n, int r, int index, int data[], int i, int x, int possibilities)
{
    int j = 0, sum = 0;

    if (index == r)
    {
        for (j = 0; j < r; j++) {
            sum = sum + data[j];
        }
        if(sum == x) {
            printf("True");
            exit(0);
        }
        sum = 0;
        count++;
        if(count == possibilities) {
            printf("False");
            exit(0);
        }
        return;
    }

    // When no more elements are there to be put
    if (i >= n) {
        return;
    }

    // Current is included, put next at next location
    data[index] = arr[i];
    combinationUtil(arr, n, r, index+1, data, i+1, x, possibilities);

    // Remove duplicates
    while (arr[i] == arr[i+1])
        i++;

    // Current is excluded, replace it with next
    // i+1 is passed, but index is not changed
    combinationUtil(arr, n, r, index, data, i+1, x, possibilities);
}

// Driver program to test above functions
int main()
{

    int n, x, i, possibilities;
    int *a;

    scanf("%d", &n);
    a = (int *)malloc(sizeof(int) * n);

    for (i = 0;i < n;i++) {
        scanf("%d", &a[i]);
    }

    possibilities = (pow(n, 3) - (3*(pow(n,2))) + (2*n))/6;

    scanf("%d", &x);

    printCombination(a, n, 3, x, possibilities);
    return 0;
}
