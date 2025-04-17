#include <stdio.h>

int main ()
{
	int numero[5];
	int soma = 0, maior = 0, menor = 100, qnt = 0, qnt2 = 0;
	double media = 0, porcentagem = 0;
	int i;
	
	for(i = 0; i < 5; i++)
	
	{
		
	printf ("Escolha algum numero inteiro de 0 a 100: \n");
	scanf ("%d", &numero[i]);
		
		if(numero[i] <= 100 && numero[i] >= 0)
	    	{
			printf ("ok \n");
	    	}
		
		else 
	    	{	
			printf("entrada invalida \n");
			return 0;
	    	}		
		
	}

	
		for(i = 0; i < 5; i++)
		    	{
		    	soma += numero[i];
		    	}
			
		printf("a soma dos numeros eh: %d \n", soma);
                
	
		
		for(i = 0; i < 5; i++)
	        	{
	    		if(numero[i] > maior)
	        		{
	        		maior = numero[i];	
		        	}
		        }
		
		printf ("o maior numero eh: %d \n", maior);
		
				
		for(i = 0; i < 5; i++)
	    	{
		    	if(numero[i] < menor)
		        	{
		        	menor = numero[i];	
		        	}
	      	}
        
		printf ("o menor numero eh: %d \n", menor);
		
		for(i = 0; i < 5; i++)
			{

				if (numero[i] % 2 == 0)
				{
					media += numero[i];									
					qnt += 1;
					
				}
			}
		media = media / qnt;
		printf ("a media dos numeros pares eh: %.2lf \n", media);

		for(i = 0; i < 5; i++)
			{
			
				if (numero[i] % 2 == 0)
				{
					qnt2+=1;
				}

			}
			//porcentagem de numeros pares digitados
			
			porcentagem = (qnt2 / 5.0) * 100;

			printf("A porcentagem de numeros pares eh: %.2lf%%\n", porcentagem);
			

return 0;

}
