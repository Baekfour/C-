#include <stdio.h>   

int main(){
    while(true) {const float RATE_USD = 1233.1;
	const float RATE_JPY = 9.8644; // 일본 엔화 
	const float RATE_EUR = 1342.63; //  유로 
	const float RATE_CNY = 193.19; // 중국 위안 
	const float RATE_GBP = 1604.52; // 영국 파운드  
	printf("환전을 원하는 원화 금액을 입력하세요 : ");
	int inputWon;
	int inputNumber;
	scanf("%d", &inputWon);
	printf("환전을 원하는 외화를 입력하세요(1. 달러 2. 엔화 3.유로 4. 위안 5. 파운드)");
	scanf("%d", &inputNumber);
	printf("\n");
	
	//달러 
	if(inputNumber == 1){
	float exchangeUSD = inputWon / RATE_USD;
	int realExchangeUSD = inputWon / RATE_USD;  // 실제 환전 값 
	float exchange = exchangeUSD - realExchangeUSD; //뺀 소수 값  
	int realExchangeWon =  exchange * RATE_USD;
	realExchangeWon = realExchangeWon/10;
	realExchangeWon = realExchangeWon*10;
	int USD100 = realExchangeUSD/100;
	int USD50 = realExchangeUSD%100/50;
	int USD20 = realExchangeUSD%100%50/20;
	int USD10 = realExchangeUSD%100%50%20/10;
	int USD5 = realExchangeUSD%100%50%20%10/5;
	int USD2 = realExchangeUSD%100%50%20%10%5/2;
	int USD1 = realExchangeUSD%100%50%20%10%5%2/1;  
	int a = realExchangeWon/1000;
	int b = realExchangeWon%1000/500;
	int c = realExchangeWon%1000%500/100;
	int d = realExchangeWon%1000%500%100/50;
	int e = realExchangeWon%1000%500%100%50/10;
	printf("%d원-> 환전 달러  %d달러\n100 Dollar : %d, 50 Dollar : %d, 20 Dollar : %d, 10 Dollar : %d, 5 Dollar : %d, 2 Dollar : %d, 1 Dollar : %d\n", inputWon, realExchangeUSD,USD100,USD50,USD20,USD10,USD5,USD2,USD1);
	printf("남은 달러 %.2f 달러  잔돈 %d원 1000원 : %d개 500원 : %d개 100원 : %d개 50원 : %d개 10원 : %d개 \n\n", exchange,realExchangeWon,a,b,c,d,e);
	}
	
	//엔화  
	else if(inputNumber == 2){
	float exchangeJPY = inputWon / RATE_JPY;
	int realExchangeJPY = inputWon / RATE_JPY;  // 실제 환전 값 
	float exchange2 = exchangeJPY - realExchangeJPY; //뺀 소수 값  
	int realExchangeWon2 =  exchange2 * RATE_JPY;
	realExchangeWon2 = realExchangeWon2/10;
	realExchangeWon2 = realExchangeWon2*10;
	int JPY10000 = realExchangeJPY/10000;
	int JPY5000 = realExchangeJPY%10000/5000;
	int JPY2000 = realExchangeJPY%10000%5000/2000;
	int JPY1000 = realExchangeJPY%10000%5000%2000/1000;
	int JPY500 = realExchangeJPY%10000%5000%2000%1000/500;
	int JPY100 = realExchangeJPY%10000%5000%2000%1000%500/100;
	int JPY50 = realExchangeJPY%10000%5000%2000%1000%500%100/50;
	int JPY10 = realExchangeJPY%10000%5000%2000%1000%500%100%50/10;
	int JPY5 = realExchangeJPY%10000%5000%2000%1000%500%100%50%10/5;
	int JPY1 = realExchangeJPY%10000%5000%2000%1000%500%100%50%10%5/1;
	int a2 = realExchangeWon2/1000;
	int b2 = realExchangeWon2%1000/500;
	int c2 = realExchangeWon2%1000%500/100;
	int d2 = realExchangeWon2%1000%500%100/50;
	int e2 = realExchangeWon2%1000%500%100%50/10;
	printf("%d원-> 환전 엔  %d엔\n10000 JPY : %d, 5000 JPY : %d, 2000 JPY : %d, 1000 JPY : %d, 500 JPY : %d, 100 JPY : %d, 50 JPY : %d, 10 JPY : %d, 5 JPY : %d, 1 JPY : %d\n", inputWon, realExchangeJPY,JPY10000,JPY5000,JPY2000,JPY1000,JPY500,JPY100,JPY50,JPY10,JPY5,JPY1);
	printf("남은 엔화  %.2f 엔화  잔돈 %d원 1000원 : %d개 500원 : %d개 100원 : %d개 50원 : %d개 10원 : %d개 \n\n", exchange2,realExchangeWon2,a2,b2,c2,d2,e2);
	}
	 
	//유로 
	else if(inputNumber == 3) {
	float exchangeEur = inputWon / RATE_EUR;
	int realExchangeEur = inputWon / RATE_EUR;  // 실제 환전 값 
	float exchange3 = exchangeEur - realExchangeEur; //뺀 소수 값  
	int realExchangeWon3 =  exchange3 * RATE_EUR;
	realExchangeWon3 = realExchangeWon3/10;
	realExchangeWon3 = realExchangeWon3*10;
	int EUR500 = realExchangeEur/500;
	int EUR200 = realExchangeEur%500/200;
	int EUR100 = realExchangeEur%500%200/100;
	int EUR50 = realExchangeEur%500%200%100/50;
	int EUR20 = realExchangeEur%500%200%100%50/20;
	int EUR10 = realExchangeEur%500%200%100%50%20/10;
	int EUR5 = realExchangeEur%500%200%100%50%20%10/5;
	int EUR1 = realExchangeEur%500%200%100%50%20%10%5/1;
	int a3 = realExchangeWon3/1000;
	int b3 = realExchangeWon3%1000/500;
	int c3 = realExchangeWon3%1000%500/100;
	int d3 = realExchangeWon3%1000%500%100/50;
	int e3 = realExchangeWon3%1000%500%100%50/10;
	printf("%d원-> 환전 유로  %d유로\n500 EUR : %d, 200 EUR : %d, 100 EUR : %d, 50 EUR : %d, 20 EUR : %d, 10 EUR : %d, 5 EUR : %d, 1 EUR : %d\n", inputWon, realExchangeEur,EUR500,EUR200,EUR100,EUR50,EUR20,EUR10,EUR5,EUR1);
	printf("남은 유로  %.2f 유로  잔돈 %d원 1000원 : %d개 500원 : %d개 100원 : %d개 50원 : %d개 10원 : %d개 \n\n", exchange3,realExchangeWon3,a3,b3,c3,d3,e3);
	}
	
	// 위안  
	else if(inputNumber == 4) {
	float exchangeCNY = inputWon / RATE_CNY;
	int realExchangeCNY = inputWon / RATE_CNY;  // 실제 환전 값 
	float exchange4 = exchangeCNY - realExchangeCNY; //뺀 소수 값  
	int realExchangeWon4 =  exchange4 * RATE_CNY;
	realExchangeWon4 = realExchangeWon4/10;
	realExchangeWon4 = realExchangeWon4*10;
	int CNY100 = realExchangeCNY/100;
	int CNY50 = realExchangeCNY%100/50;
	int CNY20 = realExchangeCNY%100%50/20;
	int CNY10 = realExchangeCNY%100%50%20/10;
	int CNY5 = realExchangeCNY%100%50%20%10/5;
	int CNY1 = realExchangeCNY%100%50%20%10%5/1;
	int a4 = realExchangeWon4/1000;
	int b4 = realExchangeWon4%1000/500;
	int c4 = realExchangeWon4%1000%500/100;
	int d4 = realExchangeWon4%1000%500%100/50;
	int e4 = realExchangeWon4%1000%500%100%50/10;
	printf("%d원-> 환전 위안  %d위안\n100 CNY : %d, 50 CNY : %d, 20 CNY : %d, 10 CNY : %d, 5 CNY : %d, 1 CNY : %d\n", inputWon, realExchangeCNY,CNY100,CNY50,CNY20,CNY10,CNY5,CNY1);
	printf("남은 위안  %.2f 위안  잔돈 %d원 1000원 : %d개 500원 : %d개 100원 : %d개 50원 : %d개 10원 : %d개 \n\n", exchange4,realExchangeWon4,a4,b4,c4,d4,e4);}
	
	// 파운드  
	else if (inputNumber == 5) {
	float exchangeGBP = inputWon / RATE_GBP;
	int realExchangeGBP = inputWon / RATE_GBP;  // 실제 환전 값 
	float exchange5 = exchangeGBP - realExchangeGBP; //뺀 소수 값  
	int realExchangeWon5 =  exchange5 * RATE_GBP;
	realExchangeWon5 = realExchangeWon5/10;
	realExchangeWon5 = realExchangeWon5*10;
	int GBP100 = realExchangeGBP/100;
	int GBP50 = realExchangeGBP%100/50;
	int GBP20 = realExchangeGBP%100%50/20;
	int GBP10 = realExchangeGBP%100%50%20/10;
	int GBP5 = realExchangeGBP%100%50%20%10/5;
	int GBP2 = realExchangeGBP%100%50%20%10%5/2;
	int GBP1 = realExchangeGBP%100%50%20%10%5%2/1;
	int a5 = realExchangeWon5/1000;
	int b5 = realExchangeWon5%1000/500;
	int c5 = realExchangeWon5%1000%500/100;
	int d5 = realExchangeWon5%1000%500%100/50;
	int e5 = realExchangeWon5%1000%500%100%50/10;
	printf("%d원-> 환전 파운드 %d파운드\n100 GBP : %d, 50 GBP : %d, 20 GBP : %d, 10 GBP : %d, 5 GBP : %d, 2 GBP : %d, 1 GBP : %d\n", inputWon, realExchangeGBP,GBP100,GBP50,GBP20,GBP10,GBP5,GBP2,GBP1);
	printf("남은 파운드  %.2f 파운드  잔돈 %d원 1000원 : %d개 500원 : %d개 100원 : %d개 50원 : %d개 10원 : %d개 \n\n", exchange5,realExchangeWon5,a5,b5,c5,d5,e5);
}
   else {
   	printf("다시 입력하세요\n\n");
   }
}
}
