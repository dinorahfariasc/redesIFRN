#include <iostream>
using namespace std;
int main()
{
    /*
    char tabuleiro[9];
    for(int i = 0; i<9; i++){
        tabuleiro[i]= '.';
    }
   */ 
    string tabuleiro[3][3] = 
                    {{".", ".","."},
                    {".", ".", "."},
                    {".", ".", "."}};
                    
    //constexpr int vit[3] = {(0,4,8),(0,1,2),(0,3,6)};
   
    int pos1;
    int pos2;
    cout << tabuleiro<< endl; 
    for(int i = 2; i >0; i++){
        
        // jogador 1
       if (i%2 == 0){
        cout << "jogador1 digite uma posicao (0-8)" << endl;
        cin >> pos;
        
        if (tabuleiro[pos] == '.'){
           tabuleiro[pos] = 'X';
           cout << tabuleiro << endl;
           cout << i << endl;
           
        }
        else if (tabuleiro[pos] != '.') {
           cout<< "posicao invalida, digite outra"<< endl;
           cin >> pos;
           tabuleiro[pos] = 'X';
           cout << tabuleiro << endl;
           
        }
        
        
        
          
       }
       
       // jogador 2
       else if (i%2 != 0){
            cout << "jogador2 digite uma posicao (0-8)" << endl;
            cin >> pos;
            if (tabuleiro[pos] == '.'){
                tabuleiro[pos] = 'O';
                cout << tabuleiro << endl;
            
        }
            else if (tabuleiro[pos] != '.') {
            cout<< "posicao invalida, digite outra"<< endl;
            cin >> pos;
            tabuleiro[pos] = 'O';
            cout << tabuleiro << endl;
            
            
        }
        
       
       }
       
   
   
}


   
        
    /*  condicao de vitoria 
        se os mesmos caracteres estiverem em uma determinada sequencia, há vitoria 
        
        if (tabuleiro[0,4,8] == 'X'){
           cout << "vitoria jogador1" << endl;
           break;
           
       }
       
       */
  
    /* if ((tabuleiro[0,4,8] == "X") || (tabuleiro[1,4,7] == "X") ||(tabuleiro[0,1,2] == "X") ||(tabuleiro[0,3,6] == "X") ||(tabuleiro[2,4,6] == "X") ||(tabuleiro[2,5,8] == "X") ||(tabuleiro[3,4,5] == "X") ||(tabuleiro[6,7,8] == "X")) {
        
        cout << "jogador1 ganhou!" << endl;
    }    
    
    
    if (tabuleiro[0] == 'X' && [4][8] == {"X"}){
            cout << "jogador1 ganhou !" << endl;
            i = 0;
        }
    */
    
    
    
  

  return 0;
}
