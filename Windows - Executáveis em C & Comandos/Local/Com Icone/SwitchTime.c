#include<stdio.h>
#include<locale.h>
int Menu (){
	int e, SegDigitados,i;
	printf("1 - desligar em 1 minuto.\t");
	printf("2 - desligar em 2 minutos.\n");
	printf("3 - desligar em 3 minutos.\t");
	printf("4 - desligar em 4 minutos.\n");
	printf("5 - desligar em 5 minutos.\t");
	printf("6 - Escolher quantos minutos.\n");
	printf("7 - HIBERNAR.\t                ");
	printf("8 - DESLIGAR AGORA.\n");
	printf("9 - ESCREVA O COMANDO.\t        ");
	printf("10 - CANCELAR AGEDAMENTO.\n\nESCOLHA:");
	scanf("%d",&e);
	switch(e){
	case 1 :
		printf("vou desligar em 1 minuto.");
		system("shutdown -s -t 60 ");
		break;
	case 2 :
		printf("vou desligar em 2 minutos");
		system("shutdown -s -t 120 ");
		break;
	case 3 :
		printf("vou desligar em 3 minutos");
		system("shutdown -s -t 180 ");
		break;
	case 4 :
		printf("vou desligar em 4 minutos");
		system("shutdown -s -t 240 ");
		break;
	case 5 :
		printf("vou desligar em 5 minutos");
		system("shutdown -s -t 300 ");
		/*printf("Deseja Cancelar?\nS - SIM   N - N�O     M - Voltar ao Menu\n: ");
		scanf("%c",&decisao);
		if(decisao == 's' || decisao == 'S'){
			system ("shutdown -a");
		} else printf("Agendamento Mantido\n");*/
		break;
	case 6 : 
		///int SegDigitados;
		printf("\ndigite em SEGUNDOS,\nquanto tempo voc� quer que a maquina desligue: ");
		scanf("%d",&SegDigitados);
		printf("A Maquina Ser� Desligada em %d Segundos\n",SegDigitados);
		system("shutdown -s -t SegDigitados");
		
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
		printf("vou hibernei :)");
		system("shutdown -h");
		break;
	case 10 :
		printf("Agendamento Cancelado :(");
		system("shutdown -a");
		break;
	default:printf("Op��o incorreta!\n");
	}
	
}




main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int e, SegDigitados,i;
	char decisao;
	
	printf(Menu());
	
	if (e != 10){
		
			printf("Deseja Cancelar?\n1 - SIM   2 - N�O     3 - Voltar ao Menu\n:");
	scanf("%d",&i);
	if(i == 1 ){
			system ("shutdown -a");
			printf("Agendamento Cancelado :(\n");
		} else if(i == 3){
			printf(Menu());

			
		}else printf("Agendamento Mantido\n");
	
	
	}

	
}
