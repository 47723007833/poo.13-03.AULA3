#include <iostream>
using namespace std;
//inicio 
int main () {
    //valores variaveis
    float base, altura, area;
    //interface do usuariio_one
    cout << "Digite a base do triangulo";
    //interface do usuariio_two
    cout << "Digite a autura de trangulo ";
    //incognta
    cin >> altura;
    //formula
    area = (base * altura) / 2;
    //entrega do resultado 
    cout << "A area do triangulo eh: " << area << endl;
    
    return 0;
}
