#include "function.h"

/*! 
 * Finds and returns a pair with the first instance of the smallest element
 * and the last instance of the largest element in an array.
 *
 * @param V This is the array-to-pointer decay representing an array.
 * @param n The array's size.
 *
 * @return A pair of indexes to the first smallest and last largest values.
 */



std::pair<int,int> min_max( int V[], size_t n )
{
    // TODO: Adicione aqui sua solução.
    if(n==0){
        return {-1,-1};
    }

    //VARIAVEIS AUXILIARES 
    int menor = V[0], ind_menor=0; //defini como menor o 1º elemento
    int maior = V[0], ind_maior=0; //defini também sendo como o maior


    for(int i{1};i<n;i++){  
        if(V[i]<menor){ //achando o menor numero
            menor = V[i];
            ind_menor = i;
        }
        if(V[i]>=maior){ //achando o maior numero
            maior = V[i];
            ind_maior = i;
        }
    }
    // TODO: Isso é apenas um STUB. Substitua com seu retorno correto.
    return { ind_menor, ind_maior }; //retorna os indices de interesse
}
