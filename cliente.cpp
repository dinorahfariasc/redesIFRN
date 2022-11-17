// Exemplo de aplicação cliente utilizando Socket em C/C++
#include <stdio.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <string.h>
#include <iostream>
using namespace std;
#define PORT 8080
   
int main(int argc, char const *argv[])
{
    //criando as variaveis que serao utlizadas para gerenciamento de socket
    int sock = 0, valread;
    struct sockaddr_in serv_addr;
    
    char *hello = "Olá, eu sou dinorah!"; // buffer de saida
    char buffer[1024] = {0}; // definicao do buffer, oque recebo do servidor fica aqui
    
    if ((sock = socket(AF_INET, SOCK_STREAM, 0)) < 0) // sock_stream adp ou udp, af_inet protocolo internet ipv4
    {
        printf("\n Socket creation error \n");
        return -1;
    }
   
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(PORT);
       
    // Converte o Endereço IP de Texto para o formato binário
    if(inet_pton(AF_INET, "192.168.0.100", &serv_addr.sin_addr)<=0) 
    {
        printf("\nInvalid address/ Address not supported \n");
        return -1;
    }
   
   // cliente realiza tentativa de conexao com o servidor
    if (connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0)
    {
        printf("\nConnection Failed \n");
        return -1;
    }
    
    // cliente envia uma mensagem para o servidor
    // send(sock , hello , strlen(hello) , 0 );
    
    printf("Mensagem Enviada\n");
   
   
   
    char op[1024];
    
    
    while(buffer != "FIM")
    {
    	cout<< "===============================";
    	valread = read( sock , buffer, 1024);
        printf("%s\n",buffer );
        cout << "digite a opcao: ";
        
        memset(buffer,0,sizeof(buffer)); // limpar o buffer
        
        cin >> op;
    	send(sock, op, strlen(op), 0);
    	
        valread = read( sock , buffer, 1024);
        
        //printf("%s\n",buffer);
        
	if (buffer[0] == '1')
      	{
          cout << "Escreva seu nome: "<< endl;        
          cin >> op;
    	  send(sock, op, strlen(op), 0);    	              
 	  
      	}
         
     	if (buffer[0] == 'F')
      	{ 
    	  break;
    	  
        }
        
        //cout << "teste";
        
    }
    
    
    return 0;
    
}
