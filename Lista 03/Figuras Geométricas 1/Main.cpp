#include "Triangulo.h"
#include "Circulo.h"
#include "Quadrado.h"
#include "Retangulo.h"

int main(){
    Triangulo t;
    Circulo c;
    Quadrado q;
    Retangulo r;

    int tipo;


    while(true){

        cin >> tipo;

        if(tipo == 1){
            q.lerAtributosArea();
            cout << "A area do quadrado e: " << q.calcularArea() << endl;
        }
        else if(tipo == 2){
            r.lerAtributosArea();
            cout << "A area do retangulo e: " << r.calcularArea() << endl;
        }
        else if(tipo == 3){
            t.lerAtributosArea();
            cout << "A area do triangulo e: " << t.calcularArea() << endl;
        }
        else if(tipo == 4){
            c.lerAtributosArea();
            cout << "A area do circulo e: " << c.calcularArea() << endl;
        }
        else if(tipo == 0){
            break;
        }
        else{
            cout << "Opcao invalida" << endl;
        }
    }

    system("pause");

    return 0;
}