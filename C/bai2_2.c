//đếm xem từ trong chuỗi xuất hiện bao nhiêu lần
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

struct Tu 
{
    char Luu_tu[50];// mảng để lưu thông tin mỗi từ
    int count;// biến để đếm số lần xuất hiện của mỗi từ
};

//---------Đếm số lần xuất hiện của từ trong chuỗi--------------
void Them_Dem(char* word, struct Tu *words, int *size)
{
    bool kiem_tra = false;
    for( int i = 0; i< *size; i++)
    {
        // so sánh word đã có trong mảng words hay chưa, nếu có thì tăng giá trị của thành viên count trong Tu lên 1 đơn vị
        if(strcmp(word, words[i].Luu_tu) == 0) 
        {
            words[i].count++;
            kiem_tra = true;
            break;
        }
    }
    // nếu không có thì sao chép word vào mảng Luu_tu của Struct Tu và đánh dấu word đã xuất hiện 1 lần
    if(kiem_tra == false)
    {
        strcpy(words[*size].Luu_tu, word);
        words[*size].count = 1;
        (*size) ++;// tăng số lượng từ hiện có trong danh sách lên
    }
}

void Tach_Dem(char* arr, struct Tu *words, int *size)
{
    char *p;
    const char* kitudb = " .,-\t\n";//dấu hiệu nhận biết kết thúc 1 từ
    //vòng lặp dùng hàm tách chuỗi arr với dấu hiệu tách là kitudb, đk p khác kí tự NULL, tiếp tục tách mảng arr
    for(p = strtok(arr, kitudb); p != NULL; p = strtok(NULL, kitudb))
    {
        Them_Dem(p, words, size);//từ vừa tách được là p, nơi lưu là words, con trỏ
    }
}
void Hien_thi_dem(struct Tu* words, int size)
{
    for(int i = 0; i < size;i++)
    {
        printf("%s : %d\n",words[i].Luu_tu, words[i].count);
    }
}

int main()
{
    char arr[1000];
    fgets(arr, 999, stdin);
    struct Tu words[200];
    int size = 0;//số lượng phần tử danh sách các từ
    Tach_Dem(arr, words, &size);
    Hien_thi_dem(words, size);
    return 0;
}