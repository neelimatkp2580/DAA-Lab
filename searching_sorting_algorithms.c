//Read and display of array
#include <stdio.h>
int main() {
    int n, i;
    int a[50];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Array elements are: ");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
//sum of array elements
#include <stdio.h>
int main() {
    int n, i, sum = 0;
    int a[50];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }
    printf("Sum = %d", sum);
    return 0;
}
//find largest element in array
#include <stdio.h>
int main() {
    int n, i, max;
    int a[50];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    max = a[0];
    for(i = 1; i < n; i++) {
        if(a[i] > max) {
            max = a[i];
        }
    }
    printf("Largest element = %d", max);
    return 0;
}
//find smallest element in array
#include <stdio.h>
int main() {
    int n, i, min;
    int a[50];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    min = a[0];
    for(i = 1; i < n; i++) {
        if(a[i] < min) {
            min = a[i];
        }
    }
    printf("Smallest element = %d", min);
    return 0;
}
//swap two numbers
#include <stdio.h>
int main() {
    int a, b, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping: a = %d, b = %d", a, b);
    return 0;
}
//swap adjacent elements in array
#include <stdio.h>
int main() {
    int n, i, temp;
    int a[50];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n - 1; i += 2) {
        temp = a[i];
        a[i] = a[i + 1];
        a[i + 1] = temp;
    }
    printf("Array after swapping adjacent elements: ");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
//Linear search
#include <stdio.h>
int main() {
    int n, i, key, found = 0;
    int a[50];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter element to search: ");
    scanf("%d", &key);
    for(i = 0; i < n; i++) {
        if(a[i] == key) {
            found = 1;
            printf("Element found at position %d", i + 1);
            break;
        }
    }
    if(found == 0) {
        printf("Element not found");
    }
    return 0;
}
//count even and odd numbers
#include <stdio.h>
int main() {
    int n, i, even = 0, odd = 0;
    int a[50];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if(a[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }
    printf("Even count = %d\n", even);
    printf("Odd count = %d", odd);
    return 0;
}
//reverse an array
#include <stdio.h>
int main() {
    int n, i;
    int a[50];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Array in reverse order: ");
    for(i = n - 1; i >= 0; i--) {
        printf("%d ", a[i]);
    }
    return 0;
}
//check whether array is already sorted
#include <stdio.h>
int main() {
    int n, i, sorted = 1;
    int a[50];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n - 1; i++) {
        if(a[i] > a[i + 1]) {
            sorted = 0;
            break;
        }
    }
    if(sorted == 1) {
        printf("Array is already sorted in ascending order");
    } else {
        printf("Array is not sorted");
    }
    return 0;
}
//bubble one largest element to end
#include <stdio.h>
int main() {
    int n, i, temp;
    int a[50];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n - 1; i++) {
        if(a[i] > a[i + 1]) {
            temp = a[i];
            a[i] = a[i + 1];
            a[i + 1] = temp;
        }
    }
    printf("Array after one bubble pass: ");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
//complete bubble sort
#include <stdio.h>
int main() {
    int n, i, j, temp;
    int a[50];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - 1 - i; j++) {
            if(a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("Sorted array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
//bubble sort with early stop
#include <stdio.h>
int main() {
    int n, i, j, temp, swapped;
    int a[50];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n - 1; i++) {
        swapped = 0;
        for(j = 0; j < n - 1 - i; j++) {
            if(a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                swapped = 1;
            }
        }
        if(swapped == 0) {
            break;
        }
    }
    printf("Sorted array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
//selection sort single pass
#include <stdio.h>
int main() {
    int n, i, minIndex, temp;
    int a[50];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    minIndex = 0;
    for(i = 1; i < n; i++) {
        if(a[i] < a[minIndex]) {
            minIndex = i;
        }
    }
    temp = a[0];
    a[0] = a[minIndex];
    a[minIndex] = temp;
    printf("Array after selecting first minimum: ");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
//complete selection sort
#include <stdio.h>
int main() {
    int n, i, j, minIndex, temp;
    int a[50];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n - 1; i++) {
        minIndex = i;
        for(j = i + 1; j < n; j++) {
            if(a[j] < a[minIndex]) {
                minIndex = j;
            }
        }
        temp = a[i];
        a[i] = a[minIndex];
        a[minIndex] = temp;
    }
    printf("Sorted array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
//single pass of insertion sort
#include <stdio.h>
int main() {
    int n, i, key, j;
    int a[50];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    key = a[1];
    j = 0;
    while(j >= 0 && a[j] > key) {
        a[j + 1] = a[j];
        j--;
    }
    a[j + 1] = key;
    printf("Array after inserting second element correctly: ");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
//complete insertion sort
#include <stdio.h>
int main() {
    int n, i, key, j;
    int a[50];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for(i = 1; i < n; i++) {
        key = a[i];
        j = i - 1;
        while(j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
    printf("Sorted array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
//count number of comparisons in bubble sort
#include <stdio.h>
int main() {
    int n, i, j, temp, comparisons = 0;
    int a[50];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - 1 - i; j++) {
            comparisons++;
            if(a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("Sorted array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\nComparisons = %d", comparisons);
    return 0;
}
//count number of swaps in bubble sort
#include <stdio.h>
int main() {
    int n, i, j, temp, swaps = 0;
    int a[50];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - 1 - i; j++) {
            if(a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                swaps++;
            }
        }
    }
    printf("Sorted array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\nSwaps = %d", swaps);
    return 0;
}
//selection sort,bubble sort,insertion sort for same input
#include <stdio.h>

void bubbleSort(int a[], int n) {
    int i, j, temp;
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - 1 - i; j++) {
            if(a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

void selectionSort(int a[], int n) {
    int i, j, minIndex, temp;
    for(i = 0; i < n - 1; i++) {
        minIndex = i;
        for(j = i + 1; j < n; j++) {
            if(a[j] < a[minIndex]) {
                minIndex = j;
            }
        }
        temp = a[i];
        a[i] = a[minIndex];
        a[minIndex] = temp;
    }
}

void insertionSort(int a[], int n) {
    int i, key, j;
    for(i = 1; i < n; i++) {
        key = a[i];
        j = i - 1;
        while(j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}

void copyArray(int src[], int dest[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        dest[i] = src[i];
    }
}

void printArray(int a[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main() {
    int n, i;
    int original[50], b[50], s[50], in[50];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &original[i]);
    }

    copyArray(original, b, n);
    copyArray(original, s, n);
    copyArray(original, in, n);

    bubbleSort(b, n);
    selectionSort(s, n);
    insertionSort(in, n);

    printf("Bubble Sort: ");
    printArray(b, n);
    printf("Selection Sort: ");
    printArray(s, n);
    printf("Insertion Sort: ");
    printArray(in, n);

    return 0;
}

