#include <iostream>
using namespace std;
int main()
{
    char tabuleiro[9];
    for(int i = 0; i<9; i++){
        tabuleiro[i]= '.';
    }
   
   bool vit = false;
   int pos;
   cout << tabuleiro<< endl; 
   for(int i = 2; i >0; i++){
       if (i%2 == 0){
        cout << "jogador1 digite uma posicao (0-8)" << endl;
        cin >> pos;
        if (tabuleiro[pos] == '.'){
           tabuleiro[pos] = 'X';
           cout << tabuleiro << endl;
           i++;
        }
        else if (tabuleiro[pos] != '.') {
           cout<< "posicao invalida, digite outra"<< endl;
           cin >> pos;
           tabuleiro[pos] = 'X';
           i++;
        }
        else if (i%2 != 0){
            cout << "jogador2 digite uma posicao (0-8)" << endl;
            cin >> pos;
            if (tabuleiro[pos] == '.'){
                tabuleiro[pos] = 'X';
                cout << tabuleiro << endl;
            i++;
        }
            else if (tabuleiro[pos] != '.') {
            cout<< "posicao invalida, digite outra"<< endl;
            cin >> pos;
            tabuleiro[pos] = 'X';
            i++;
            
        }
        
       
       }
       
       
       
       
       
   }
}


  return 0;
}
