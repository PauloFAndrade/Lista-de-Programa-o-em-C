/*! 
 * Remove negative and zero values from an array, preserving the
 * relative order of the original values that will remain in the
 * resulting array.
 * We do not alter the origimal memory associated withe the input
 * array. Rather, we just rearrange the values inside the array
 * and return a pointer to the new 'logical' end of the array,
 * after the processes of eliminating the required elements is
 * finished.
 *
 * @param first Pointer to the beginning of the range we want to filter.
 * @param last Pointer just past the last valid value of the range we want to filter.
 * @return a pointer to the new 'logical' end of the array.
 */
#include <iostream>

/**
 * @brief faz a troca de dois termos
 * 
 * @param a primeiro termo
 * @param b segundo termo
 * @return int* não está retornando pois estou trabalhando com o endereço deles
 */
int* swap(int *a, int *b){
 int t = *a;
 *a = *b;
 *b = t;
}

/**
 * @brief vai "eliminar" valores <= 0
 * 
 * @param first aponta para o endereço do primeiro elemento
 * @param last aponta para o endereço imediatamente posterior ao ultimo valor valido
 * @return int* 
 */
int * filter( int * first, int * last )
{
    // TODO: coloque aqui o seu código-solução.
    int tam = last - first;
    int trocas=0;

    /**
     * @brief Varre todo o vetor verificando os elementos positivos e coloca eles no inicio
     * 
     */
    for(int i{0};i<tam;i++){
        if(*(first+i)>0){
            swap(first+trocas,first+i);
            trocas++;
        }
    }

    for(int i{0};i<tam;i++){
        std::cout << *(first+i) << " ";
    }
    std::cout << std::endl;
    last = first + trocas;
    // TODO: substitua o retorno de acordo com a solução. Isso é somente um STUB temporário.
    return last;
}
