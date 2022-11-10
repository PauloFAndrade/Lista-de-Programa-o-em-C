/*!
 * @brief Implementação do Ponto em Retângulo V2.
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <algorithm>
using std::min;
using std::max;

#include "function.h"
#include <iostream>
//=== Funções

/**
 * @brief Verifica se forma um retângulo válido
 * 
 * @param x coordenada do 1º vertice do retangulo 
 * @param y coordenada do 2º vertice do retangulo
 * @return true caso seja um retangulo válido
 * @return false caso seja um retangulo invalido
 */
// Coloque aqui qualquer função auxiliar que desejar.
bool verifica_retangulo(Ponto x, Ponto y){
    if(x.x!=y.x||x.y!=y.y){
        return true;
    }
    return false;
}

int main(void)
{
    // TODO: Adicione aqui seu código.
    Ponto R1,R2,P;
    while(std::cin >> R1.x >> R1.y >> R2.x >> R2.y >> P.x >> P.y){
        bool retangulo = verifica_retangulo(R1,R2);

        if(retangulo == true){
            int resp = pt_in_rect(R1,R2,P);
            switch (resp)
            {
            case 0:
                std::cout << "inside" << std::endl;
            break;
            case 1:
                std::cout << "border" << std::endl;
            break;
            case 2:
                std::cout << "outside" << std::endl;
            break;
            }
        }else{
            cout << "invalid";
        }
    }
    

    
    return 0;
}
