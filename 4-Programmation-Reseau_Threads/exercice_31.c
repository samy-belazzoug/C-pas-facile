#include <ws2tcpip.h>
#include <winsock2.h> 
#include <stdio.h>
#pragma comment(lib,"ws2_32.lib")
/*Initialiser et fermer WinSock
Juste faire WSAStartup() et WSACleanup(), et imprimer un message.
*/


int main() {

    WSADATA wsaData;
    int initializationResult;
    initializationResult = WSAStartup(MAKEWORD(2,2),&wsaData); //Try to initialize use of WSA_32.dll
    
    if (initializationResult != 0) { //Meaning Winsock didn't managed to be initialized
        printf("Winsock initialization failed : %d", initializationResult);
        return 1;
    }   //else
    printf("Version : %d.%d\n", LOBYTE(wsaData.wVersion), HIBYTE(wsaData.wVersion));

    printf("Winsock successfully initialized !");

    WSACleanup();

    return 0;

}