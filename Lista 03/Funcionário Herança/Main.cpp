#include "Consultor.h"

int main(){
    Consultor c1;
    Funcionario f1;
    string nome, matricula;
    float salario;

    for(int i = 0; i < 2; i++){
    getline(cin, matricula);
    getline(cin, nome);
    cin >> salario;
    cin.ignore();
    if(i == 0){
        f1.setNome(nome);
        f1.setMatricula(matricula);
        f1.setSalario(salario);

        cout << f1.getMatricula() << " - " << f1.getNome() << " - R$ " << f1.getSalario() << endl;
    }else{
        c1.setNome(nome);
        c1.setMatricula(matricula);
        c1.setSalario(salario);

        cout << c1.getMatricula() << " - " << c1.getNome() << " - R$ " << c1.getSalario() << endl;
    }
    }


    system("pause");
    
    return 0;
}