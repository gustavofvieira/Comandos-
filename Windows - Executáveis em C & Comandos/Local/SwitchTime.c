#include<stdio.h>
#include<locale.h>
#include<string.h>
int Menu (){
	int e, SegDigitados,i;
	char comando[25],Segundos[25],totalComando[25];
	printf("1 - desligar em 1 minuto.\t");
	printf("2 - desligar em 2 minutos.\n");
	printf("3 - desligar em 3 minutos.\t");
	printf("4 - desligar em 4 minutos.\n");
	printf("5 - desligar em 5 minutos.\t");
	printf("6 - Escolher quantos minutos.\n");
	printf("7 - HIBERNAR.\t                ");
	printf("8 - DESLIGAR AGORA.\n");
	printf("9 - ESCREVA O COMANDO.\t        ");
	printf("10 - CANCELAR AGEDAMENTO.\n\nESCOLHA: ");
	scanf("%d",&e);
	switch(e){
	case 1 :
		system("color 01");
		printf("vou desligar em 1 minuto.");
		system("shutdown -s -t 60 ");
		break;
	case 2 :
		system("color 02");
		printf("vou desligar em 2 minutos");
		system("shutdown -s -t 120 ");
		break;
	case 3 :
		system("color 03");
		printf("vou desligar em 3 minutos");
		system("shutdown -s -t 180 ");
		break;
	case 4 :
		system("color 04");
		printf("vou desligar em 4 minutos");
		system("shutdown -s -t 240 ");
		break;
	case 5 :
		system("color 05");
		printf("vou desligar em 5 minutos");
		system("shutdown -s -t 300 ");
		/*printf("Deseja Cancelar?\nS - SIM   N - N�O     M - Voltar ao Menu\n: ");
		scanf("%c",&decisao);
		if(decisao == 's' || decisao == 'S'){
			system ("shutdown -a");
		} else printf("Agendamento Mantido\n");*/
		break;
	case 6 : 
		printf("\ndigite em SEGUNDOS,\nquanto tempo voc� quer que a maquina desligue: ");
		scanf("%d",&SegDigitados);
		
	    ///Comando[] = "shutdown -s -t " ;
	   // strcat(Comando, SegDigitados);
     	printf("A Maquina Ser� Desligada em %d Segundos\n",SegDigitados);
		
		//system(Comando);
		
		break;
		
	case 7 :
		printf("vou hibernei :)");
		system("shutdown -h");
		break;
	case 8 :
		printf("vou desliguei :)");
		system("shutdown -s");
		break;
	case 9 :
		fflush(stdin);
		printf("Escreva o comando:\n");
		gets(comando);
		system(comando);
		break;
	case 10 :
		system("color 10");
		printf("Agendamento Cancelado :(");
		system("shutdown -a");
		break;
	default:printf("Op��o incorreta!\n");
	}
	
}
// fgets (str, 256, stdin); (Variavel, limite, entrada por teclado)



main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int e, SegDigitados,i;
	char decisao;
	
	printf(Menu());
	
	if (e != 10){
			printf("Deseja Cancelar?\n1 - SIM   2 - N�O     3 - Voltar ao Menu\nEscolha: ");
	scanf("%d",&i);
	if(i == 1 ){
			system ("shutdown -a");
			printf("Agendamento Cancelado :(\n");
		} else if(i == 3){
			printf(Menu());

			
		}else printf("Agendamento Mantido\n");
	
	
	}

}
