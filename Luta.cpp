#include <iostream>
#include <string>
#include <ctime> //Integra biblioteca que vai usar o tempo como "semente" do gerador
using namespace std;

int main() //Função principal
{ //Abrindo função principal
	bool sair = false;
	string jog1, jog2;
	int vida1 = 20, vida2 = 20; //Life dos personagens
	int danoc1 = 0, danoc2 = 0; //Dano causado

	cout << "Digite o nome do jogador 1:" << endl; //Pedi para digitar o nome do jogador
	cin >> jog1; //Acondicionando o nome do jogador

	cout << "Digite o nome do jogador 2:" << endl; //Imprimindo na tela
	cin >> jog2; //Acondicionando o nome do jogador

	while (sair == false)
	{
		cout << "-" << danoc1 << "                           -" << danoc2 << endl; //Impressão do dano causado
		cout << " o                             o" << endl; //Imprimindo personagem
		cout << ".T./                         \\.T. " << endl; //Imprimindo personagem
		cout << " ^                             ^" << endl; //Imprimindo personagem
		cout << "Atq: 4                        Atq: 4" << endl;
		cout << "Def: 2                        Def: 2" << endl;
		cout << jog1 << "                         " << jog2 << endl; //Faz a impressão dos nomes dos jogadores
		cout << "Vida: " << vida1 << "                    " << "Vida: " << vida2 << endl;
		system("pause");
		int dado6;//Dado de 6 lados
		srand((int)time(0)); //Usa o tempo atual como semente do grador
		dado6 = rand() % 6 + 1; //Gerador de números aleatórios
		danoc1 = dado6 - 4; //Faz cálculo do dano causado ao lutaodr 1
		if (danoc1 < 0) //Se o dano causado for menor que 0, entrará nessa condição
		{ //Abrindo a condição
			danoc1 = 0; //Se entrou na condição, dano causado igual a 0
		} //Fechando a comdição
		vida1 = vida1 - danoc1;
		
		//srand((int)time(0));
		dado6 = rand() % 6 + 1; //Gerando número aleatório
		danoc2 = dado6 - 4; //Cálculo o dano causado ao lutador 2
		if (danoc2 < 0) //Se o dano causado for menor que 0, entrará nesta condição
		{ //Abrindo a condição
			danoc2 = 0; //S entrou na condiçao, dano causado é 0
		} //Fechando a condição
		vida2 = vida2 - danoc2;

		//cout << "Vida: " << vida1 << "                    " << "Vida: " << vida2 << endl;
		system("cls"); //Limpa a tela

		if (vida1 <= 0 || vida2 <= 0)
		{
			sair = true;
		}
	}

	if (vida1 < vida2) //Condição mostrada se o jogador 2 for vencedor
	{ //Abrindo a condição
		cout << jog2 << " Venceu!" << endl; //Será impresso se o jogador  2 for o vecedor
	} //Fechando a condição
	else if (vida2 < vida1) //Condição mostrada se o jogador 1 for o vencedor
	{ //Abrindo a condição
		cout << jog1 << " Venceu!" << endl; //Será impresso se o jogador 1 for o vencedor
	} //Fechando a condição
	else //Se o life dos jogadores forem semelhantes, entrará nesta condição
	{ //Abrindo a condição 
		cout << "Empate!" << endl; //Será imprimido quando o jogo der empate
	} //Fechando a condição
	return 0;
} //Encerrando função principal
