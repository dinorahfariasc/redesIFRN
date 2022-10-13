#include <iostream>
using namespace std;

void Intrucoes(){
  cout << endl <<"1 - O jogador da vez deve escolher um numero inteiro\nentre 1 e 9, inclusive. Que corresponde a posição que \ndeseja jogar no tabuleiro, ex: se o numero escolhido for 1, \na posição será na linha 1 coluna 1;";
}
// FUNÇÂO QUE VERIFICA SE ALGUEM GANHOU
int Resutado(char t[9]) {
  int result = 0;
  // verificar horizontal
  // Linha 1
  if (t[0] != '-') {
    if (t[0] == t[1] && t[2] == t[0]) {
      if (t[0] == 'X') {
        result = 1;
      } else {
        result = 2;
      }
    }
  }
    // linha 2
   if (t[3] != '-') {
      if (t[3] == t[4] && t[5] == t[3]) {
        if (t[3] == 'X') {
          result = 1;
        } else {
          result = 2;
        }
      }
    }
    // Linha 3
    if (t[6] != '-') {
      if (t[6] == t[7] && t[8] == t[6]) {
        if (t[6] == 'X') {
          result = 1;
        } 
        else {
          result = 2;
        }
      }
    }


  // Verificar Vertical
  // Coluna 1
  if (t[0] != '-') {
    if (t[0] == t[3] && t[6] == t[0]) {
      if (t[0] == 'X') {
        result = 1;
      } else {
        result = 2;
      }
    }
  }
  // coluna 2
  if (t[1] != '-') {
    if (t[1] == t[4] && t[7] == t[1]) {
      if (t[1] == 'X') {
        result = 1;
      } else {
        result = 2;
      }
    }
  }
  // Coluna 3
  if (t[2] != '-') {
    if (t[2] == t[5] && t[8] == t[2]) {
      if (t[2] == 'X') {
        result = 1;
      } else {
        result = 2;
      }
    }
  }

  // Verificar Orizontal

  // Diagonal 1
  if (t[0] != '-') {
    if (t[0] == t[4] && t[8] == t[0]) {
      if (t[0] == 'X') {
        result = 1;
      } else {
        result = 2;
      }
    }
  }
  // Diagonal 2
  if (t[2] != '-') {
    if (t[2] == t[4] && t[6] == t[2]) {
      if (t[2] == 'X') {
        result = 1;
      } else {
        result = 2;
      }
    }
  }

  return result;
}
void IniciarTabuleiro(char tabuleiro[9]) {

  int quebra = 0;
  cout << "***************"
       << endl;
  for (int i = 0; i < 9; i++) {
    char pos[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    tabuleiro[i] = '-';
    cout << tabuleiro[i] << "    ";
    quebra++;
    if (quebra == 3) {
      cout << endl << endl;
      quebra = 0;
    }
  }
  cout << "***************"
       << endl;
}
void Substituir(int pos, char lista[9], char simbolo) {
  cout << "***************"
       << endl;
  lista[pos - 1] = simbolo;
  int quebra = 0;
  for (int i = 0; i < 9; i++) {
    cout << lista[i] << "    ";
    quebra++;
    if (quebra == 3) {
      cout << endl << endl;
      quebra = 0;
    }
  }
  cout << "***************"
       << endl;
}

int main() {
  char tabuleiro[9];
  cout << "            MENU    " << endl
       << "Digite a opção desejada..." << endl
       << "1 P/ JOGAR\n2 P/ SAIR\n3 P/ INSTRUÇÔES" << endl;
  int op;
  cin >> op;

  switch (op) {
    default:
    break;
    case 1:{
    bool vez = true;
    string jogador1; // nome do jogador 1
    string jogador2; // nome do jogador 2
    cout << "DIGITE O NOME DO JOGADOR 1: ";
    cin >> jogador1;
    cout << "DIGITE O NOME DO JOGADOR 2: ";
    cin >> jogador2;
    cout << endl;
    IniciarTabuleiro(tabuleiro);
    int totalJogadas = 0;
    while (true) {
      char simboloDaVez;
      string nomeDaVez;
      

      if (vez) {
        simboloDaVez = 'O';
        nomeDaVez = jogador1;
      } else {
        nomeDaVez = jogador2;
        simboloDaVez = 'X';
      }

      cout << "É a vez de " << nomeDaVez << endl
           << "Escolha sua jogada: " ;
      int pos;
      
      cin >> pos;
      cout << endl;
      // verificar  se jogada é válida 
      if(pos > 0 && pos < 10){
        // verificar se posição ja esta oculpada
        if(tabuleiro[pos-1] == '-'){
          totalJogadas ++;
          cout << totalJogadas<< endl;
          Substituir(pos, tabuleiro, simboloDaVez);
          
        }
        else{
          cout << "OPS.. \nESTA POSIÇÂO JA ESTA OCUPADA!!!"<< endl;
          continue;
        }
      }
      else{
        cout << "Posição inválida!!!\nAS POSIÇÔES DEVEM SER DE 1 A 9 !!! " << endl;
        continue;
      }
      

      if (vez) {
        vez = false;
      } else {
        vez = true;
      }
      // verifica se X ganhou
      if (Resutado(tabuleiro) == 1){
        cout << endl <<jogador2<<" Venceu!!!" << endl;
        break;
      }
        // verifica se O ganhou
      else if (Resutado(tabuleiro) == 2){
        cout << endl << jogador1 << " Venceu!!!" << endl;
        break;
      }
      else{
        // Verifica se todos os espaços foram preechidos
        if(totalJogadas == 9){
          cout << "O jogo empatou, DEU VELHA..." << endl;
          break;
        }
        else{
          continue;
        } 
      }
    }
    break;
    }
  // Opção para fechar o jogo
  case 2:
    break;

  // Opção para mostrar instruções
  case 3:
    Intrucoes();
    break;
  
  }
  return 0;
}
