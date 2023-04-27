#include<stdio.h>
int main()
{
	int islem,tutar;
	float bakiye=2000;
	printf("\n islemler");
	printf("\n1.)Para Cekme");
	printf("\n2.)Para yatirma");
	printf("\n3.)Bakiye Sorgulama");
	printf("\n4.)Cikis");
	printf("\nLutfen yapmak istediginiz islemi seciniz..:");
	scanf("%d",&islem);
	switch(islem)
	{
		case 1:
		{
			printf("Lutfen cekmek istediginiz tutari giriniz..:");
			scanf("%d",&tutar);
			if(tutar>bakiye)
			{
				printf("Yetersiz bakiye");
			}
			else
			{			
				bakiye=bakiye-tutar;
				printf("Kalan Bakiyeniz..: %.0f",bakiye);
			}				
		}break;
		case 2:
		{
			printf("Lutfen yatirmak istediginiz tutari giriniz..:");
			scanf("%d",&tutar);
			bakiye=bakiye+tutar;
			printf("Yeni bakiyeniz..:%.0f",bakiye);
				
		}break;
		case 3:
		{
			printf("Bakiyeniz..:%.0f",bakiye);
				
		}break;	
		case 4:
		{
			printf("Cikis yapiliyor...");
		}break;
		default :
		{
			printf("Lutfen 1-4 arasinda bir deger giriniz");
		}
		return 0;
			
	}
}
