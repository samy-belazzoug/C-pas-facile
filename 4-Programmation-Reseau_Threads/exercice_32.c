#include <ws2tcpip.h>
#include <winsock2.h>
#include <stdio.h>
#pragma comment(lib,"ws2_32.lib")
#define DEFAULT_PORT "80"

/*Créer un socket TCP côté client
Connecter un client à google.com sur le port 80 (sans rien envoyer).*/

int main() {

    WSADATA wsaData;
    int iResult;
    iResult = WSAStartup(MAKEWORD(2,2),&wsaData);

    if (iResult != 0) {
        printf("Winsock failed : %d",iResult);
        return 1;
    }

    struct addrinfo *result = NULL,
                    *ptr = NULL,
                    hints;
    
    ZeroMemory(&hints, sizeof(hints)); //Set everything to zero to go on a clean base
    hints.ai_family = AF_INET; //IP protocol : IPv4
    hints.ai_socktype = SOCK_STREAM; //Socket type : stream
    hints.ai_protocol = IPPROTO_TCP; //Protocol : TCP/IP
    
    //Resolve the server address and port
    iResult = getaddrinfo("google.com",DEFAULT_PORT,&hints, &result);
    if (iResult != 0) {
        printf("getaddrinfo failed : %d",iResult);
        WSACleanup();
        return 1;
    }

    SOCKET ConnectSocket = INVALID_SOCKET;
    
    ptr = result;

    ConnectSocket = socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);

    if (ConnectSocket == INVALID_SOCKET) {
        printf("Error at socket() : %ld",WSAGetLastError());
    }

    if (connect(ConnectSocket, ptr->ai_addr,(int)ptr->ai_addrlen) == SOCKET_ERROR) {
        printf("Connection failed : %d",WSAGetLastError());
        closesocket(ConnectSocket);
        ConnectSocket = INVALID_SOCKET;
        WSACleanup();
    } 

    printf("Successfully connected to Google!");
        
    freeaddrinfo(result);
    closesocket(ConnectSocket);
    WSACleanup();
    return 1;
}