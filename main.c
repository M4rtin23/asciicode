#include<stdio.h>
#include <stdlib.h> //For program termination after help


int main(int argc, char *argv[]){
	char letter;
	char onlyCode;
	for(int i = 1; i < argc; i++){
		if(argv[i][0] != '-'){
			letter = argv[i][0];			
		}else{
			switch(argv[i][1]){
				case 'n':
					onlyCode = 1;
					break;

				case 'h':
					printf("Usage:\n\t-h:\tshows this message.\n\t-n:\tprints only the ascii code\n\t-d:\tprints the default message\n");
					exit(0);
					break;

				case 'd':
					onlyCode = 0;
					break;
			}				
		}
	}

	if(onlyCode != 1){
		printf("The ascii code of \"%c\" is %d.\n", letter, letter);	
	}else{
		printf("%d\n", letter);
	}

	return 0;
}