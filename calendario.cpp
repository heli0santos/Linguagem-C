#include  <stdio.h>

main (){
	int dia,mes,ano,diasMes, a, b, c, d, diaSemana;
	bool bissexto=0;

	printf("Informe o ano desejado:\n");
	scanf("%d",&ano);
	printf("Ano: ");
	printf("%d\n",ano);

	if((ano % 4 == 0 && ano % 100 != 0 ) || ano % 400 == 0){
		bissexto=1;
	}

	for(mes=1;mes<=12;mes++){
		printf("Mes: ");
		printf("%d\n",mes);
		printf("Dom Seg Ter Qua Qui Sex Sab\n");
		if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
			diasMes = 31;
		}else if (mes == 4 || mes == 6 || mes == 9 || mes == 11){
			diasMes = 30;
		}else if (bissexto == 1){
			diasMes = 29;
		}else{
			diasMes = 28;
		}

			a = (14-mes)/12;
			b = ano - a;
			c = mes + (12*a) - 2;
			dia = 1;
			d = dia + (31*c)/12 + b + (b/4) - (b/100) + (b/400);

			diaSemana = d % 7;



			for (int i=0;i < diaSemana;i++){
				printf("    ");
			}

		for(dia=1;dia<=diasMes;dia++){
			printf("%3d ",dia);
			diaSemana++;
			if(diaSemana % 7 == 0){
				printf("\n");
			}
		}
		printf("\n\n");
	}

}
