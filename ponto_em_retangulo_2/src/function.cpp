#include "function.h"
#include <iostream>
/*! 
 * Verifica se um ponto está dentro de um retângulo.
 */
location_t pt_in_rect( const Ponto &IE, const Ponto &SD, const Ponto &P )
{
    // TODO: Adicione seu código aqui.
    if(P.x>IE.x&&P.x<SD.x){
        if(P.y>IE.y && P.y<SD.y){
            return location_t::INSIDE;
        }else if(P.y==IE.y || P.y==SD.y){
            return location_t::BORDER;
        }else{
            return location_t::OUTSIDE;
        }
    }else if(P.x==IE.x||P.x==SD.x){
        if(P.y==IE.y||P.y==SD.y){
            return location_t::BORDER;  
        }else if(P.y>IE.y && P.y<SD.y){
            return location_t::BORDER;
        }else{
            return location_t::OUTSIDE;
        }
    }else{
        return location_t::OUTSIDE;
    }
}
