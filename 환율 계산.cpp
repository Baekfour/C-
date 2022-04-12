#include <stdio.h>   
#include <stdbool.h>   // bool, true, false��  ���ǵ� ��� ����

 
int main(){
    while(true) {
	const float RATE_USD = 1233.1;
	const float RATE_JPY = 9.8644; // �Ϻ� ��ȭ 
	const float RATE_EUR = 1342.63; //  ���� 
	const float RATE_CNY = 193.19; // �߱� ���� 
	const float RATE_GBP = 1604.52; // ���� �Ŀ��  
	float exchange = 0;
	int realExchangeWon = 0;
	
	printf("*********************************************************************************\n");
	printf("ȯ���� ���ϴ� ��ȭ �ݾ��� �Է��ϼ��� : ");
	int inputWon;
	int inputNumber;
	scanf("%d", &inputWon);
	printf("ȯ���� ���ϴ� ��ȭ�� �Է��ϼ���(1. �޷� 2. ��ȭ 3.���� 4. ���� 5. �Ŀ��)");
	scanf("%d", &inputNumber);
	printf("\n");

	if(inputNumber == 1){
	float exchangeUSD = inputWon / RATE_USD;
	int realExchangeUSD = inputWon / RATE_USD;  // ���� ȯ�� �� 
	exchange = exchangeUSD - realExchangeUSD; //�� �Ҽ� ��  
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
	printf("%d��-> ȯ�� �޷�  %d�޷�\n100 Dollar : %d, 50 Dollar : %d, 20 Dollar : %d, 10 Dollar : %d, 5 Dollar : %d, 2 Dollar : %d, 1 Dollar : %d\n", inputWon, realExchangeUSD,USD100,USD50,USD20,USD10,USD5,USD2,USD1);
	}
	
	//��ȭ  
	else if(inputNumber == 2){
	float exchangeJPY = inputWon / RATE_JPY;
	int realExchangeJPY = inputWon / RATE_JPY;  // ���� ȯ�� �� 
	exchange = exchangeJPY - realExchangeJPY; //�� �Ҽ� ��  
	realExchangeWon =  exchange * RATE_JPY;
	realExchangeWon = realExchangeWon/10;
	realExchangeWon = realExchangeWon*10;
	printf("%d��-> ȯ�� %d ��  �ܵ�  %.2f \n" , inputWon,realExchangeJPY,exchange);
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
	printf("%d��-> ȯ�� ��  %d��\n10000 JPY : %d, 5000 JPY : %d, 2000 JPY : %d, 1000 JPY : %d, 500 JPY : %d, 100 JPY : %d, 50 JPY : %d, 10 JPY : %d, 5 JPY : %d, 1 JPY : %d\n", inputWon, realExchangeJPY,JPY10000,JPY5000,JPY2000,JPY1000,JPY500,JPY100,JPY50,JPY10,JPY5,JPY1);
	}
	 
	//���� 
	else if(inputNumber == 3) {
	float exchangeEur = inputWon / RATE_EUR;
	int realExchangeEur = inputWon / RATE_EUR;  // ���� ȯ�� �� 
	exchange = exchangeEur - realExchangeEur; //�� �Ҽ� ��  
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
	printf("%d��-> ȯ�� %d���γ��� %.2f   \n500 EUR : %d, 200 EUR : %d, 100 EUR : %d, 50 EUR : %d, 20 EUR : %d, 10 EUR : %d, 5 EUR : %d, 1 EUR : %d\n", inputWon,realExchangeEur, exchange, EUR500,EUR200,EUR100,EUR50,EUR20,EUR10,EUR5,EUR1);
	
	}
	
	// ����  
	else if(inputNumber == 4) {
    float exchangeCNY = inputWon / RATE_CNY;
	int realExchangeCNY = inputWon / RATE_CNY;  // ���� ȯ�� �� 
	exchange = exchangeCNY - realExchangeCNY; //�� �Ҽ� ��  
	realExchangeWon =  exchange * RATE_CNY;
	realExchangeWon = realExchangeWon/10;
	realExchangeWon = realExchangeWon*10;
	int CNY100 = realExchangeCNY/100;
	int CNY50 = realExchangeCNY%100/50;
	int CNY20 = realExchangeCNY%100%50/20;
	int CNY10 = realExchangeCNY%100%50%20/10;
	int CNY5 = realExchangeCNY%100%50%20%10/5;
	int CNY1 = realExchangeCNY%100%50%20%10%5/1;
	printf("%d��-> ȯ�� %d���� ���� %.2f  \n100 CNY : %d, 50 CNY : %d, 20 CNY : %d, 10 CNY : %d, 5 CNY : %d, 1 CNY : %d\n", inputWon,realExchangeCNY, exchange, CNY100,CNY50,CNY20,CNY10,CNY5,CNY1);

	}
	
	// �Ŀ��  
	else if (inputNumber == 5) {
	
	float exchangeGBP = inputWon / RATE_GBP;
	int realExchangeGBP = inputWon / RATE_GBP;  // ���� ȯ�� �� 
	exchange = exchangeGBP - realExchangeGBP; //�� �Ҽ� ��  
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
	printf("%d��-> ȯ�� %d�Ŀ�� ���� %.2f  \n100 GBP : %d, 50 GBP : %d, 20 GBP : %d, 10 GBP : %d, 5 GBP : %d, 2 GBP : %d, 1 GBP : %d\n", inputWon, realExchangeGBP,exchange, GBP100,GBP50,GBP20,GBP10,GBP5,GBP2,GBP1);
	
	
}
   else {
   	printf("�ٽ� �Է��ϼ���\n\n");
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
