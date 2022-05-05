#include <iostream>

#include<conio.h>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() {
	string cevap1,cevap2,cevap3,cevap4,cevap5;
	int dogru1=0;
		int dogru2=0;
			int dogru3=0;
				int dogru4=0;
					int dogru5=0;
						int dogrutoplam;
						int rutbe=0;

	setlocale(LC_ALL,"Turkish");
	int hiz,f35,j20,su50;
		srand(time(NULL));
	hiz=1+rand()%100;
	srand(time(NULL));
	f35=1+rand()%10;
	srand(time(NULL));
	j20=1+rand()%10;
	srand(time(NULL));
	su50=1+rand()%10;
	string ad,soy,onay1,sec,start;
	cout<<"               TÜRK YILDIZLARI JET ÜSSÜ TUGAYLIÐI JET KONTROL PROÐRAMINA HOÞGELDÝNÝZ"<<endl;
	cout<<endl;
	cout<<"  Lütfen Adýnýzý Giriniz ..."<<endl;
	cin>>ad;
	cout<<"  Lütfen Soy Adýnýzý Giriniz"<<endl;
	cin>>soy;
	cout<<endl;
cout<<" Adýnýz :"<<ad<<"\t Soyadýnýz : "<<soy<<endl;
cout<<endl;
cout<<  "Bu Bilgileri Onaylýyorsanýz 'onay' Onaylamýyorsanýz 'iptal' Yazýnýz"<<endl;
cin>>onay1;
cout<<endl;
if(onay1=="onay"){
	cout<<   "Bilgileri Onayladýnýz.."<<endl;
	cout<<endl;
	
	cout<<   "SAYIN PÝLOT  "  <<ad<<"  "  <<soy<<   "   JET KONTROL SÝSTEMÝNE HOÞGELDÝNÝZ"<<endl;
	cout<<endl;
	////// sýnavlar burda baþlýyor....
	
	cout<<"Sayýn Pilot Seviyenizi Tekabül eden Jetleri kullanmanýz amacýyla size bir kaç sorumuz olacak... Hazýr iseniz Enter;"<<endl;
	getch();
	cout<<"1.Soru ) Pilotculuk alanýnda Türbilansa Verilen Ýsim nedir ?"<<endl;
	cout<<endl;
	cout<<"   A) Air Pocket    B)Ýnterst Rate   C) Bond   D) Supple "<<endl;
	cin>>cevap1;
	if(cevap1=="a"){
		dogru1=+1;
	}
	else{
		cout<<endl;
	}
////////////////////////////////////////////////////////////////////////////////7 2.soru
	cout<<"2.Soru ) Pilotculuk alanýnda Kokpit'e Verilen Ýsim nedir ?"<<endl;
	cout<<endl;
	cout<<"   A) The Mand   B) Shift   C) Wealth   D) Flightdeck "<<endl;
	cin>>cevap2;
	if(cevap2=="d"){
		dogru2=+1;
		
	}
	else{
		cout<<endl;
	}
	/////////////////////////////////////////////////////////////////////////////////////////3. soru
		cout<<"3.Soru ) Pilotculuk alanýnda Þiddetli yaðýþ ve fýrtýnaya  Verilen Ýsim nedir ?"<<endl;
	cout<<endl;
	cout<<"   A) Capital  B) Area of weather   C) Down ward  D) slope "<<endl;
	cin>>cevap3;
	if(cevap3=="b"){
		dogru3=+1;
		
	}
	else{
		cout<<endl;
	}
	/////////////////////////4.soru
	cout<<"4.Soru ) Pilotculuk alanýnda 2. Pilota  Verilen Ýsim nedir ?"<<endl;
	cout<<endl;
	cout<<"   A) Fisher  B) Price  C) First Officer  D) Accept "<<endl;
	cin>>cevap4;
	if(cevap4=="c"){
		dogru4=+1;
		
	}
	else{
		cout<<endl;
	}
	///////////////////////////5. Soru
	cout<<"5.Soru ) Pilotculuk alanýnda Rota deðiþikliðine  Verilen Ýsim nedir ?"<<endl;
	cout<<endl;
	cout<<"   A) Trade  B) Deadhead  C) Skýll  D) Whispere "<<endl;
	cin>>cevap5;
	if(cevap5=="b"){
		dogru5=+1;
		
	}
	else{
		cout<<endl;
	}

	dogrutoplam=dogru1+dogru2+dogru3+dogru4+dogru5;
	cout<<"    Üstekki sorulardan "<<dogrutoplam<<"  Dogru Cevap Verdiniz"<<endl;
	cout<<endl;
	if(dogrutoplam==5){
		cout<<"Tebrikler ALBAY Rütbesine Sahip Oldunuz ..Yýldýz Seviyeiniz : * * * * *"<<endl;
		rutbe=rutbe+5;
		
	}  
	if(dogrutoplam==4){
		cout<<"Tebrikler YÜZBAÞI Rütbesine Sahip Oldunuz...Yýldýz Seviyeiniz :  * * * * "<<endl;
		rutbe=rutbe+4;
	}
	if(dogrutoplam==3){
		cout<<"Tebrikler TEÐMEN Rütbesine Sahip Oldunuz...Yýldýz Seviyeiniz :  * * *"<<endl;
		rutbe=rutbe+3;
	}


	if(dogrutoplam==0){
		cout<<"Üzgünüz...Pilotculuk hakkýnda hiçbir bilgi sahibi olmadýðnýzdan dolayý JET Sürümüne Uygun Deðilsiniz"<<endl;
		
	}
// RÜTBE KONTROL
	if(rutbe==5){
		cout<<" ALBAY RÜTBESÝNE SAHÝP OLDUÐUNUZDAN DOLAYI SÝZE 2500 HP OLAN F35 DENK GÖRÜLDÜ..."<<endl;
		
	
	
	
	
			cout<<"LOCHACKED MARKASININ  F35 MODELÝ SEÇÝLDÝ.... "<<endl;
			cout<<endl;
			cout<<"HAVALANMADAN ÖNCE JETÝMÝZÝN BAZI KONTROLLERÝ SAÐLANACAKTIR"<<endl;
				cout<<endl;
			cout<<"KONTROLLERE BAÞLAMAK ÝÇÝN TIKLANIYIZ..."<<endl;
			getch();
			cout<<endl;
		
			if(f35==5){
				cout<<"KONTROLDE BAZI AKSAKLIKLAR YAÞANDI LÜTFEN TEKRAR DENEYÝNÝZ... "<<endl;
			}
			else {
				cout<<"JET GENEL KONTROLÜ BAÞARILI BÝR ÞEKÝLDE GERÇEKLEÞTÝRÝÞMÝÞTÝR.."<<endl;
			}
			cout<<endl;
			cout<<"SIRA JET MOTORUMUZU ÇALIÞTIRMAYA GELDÝ."<<"LÜTFEN MOTORU ÇALIÞTIRMAK ÝÇÝN 'start' yazýnýz"<<endl;
			cin>>start;
			if(start=="start"){
				cout<<"JET MOTORLARI ÇALIÞTIRILDI. VUVUVUVUVUVUVU"<<endl;
				cout<<endl;
				cout<<"Þuan Ki Jet Motorlarýn Deviri Þudur :  "<<hiz<<endl;
				cout<<endl;
				cout<<"Jet Motorlarýna Otomatik Olarak Güç Vermek Ýstiyorsanýz Enterleyiniz"<<endl;
				cout<<endl;
				getch();
				if(hiz>=0&&hiz<=10){
					cout<<"JET MOTORLARA % 90 - % 95  ORANINDA GÜÇ UYGULANILINIYOR..."<<endl;
					
				}
				else if(hiz>=10&&hiz<=20){
						cout<<"JET MOTORLARA % 80- % 90  ORANINDA GÜÇ UYGULANILINIYOR..."<<endl;
					
					
		
				}
					else if(hiz>=20&&hiz<=30){
						cout<<"JET MOTORLARA % 80- % 70  ORANINDA GÜÇ UYGULANILINIYOR..."<<endl;
					
					
		
				}
					else if(hiz>=30&&hiz<=40){
						cout<<"JET MOTORLARA % 70- % 60  ORANINDA GÜÇ UYGULANILINIYOR..."<<endl;
					
					
		
				}
					else if(hiz>=40&&hiz<=50){
						cout<<"JET MOTORLARA % 60- % 50  ORANINDA GÜÇ UYGULANILINIYOR..."<<endl;
					
					
		
				}
					else if(hiz>=50&&hiz<=60){
						cout<<"JET MOTORLARA % 50- % 40  ORANINDA GÜÇ UYGULANILINIYOR..."<<endl;
					
					
		
				}
					else if(hiz>=60&&hiz<=70){
						cout<<"JET MOTORLARA % 40- % 30  ORANINDA GÜÇ UYGULANILINIYOR..."<<endl;
					
					
		
				}
					else if(hiz>=70&&hiz<=80){
						cout<<"JET MOTORLARA % 30- % 20  ORANINDA GÜÇ UYGULANILINIYOR..."<<endl;
					
					
		
				}
					else if(hiz>=80&&hiz<=90){
						cout<<"JET MOTORLARA % 20- % 10  ORANINDA GÜÇ UYGULANILINIYOR..."<<endl;
					
					
		
				}
					else if(hiz>=90&&hiz<100){
						cout<<"JET MOTORLARA % 10   ORANINDA GÜÇ UYGULANILINIYOR..."<<endl;
					
					
		
				}
				
					else if(hiz==100){
						cout<<"JET MOTORLARI TAM GÜCÜNDE ÇALIÞIYOR..."<<endl;
					
					
		
				}
					cout<<endl;
				cout<<"EROÐLU SOFT SUNAR..."<<endl;
				
			}
			else{
				cout<<"JET MOTORU ÇALIÞTIRMA BAÞARISIZ...."<<endl;
			}
		
		}
		
	if(rutbe==4){
		 cout<<"ALBAY RÜTBESÝNE SAHÝP OLDUÐUNUZDAN DOLAYI SÝZE 2000 HP OLAN SU-50 DENK GÖRÜLDÜ..."<<endl;

	
	
			cout<<"CHENGDU MARKASININ  SU50 MODELÝ SEÇÝLDÝ.."<<endl;
			cout<<endl;
			cout<<"HAVALANMADAN ÖNCE JETÝMÝZÝN BAZI KONTROLLERÝ SAÐLANACAKTIR"<<endl;
				cout<<endl;
			cout<<"KONTROLLERE BAÞLAMAK ÝÇÝN TIKLANIYIZ..."<<endl;
			getch();
			cout<<endl;
				if(su50==5){
				cout<<"KONTROLDE BAZI AKSAKLIKLAR YAÞANDI LÜTFEN TEKRAR DENEYÝNÝZ... "<<endl;
			}
			else {
				cout<<"JET GENEL KONTROLÜ BAÞARILI BÝR ÞEKÝLDE GERÇEKLEÞTÝRÝÞMÝÞTÝR.."<<endl;
				cout<<endl;
					cout<<"SIRA JET MOTORUMUZU ÇALIÞTIRMAYA GELDÝ."<<"LÜTFEN MOTORU ÇALIÞTIRMAK ÝÇÝN 'start' yazýnýz"<<endl;
			cin>>start;
			if(start=="start"){
				cout<<"JET MOTORLARI ÇALIÞTIRILDI. VUVUVUVUVUVUVU"<<endl;
				cout<<endl;
				cout<<"Þuan Ki Jet Motorlarýn Deviri Þudur :  "<<hiz<<endl;
				cout<<endl;
				cout<<"Jet Motorlarýna Otomatik Olarak Güç Vermek Ýstiyorsanýz Enterleyiniz"<<endl;
				cout<<endl;
				getch();
				if(hiz>=0&&hiz<=10){
					cout<<"JET MOTORLARA % 90 - % 95  ORANINDA GÜÇ UYGULANILINIYOR..."<<endl;
					
				}
				else if(hiz>=10&&hiz<=20){
						cout<<"JET MOTORLARA % 80- % 90  ORANINDA GÜÇ UYGULANILINIYOR..."<<endl;
					
					
		
				}
					else if(hiz>=20&&hiz<=30){
						cout<<"JET MOTORLARA % 80- % 70  ORANINDA GÜÇ UYGULANILINIYOR..."<<endl;
					
					
		
				}
					else if(hiz>=30&&hiz<=40){
						cout<<"JET MOTORLARA % 70- % 60  ORANINDA GÜÇ UYGULANILINIYOR..."<<endl;
					
					
		
				}
					else if(hiz>=40&&hiz<=50){
						cout<<"JET MOTORLARA % 60- % 50  ORANINDA GÜÇ UYGULANILINIYOR..."<<endl;
					
					
		
				}
					else if(hiz>=50&&hiz<=60){
						cout<<"JET MOTORLARA % 50- % 40  ORANINDA GÜÇ UYGULANILINIYOR..."<<endl;
					
					
		
				}
					else if(hiz>=60&&hiz<=70){
						cout<<"JET MOTORLARA % 40- % 30  ORANINDA GÜÇ UYGULANILINIYOR..."<<endl;
					
					
		
				}
					else if(hiz>=70&&hiz<=80){
						cout<<"JET MOTORLARA % 30- % 20  ORANINDA GÜÇ UYGULANILINIYOR..."<<endl;
					
					
		
				}
					else if(hiz>=80&&hiz<=90){
						cout<<"JET MOTORLARA % 20- % 10  ORANINDA GÜÇ UYGULANILINIYOR..."<<endl;
					
					
		
				}
					else if(hiz>=90&&hiz<100){
						cout<<"JET MOTORLARA % 10   ORANINDA GÜÇ UYGULANILINIYOR..."<<endl;
					
					
		
				}
				
					else if(hiz==100){
						cout<<"JET MOTORLARI TAM GÜCÜNDE ÇALIÞIYOR..."<<endl;
					
					
		
				}
				cout<<endl;
				cout<<"EROÐLU SOFT SUNAR..."<<endl;
				
			}
			else{
				cout<<"JET MOTORU ÇALIÞTIRMA BAÞARISIZ...."<<endl;
			}
			}
			
	
	
	}
	
	if(rutbe==4){
		 cout<<"TEÐMEN  RÜTBESÝNE SAHÝP OLDUÐUNUZDAN DOLAYI SÝZE 1500 HP OLAN J20 DENK GÖRÜLDÜ..."<<endl;


			
			cout<<"KNKAHJ MARKASININ  J20 MODELÝ SEÇÝLDÝ...."<<endl;
			cout<<endl;
			cout<<"HAVALANMADAN ÖNCE JETÝMÝZÝN BAZI KONTROLLERÝ SAÐLANACAKTIR"<<endl;
				cout<<endl;
			cout<<"KONTROLLERE BAÞLAMAK ÝÇÝN TIKLANIYIZ..."<<endl;
			getch();
			cout<<endl;
				if(j20==5){
				cout<<"KONTROLDE BAZI AKSAKLIKLAR YAÞANDI LÜTFEN TEKRAR DENEYÝNÝZ... "<<endl;
			}
			else {
				cout<<"JET GENEL KONTROLÜ BAÞARILI BÝR ÞEKÝLDE GERÇEKLEÞTÝRÝÞMÝÞTÝR.."<<endl;
				cout<<endl;
					cout<<"SIRA JET MOTORUMUZU ÇALIÞTIRMAYA GELDÝ."<<"LÜTFEN MOTORU ÇALIÞTIRMAK ÝÇÝN 'start' yazýnýz"<<endl;
			cin>>start;
			if(start=="start"){
				cout<<"JET MOTORLARI ÇALIÞTIRILDI. VUVUVUVUVUVUVU"<<endl;
				cout<<endl;
				cout<<endl;
				cout<<"Þuan Ki Jet Motorlarýn Deviri Þudur :  "<<hiz<<endl;
				cout<<endl;
				cout<<"Jet Motorlarýna Otomatik Olarak Güç Vermek Ýstiyorsanýz Enterleyiniz"<<endl;
				cout<<endl;
				getch();
				if(hiz>=0&&hiz<=10){
					cout<<"JET MOTORLARA % 90 - % 95  ORANINDA GÜÇ UYGULANILINIYOR..."<<endl;
					
				}
				else if(hiz>=10&&hiz<=20){
						cout<<"JET MOTORLARA % 80- % 90  ORANINDA GÜÇ UYGULANILINIYOR..."<<endl;
					
					
		
				}
					else if(hiz>=20&&hiz<=30){
						cout<<"JET MOTORLARA % 80- % 70  ORANINDA GÜÇ UYGULANILINIYOR..."<<endl;
					
					
		
				}
					else if(hiz>=30&&hiz<=40){
						cout<<"JET MOTORLARA % 70- % 60  ORANINDA GÜÇ UYGULANILINIYOR..."<<endl;
					
					
		
				}
					else if(hiz>=40&&hiz<=50){
						cout<<"JET MOTORLARA % 60- % 50  ORANINDA GÜÇ UYGULANILINIYOR..."<<endl;
					
					
		
				}
					else if(hiz>=50&&hiz<=60){
						cout<<"JET MOTORLARA % 50- % 40  ORANINDA GÜÇ UYGULANILINIYOR..."<<endl;
					
					
		
				}
					else if(hiz>=60&&hiz<=70){
						cout<<"JET MOTORLARA % 40- % 30  ORANINDA GÜÇ UYGULANILINIYOR..."<<endl;
					
					
		
				}
					else if(hiz>=70&&hiz<=80){
						cout<<"JET MOTORLARA % 30- % 20  ORANINDA GÜÇ UYGULANILINIYOR..."<<endl;
					
					
		
				}
					else if(hiz>=80&&hiz<=90){
						cout<<"JET MOTORLARA % 20- % 10  ORANINDA GÜÇ UYGULANILINIYOR..."<<endl;
					
					
		
				}
					else if(hiz>=90&&hiz<100){
						cout<<"JET MOTORLARA % 10   ORANINDA GÜÇ UYGULANILINIYOR..."<<endl;
					
					
		
				}
				
					else if(hiz==100){
						cout<<"JET MOTORLARI TAM GÜCÜNDE ÇALIÞIYOR..."<<endl;
					
					
		
				}
					cout<<endl;
				cout<<"EROÐLU SOFT SUNAR..."<<endl;
				
			}
			else{
				cout<<"JET MOTORU ÇALIÞTIRMA BAÞARISIZ...."<<endl;
			}
			}
		
	
	}

	
	

else if(onay1=="iptal"){
	cout<<"Sizin Tarafýnýzdan Bilgileriniz Oynay Dýþý edilmiþtir"<<endl;
}


	
	



}
	return 0;
}
