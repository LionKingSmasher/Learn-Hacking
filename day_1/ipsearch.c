#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>

int main(int argc, char* argv[]){
	struct hostent *host_info;
	struct in_addr *address;

	if(argc<2){
		printf("사용법: %s <호스트 이름>\n", argv[0]);
		exit(1);
	}
	host_info = gethostbyname(argv[1]);
	if(host_info == NULL){printf("%s를 찾을 수 없습니다", argv[1]);}
	else{address = (struct in_addr*)(host_info->h_addr); printf("%s의 주소는 %s입니다\n", argv[1], inet_ntoa(*address));}
}