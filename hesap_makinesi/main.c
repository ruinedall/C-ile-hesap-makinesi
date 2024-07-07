#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	
	int secim1, secim2, sayi1, sayi2, sayi3, s, ucgenalan ,alan, sonuc, pi=3;

	printf("***************************************\n***************************************\n*****HESAP MAKINESINE HOS GELDINIZ*****\n***************************************\n***************************************");
	printf("\nIslem yapmak icin asagidaki tablodan yararlanabilirsiniz.\n");
	
	printf("\n1 - Dort islem");
	printf("\n2 - Alan hesaplari");
	printf("\n3 - Cevre hesaplari");
	printf("\n4 - Us hesaplari");
	printf("\n5 - Kok hesaplari\n");
	scanf("%d",&secim1);
	printf("\n");
	
	switch (secim1)
	{
		case 1: 
		printf("Yapmak istediginiz islemi secin.\n\n");
		printf("1- Toplama\n2- Cikarma\n3- Carpma\n4- Bolme\n");
		scanf("%d",&secim2);
		printf("\n");
			if (secim2==1)
			{
				printf("Toplamak istediginiz sayilari arasinda bosluk olacak sekilde girin.\n\n");
				scanf("%d %d",&sayi1,&sayi2);
				printf("Sonuc: %d\n",sayi1+sayi2);
			}
			else if (secim2==2)
			{
				printf("Sirasiyla cikarmak istediginiz sayilari arasinda bosluk olacak sekilde girin.\n");
				scanf("%d %d",&sayi1,&sayi2);
				printf("Sonuc: %d\n",sayi1-sayi2);
			}
			else if (secim2==3)
			{
				printf("Carpmak istediginiz sayilari arasinda bosluk olacak sekilde girin.\n\n");
				scanf("%d %d",&sayi1,&sayi2);
				printf("Sonuc: %d\n",sayi1*sayi2);
			}
			else if (secim2==4)
			{
				printf("Sirasiyla bolmek istediginiz sayilari arasinda bosluk olacak sekilde girin.\n\n");
				scanf("%d %d",&sayi1,&sayi2);
				printf("Sonuc: %d\n",sayi1/sayi2);
			}
			else 
			{
				printf("SIIIUUUUU.");
			}
		break;
	
		case 2: 
		printf("Alanini hesaplamak istediginiz sekli girin.\n");
		printf("1- Daire\n2- Ucgen\n3- Kare\n4- Dikdortgen\n5- Duzgun besgen\n6- Duzgun altigen\n");
		scanf("%d",&secim2);
		printf("\n");
			if (secim2==1)
			{
				printf("Dairenin yaricapini giriniz.\n");
				scanf("%d",&sayi1);
				printf("Girdiginiz degerlere gore dairenin alani: %d",sayi1*pi*sayi1);
			}
			if (secim2 == 2) 
			{
			    printf("Kenar uzunluklarini sirayla girin: \n");
			    scanf("%d %d %d", &sayi1, &sayi2, &sayi3);
			    s = (sayi1 + sayi2 + sayi3) / 2;
			    ucgenalan = sqrt(s * (s - sayi1) * (s - sayi2) * (s - sayi3));
			    printf("Ucgenin alani: %d\n", ucgenalan);
			}
			if (secim2==3)
			{
				printf("Karenin bir kenarini girin:\n");
				scanf("%d",&sayi1);
				printf("Karenin alani : %d", sayi1*sayi1);
			}
			if (secim2==4)
			{
				printf("Dikdortgenin kenarlarini girin:\n");
				scanf("%d %d",&sayi1, &sayi2);
				printf("Dikdortgenin alani: %d",sayi1*sayi2); 
			}
			if (secim2==5)
			{
				printf("Duzgun besgenin bir kenarini girin: ");
				scanf("%d",&sayi1);
				ucgenalan= sayi1*(2* sayi1/3)/2;
				printf("Besgenin alani: %d",ucgenalan*5);
			}
			if (secim2==6)
			{
				printf("Altigenin bir kenarini girin: ");
				scanf("%d", &sayi1);
				alan = (3 * sqrt(3) / 2.0) * sayi1 * sayi1;
				printf("Altigenin alani: %d\n", alan);
			}
		break;
		
		case 3:
		printf("Cevresini hesaplamak istediginiz sekli tuslayin:\n\n");
		printf("1- Daire\n2- Ucgen\n3- Kare\n4- Dikdortgen\n5- Duzgun besgen\n6- Duzgun altigen\n");
		scanf("%d",&sayi1);
		
		if (sayi1==1)
		{
			printf("Dairenin yaricapini giriniz: ");
			scanf("%d",&sayi1);
			printf("Dairenin cevresi: %d",pi*sayi1*2);
		}
		else if (sayi1==2||sayi1==3||sayi1==4||sayi1==5||sayi1==6)
		{

			if (sayi1==2)
			{
				printf("Seklin bir kenarini giriniz:");
				scanf("%d",&sayi2);
				printf("Cevre: %d",sayi2*3);
			}
			if (sayi1==3)
			{
				printf("Seklin bir kenarini giriniz:");
				scanf("%d",&sayi2);
				printf("Cevre: %d",sayi2*4);
			}
			if (sayi1==4)
			{
				printf("Seklin kenarlarini giriniz:");
				scanf("%d",&sayi2);
				scanf("%d",&sayi3);
				printf("Cevre : %d",sayi2*sayi3);
			}
			if (sayi1==5)
			{
				printf("Seklin bir kenarini giriniz:");
				scanf("%d",&sayi2);
				printf("Cevre: %d",sayi2*5);
			}
			if (sayi1==6)
			{
				printf("Seklin bir kenarini giriniz:");
				scanf("%d",&sayi2);
				printf("Cevre: %d",sayi2*6);
			}
		}
		break;
		
		case 4: 
		printf("Ussunu almak istediginiz sayiyi ve ussunu arasinda bosluk olacak sekilde sirasiyla yaziniz.");
		scanf("%d %d",&sayi1,&sayi2);
		sonuc=pow(sayi1,sayi2);
		printf("Sonuc: %d",sonuc);
		break;
		
		case 5:
		printf("Karekok almak icin 2'yi, kupkok almak icin 3'u tuslayin.\n");
		scanf("%d",&sayi2);
		if (sayi2==2)
		{
			printf("Karekokunu almak istediginiz sayiyi girin:\n");
			scanf("%d",&sayi1);
			sonuc=sqrt(sayi1);
			printf("Sonuc: %d",sonuc);
		}
		if (sayi2==3)
		{
			printf("Kupkokunu almak istediginiz sayiyi girin:\n");
			scanf("%d",&sayi1);
			sonuc=cbrt(sayi1);
			printf("Sonuc: %d",sonuc);
		}
		break;
	
	}
				
	return 0;
}
