#include<stdio.h>

void bubbleSort(int a[], int n){
    for (int i=0; i<n-1; i++) {
		for (int j=0; j<n-i-1; j++) {
			if (a[j] > a[j+1]) {
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}

void display(int a[], int n){
    for (int i=0; i<n; i++) {
        printf("%d ", a[i]);
    }
}

int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0; i<n; i++) {
        scanf("%d",&a[i]);
    }
    printf("mang truoc khi duoc sap xep: ");
    display(a, n);
    printf("\n");
    bubbleSort(a, n);
    printf("mang sau khi duoc sap xep: ");
    display(a, n);
}