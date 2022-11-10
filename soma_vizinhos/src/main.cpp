/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main( void )
{
    // TODO: Adicione seu código aqui. 
    int m,n,soma;
    while (cin >> m >> n)
    {
        soma = 0; //Variável para resultado
        int aux=1;
        if(n>0){ //caso o segundo número seja positivo 
            for(int i{m};aux<=n;i++){ //pega a soma dos n primeiros consecutivos a partir do i = m 
                soma += i;
                aux++;
            }
        }else if(n<0){
            for(int i{m};aux<=n*(-1);i--){ // pega a soma dos n primeiros antecedentes a partir do i = m
                soma += i;
                aux++;
            }
        }else{ // nesse caso não precisa achar a soma
            soma = m;
        }
        cout << soma << endl; //impressão do resultado
    }
    return 0;
}
