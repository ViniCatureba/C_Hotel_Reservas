#include stdio.h
#include stdlib.h

#define ANDAR 50
#define APTO 50

    char reservaHotel(char reserva)
	{
        char matriz[ANDAR][APTO];
        int i;
        int j;
        int andarInp;
        int qrtInput;

        for(i=20; i>0; i--)
            for(j=1; j<15;j++)
            matriz[i][j] = '.';
            printf("\nApartamento\t");

        do
        {
        for(j=1; j<15;j++)
        printf("%2d ", j);
        printf("\n");

        for(int i=20; i>0;i--)
        {
        printf("Andar %2d:\t", i);

        for(int j=1; j<15; j++)

        printf(" %c ", matriz[i][j]);
        printf("\n");
        }

        //Fazer a reserva
        printf("\nFaca sua reserva no Hotel Transilvania: ");
        printf("\nDigite (-1,-1) para encerrar essa sessao");
        printf("\nDigite (andar, apartamento): ");
        scanf("%d,%d", &andarInp, &qrtInput);

        if (i>0 || i<21 || j>0 || j<15)
        {
        matriz[andarInp][qrtInput] = 'R';
        printf ("\n\t\t");
        }
        else
        {
        printf("Coordenada invalida\n");
        }
        }
        while (i != -1 || j != -1);

        return andarInp & qrtInput;

    }


    char mapaHotel(char mapa, int andarInp,int qrtInput)
	{
        char matriz[ANDAR][APTO];
        int i;
        int j;

        //Gerando a matriz de caracteres
        for(i=20; i>0; i--)
		for(j=1; j<15;j++)
		matriz[i][j] = '.';
		printf("\nApartamento:\t");

		for(j=1; j<15;j++)
        printf("%2d ", j);
		printf("\n\n");

		//Dados da matriz
		for(int i=20; i>0;i--)
		{
		printf("Andar %2d:\t", i);

		for(int j=1; j<15; j++)

        printf(" %c ", matriz[i][j]);
		printf("\n");
		}
    }


    int main(void)
    {
        int opcao;
        int mapaOcupacao;
        char matriz[ANDAR][APTO];
        int andarInp;
        int qrtInput;

        printf ("1 - Check-in\n");
        printf ("2 - Check-out\n");
        printf ("3 - Reserva de apartamento\n");
        printf ("4 - Cancelar uma reserva\n");
        printf ("5 - Mapa de ocupacao\n");
        printf ("6 - Informacoes do hospede\n");
        printf ("7 - Taxa de ocupacao\n");
        printf ("8 - Sair do programa\n");

        printf ("\nForneca uma opcao: ");
        scanf("%d", &opcao);

        // Selecionar opção
        switch(opcao)
        {
        //Realizar o check-in
        case 1:
        printf ("\nEm breve!\n\n");
        main();
        break;

        //Realizar o check-out
        case 2:
        printf ("\nEm breve!\n\n");
        main();
        break;

        //Reserva de apartamento
        case 3:
        reservaHotel(opcao);
        
        printf ("\n");
        main();
        break;

        //Cancelar uma reserva
        case 4:
        printf ("\nEm breve!\n\n");
        main();
        break;

        //Mapa de ocupacao
        case 5:
        mapaHotel(opcao,andarInp,qrtInput);
        printf ("\n");
        main();
        break;

        //Informações do hospede
        case 6:
        printf ("\nEm breve!\n\n");
        main();
        break;

        //Taxa de ocupacao
        case 7:
        printf ("\nEm breve!\n\n");
        main();
        break;

        //Sair do programa
        case 8:
        break;

        default:
        printf ("\nOpcao invalida!\n\n")
        main();
        }
    }