//nhập 1 mảng và sắp xếp từ bé đến lớn
//liệt kê số lần xuất hiện của các phần tử trong mảng

#include<stdio.h>
#include<stdbool.h>
void Nhap_mang(int arr[], int *n)
{
    while ((*n)<=0)
    {
        printf("Nhap so lon hon 0 = ");
        scanf("%d", n);
    }
    for(int i = 0;i< *n;i++)
    {
        printf("\narr[%d]= ",i);
        scanf("%d",&arr[i]);
    }
}
void Sap_xep_tang_dan(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=n-1;j>i;j--)
        {
            if(arr[j] < arr[j-1])
            {
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
    }
}
void Tim_phan_tu_phan_biet(int arr[], int arr1[], int n, int *m)
{
    *m = 0;
    arr1[*m] = arr[0];//cho phần tử đầu tiên của mảng arr chính là phần tử riêng biệt
    (*m)++;//số lượng phần tử mảng arr1 tăng lên 1 đơn vị

    for(int i = 1;i<n;i++)//vòng lặp duyệt phần từng phần tử của mảng arr, bắt đầu bằng 1 do là ở trên đã cho phần tử đầu tiên là phần tử riêng biệt
    {
        bool kiem_tra = true;// cho biến bằng true
        for(int j = i-1;j>=0;j--)// vòng lặp duyệt từ phần tử i-1 về phần tử ban đầu của mảng arr
        {
            if(arr[i] == arr[j])//nếu arr[i] trước đó có tồn tại 
            {
                kiem_tra = false;// cập nhật a[i] không phải là phần tử riêng biệt
                break;
            }
        }
        if(kiem_tra == true)//chưa tồn tại
        {
            arr1[*m] = arr[i];//thêm vào mảng arr1
            (*m)++;
        }
    }
}
void dem_so_lan_xuat_hien(int arr[], int arr1[], int n, int m)
{
    Tim_phan_tu_phan_biet(arr, arr1, n, &m);
    //so sánh từng phần tử của mảng arr1 với mảng arr, phần tử nào trùng thì tăng biến dem 
    for(int i = 0; i < m; i++)
    {
        int dem = 0;
        for(int j = 0; j < n;j++)
        {
            if(arr1[i] == arr[j])
            {
                dem++;
            }
        }
        printf("\nso %d: xuat hien %d lan\n", arr1[i], dem);
    }
}
void Xuat_mang(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}

int main()
{
    int n = 0;
    int m;
    int arr[100];
    int arr1[100];
    Nhap_mang(arr,&n);
    Xuat_mang(arr,n);
    printf("\nSap xep tu nho den lon: ");
    Sap_xep_tang_dan(arr,n);
    Xuat_mang(arr,n);
    printf("\nSo lan xuat hien cua cac phan tu trong mang: ");
    dem_so_lan_xuat_hien(arr,arr1,n,m);
    return 0;
}