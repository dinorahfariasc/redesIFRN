#include <iostream>
using namespace std;
int main()
{
    
    char tabuleiro[9];
    for(int i = 0; i<9; i++){
        tabuleiro[i]= '.';
    }
   
   for(int i = 0; i<9; i++){
        tabuleiro[i] != '.';
        
    }
   
   
    int pos;
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
       
        
        
        
        
    // condicao vitoria ===========================================================================
       
       int empate = 0;
       // linha hori 0
       if(tabuleiro[0] != '.'){
           if (tabuleiro[0] == 'X' && tabuleiro[1] == 'X' && tabuleiro[2] == 'X'){
               vitoria;
               
           }
           else if (tabuleiro[0] == 'O' && tabuleiro[1] == 'O' && tabuleiro[2] == 'O'){
               cout << "vitória do jogador2 na linha 1" << endl;
               
           }
       }
       
       // linha hori 1
       else if(tabuleiro[3] != '.'){
           if (tabuleiro[3] == 'X' && tabuleiro[4] == 'X' && tabuleiro[5] == 'X'){
               cout << "vitoria do jogador1 na linha 2" << endl;
               
           }
           else if (tabuleiro[3] == 'O' && tabuleiro[4] == 'O' && tabuleiro[5] == 'O'){
               cout << "vitória do jogador2 na linha 2" << endl;
               
           }
           else {
               empate = empate + 1; 
           }
       
           
   
        }

        // linha hori 2
        else if(tabuleiro[6] != '.'){
           if (tabuleiro[6] == 'X' && tabuleiro[7] == 'X' && tabuleiro[8] == 'X'){
               cout << "vitoria do jogador1 na linha 1" << endl;
               
           }
           else if (tabuleiro[6] == 'O' && tabuleiro[7] == 'O' && tabuleiro[8] == 'O'){
               cout << "vitória do jogador2 na linha 1" << endl;
               
           }
           
       }
       
        // linha vertical 1 
        else if(tabuleiro[0] != '.'){
           if (tabuleiro[0] == 'X' && tabuleiro[3] == 'X' && tabuleiro[6] == 'X'){
               cout << "vitoria do jogador1 na linha 1" << endl;
               
           }
           else if (tabuleiro[0] == 'O' && tabuleiro[3] == 'O' && tabuleiro[6] == 'O'){
               cout << "vitória do jogador2 na linha 1" << endl;
               
           }
           
       }
   
         // linha vertical 2
        else if(tabuleiro[1] != '.'){
           if (tabuleiro[1] == 'X' && tabuleiro[4] == 'X' && tabuleiro[7] == 'X'){
               cout << "vitoria do jogador1 na linha 1" << endl;
               
           }
           else if (tabuleiro[1] == 'O' && tabuleiro[4] == 'O' && tabuleiro[7] == 'O'){
               cout << "vitória do jogador2 na linha 1" << endl;
               
           }
           
       }
       
         // linha vertical 3 
        else if(tabuleiro[2] != '.'){
           if (tabuleiro[2] == 'X' && tabuleiro[5] == 'X' && tabuleiro[8] == 'X'){
               cout << "vitoria do jogador1 na linha 1" << endl;
               
           }
           else if (tabuleiro[2] == 'O' && tabuleiro[5] == 'O' && tabuleiro[8] == 'O'){
               cout << "vitória do jogador2 na linha 1" << endl;
               
           }
           
       }
       
        // diagonal 1
        else if(tabuleiro[0] != '.'){
           if (tabuleiro[0] == 'X' && tabuleiro[4] == 'X' && tabuleiro[8] == 'X'){
               cout << "vitoria do jogador1 na linha 1" << endl;
               
           }
           else if (tabuleiro[0] == 'O' && tabuleiro[4] == 'O' && tabuleiro[8] == 'O'){
               cout << "vitória do jogador2 na linha 1" << endl;
               
           }
           
       }
       
       // diagonal 2
        else if(tabuleiro[2] != '.'){
           if (tabuleiro[2] == 'X' && tabuleiro[4] == 'X' && tabuleiro[6] == 'X'){
               cout << "vitoria do jogador1 na linha 1" << endl;
               
           }
           else if (tabuleiro[2] == 'O' && tabuleiro[4] == 'O' && tabuleiro[6] == 'O'){
               cout << "vitória do jogador2 na linha 1" << endl;
               
           }
           
       }
       
       //empate 
       else {
           
           cout << "empate"
       }
   
        // ==================================================================================
    
    
    
  

  return 0;
}
   
