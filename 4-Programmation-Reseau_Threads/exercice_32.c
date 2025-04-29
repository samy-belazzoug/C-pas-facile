#include <ws2tcpip.h>
#include <winsock2.h>
#include <stdio.h>
#pragma comment(lib,"ws2_32.lib")

/*Créer un socket TCP côté client
Connecter un client à google.com sur le port 80 (sans rien envoyer).*/

int main() {

    WSADATA wsaData;
    int initializeWinsock;
    initializeWinsock = WSAStartup(MAKEWORD(2,2),&wsaData);

    if (initializeWinsock != 0) {
        printf("Winsock failed : %d",initializeWinsock);
        return 1;
    }

    printf("Winsock initialized successfully !");


}