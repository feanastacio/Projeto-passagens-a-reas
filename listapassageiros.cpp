// Brenda Mariano e Fernanda Anastácio
#include <iostream>
#include <limits>
#include <vector>
#include <string>
#include <locale.h>
using namespace std;

vector<string> passageiros;
vector<string> origens;
vector<string> destinos;
vector<string> datas;

void desenhaMenu()
{
    cout << " --------------MENU--------------- " << endl;
    cout << "|                                  |" << endl;
    cout << "| Escolha uma opcao:               |" << endl;
    cout << "|    1) Cadastrar passagem         |" << endl;
    cout << "|    2) Lista de passagens         |" << endl;
    cout << "|    0) Sair                       |" << endl;
    cout << "|                                  |" << endl;
    cout << " --------------MENU--------------- " << endl;
    cout << "opcao:";

    cout << endl;

}

void desenhaBoasVindas()
{
    cout << " --------------------------------------- " << endl;
    cout << "|                                        |" << endl;
    cout << "|       Bem Vindos ao Programa           |" << endl;
    cout << "|               de                       |" << endl;
    cout << "|           Passagens Aeras              |" << endl;
    cout << "|                                        |" << endl;
    cout << " ---------------------------------------" << endl;

    cout << endl;

}

void listagemDePassagens()
{
    cout << " --------------------------------------- " << endl;
    cout << "|                                        |" << endl;
    cout << "|       Bem Vindos ao Programa           |" << endl;
    cout << "|               de                       |" << endl;
    cout << "|         Lista de Passageiros           |" << endl;
    cout << "|                                        |" << endl;
    cout << " ---------------------------------------" << endl;

    cout << endl;
    cout << endl;

    cout << " Quantidades de passagens: " << passageiros.size() << endl << endl;

    for (int i = 0; i < passageiros.size(); i++)
    {
     cout << "Passageiros" << "  "  << passageiros [i] << endl;
     cout << "Origens" << "  "  << origens [i]  << endl;
     cout << "Destinos" << "  "  << destinos [i]  <<endl;
     cout << "Datas" << "  "  << datas [i] <<endl << endl;
    }
    
}

void limpaBufferDoCin()
{
    // cin.ignore(numeric_limits<streamsize>::max(), "\n");
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void cadastrarPassagem()
{
    string nome, origem, destino, dataviagaem;
    limpaBufferDoCin();
    cout << "Digite o nome do passageiro: ";
    getline (cin, nome);
    passageiros.push_back(nome);
    cout << endl;

    cout << "Qual a origem?";
    getline (cin, origem );
    cout<< endl;
    origens.push_back(origem);

    cout<< " Qual o destino? ";
    getline(cin, destino );
    cout<< endl;
    destinos.push_back(destino);

    cout << "Qual a data da viagem?";
    getline(cin, dataviagaem);
    cout<< endl;
    datas.push_back(dataviagaem);

}

int main () 
{
    system ("cls");

    int opcao =1;
    string continua = "";
    desenhaBoasVindas();

    do
    {
     desenhaMenu();
     cin>> opcao;
     cout << endl;
        
      switch (opcao)
   {
    case 0:
         cout << "Você escolheu a opcao sair do programa\n";
         break;
    case 1:
         cout << "Você escolheu a opcao de cadastrar passagem\n";
         cadastrarPassagem();
        break;
    case 2:
         cout << "Você escolheu a opcso de listar passagem\n";
         listagemDePassagens();
         break;
    default:
         cout << "Opcao invalída\n";
         break;
    } 

    } while (opcao != 0);
    
    cout << "Obrigado por ultilizar nosso programa." << "\n\n";

    return 0;
}
 