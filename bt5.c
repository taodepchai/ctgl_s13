#include <stdio.h>
void display(int a[], int n){
    for (int i=0; i<n; i++) {
        printf("%d ", a[i]);
    }
}

void bubbleSortImproved(int a[], int n) {
    int count = 0;
    for (int i = 0; i < n - 1; i++) {
        int swapped = 0;
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                swapped = 1;
            }
        }
        display(a,n);
        printf("\n");
        count++;
        if (!swapped) {
            break;
        }
    }
    printf("xap xep hoan thanh sau %d lan lap.\n", count);
}

int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0; i<n; i++) {
        scanf("%d",&a[i]);
    }

    printf("mang ban dau: ");
    display(a,n);
    printf("\n");
    bubbleSortImproved(a, n);
    printf("mang sau xap xep: ");
    display(a,n);
}
