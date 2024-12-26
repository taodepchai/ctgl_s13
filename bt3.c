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
int binarySearch(int arr[], int left, int right, int target) {
    if (left > right) {
        return -1;
    }

    int mid = left + (right - left) / 2;

    if (arr[mid] == target) {
        return mid;
    } else if (arr[mid] > target) {
        return binarySearch(arr, left, mid - 1, target);
    } else {
        return binarySearch(arr, mid + 1, right, target);
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
    int searchValue;
    printf("nhap phan tu can tim: ");
    scanf("%d",&searchValue);
    selectionSort(a, n);
    printf("mang sau khi duoc sap xep: ");
    display(a, n);
    printf("\n");
    int index = binarySearch(a, 0, n - 1, searchValue);
    if (index != -1) {
        printf("phan tu %d duoc tim thay o vi tri %d",searchValue,index);
    } else {
        printf("khong tim thay phan tu %d",searchValue);
    }   
}