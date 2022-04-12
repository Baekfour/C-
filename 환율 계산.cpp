#include <stdio.h>   
#include <stdbool.h>   // bool, true, false가  정의된 헤더 파일

 
int main(){
    while(true) {
	const float RATE_USD = 1233.1;
	const float RATE_JPY = 9.8644; // 일본 엔화 
	const float RATE_EUR = 1342.63; //  유로 
	const float RATE_CNY = 193.19; // 중국 위안 
	const float RATE_GBP = 1604.52; // 영국 파운드  
	float exchange = 0;
	int realExchangeWon = 0;
	
	printf("*********************************************************************************\n");
	printf("환전을 원하는 원화 금액을 입력하세요 : ");
	int inputWon;
	int inputNumber;
	scanf("%d", &inputWon);
	printf("환전을 원하는 외화를 입력하세요(1. 달러 2. 엔화 3.유로 4. 위안 5. 파운드)");
	scanf("%d", &inputNumber);
	printf("\n");

	if(inputNumber == 1){
	float exchangeUSD = inputWon / RATE_USD;
	int realExchangeUSD = inputWon / RATE_USD;  // 실제 환전 값 
	exchange = exchangeUSD - realExchangeUSD; //뺀 소수 값  
	realExchangeWon =  exchange * RATE_USD;
	realExchangeWon = realExchangeWon/10;
	realExchangeWon = realExchangeWon*10;
	int USD100 = realExchangeUSD/100;
	int USD50 = realExchangeUSD%100/50;
	int USD20 = realExchangeUSD%100%50/20;
	int USD10 = realExchangeUSD%100%50%20/10;
	int USD5 = realExchangeUSD%100%50%20%10/5;
	int USD2 = realExchangeUSD%100%50%20%10%5/2;
	int USD1 = realExchangeUSD%100%50%20%10%5%2/1;  
	printf("%d원-> 환전 달러  %d달러\n100 Dollar : %d, 50 Dollar : %d, 20 Dollar : %d, 10 Dollar : %d, 5 Dollar : %d, 2 Dollar : %d, 1 Dollar : %d\n", inputWon, realExchangeUSD,USD100,USD50,USD20,USD10,USD5,USD2,USD1);
	}
	
	//엔화  
	else if(inputNumber == 2){
	float exchangeJPY = inputWon / RATE_JPY;
	int realExchangeJPY = inputWon / RATE_JPY;  // 실제 환전 값 
	exchange = exchangeJPY - realExchangeJPY; //뺀 소수 값  
	realExchangeWon =  exchange * RATE_JPY;
	realExchangeWon = realExchangeWon/10;
	realExchangeWon = realExchangeWon*10;
	printf("%d원-> 환전 %d 엔  잔돈  %.2f \n" , inputWon,realExchangeJPY,exchange);
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
	printf("%d원-> 환전 엔  %d엔\n10000 JPY : %d, 5000 JPY : %d, 2000 JPY : %d, 1000 JPY : %d, 500 JPY : %d, 100 JPY : %d, 50 JPY : %d, 10 JPY : %d, 5 JPY : %d, 1 JPY : %d\n", inputWon, realExchangeJPY,JPY10000,JPY5000,JPY2000,JPY1000,JPY500,JPY100,JPY50,JPY10,JPY5,JPY1);
	}
	 
	//유로 
	else if(inputNumber == 3) {
	float exchangeEur = inputWon / RATE_EUR;
	int realExchangeEur = inputWon / RATE_EUR;  // 실제 환전 값 
	exchange = exchangeEur - realExchangeEur; //뺀 소수 값  
	realExchangeWon =  exchange * RATE_EUR;
	realExchangeWon = realExchangeWon/10;
	realExchangeWon = realExchangeWon*10;
	int EUR500 = realExchangeEur/500;
	int EUR200 = realExchangeEur%500/200;
	int EUR100 = realExchangeEur%500%200/100;
	int EUR50 = realExchangeEur%500%200%100/50;
	int EUR20 = realExchangeEur%500%200%100%50/20;
	int EUR10 = realExchangeEur%500%200%100%50%20/10;
	int EUR5 = realExchangeEur%500%200%100%50%20%10/5;
	int EUR1 = realExchangeEur%500%200%100%50%20%10%5/1;
	printf("%d원-> 환전 %d유로남은 %.2f   \n500 EUR : %d, 200 EUR : %d, 100 EUR : %d, 50 EUR : %d, 20 EUR : %d, 10 EUR : %d, 5 EUR : %d, 1 EUR : %d\n", inputWon,realExchangeEur, exchange, EUR500,EUR200,EUR100,EUR50,EUR20,EUR10,EUR5,EUR1);
	
	}
	
	// 위안  
	else if(inputNumber == 4) {
    float exchangeCNY = inputWon / RATE_CNY;
	int realExchangeCNY = inputWon / RATE_CNY;  // 실제 환전 값 
	exchange = exchangeCNY - realExchangeCNY; //뺀 소수 값  
	realExchangeWon =  exchange * RATE_CNY;
	realExchangeWon = realExchangeWon/10;
	realExchangeWon = realExchangeWon*10;
	int CNY100 = realExchangeCNY/100;
	int CNY50 = realExchangeCNY%100/50;
	int CNY20 = realExchangeCNY%100%50/20;
	int CNY10 = realExchangeCNY%100%50%20/10;
	int CNY5 = realExchangeCNY%100%50%20%10/5;
	int CNY1 = realExchangeCNY%100%50%20%10%5/1;
	printf("%d원-> 환전 %d위안 남은 %.2f  \n100 CNY : %d, 50 CNY : %d, 20 CNY : %d, 10 CNY : %d, 5 CNY : %d, 1 CNY : %d\n", inputWon,realExchangeCNY, exchange, CNY100,CNY50,CNY20,CNY10,CNY5,CNY1);

	}
	
	// 파운드  
	else if (inputNumber == 5) {
	
	float exchangeGBP = inputWon / RATE_GBP;
	int realExchangeGBP = inputWon / RATE_GBP;  // 실제 환전 값 
	exchange = exchangeGBP - realExchangeGBP; //뺀 소수 값  
	realExchangeWon =  exchange * RATE_GBP;
	realExchangeWon = realExchangeWon/10;
	realExchangeWon = realExchangeWon*10;
	int GBP100 = realExchangeGBP/100;
	int GBP50 = realExchangeGBP%100/50;
	int GBP20 = realExchangeGBP%100%50/20;
	int GBP10 = realExchangeGBP%100%50%20/10;
	int GBP5 = realExchangeGBP%100%50%20%10/5;
	int GBP2 = realExchangeGBP%100%50%20%10%5/2;
	int GBP1 = realExchangeGBP%100%50%20%10%5%2/1;
	printf("%d원-> 환전 %d파운드 남은 %.2f  \n100 GBP : %d, 50 GBP : %d, 20 GBP : %d, 10 GBP : %d, 5 GBP : %d, 2 GBP : %d, 1 GBP : %d\n", inputWon, realExchangeGBP,exchange, GBP100,GBP50,GBP20,GBP10,GBP5,GBP2,GBP1);
	
	
}
   else {
   	printf("다시 입력하세요\n\n");
}
	int a = realExchangeWon/1000;
	int b = realExchangeWon%1000/500;
	int c = realExchangeWon%1000%500/100;
	int d = realExchangeWon%1000%500%100/50;
	int e = realExchangeWon%1000%500%100%50/10;
	printf("잔돈 %d원 1000원 : %d개 500원 : %d개 100원 : %d개 50원 : %d개 10원 : %d개 \n\n",realExchangeWon,a,b,c,d,e);
	
}
	return 0; 
}
