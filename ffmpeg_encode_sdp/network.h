#ifndef NETWORK_H
#define NETWORK_H

#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

typedef struct{
    const char *dstIp;
    int dstPort;
    struct sockaddr_in servAddr;
    int socket;
}UDPContext;

/* create UDP socket */
int udpInit(UDPContext *udp);

/* send UDP packet */
int udpSend(const UDPContext *udp, const uint8_t *data, uint32_t len);

#endif // NETWORK_H
