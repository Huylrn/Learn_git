#include <stdio.h>
#include <string.h>

int main() {
    char* s1 = "Hello";
    char* s2 = "World!";
    int n = 10;

    int len1 = strlen(s1);
    int len2 = strlen(s2);

    if (len1 < len2) {
        printf("%*s%s\n", n - len1, "", s1);
        printf("%s\n", s2);
    } else {
        printf("%s\n", s1);
        printf("%*s%s\n", n - len2, "", s2);
    }

    return 0;
}

struct SinhVien {
    char TenSV[50];
    char MaSV[50];
    char Lop[50];
    int NamSinh;
};

void Nhap(SinhVien sv[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap thong tin sinh vien thu %d:\n", i);
        printf("Nhap ten sinh vien: ");
        fflush(stdin);
        gets(sv[i].TenSV);
        printf("Nhap ma sinh vien: ");
        fflush(stdin);
        gets(sv[i].MaSV);
        printf("Nhap lop: ");
        fflush(stdin);
        gets(sv[i].Lop);
        printf("Nhap nam sinh: ");
        scanf("%d", &sv[i].NamSinh);
    }
}

void Xuat(SinhVien sv[], int n) {
    printf("\n-----THONG TIN SINH VIEN----\n");
    printf("TenSv \t\t MaSV \t Lop \t NamSinh \n");
    for (int i = 0; i < n; i++) {
        printf("%s \t %s \t %s \t %d \n", sv[i].TenSV, sv[i].MaSV, sv[i].Lop, sv[i].NamSinh);
    }
}

int main() {
    SinhVien sv[100];
    int n;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    Nhap(sv, n);
    Xuat(sv, n);
}
