//Evan Reynard Sukarman
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include"e22tools.h"

int main()
{
	int iiMatU[2][3] = { {1,0,0}, {0,1,0} };
	int iVekA[2][3] = { {0,3,0},{3,2,1} };

	const char* slZst[] = { "Guth=0E", "Guth=1E" };
	const char* slAus[] = { "nichts", "1E rueck","2E rueck","Einlass" };
	const char* slEin[] = { "1 Euro",  "2 Euro","Abbruch" };

	int  nZst = 0, nEPos = 10, nEin, nAus;
	char cEin;
	
	char Datjn;
	FILE* af;

	

	TitelLz("Simulation eines Einlassautomaten", 30);

	printf("\nmoegliche Eingaben\n");
	Linie(46, '-');
	printf("(1) 1 Euro einwerfen (2) 2 Euro einwerfen\n");
	printf("(a) Abbruch          (z) Simulation beenden\n");
	Linie(46, '-');

	printf("Eingabe aus Datei lesen (j/n)?");
	Datjn = getchar();
	STDINFLUSH;

	if (Datjn == 'j') {
		
		af = OeffneTxtDat("r");
		if (!af) return 1;
		

		puts("\n Zustand      Eingabe     neuer Zust.    Ausgabe");
		Linie(46, '_');


		while (1)
		{
			fscanf(af, "%c", &cEin);
			STDINFLUSH;
			printf(" %s     ", slZst[nZst]);
			
			nEin = (cEin - '1');
			if (cEin == 'z')break;
			if (nEin > 2) nEin = 2;
			nAus = iVekA[nZst][nEin];
			nZst = iiMatU[nZst][nEin];
			if (cEin == '1')printf("1 Euro ");
			else if (cEin == '2')printf("2 Euro ");
			else if (cEin == 'a') printf("Abbruch");


			printf("      %s       %s\n", slZst[nZst], slAus[nAus]);

		
		}

		
		printf("\n\nProgramm mit ENTER beenden...");
		getchar();
	}


	else {
		puts("\n Zustand    Eingabe     neuer Zust.    Ausgabe");
		Linie(46, '_');

		while (1)
		{
			printf(" %s    ", slZst[nZst]);
			cEin = _getch();
			nEin = (cEin - '1');
			if (cEin == 'z')break;
			if (nEin > 2) nEin = 2;
			nAus = iVekA[nZst][nEin];
			nZst = iiMatU[nZst][nEin];

			if (cEin == '1')printf("1 Euro ");
			else if (cEin == '2')printf("2 Euro ");
			else if (cEin == 'a') printf("Abbruch");


			printf("      %s       %s\n", slZst[nZst], slAus[nAus]);
		
			
		}

		
		printf("\n\nProgramm mit ENTER beenden...");
		getchar();
		return 0;
	}
}

