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
	cout<<"               T�RK YILDIZLARI JET �SS� TUGAYLI�I JET KONTROL PRO�RAMINA HO�GELD�N�Z"<<endl;
	cout<<endl;
	cout<<"  L�tfen Ad�n�z� Giriniz ..."<<endl;
	cin>>ad;
	cout<<"  L�tfen Soy Ad�n�z� Giriniz"<<endl;
	cin>>soy;
	cout<<endl;
cout<<" Ad�n�z :"<<ad<<"\t Soyad�n�z : "<<soy<<endl;
cout<<endl;
cout<<  "Bu Bilgileri Onayl�yorsan�z 'onay' Onaylam�yorsan�z 'iptal' Yaz�n�z"<<endl;
cin>>onay1;
cout<<endl;
if(onay1=="onay"){
	cout<<   "Bilgileri Onaylad�n�z.."<<endl;
	cout<<endl;
	
	cout<<   "SAYIN P�LOT  "  <<ad<<"  "  <<soy<<   "   JET KONTROL S�STEM�NE HO�GELD�N�Z"<<endl;
	cout<<endl;
	////// s�navlar burda ba�l�yor....
	
	cout<<"Say�n Pilot Seviyenizi Tekab�l eden Jetleri kullanman�z amac�yla size bir ka� sorumuz olacak... Haz�r iseniz Enter;"<<endl;
	getch();
	cout<<"1.Soru ) Pilotculuk alan�nda T�rbilansa Verilen �sim nedir ?"<<endl;
	cout<<endl;
	cout<<"   A) Air Pocket    B)�nterst Rate   C) Bond   D) Supple "<<endl;
	cin>>cevap1;
	if(cevap1=="a"){
		dogru1=+1;
	}
	else{
		cout<<endl;
	}
////////////////////////////////////////////////////////////////////////////////7 2.soru
	cout<<"2.Soru ) Pilotculuk alan�nda Kokpit'e Verilen �sim nedir ?"<<endl;
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
		cout<<"3.Soru ) Pilotculuk alan�nda �iddetli ya��� ve f�rt�naya  Verilen �sim nedir ?"<<endl;
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
	cout<<"4.Soru ) Pilotculuk alan�nda 2. Pilota  Verilen �sim nedir ?"<<endl;
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
	cout<<"5.Soru ) Pilotculuk alan�nda Rota de�i�ikli�ine  Verilen �sim nedir ?"<<endl;
	cout<<endl;
	cout<<"   A) Trade  B) Deadhead  C) Sk�ll  D) Whispere "<<endl;
	cin>>cevap5;
	if(cevap5=="b"){
		dogru5=+1;
		
	}
	else{
		cout<<endl;
	}

	dogrutoplam=dogru1+dogru2+dogru3+dogru4+dogru5;
	cout<<"    �stekki sorulardan "<<dogrutoplam<<"  Dogru Cevap Verdiniz"<<endl;
	cout<<endl;
	if(dogrutoplam==5){
		cout<<"Tebrikler ALBAY R�tbesine Sahip Oldunuz ..Y�ld�z Seviyeiniz : * * * * *"<<endl;
		rutbe=rutbe+5;
		
	}  
	if(dogrutoplam==4){
		cout<<"Tebrikler Y�ZBA�I R�tbesine Sahip Oldunuz...Y�ld�z Seviyeiniz :  * * * * "<<endl;
		rutbe=rutbe+4;
	}
	if(dogrutoplam==3){
		cout<<"Tebrikler TE�MEN R�tbesine Sahip Oldunuz...Y�ld�z Seviyeiniz :  * * *"<<endl;
		rutbe=rutbe+3;
	}


	if(dogrutoplam==0){
		cout<<"�zg�n�z...Pilotculuk hakk�nda hi�bir bilgi sahibi olmad��n�zdan dolay� JET S�r�m�ne Uygun De�ilsiniz"<<endl;
		
	}
// R�TBE KONTROL
	if(rutbe==5){
		cout<<" ALBAY R�TBES�NE SAH�P OLDU�UNUZDAN DOLAYI S�ZE 2500 HP OLAN F35 DENK G�R�LD�..."<<endl;
		
	
	
	
	
			cout<<"LOCHACKED MARKASININ  F35 MODEL� SE��LD�.... "<<endl;
			cout<<endl;
			cout<<"HAVALANMADAN �NCE JET�M�Z�N BAZI KONTROLLER� SA�LANACAKTIR"<<endl;
				cout<<endl;
			cout<<"KONTROLLERE BA�LAMAK ���N TIKLANIYIZ..."<<endl;
			getch();
			cout<<endl;
		
			if(f35==5){
				cout<<"KONTROLDE BAZI AKSAKLIKLAR YA�ANDI L�TFEN TEKRAR DENEY�N�Z... "<<endl;
			}
			else {
				cout<<"JET GENEL KONTROL� BA�ARILI B�R �EK�LDE GER�EKLE�T�R��M��T�R.."<<endl;
			}
			cout<<endl;
			cout<<"SIRA JET MOTORUMUZU �ALI�TIRMAYA GELD�."<<"L�TFEN MOTORU �ALI�TIRMAK ���N 'start' yaz�n�z"<<endl;
			cin>>start;
			if(start=="start"){
				cout<<"JET MOTORLARI �ALI�TIRILDI. VUVUVUVUVUVUVU"<<endl;
				cout<<endl;
				cout<<"�uan Ki Jet Motorlar�n Deviri �udur :  "<<hiz<<endl;
				cout<<endl;
				cout<<"Jet Motorlar�na Otomatik Olarak G�� Vermek �stiyorsan�z Enterleyiniz"<<endl;
				cout<<endl;
				getch();
				if(hiz>=0&&hiz<=10){
					cout<<"JET MOTORLARA % 90 - % 95  ORANINDA G�� UYGULANILINIYOR..."<<endl;
					
				}
				else if(hiz>=10&&hiz<=20){
						cout<<"JET MOTORLARA % 80- % 90  ORANINDA G�� UYGULANILINIYOR..."<<endl;
					
					
		
				}
					else if(hiz>=20&&hiz<=30){
						cout<<"JET MOTORLARA % 80- % 70  ORANINDA G�� UYGULANILINIYOR..."<<endl;
					
					
		
				}
					else if(hiz>=30&&hiz<=40){
						cout<<"JET MOTORLARA % 70- % 60  ORANINDA G�� UYGULANILINIYOR..."<<endl;
					
					
		
				}
					else if(hiz>=40&&hiz<=50){
						cout<<"JET MOTORLARA % 60- % 50  ORANINDA G�� UYGULANILINIYOR..."<<endl;
					
					
		
				}
					else if(hiz>=50&&hiz<=60){
						cout<<"JET MOTORLARA % 50- % 40  ORANINDA G�� UYGULANILINIYOR..."<<endl;
					
					
		
				}
					else if(hiz>=60&&hiz<=70){
						cout<<"JET MOTORLARA % 40- % 30  ORANINDA G�� UYGULANILINIYOR..."<<endl;
					
					
		
				}
					else if(hiz>=70&&hiz<=80){
						cout<<"JET MOTORLARA % 30- % 20  ORANINDA G�� UYGULANILINIYOR..."<<endl;
					
					
		
				}
					else if(hiz>=80&&hiz<=90){
						cout<<"JET MOTORLARA % 20- % 10  ORANINDA G�� UYGULANILINIYOR..."<<endl;
					
					
		
				}
					else if(hiz>=90&&hiz<100){
						cout<<"JET MOTORLARA % 10   ORANINDA G�� UYGULANILINIYOR..."<<endl;
					
					
		
				}
				
					else if(hiz==100){
						cout<<"JET MOTORLARI TAM G�C�NDE �ALI�IYOR..."<<endl;
					
					
		
				}
					cout<<endl;
				cout<<"ERO�LU SOFT SUNAR..."<<endl;
				
			}
			else{
				cout<<"JET MOTORU �ALI�TIRMA BA�ARISIZ...."<<endl;
			}
		
		}
		
	if(rutbe==4){
		 cout<<"ALBAY R�TBES�NE SAH�P OLDU�UNUZDAN DOLAYI S�ZE 2000 HP OLAN SU-50 DENK G�R�LD�..."<<endl;

	
	
			cout<<"CHENGDU MARKASININ  SU50 MODEL� SE��LD�.."<<endl;
			cout<<endl;
			cout<<"HAVALANMADAN �NCE JET�M�Z�N BAZI KONTROLLER� SA�LANACAKTIR"<<endl;
				cout<<endl;
			cout<<"KONTROLLERE BA�LAMAK ���N TIKLANIYIZ..."<<endl;
			getch();
			cout<<endl;
				if(su50==5){
				cout<<"KONTROLDE BAZI AKSAKLIKLAR YA�ANDI L�TFEN TEKRAR DENEY�N�Z... "<<endl;
			}
			else {
				cout<<"JET GENEL KONTROL� BA�ARILI B�R �EK�LDE GER�EKLE�T�R��M��T�R.."<<endl;
				cout<<endl;
					cout<<"SIRA JET MOTORUMUZU �ALI�TIRMAYA GELD�."<<"L�TFEN MOTORU �ALI�TIRMAK ���N 'start' yaz�n�z"<<endl;
			cin>>start;
			if(start=="start"){
				cout<<"JET MOTORLARI �ALI�TIRILDI. VUVUVUVUVUVUVU"<<endl;
				cout<<endl;
				cout<<"�uan Ki Jet Motorlar�n Deviri �udur :  "<<hiz<<endl;
				cout<<endl;
				cout<<"Jet Motorlar�na Otomatik Olarak G�� Vermek �stiyorsan�z Enterleyiniz"<<endl;
				cout<<endl;
				getch();
				if(hiz>=0&&hiz<=10){
					cout<<"JET MOTORLARA % 90 - % 95  ORANINDA G�� UYGULANILINIYOR..."<<endl;
					
				}
				else if(hiz>=10&&hiz<=20){
						cout<<"JET MOTORLARA % 80- % 90  ORANINDA G�� UYGULANILINIYOR..."<<endl;
					
					
		
				}
					else if(hiz>=20&&hiz<=30){
						cout<<"JET MOTORLARA % 80- % 70  ORANINDA G�� UYGULANILINIYOR..."<<endl;
					
					
		
				}
					else if(hiz>=30&&hiz<=40){
						cout<<"JET MOTORLARA % 70- % 60  ORANINDA G�� UYGULANILINIYOR..."<<endl;
					
					
		
				}
					else if(hiz>=40&&hiz<=50){
						cout<<"JET MOTORLARA % 60- % 50  ORANINDA G�� UYGULANILINIYOR..."<<endl;
					
					
		
				}
					else if(hiz>=50&&hiz<=60){
						cout<<"JET MOTORLARA % 50- % 40  ORANINDA G�� UYGULANILINIYOR..."<<endl;
					
					
		
				}
					else if(hiz>=60&&hiz<=70){
						cout<<"JET MOTORLARA % 40- % 30  ORANINDA G�� UYGULANILINIYOR..."<<endl;
					
					
		
				}
					else if(hiz>=70&&hiz<=80){
						cout<<"JET MOTORLARA % 30- % 20  ORANINDA G�� UYGULANILINIYOR..."<<endl;
					
					
		
				}
					else if(hiz>=80&&hiz<=90){
						cout<<"JET MOTORLARA % 20- % 10  ORANINDA G�� UYGULANILINIYOR..."<<endl;
					
					
		
				}
					else if(hiz>=90&&hiz<100){
						cout<<"JET MOTORLARA % 10   ORANINDA G�� UYGULANILINIYOR..."<<endl;
					
					
		
				}
				
					else if(hiz==100){
						cout<<"JET MOTORLARI TAM G�C�NDE �ALI�IYOR..."<<endl;
					
					
		
				}
				cout<<endl;
				cout<<"ERO�LU SOFT SUNAR..."<<endl;
				
			}
			else{
				cout<<"JET MOTORU �ALI�TIRMA BA�ARISIZ...."<<endl;
			}
			}
			
	
	
	}
	
	if(rutbe==4){
		 cout<<"TE�MEN  R�TBES�NE SAH�P OLDU�UNUZDAN DOLAYI S�ZE 1500 HP OLAN J20 DENK G�R�LD�..."<<endl;


			
			cout<<"KNKAHJ MARKASININ  J20 MODEL� SE��LD�...."<<endl;
			cout<<endl;
			cout<<"HAVALANMADAN �NCE JET�M�Z�N BAZI KONTROLLER� SA�LANACAKTIR"<<endl;
				cout<<endl;
			cout<<"KONTROLLERE BA�LAMAK ���N TIKLANIYIZ..."<<endl;
			getch();
			cout<<endl;
				if(j20==5){
				cout<<"KONTROLDE BAZI AKSAKLIKLAR YA�ANDI L�TFEN TEKRAR DENEY�N�Z... "<<endl;
			}
			else {
				cout<<"JET GENEL KONTROL� BA�ARILI B�R �EK�LDE GER�EKLE�T�R��M��T�R.."<<endl;
				cout<<endl;
					cout<<"SIRA JET MOTORUMUZU �ALI�TIRMAYA GELD�."<<"L�TFEN MOTORU �ALI�TIRMAK ���N 'start' yaz�n�z"<<endl;
			cin>>start;
			if(start=="start"){
				cout<<"JET MOTORLARI �ALI�TIRILDI. VUVUVUVUVUVUVU"<<endl;
				cout<<endl;
				cout<<endl;
				cout<<"�uan Ki Jet Motorlar�n Deviri �udur :  "<<hiz<<endl;
				cout<<endl;
				cout<<"Jet Motorlar�na Otomatik Olarak G�� Vermek �stiyorsan�z Enterleyiniz"<<endl;
				cout<<endl;
				getch();
				if(hiz>=0&&hiz<=10){
					cout<<"JET MOTORLARA % 90 - % 95  ORANINDA G�� UYGULANILINIYOR..."<<endl;
					
				}
				else if(hiz>=10&&hiz<=20){
						cout<<"JET MOTORLARA % 80- % 90  ORANINDA G�� UYGULANILINIYOR..."<<endl;
					
					
		
				}
					else if(hiz>=20&&hiz<=30){
						cout<<"JET MOTORLARA % 80- % 70  ORANINDA G�� UYGULANILINIYOR..."<<endl;
					
					
		
				}
					else if(hiz>=30&&hiz<=40){
						cout<<"JET MOTORLARA % 70- % 60  ORANINDA G�� UYGULANILINIYOR..."<<endl;
					
					
		
				}
					else if(hiz>=40&&hiz<=50){
						cout<<"JET MOTORLARA % 60- % 50  ORANINDA G�� UYGULANILINIYOR..."<<endl;
					
					
		
				}
					else if(hiz>=50&&hiz<=60){
						cout<<"JET MOTORLARA % 50- % 40  ORANINDA G�� UYGULANILINIYOR..."<<endl;
					
					
		
				}
					else if(hiz>=60&&hiz<=70){
						cout<<"JET MOTORLARA % 40- % 30  ORANINDA G�� UYGULANILINIYOR..."<<endl;
					
					
		
				}
					else if(hiz>=70&&hiz<=80){
						cout<<"JET MOTORLARA % 30- % 20  ORANINDA G�� UYGULANILINIYOR..."<<endl;
					
					
		
				}
					else if(hiz>=80&&hiz<=90){
						cout<<"JET MOTORLARA % 20- % 10  ORANINDA G�� UYGULANILINIYOR..."<<endl;
					
					
		
				}
					else if(hiz>=90&&hiz<100){
						cout<<"JET MOTORLARA % 10   ORANINDA G�� UYGULANILINIYOR..."<<endl;
					
					
		
				}
				
					else if(hiz==100){
						cout<<"JET MOTORLARI TAM G�C�NDE �ALI�IYOR..."<<endl;
					
					
		
				}
					cout<<endl;
				cout<<"ERO�LU SOFT SUNAR..."<<endl;
				
			}
			else{
				cout<<"JET MOTORU �ALI�TIRMA BA�ARISIZ...."<<endl;
			}
			}
		
	
	}

	
	

else if(onay1=="iptal"){
	cout<<"Sizin Taraf�n�zdan Bilgileriniz Oynay D��� edilmi�tir"<<endl;
}


	
	



}
	return 0;
}
