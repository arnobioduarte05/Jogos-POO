#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main()
{
	bool sair = false;
	string jog1, jog2;
	int vida1 = 20, vida2 = 20;
	int danoc1 = 0, danoc2 = 0;//Dano causado

	cout << "Digite o nome do jogador 1:" << endl;
	cin >> jog1;

	cout << "Digite o nome do jogador 2:" << endl;
	cin >> jog2;

	while (sair == false)
	{
		cout << "-" << danoc1 << "                           -" << danoc2 << endl;
		cout << " o                             o" << endl;
		cout << ".T./                         \\.T. " << endl;
		cout << " ^                             ^" << endl;
		cout << "Atq: 4                        Atq: 4" << endl;
		cout << "Def: 2                        Def: 2" << endl;
		cout << jog1 << "                         " << jog2 << endl;
		cout << "Vida: " << vida1 << "                    " << "Vida: " << vida2 << endl;
		system("pause");
		int dado6;//Dado de 6 lados
		srand((int)time(0));
		dado6 = rand() % 6 + 1;
		danoc1 = dado6 - 4;
		if (danoc1 < 0)
		{
			danoc1 = 0;
		}
		vida1 = vida1 - danoc1;
		
		//srand((int)time(0));
		dado6 = rand() % 6 + 1;
		danoc2 = dado6 - 4;
		if (danoc2 < 0)
		{
			danoc2 = 0;
		}
		vida2 = vida2 - danoc2;

		//cout << "Vida: " << vida1 << "                    " << "Vida: " << vida2 << endl;
		system("cls");

		if (vida1 <= 0 || vida2 <= 0)
		{
			sair = true;
		}
	}

	if (vida1 < vida2)
	{
		cout << jog2 << " Venceu!" << endl;
	}
	else if (vida2 < vida1)
	{
		cout << jog1 << " Venceu!" << endl;
	}
	else
	{
		cout << "Empate!" << endl;
	}
	return 0;
}