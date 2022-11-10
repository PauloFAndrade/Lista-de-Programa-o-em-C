/*!
 * @brief This code implements the Intervalos programming problem
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setprecision;

// Se desejar, crie funções aqui, antes do main().

int main(void)
{
    // TODO: Adicione aqui a sua solução.
    float x,fora=0;
    float intervalos[]={0,0,0,0};
    
    /**
     * @brief lê indefinidamente a entrada padrão e verifica em qual intervalo o "x" está
     * 
     */
    while(cin >> std::ws >> x){
        if(x>=0&&x<25){ //caso esteja dentro do primeiro intervalo
            intervalos[0]++;
        }else if(x>=25&&x<50){//caso esteja dentro do segundo intervalo
            intervalos[1]++;
        }else if(x>=50&&x<75){//caso esteja dentro do terceiro intervalo
            intervalos[2]++;
        }else if(x>=75&&x<100){//caso esteja dentro do quarto intervalo
            intervalos[3]++;
        }else{ //fora dos intervalos definidos
            fora++;
        }
    }

    float total;
    total = intervalos[0]+intervalos[1]+intervalos[2]+intervalos[3]+fora; //quantidade total de numeros

    
    /**
     * @brief loop para impressão da porcentagem feito com cálculo direto com precisão de 2 casas decimais
     * 
     */
    for(int i{0};i<4;i++){
        cout << std::setprecision(4) << intervalos[i]/total*100 << endl; //porcentagem dentro dos intervalos
    }
    cout << std::setprecision(4) <<fora/total*100; //porcentagem fora dos intervalos

    return 0;
}
