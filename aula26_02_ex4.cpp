#include<stdio.h>
#include<stdlib.h>

int main(){
   
    int A, B, C;
    float D;
  
    printf("Digite o valor A:");
    scanf("%i", &A);
    printf("Digite o valor B:");
    scanf("%i", &B);
    printf("Qual operacao: \n");
    printf("1. Soma \n");
    printf("2. Divisao \n");
    printf("3. Subtracao \n");
    printf("4. Multiplicacao \n");
    scanf("%i", &C);
    
    
    switch(C)
    {
    
    	case 1:
    	D = A+B;
    	printf("A soma de A + B = %f \n",D);
    	break;
    	
    	case 2:
    	D= A/B;
    	printf("A divisão de A e B = %f \n",D);
    	break;
    	
    	case 3:
    	D= A-B;
    	printf("A subtracao de A - B = %f \n",D);
    	break;
    	
    	case 4:
    	D= A*B;
    	printf("A multiplicacao de A e B = %f \n",D);
    	break;
    	    	
    	
	}

	system("pause");
    return 0;
}
