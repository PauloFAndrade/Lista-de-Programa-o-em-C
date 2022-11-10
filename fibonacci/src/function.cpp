#include "function.h"

/**
 * @brief retorna um vetor com os termos da sequencia fibonacci anteriores a 'n'
 * 
 * @param n valor do qual quero os termos inferiores a ele
 * @return std::vector<unsigned int> retorna o vector v onde está armazenado a sequência de termos
 */
std::vector<unsigned int> fib_below_n( unsigned int n )
{
    // TODO: adicione o seu código aqui.
    std::vector < unsigned int> v; //declarando o vector
    if(n==1){} //nao tem anterior
    else if(n==2){ //caso "especial"
        v.push_back(1);
		v.push_back(1);
    }else{
        // variáveis auxiliares para calculo do proximo numero da sequencia
    	int x=2;
    	int old=1;

        //-----caso especial anterior----
    	v.push_back(1);
    	v.push_back(1);
        //-----fim do caso especial -----

    	while(x<n){
			v.push_back(x); //coloco o numero da sequencia no vector
			x += old; // somo com o anterior (old)
			old = x - old; // atualizo o old
		}
	}
    // TODO: Isto é apenas um STUB. Troque o retorno pelo que você julgar correto.
    return v;
}
