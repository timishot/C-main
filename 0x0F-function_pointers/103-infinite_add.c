#include "main.h"
#include "limits.h"
#include <stdlib.h>
#include <gmp.h>



char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	mpz_t result;
	mpz_t  firstNumber;
	mpz_t secondNumber;

	mpz_init(result);
    	mpz_init(firstNumber);
    	mpz_init(secondNumber);

	mpz_set_str(firstNumber, n1, 10);
	mpz_set_str(secondNumber, n2, 10);

    
	mpz_add(result, firstNumber, secondNumber);

	if ((int)mpz_sizeinbase(result, 10) > (size_r)) {
		mpz_clear(result);
		mpz_clear(firstNumber);
		mpz_clear(secondNumber);
		return 0;
	}

	gmp_snprintf(r, size_r, "Zd", result);
	mpz_clear(result);
   	mpz_clear(firstNumber);
    	mpz_clear(secondNumber);

	return r;
}
