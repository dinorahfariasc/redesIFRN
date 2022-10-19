// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void mostrarTab(string tab){
    cout << " " << tab[0] << " " << tab[1] << " " << tab[2] << " " << endl
         << " " << tab[3] << " " << tab[4] << " " << tab[5] << " " << endl
         << " " << tab[6] << " " << tab[7] << " " << tab[8] << " " << endl
         << endl;
}

int main(){
    char tab [9];
    for (int i = 0;i< 9; i++){
        tab[i]= '.';
    }
    
    
    string jogador1, jogador2;
    
    cout << "Digite o nome do jogador 1 (O): "<< endl;
    cin >> jogador1;
    
    if (jogador1 == "")
        jogador1 = " jogador 1";
        
        
    cout << "digite o nome do jogador 2 (X): " << endl;
    cin >> jogador2;
    
    if (jogador2 == "")
        jogador2 = "Jogador 2";
        
    
    
    // variavies controle de fluxo
    
    bool continua = true; 
    int posJogada = 0;
    char jogadorVez = 'O';
    int jogadas = 0;
    
    while (continua){
        mostrarTab(tab);
        
        bool jogadaValida = false;
        
        while (!jogadaValida){
            cout << ((jogadorVez == 'O') ? jogador1 : jogador2)
                << ", indique a posicao para a jogada (1-9): ";
            
            cin >> posJogada;
            
            if (posJogada < 1 || posJogada > 9)
                cout << "posição inválida!" << endl;
            else if (tab[posJogada -1] != '.')
                cout << "posição não disponivel" << endl;
                
            else 
                jogadaValida = true;
        }
        
        tab[posJogada -1] = jogadorVez;
        jogadas++;
        
         // Vitória
                // lin 1
        if ((tab[0] == jogadorVez && tab[1] == jogadorVez && tab[2] == jogadorVez) ||     // lin 2
            (tab[3] == jogadorVez && tab[4] == jogadorVez && tab[5] == jogadorVez) || // lin 3
            (tab[6] == jogadorVez && tab[7] == jogadorVez && tab[8] == jogadorVez) || // col 1
            (tab[0] == jogadorVez && tab[3] == jogadorVez && tab[6] == jogadorVez) || //col 2
            (tab[1] == jogadorVez && tab[4] == jogadorVez && tab[7] == jogadorVez) || //col 3
            (tab[2] == jogadorVez && tab[5] == jogadorVez && tab[8] == jogadorVez) || //diag 1
            (tab[0] == jogadorVez && tab[4] == jogadorVez && tab[8] == jogadorVez) || // diag 2
            (tab[2] == jogadorVez && tab[4] == jogadorVez && tab[6] == jogadorVez)) { 
            
            cout << " =============================== " << endl
                 << " " << ((jogadorVez == 'O') ? jogador1 : jogador2)
                 << " Ganhou!!!" << endl
                 << " ================================ " << endl;
            
            mostrarTab(tab);

            continua = false;
            break;
        
    }
    
    if (jogadorVez == 'O')
            jogadorVez = 'X';
        else
            jogadorVez = 'O';
    
    
    }
    
    return 0;
}
