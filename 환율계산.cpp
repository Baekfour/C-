#include <stdio.h>   

int main(){
    while(true) {
	const float RATE_USD = 1233.1;
	const float RATE_JPY = 9.8644; // �Ϻ� ��ȭ 
	const float RATE_EUR = 1342.63; //  ���� 
	const float RATE_CNY = 193.19; // �߱� ���� 
	const float RATE_GBP = 1604.52; // ���� �Ŀ��  
	float exchange = 0;
	int realExchangeWon = 0;
	float RATE = 0;
	printf("*********************************************************************************\n");
	printf("ȯ���� ���ϴ� ��ȭ �ݾ��� �Է��ϼ��� : ");
	int inputWon;
	int inputNumber;
	scanf("%d", &inputWon);
	printf("ȯ���� ���ϴ� ��ȭ�� �Է��ϼ���(1. �޷� 2. ��ȭ 3.���� 4. ���� 5. �Ŀ��)");
	scanf("%d", &inputNumber);
	printf("\n");
    
	switch(inputNumber)
{
	case 1 :
	RATE = RATE_USD; 
	break;
	
	case 2 :
	RATE = RATE_JPY; 
	break;
	
	case 3 :
	RATE = RATE_EUR; 
	break;
	
	case 4 :
    RATE = RATE_CNY; 
	break;
	
	case 5 :
	RATE = RATE_GBP; 
	break;	

   default :
	printf("�ٽ� �Է��ϼ���\n\n");
}
	exchange = inputWon / RATE;  //ȯ���� float 
	int realExchange = (int) exchange; // ��¥ ȯ�� ���� �� 
	float etc = exchange - realExchange; // �Ž��� ���� ��, ���� ��ȭ  	
	realExchangeWon =  etc * RATE; // ��ȭ�� �ѱ������� ��ȯ 
	realExchangeWon = realExchangeWon/10;
	realExchangeWon = realExchangeWon*10; // �����ڸ� ��ü  
	printf("%d��-> ȯ�� %d  �ܵ� %.2f  \n", inputWon, realExchange, etc);
	
	if (RATE = RATE_USD) {
	int USD100 = realExchange/100;
	int USD50 = realExchange%100/50;
	int USD20 = realExchange%100%50/20;
	int USD10 = realExchange%100%50%20/10;
	int USD5 = realExchange%100%50%20%10/5;
	int USD2 = realExchange%100%50%20%10%5/2;
	int USD1 = realExchange%100%50%20%10%5%2/1;
	printf("100 Dollar : %d, 50 Dollar : %d, 20 Dollar : %d, 10 Dollar : %d, 5 Dollar : %d, 2 Dollar : %d, 1 Dollar : %d\n", USD100,USD50,USD20,USD10,USD5,USD2,USD1);
	} else if (RATE = RATE_JPY) {
	int JPY10000 = realExchange/10000;
	int JPY5000 = realExchange%10000/5000;
	int JPY2000 = realExchange%10000%5000/2000;
	int JPY1000 = realExchange%10000%5000%2000/1000;
	int JPY500 = realExchange%10000%5000%2000%1000/500;
	int JPY100 = realExchange%10000%5000%2000%1000%500/100;
	int JPY50 = realExchange%10000%5000%2000%1000%500%100/50;
	int JPY10 = realExchange%10000%5000%2000%1000%500%100%50/10;
	int JPY5 = realExchange%10000%5000%2000%1000%500%100%50%10/5;
	int JPY1 = realExchange%10000%5000%2000%1000%500%100%50%10%5/1;
	printf("10000 JPY : %d, 5000 JPY : %d, 2000 JPY : %d, 1000 JPY : %d, 500 JPY : %d, 100 JPY : %d, 50 JPY : %d, 10 JPY : %d, 5 JPY : %d, 1 JPY : %d\n",JPY10000,JPY5000,JPY2000,JPY1000,JPY500,JPY100,JPY50,JPY10,JPY5,JPY1);

	} else if (RATE = RATE_EUR) {
	int EUR500 = realExchange/500;
	int EUR200 = realExchange%500/200;
	int EUR100 = realExchange%500%200/100;
	int EUR50 = realExchange%500%200%100/50;
	int EUR20 = realExchange%500%200%100%50/20;
	int EUR10 = realExchange%500%200%100%50%20/10;
	int EUR5 = realExchange%500%200%100%50%20%10/5;
	int EUR1 = realExchange%500%200%100%50%20%10%5/1;
	printf("500 EUR : %d, 200 EUR : %d, 100 EUR : %d, 50 EUR : %d, 20 EUR : %d, 10 EUR : %d, 5 EUR : %d, 1 EUR : %d\n",exchange, EUR500,EUR200,EUR100,EUR50,EUR20,EUR10,EUR5,EUR1);
	} else if (RATE = RATE_CNY) {
	int CNY100 = realExchange/100;
	int CNY50 = realExchange%100/50;
	int CNY20 = realExchange%100%50/20;
	int CNY10 = realExchange%100%50%20/10;
	int CNY5 = realExchange%100%50%20%10/5;
	int CNY1 = realExchange%100%50%20%10%5/1;
	printf("100 CNY : %d, 50 CNY : %d, 20 CNY : %d, 10 CNY : %d, 5 CNY : %d, 1 CNY : %d\n",exchange, CNY100,CNY50,CNY20,CNY10,CNY5,CNY1);
	} else if (RATE = RATE_GBP) {
	int GBP100 = realExchange/100;
	int GBP50 = realExchange%100/50;
	int GBP20 = realExchange%100%50/20;
	int GBP10 = realExchange%100%50%20/10;
	int GBP5 = realExchange%100%50%20%10/5;
	int GBP2 = realExchange%100%50%20%10%5/2;
	int GBP1 = realExchange%100%50%20%10%5%2/1;
	printf("100 GBP : %d, 50 GBP : %d, 20 GBP : %d, 10 GBP : %d, 5 GBP : %d, 2 GBP : %d, 1 GBP : %d\n",exchange, GBP100,GBP50,GBP20,GBP10,GBP5,GBP2,GBP1);
}
	int a = realExchangeWon/1000;
	int b = realExchangeWon%1000/500;
	int c = realExchangeWon%1000%500/100;
	int d = realExchangeWon%1000%500%100/50;
	int e = realExchangeWon%1000%500%100%50/10;
	printf("�ܵ� %d�� 1000�� : %d�� 500�� : %d�� 100�� : %d�� 50�� : %d�� 10�� : %d�� \n\n",realExchangeWon,a,b,c,d,e);
}
	return 0; 
}
