#include <stdio.h>
#include <string.h>

void docSo(int n) {
    char *hangChuc[] = {"", "muoi", "hai muoi", "ba muoi", "bon muoi", "nam muoi", "sau muoi", "bay muoi", "tam muoi", "chin muoi"};
    char *hangDonVi[] = {"", "mot", "hai", "ba", "bon", "nam", "sau", "bay", "tam", "chin"};
    char *hangTram[] = {"", "mot tram", "hai tram", "ba tram", "bon tram", "nam tram", "sau tram", "bay tram", "tam tram", "chin tram"};

    if (n >= 1000000000) {
        docSo(n / 1000000000);
        printf(" ty ");
        n %= 1000000000;
    }

    if (n >= 1000000) {
        docSo(n / 1000000);
        printf(" trieu ");
        n %= 1000000;
    }

    if (n >= 1000) {
        docSo(n / 1000);
        printf(" nghin ");
        n %= 1000;
    }

    int tram = n / 100;
    int chuc = (n % 100) / 10;
    int donVi = n % 10;

    if (tram > 0) {
        printf("%s ", hangTram[tram]);
    }

    if (chuc > 0) {
        printf("%s ", hangChuc[chuc]);
    }

    if (donVi > 0) {
        printf("%s ", hangDonVi[donVi]);
    }
}

int main() {
    int n;
    printf("Nhap vao 1 so: ");
    scanf("%d", &n);

    docSo(n);
    printf("\n");

    return 0;
}