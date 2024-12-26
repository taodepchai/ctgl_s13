#include<stdio.h>

void insertionSort(int a[], int n){
    for (int i = 1; i<n; i++){
		int temp = a[i];
		int j = i - 1;
		while(j >= 0 && a[j] > temp){
			a[j+1] = a[j];
			j = j-1;
		}
		a[j+1] = temp;
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
    insertionSort(a, n);
    printf("mang sau khi duoc sap xep: ");
    display(a, n);
}