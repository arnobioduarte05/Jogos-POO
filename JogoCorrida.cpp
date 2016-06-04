#include <iostream>
#include <ctime>
using namespace std;


void imprimir_espacos(int rodada);
int main()
{
        int total_espacos = 50;
        int espacos_a = 0;
        int espacos_b = 0;
        while (espacos_a < total_espacos && espacos_b < total_espacos)
        {
              system("cls");
              cout << "Jogo de corrida" << endl;
              cout << " Chegada:" << endl;
              
              srand((int)time(0));
             
              espacos_a = rand() % 3 + 1 + espacos_a;
              imprimir_espacos(espacos_a);
              cout << " _ " << endl;
              imprimir_espacos(espacos_a);
              cout << "-o-o>" << endl;
             
              espacos_b = rand() % 3 + 1 + espacos_b;
              imprimir_espacos(espacos_b);
              cout << " _ " << endl;
              imprimir_espacos(espacos_b);
              cout << "-o-o>" << endl;
        }
        if (espacos_a > espacos_b) cout << "Carro A venceu a corrida!" << endl;
        else if (espacos_b > espacos_a) cout << "Carro B venceu a corrida!" << endl;
        else cout << "Empate!" << endl;
        return 0;
}

void imprimir_espacos(int rodada)
{
        for (int qnt_atual = 0; qnt_atual < rodada; qnt_atual++)
        {
              cout << " ";
        }
}
