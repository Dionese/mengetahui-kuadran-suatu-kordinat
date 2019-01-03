#include<stdio.h>
#include<conio.h>

int main()
{
    int x,y;
    printf("PROGRAM MENGETAHUI KUADRAN SUATU KORDINAT\n\n");
    printf("Masukan Kordinat X:");
    scanf("%i",&x);
    printf("Masukan Kordinat Y:");
    scanf("%i",&y);
    if(x>0 && y>0)
        printf("Kuadran I");
    if(x>0 && y<0)
        printf("Kuadran II");
    if(x<0 && y<0)
        printf("Kuadran III");
    if(x<0 && y>0)
        printf("Kuadran IV");
    if(x==0 && y==0)
        printf("Titik pusat");
    getch();
}
