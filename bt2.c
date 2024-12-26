#include<stdio.h>

void selectionSort(int a[], int n){
    for (int i=0; i<n-1; i++) {
		for (int j=i+1; j<n; j++)
			if (a[i] > a[j]) {
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
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
    selectionSort(a, n);
    printf("mang sau khi duoc sap xep: ");
    display(a, n);
}