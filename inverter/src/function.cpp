#include "function.h"

/*! 
 * Reverse de order of elements inside the array.
 * @param arr Reference to the array with the values.
 */
template <size_t SIZE>
void reverse( std::array< std::string, SIZE > & arr )
{
    // TODO: Coloque aqui sua resposta.
    int inicio=0; 
    int fim = arr.size()-1;

    for(inicio,fim;inicio<fim;inicio++,fim--){
        swap(arr[inicio],arr[fim]);
    }

    /*FUNCIONAMENTO DO CODIGO (* são os controladores inicio e fim)
        1 2 3 4 5
        *       *
        5 2 3 4 1
          *   *
        5 4 3 2 1
}
