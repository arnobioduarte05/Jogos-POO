// Tema 4 - Jogo das Moedas
#include <iostream>
#include <string>
using namespace std;

/*
* Retire 1, 3 ou 4 moedas.
* Quem tirar a última ganha!
*
* O primeiro a chegar em 3 (três) vitórias ganha o jogo.
*
* O código está incompleto!
* 1. Leia o código (linha a linha) e seus comentários.
* 2. Preencha os comentários em ----- MAIÚSCULO ----- com o código que está faltando.
* 3. Teste!
* 4. Repita 2 e 3.
*
* Se necessário, use uma folha para lhe auxiliar! Copie o nome das variáveis e seus valores.
*
* Boa sorte!
*
*/
int main()
{
	        // O jogo é feito para 2 jogadores.
	        string jog1, jog2;

	        // Diz qual o jogador da vez: 1 ou 2.
	        int jogador_da_vez = 1;
	        // Começa sempre com o Jogador 1.

	        // O vencedor de cada rodada ganha 1 ponto. Quem chegar a 3 pontos primeiro vence o jogo.
	        int pont_jog1 = 0, pont_jog2 = 0;

	        // Total de moedas por partida.
	        int moedas = 11;
	        // Quantidade de moedas que o jogador quer retirar.
          int qnt_moedas_tira;
          

	        // ------ RECEBER O NOME DOS JOGADORES 1 E 2 ------
	        // Coloque o código aqui!
	        cout << "Digite o nome do jogador 1" << endl;
	        cin >> jog1;
	        cout << "Digite o nome do jogador 2" << endl;
	        cin >> jog2;
	        // Limpa a tela e inicia o jogo.
	        system("cls");
	        bool sair = false;

	        // Enquanto sair for falso.
	        while (!sair)
	        {
		              // ------ MOSTRAR O PLACAR EM TELA COMO NA IMAGEM ------
		              // Coloque o código aqui!
		              cout << jog1 << " " << pont_jog1 << " x " << pont_jog2 << " " << jog2 << endl;

		              // ------ MOSTRAR AS MOEDAS EM TELA COMO NA IMAGEM ------
		              // Coloque o código aqui!
		              for (int imprimir = 1; imprimir < moedas; imprimir++) cout << "@ " << endl;

	  	            // Diz qual o jogador que está jogando.
		              cout << "Vez do Jogador " << jogador_da_vez << endl;

		              // Recebe quantas moedas devem ser tiradas pelo jogador.
		              cout << "Digite 1, 3 ou 4 para tirar moedas." << endl;
		              cin >> qnt_moedas_tira;

		              // Verifica se a quantidade de moedas retiradas é valida.
		              if (qnt_moedas_tira == 1 ||(qnt_moedas_tira == 3 && moedas>=3 )||(qnt_moedas_tira == 4 && moedas>=4))
			                    // ------ ESSA CONDIÇÃO POSSUI ALGUM PROBLEMA? VERIFIQUE! -----
		                      // Teste o programa depois de feito e veja se tem algum erro!
		  	                  
		              {
			                    // ------ RETIRAR AS MOEDAS ------
			                    // Coloque o código aqui!
			                    moedas = moedas - qnt_moedas_tira;
			                    // Vê se o jogo terminou.
			                    if (moedas == 0)
			                    {
				                          // Mostra se o Jogador 1 ou o 2 ganhou.
				                          cout << "Ganhou Jogador " << jogador_da_vez << endl;

				                          // ------ AUMENTAR A PONTUACAO DO JOGADOR QUE GANHOU ------
				                          // Coloque o código aqui!
				                          if (jogador_da_vez == 1) pont_jog1++;
				                          else if (jogador_da_vez == 2) pont_jog2++;
				                          // Se nenhum dos jogadores chegou em 3 pontos ainda, então reinicia a rodada. Se não, sai do jogo.
				                          if (pont_jog1 < 3 && pont_jog2 < 3) moedas = 10;
				                          else sair = true;

				                          // ------ POR QUE ESSA LINHA É NECESSÁRIA? -----
				                          // Teste com e sem ela, e comente!
				                          system("pause");
			                      }
			                          // Se não, troca para o próximo jogador.
                      			else
                      			{
				                                  // ------ TROCAR DE JOGADOR (DO 1 PARA O 2 E VICEVERSA) ------
				                                  // Coloque o código aqui!
				                                  if (jogador_da_vez == 1) 
												  {
												  
												  jogador_da_vez = 2;
											     }
				                                  else if (jogador_da_vez == 2) jogador_da_vez = 1;
			                   }
								   
		                }
		                else
		                {
			                        /* Se o jogador digitou uma quantidade de moedas invalida (ou seja, diferente de 1, 3 ou 4)
			                        * então mostra uma mensagem de erro. */
			                        cout << "Numero de moedas invalido. Tente novamente (Digite 1, 3 ou 4)." << endl;

			                        // ------ POR QUE ESSA LINHA É NECESSÁRIA? -----
                        			// Teste com e sem ela, e comente!
			                        system("pause");
		                }

		                // ------ LIMPAR A TELA PARA A PRÓXIMA RODADA ------
		                // Coloque o código aqui!
		                system("cls");
	        }

	        // Ao final das rodadas, mostra o nome do jogador com a maior pontuação.
	        if (pont_jog1 > pont_jog2) cout << "Jogador 1 " << jog1 << " Venceu as tres rodadas!" << endl;
	        else cout << "Jogador 2 " << jog2 << " Venceu as tres rodadas!" << endl;
	        // Será aquele que atingir 3 pontos.

	        return 0;
}
