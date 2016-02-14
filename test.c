#include <stdio.h>
#include <libnmac.h>

int main(){
	char *dev = "eth0";
	int tmp = 1;
	tmp = nmac_ini(dev);
	if(tmp == 0) {
		printf("init suc\n");
		tmp = nmac_con();
		if (tmp == 0) {
			printf("NetMagic connnected\n");	
		}
		else {
			printf("NetMagic connect error%d\n",tmp);
		}
	}
	else {
		printf("init error %d\n", tmp);
	}
}
