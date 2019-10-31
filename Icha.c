#include <stdio.h>
int main()
{
    printf("\tBIODATA PRIBADI SAYA\n\n");
    printf("NAMA : ICHA SYAHFITRI\n");
    printf("\NPM : 1914370118\n");
    printf("\KELAS : REGULER 1D\n");
    printf("\FAKULTAS : SAINS & TEKNOLOGI\n");
    printf("\PRODI : SISKOM\n");
    printf("\TUGAS 1\n");


    int d= 1500;
    int e= 800;
    int f;
    f=d-e;
    printf("baris 1 -nilai f adalah %d\n",f);
    f=d+e;
    printf("baris 2 -nilai f adalah %d\n",f);
    f=d%e;
    printf("baris 3 -nilai f adalah %d\n",f);
    f=d*e;
    printf("baris 4 -nilai f adalah %d\n",f);
    f=d/e;
    printf("baris 5 -nilai f adalah %d\n",f);
    f=d++;
    printf("baris 6 -nilai f adalah %d\n",f);
    f=d--;
    printf("baris 7 -nilai f adalah %d\n",f);
    return 0;
}
