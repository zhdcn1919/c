1,2c1
< # include <pcap.h>
< # include <stdio.h>
---
> #include <stdio.h>
4,8c3,9
< int main(int argc, char * argv[]){
< 	char errBuf[PCAP_ERRBUF_SIZE], * device;
< 	device = pcap_lookupdev(errBuf);
< 	if(device){
< 		printf("success:device:%s\n", device);
---
> int main(int argc, char *argv[]){
> 	int i, j;
> 	for(i=1; i<=9; i++){
> 		for(j=1; j<=i; j++){
> 			printf("%d*%d=%d ", j, i, i*j);
> 		}
> 		printf("\n");
10,13d10
< 	else{
< 		printf("error:%s\n",errBuf);
< 	}
< 	
15a13
> 
