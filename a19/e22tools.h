

#define EINFACH    196 //ASCII-Code fuer Linienelement der einfachen waagerechten Linie
#define DOPPELT    205 //ASCII-Code fuer Linienelement der doppelten waagerechten Linie
#define SENKRECHT  179 //ASCII-Code fuer Linienelement der einfachen senkrechten Linie
#define KREUZ      197 //ASCII-Code fuer Tabellenkreuz

#define STDINFLUSH while('\n'!=getchar());  //Makro leert den Tastaturpuffer

void Linie(int nLng, char cZeichen);
////////////////////////////////////////////////////////////////////////////
// cZeichen ASCII-Code des Zeichen, das mehrfach ausgegeben wird
// nLng L�nge der Linie, d.h wie oft das Zeichen ausgegeben wird
// am Ende f�hrt die Funktion noch einen Zeilenvorsprung aus


void Titel(const char* szTitel, char cZeichen);
////////////////////////////////////////////////////////////////////////////
// Gibt den Text in szTitel aus und unterstreicht ihn
// mit dem Zeichen dessen ASCII-Code in cZeichen �bergeben wurde.

void TitelLz(const char* szTitel, char cZeichen);
////////////////////////////////////////////////////////////////////////////
// Gibt den Text in szTitel aus und unterstreicht ihn
// mit dem Zeichen dessen ASCII-Code in cZeichen �bergeben wurde.
// Au�erdem wird unter der Linie noch eine Leerzeile ausgegeben

FILE* OeffneDatMitNam(const char* szDtNam, const char* szModus);
////////////////////////////////////////////////////////////////////////////
//�ffnet eine Datei mit dem vollst�ndigen Dateinamen in dem Modus, die der 
//Funktion in den Parametern szDtNam bzw szModus �bergeben wurden. 
//Der Modus kann jeder in der Sprache C m�gliche Modus sein
//Die Funktion gibt die Adresse der FILE-Struktur mit den Steuerdaten der
//ge�ffneten Datei zur�ck. Schl�gt das �ffnen der Datei fehlt, wird die
//NULL-Adresse zur�ckgegeben und eine entsprechende Meldung ausgegeben. 

FILE* OeffneDat(const char* szModus);
////////////////////////////////////////////////////////////////////////////
//�ffnet eine Datei in dem Modus, der im Parameter szModus �bergeben wird
//Der Modus kann jeder in der Sprache C m�gliche Modus sein
//Der Nutzer wird aufgafordert, den vollst�ndigen Dateinamen einzugeben
//Die Funktion gibt die Adresse der FILE-Struktur mit den Steuerdaten der
//ge�ffneten Datei zur�ck. Schl�gt das �ffnen der Datei fehlt, wird die
//NULL-Adresse zur�ckgegeben und eine entsprechende Meldung ausgegeben. 


FILE* OeffneTxtDat(const char* szModus);
////////////////////////////////////////////////////////////////////////////
//�ffnet eine Datei in dem Modus, der im Parameter szModus �bergeben wird
//Der Modus kann jeder in der Sprache C m�gliche Modus sein
//Der Nutzer wird aufgafordert, den Dateinamen ohne Erweiterung einzugeben
//Die Funktion h�ngt die Erweiterung '.txt' an den vom Nutzer eingegebenen
//Darteinamen an.
//Die Funktion gibt die Adresse der FILE-Struktur mit den Steuerdaten der
//ge�ffneten Datei zur�ck. Schl�gt das �ffnen der Datei fehlt, wird die
//NULL-Adresse zur�ckgegeben, und eine entsprechende Meldung ausgegeben. 

void DblFldAusgabe(double dFld[], const char* szFmt, int nAnz, int nZeile);
////////////////////////////////////////////////////////////////////////////
//Die Funktion gibt die Werte double-Feldes dFld verteilt auf mehrere
//Zeilen mit dem in szFmt �bergebenen Format aus. In nAnz wird die Anzahl
//der auszugebenen Werte �bergeben, in nZeile steht wieviel Zahlen maximal
//in einer Zeile ausgegeben werden.

void DblFldAusgPositiv(double dFld[], const char* szFmt, int nAnz, int nZeile);
///////////////////////////////////////////////////////////////////////////////
//Die Funktion gibt die positiven Werte double-Feldes dFld verteilt auf mehrere
//Zeilen mit dem in szFmt �bergebenen Format aus. Statt negativer Feldwerte
//gibt die Funktion Sterne aus. In nAnz wird die Anzahl der auszugebenen Werte
//�bergeben, in nZeile steht wieviel Zahlen maximal in einer Zeile ausgegeben 
//werden.


int IntervallEingabe(const char* szKommentar, double** adFld);
////////////////////////////////////////////////////////////////////////////
//Die Funktion gibt den Eingabekommentar als einfach unterstrichene
//Zwischen�berschrift aus. Dann kann der Nutzer den von- umnd den bis-Wert 
//sowie die Schrittweite eingeben. Die Funktion berechnet die Anzahl der
//Intervallwerte und gibt diese Anzahl zur�ck

