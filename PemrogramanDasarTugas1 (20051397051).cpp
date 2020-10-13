#include<stdio.h>
#include<conio.h>

int sisa, Total_Mulai, Total_Selesai, jam_mulai, menit_mulai, detik_mulai, jam_selesai, menit_selesai, detik_selesai, total_jam_pemakaian, total_menit_pemakaian, total_detik_pemakaian, durasi, total_pembayaran;
	main() 
  		{
	printf("	>>>	BILLING WARNET	<<< \n");
	printf("	>>>	Bilqist NET	<<<	\n");
	
	
	printf("\n \n");


		printf("Tadi Mulai Jam?\n");
			printf(	"Jam Mulai	:	");
				scanf("	%i",&jam_mulai);
			printf(	"Menit Mulai	:	");
				scanf("	%i",&menit_mulai);
			printf(	"Detik Mulai	:	");
				scanf("	%i",&detik_mulai);
		Total_Mulai=(jam_mulai*3600)+(menit_mulai*60)+detik_mulai;
		printf ("\n \n");
		
		printf("Selesai Jam?\n");
			printf(	"Jam Selesai	:	");
				scanf("		%i",&jam_selesai);
			printf(	"Menit Selesai	:	");
				scanf("		%i",&menit_selesai);
			printf(	"Detik Selesai	:	");
				scanf("		%i",&detik_selesai);
		Total_Selesai=(jam_selesai*3600)+(menit_selesai*60)+detik_selesai;
			durasi=Total_Selesai-Total_Mulai;
		printf ("\n \n");		
		
		total_pembayaran=durasi*5000/3600;
			total_jam_pemakaian=durasi/3600;
			sisa=durasi%3600;
			total_menit_pemakaian=sisa/60;
			total_detik_pemakaian=sisa%60;
		printf ("\n \n");
		
		printf("LAMA PEMAKAIAN	:	\n");
			printf("	%i Jam\n", total_jam_pemakaian);
			printf("	%i Menit\n", total_menit_pemakaian);
			printf("	%i Detik\n", total_detik_pemakaian);
		printf ("\n \n");
		
		printf("TARIF	=	Rp.5000,- /Jam");
		printf ("\n \n");
			printf ("TOTAL BIAYA YANG HARUS DIBAYAR	=" );
			printf("	Rp. %i,", total_pembayaran);
		printf ("\n \n \n \n");
			printf ("TERIMA KASIH ATAS KERJASAMANYA :)");
		printf ("\n");
		
		getch();
		return 0;
	}
