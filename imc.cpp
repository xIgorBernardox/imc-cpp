#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>
#include <vector>
using namespace std;

int main() {
    char gender;
    int user_choice;
    float weight, height, imc;
    vector<float> imc_values;
    float maior_imc = 0.0;
    float menor_imc = 999.9;

    do {
     // Informações do usuário
      cout << "Qual o seu genero? Masculino (M) / Feminino (F): " << endl;
      cin >> gender;
      cout << "Digite seu peso (Ex: 62.5): " << endl;
      cin >> weight;
      cout << "Digite sua altura (EX: 1.72): " << endl;
      cin >> height;
      cout << fixed << setprecision(2);
      imc =  weight / (height * height);
      imc_values.push_back(imc);
      if (imc > maior_imc) {
            maior_imc = imc;
        }
        if (imc < menor_imc) {
            menor_imc = imc;
        }
        
        switch (gender)
        {
            case 'M':
            if (imc < 20) {
                cout << "Seu IMC e: " << imc << endl;
                cout << "Seu peso esta abaixo do normal" << endl;
            } else if (imc >= 20 && imc <= 24.9) {
                cout << "Seu IMC e: " << imc << endl;
                cout << "Voce esta perfeitamente saudavel" << endl;
            } else if (imc >= 25 && imc <= 29.9) {
                cout << "Seu IMC e: " << imc << endl;
                cout << "Voce esta com obesidade leve" << endl;
            } else if (imc >= 30 && imc <= 39.9) {
                cout << "Seu IMC e: " << imc << endl;
                cout << "Voce esta com obesidade moderada" << endl;
            } else if (imc >= 43) {
                cout << "Seu IMC e: " << imc << endl;
                cout << "Voce esta com obesidade morbida" << endl;
            } 
            break;
            case 'F':
            if (imc < 19) {
                cout << "Seu IMC e: " << imc << endl;
                cout << "Seu peso esta abaixo do normal" << endl;
            } else if (imc >= 19 && imc <= 23.9) {
                cout << "Seu IMC e: " << imc << endl;
                cout << "Voce esta perfeitamente saudavel" << endl;
            } else if (imc >= 24 && imc <= 28.9) {
                cout << "Seu IMC e: " << imc << endl;
                cout << "Voce esta com obesidade leve" << endl;
            } else if (imc >= 29 && imc <= 38.9) {
                cout << "Seu IMC e: " << imc << endl;
                cout << "Voce esta com obesidade moderada" << endl;
            } else if (imc >= 39) {
                cout << "Seu IMC e: " << imc << endl;
                cout << "Voce esta com obesidade morbida" << endl;
            }
            break;
        }   
        cout << "Deseja calcular novamente? (1 para Sim) (2 para nao):" << endl;
        cin >> user_choice;
    } 
    while (user_choice == 1);
    
    cout << "Valores de IMC armazenados: ";
    for (float val : imc_values) {
        cout << val << " ";
    }
    cout << endl;
    cout << "Maior IMC: " << maior_imc << endl;
    cout << "Menor IMC: " << menor_imc << endl;

    float soma_imc = 0.0;
    for (float val : imc_values) {
        soma_imc += val;
    }
    float media_imc = soma_imc / imc_values.size();
    cout << "Media dos IMCs armazenados: " << media_imc << endl;
    return 0;
}
