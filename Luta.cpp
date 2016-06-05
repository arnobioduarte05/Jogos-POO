#include <iostream>//Faz com que as bibliotecas com entrada e saída de terminal estejam disponíveis para o programa.
#include <string>
#include <ctime> //Integrando a biblioteca que vai usar o tempo como "semente" do gerador.
using namespace std;//Faz com que as bibliotecas com entrada e saída de terminal estejam disponíveis para o programa.

int main()//Função princcipal
{ //Abrindo função principal main.
	
	bool sair = false;//Usada para controlar os comandos de seleção e loopings.
	string jog1, jog2;
	int vida1 = 20, vida2 = 20; //Life dos personagens.
	int danoc1 = 0, danoc2 = 0; //Dano causado.

	cout << "Digite o nome do jogador 1:" << endl; //Pedi para digitar o nome do jogador
	cin >> jog1; //Vai ler o que o usuário digitar no teclado e estabelece o que ele digitou como o valor da variável jog1. 

	cout << "Digite o nome do jogador 2:" << endl; //Imprimindo na tela
	cin >> jog2; //Vai ler o que o usuário digitar no teclado e estabelece o que ele digitou como o valor da variável jog2. 

	while (sair == false) //Quando o while é executado, a expressão booleana é avaliada. Neste caso, se avaliado como false, o loop nunca é executado. 
	{
		/*Imprime o dano causado*/
		cout << "-" << danoc1 << "                           -" << danoc2 << endl; 
		
		/*Imprimindo os personagens.*/
		cout << " o                             o" << endl; 
		cout << ".T./                         \\.T. " << endl;
		cout << " ^                             ^" << endl;
		
		/*Imprime o status do personagem*/
		cout << "Atq: 4                        Atq: 4" << endl;
		cout << "Def: 2                        Def: 2" << endl;
		
		cout << jog1 << "                         " << jog2 << endl; //Faz a impressão na tela dos nomes dos jogadores.
		cout << "Vida: " << vida1 << "                    " << "Vida: " << vida2 << endl;//Imprime a vida dos personagens do jogo.
		system("pause"); //Espera apertar ENTER para ir para a próxima rodada.
		
		int dado6;//Dado de 6 lados.
		
		srand((int)time(0)); //Usa o tempo atual como 'semente' do grador
		dado6 = rand() % 6 + 1; //Gerador de números aleatórios
		danoc1 = dado6 - 4; //Faz cálculo do dano causado ao lutaodr 1
	
		if (danoc1 < 0) //Se o dano causado for menor que 0, entrará nessa condição
		{ 
			danoc1 = 0; //Se entrou na condição, dano causado igual a 0.
		}
		vida1 = vida1 - danoc1;//Causando dano ao lutador 1.
		
		dado6 = rand() % 6 + 1; //Gerando número aleatório
		danoc2 = dado6 - 4; //Cálculo do dano causado ao lutador 2
		
		if (danoc2 < 0) //Se o dano causado for menor que 0, entrará nesta condição
		{ 
			danoc2 = 0; //Se entrou na condiçao, dano causado é 0
		} 
		vida2 = vida2 - danoc2;//Causando dano ao lutador 2.
		
		system("cls"); //Limpa a tela
     /*-------------------------------------------------------------------------------------*/
		/*Se a vida de ambos chegarem a menor ou igual a 0, os dois perderão */
		if (vida1 <= 0 || vida2 <= 0) 
		{ 
			sair = true; 
		}
	}
     /*-----------------------------------------------------------------------------------*/
	if (vida1 < vida2) //Condição mostrada se o jogador 2 for vencedor
	{ //Abrindo a condição
		cout << jog2 << " Venceu!" << endl;
	} //Fechando a condição
    /*-------------------------------------------------------------------------------------*/
	else if (vida2 < vida1) //Condição mostrada se o jogador 1 for o vencedor
	{ 
		cout << jog1 << " Venceu!" << endl;
	}
    /*---------------------------------------------------------------------------------------*/
	else //Se o life dos jogadores forem semelhantes, entrará nesta condição
	{ 
		cout << "Empate!" << endl;
	} 
     /*--------------------------------------------------------------------------------------*/
	return 0;//Este comando termina a invocação da função main e fornece 0 como valor de função. O programa termina quando este comando for executado.
} 
