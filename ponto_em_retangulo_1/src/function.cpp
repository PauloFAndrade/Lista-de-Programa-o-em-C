#include "function.h"
#include <iostream>
/*! 
 * Verifica se um ponto está dentro de um retângulo.
 */

location_t pt_in_rect( const Ponto &IE, const Ponto &SD, const Ponto &P )
{
    // TODO: Coloque aqui seu código.
    if(P.x>IE.x&&P.x<SD.x){
        if(P.y>IE.y && P.y<SD.y){
            std::cout << "INSIDE" << std::endl;
            return location_t::INSIDE;
        }else if(P.y==IE.y || P.y==SD.y){
            std::cout << "BORDER" << std::endl;
            return location_t::BORDER;
        }else{
            std::cout << "OUTSIDE" << std::endl;
            return location_t::OUTSIDE;
        }
    }else if(P.x==IE.x||P.x==SD.x){
        if(P.y==IE.y||P.y==SD.y){
            std::cout << "BORDER" << std::endl;
            return location_t::BORDER;  
        }else if(P.y>IE.y && P.y<SD.y){
            std::cout << "INSIDE" << std::endl;
            return location_t::BORDER;
        }else{
            std::cout << "OUTSIDE" << std::endl;
            return location_t::OUTSIDE;
        }
    }else{
        std::cout << "OUTSIDE" << std::endl;
        return location_t::OUTSIDE;
    }
    // TODO: Substitua o retorno conforme desejar. Isso é apenas um STUB, usado apenas para compilar.
    //return location_t::OUTSIDE;
}
