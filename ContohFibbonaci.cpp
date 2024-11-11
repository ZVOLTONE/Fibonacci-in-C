#include <stdio.h>
int main(){
	long long Dimulai, BerapaKali;
		scanf("%lld %lld", &Dimulai, &BerapaKali);
	long long Hasil[BerapaKali+3]={0};
	Hasil[1]=Dimulai;
	for(int i=1;i<BerapaKali;i++){
		Hasil[i+1]=Hasil[i]+Hasil[i-1];
		printf("%lld\n", Hasil[i]);
	}
	
}
