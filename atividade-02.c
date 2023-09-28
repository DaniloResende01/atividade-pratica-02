#include <stdio.h>
#include <stdlib.h>


	int nPrimo(int num) {
	    if (num <= 1) {
	        return 0;  
	    }
	    for(int i = 2; i * i <= num; i++) {
	        if (num % i == 0) {
	            return 0; 
	        }
	    }
	    return 1;  
	}
	
	
	void decEmDoisPrimos(int num) {
	    int resultado = 0;
	
	    for (int i = 2; i <= num / 2; i++) {
	        if (nPrimo(i) && nPrimo(num - i)) {
	            printf("%d = %d + %d\n", num, i, num - i);
	            resultado = 1;
	        }
	    }
	
	    if (!resultado) {
	        printf("Nao foi encontrada uma decomposiçao de dois numero primos.\n");
	    }
	}
	
	int main() {
	    int num;
	
	    printf("Insira um valor inteiro par maior que 2: ");
	    scanf("%d", &num);
	
	    if (num <= 2) {
	        printf("Digite um valor inteiro maior que 2.\n");
	    } else {
	        decEmDoisPrimos(num);
	    }
	
	    return 0;
	}

