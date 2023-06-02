#include <stdio.h>
#define MAX 10

int Tim_kiem_nhi_phan(int arr[], int num)
{
    int start = 0, end = MAX - 1;

    while (start <= end) 
    {
        int mid = (start + end) / 2;
        if (arr[mid] == num)
            return 1;
        else if (arr[mid] < num)
            start = mid + 1;
        else
            end = mid - 1;
    }

    return 0;
}

int main() {
    int arr[MAX] = {1, 2, 3, 4, 5};
    int num;
    while (1)
    {
        printf("Nhap so: ");
        scanf("%d", &num);
        if (Tim_kiem_nhi_phan(arr, num))
            printf("%d co trong mang.\n", num);
        else
            printf("%d khong co trong mang.\n", num);
    }
    return 0;
}