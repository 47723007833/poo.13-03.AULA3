#include <iostream>
#include <cmath>
using namespace std;
//inicio 
int main () {
    //valores variaveis
    float cateto_adj, cateto_op, hipotenusa;
    
    //interface do usuariio_one
    cout << "Digite o cateto_op: ";
    //valor
    cin >> cateto_op;
   
    //interface do usuariio_two
    cout << "Digite o cateto: ";
    //valor
    cin >> cateto_adj;
    
    //formula
    hipotenusa = sqrt ( cateto_adj * cateto_adj + cateto_op * cateto_op ) ;
    
    //entrega do produto
    cout << "A hipotenusa eh: " << hipotenusa << endl;
    
    return 0;
}