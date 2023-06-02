//đảo ngược 1 chuỗi kí tự 
//-Tách các từ và lưu vào trong mảng
//- sau đó chạy vòng lặp ngược lại 

#include<stdio.h>
#include<string.h>

void Hien_thi(char arr[100][20],int size);
void Tach_tu(char* arr);

void Tach_tu(char* arr)
{
    char arr1[100][20];//mảng có 100 từ và mỗi từ có 19 kí tự, kí tự cuối là NULL
    int i = 0;
    char *p;
    const char *kitudb = " .,-\t\n";
    for(p = strtok(arr, kitudb); p != NULL; p = strtok(NULL, kitudb))
    {
        strcpy(arr1[i++],p);//copy từ vừa mới tách được vào mảng arr1 và tăng biến i lên 1 đơn vị
    }
    Hien_thi(arr1,i);

}

void Hien_thi(char arr[100][20], int size)
{
    for(int i = size - 1; i>=0;i--)
    {
        printf("%s ",arr[i]);
    }
}

int main()
{
    char arr[1000];
    fgets(arr, 999, stdin);
    int size = 0;
    Tach_tu(arr);
    return 0;
}