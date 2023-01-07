#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int satir,sutun,i,j,sayac=0;
    char matris[100][100];
    char isim[50];
    printf("Lutfen Isminizi Giriniz!\n");
    gets(isim);
    printf("Satir sayisini giriniz\n");
    scanf("%d",&satir);
    if(satir>=5 && satir<=15)
    {
        printf("sutun sayisini giriniz\n");
        scanf("%d",&sutun);
        if(sutun<=15 && sutun>=5)
      {
        for(i=0;i<satir;i++)
       {
            for(j=0;j<sutun;j++)
            {
                if(isim[sayac]!='\0')
                {
                    matris[i][j]=isim[sayac];
                    printf("%4c",matris[i][j]);
                    sayac++;
                }
                else
                {
                    sayac=0;
                    matris[i][j]=isim[sayac];
                    printf("%4c",matris[i][j]);
                    sayac++;
                }


            }
            printf("\n");
        }
      }
      else
      {
          printf("Gecerli Sutun Sayisi Giriniz!\n");
      }
    }
    else
    {
        printf("Gecerli Satir Sayisi Giriniz!\n");
    }
    return 0;
}
