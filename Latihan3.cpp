#include<iostream>
using namespace std;

int main(){
	int jamkerja;
	int gajiperjam;
	int lembur;
	int jamlembur;
	int jamkerjatotal;
	int gatot;
	int gaber;
	
	cout <<"Masukan Jam Kerja Anda= ";cin>> jamkerja;
	cout <<"Masukan Gaji Anda= ";cin>> gajiperjam;
	
	lembur=jamkerja-40;
	jamlembur=lembur*1.5;
	jamkerjatotal=40+jamlembur;
	gatot=jamkerjatotal*gajiperjam;
	gaber=gatot-(0.15*gatot);
}
