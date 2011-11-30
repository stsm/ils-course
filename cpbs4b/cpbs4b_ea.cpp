/*#######################################
Einsendeaufgabe 4
#######################################*/

#include "stdafx.h"

using namespace System;

/* Struktur */
struct kisten 
{
	Int32 iNummer;
	Int32 iLaenge;
	Int32 iBreite;
	Int32 iHoehe;
	Int32 iVolumen;
};

/* Funktionen */

Void fn_Anlegen(kisten anlKiste[100])
{
	Int32 iKistenNr; 

	Console::Write("Bitte geben Sie eine Kistennummer zwischen 1 und 100 ein: ");
	iKistenNr=Convert::ToInt32(Console::ReadLine());
	
	if (iKistenNr >=1 && iKistenNr <=100 )
	{
		if (anlKiste[iKistenNr-1].iNummer == 0)
		{
			anlKiste[iKistenNr-1].iNummer=iKistenNr;
			Console::Write("Bitte geben Sie die Breite der {0}. Kiste ein: ", iKistenNr);
			anlKiste[iKistenNr-1].iBreite = Convert::ToInt32(Console::ReadLine());
			Console::Write("Bitte geben Sie die Länge der {0}. Kiste ein: ", iKistenNr);
			anlKiste[iKistenNr-1].iLaenge = Convert::ToInt32(Console::ReadLine());
			Console::Write("Bitte geben Sie die Höhe der {0}. Kiste ein: ", iKistenNr);
			anlKiste[iKistenNr-1].iHoehe = Convert::ToInt32(Console::ReadLine());	
			anlKiste[iKistenNr-1].iVolumen = anlKiste[iKistenNr-1].iBreite * anlKiste[iKistenNr-1].iLaenge * anlKiste[iKistenNr-1].iHoehe;
		
			Console::BackgroundColor=ConsoleColor::Green;
			Console::ForegroundColor=ConsoleColor::Black;
			Console::WriteLine("Die Kiste wurde erfolgreich angelegt!");
			Console::ResetColor();
		}
		else
		{
			Console::BackgroundColor=ConsoleColor::Yellow;
			Console::ForegroundColor=ConsoleColor::Black;
			Console::WriteLine("Die von Ihnen gewählte Kiste ist bereits belegt!");
			Console::ResetColor();
		}
	}
	else 
	{
		Console::BackgroundColor=ConsoleColor::Red;
		Console::ForegroundColor=ConsoleColor::Black;
		Console::WriteLine("Fehleingabe! Die Kistennummer liegt außerhalb des zulässigen Bereichs!");
		Console::ResetColor();
	}

}

Void fn_Aendern(kisten aenKiste[100])
{
	Int32 iKistenNr;

	Console::Write("Bitte geben Sie eine Kistennummer zwischen 1 und 100 ein: ");
	iKistenNr=Convert::ToInt32(Console::ReadLine());
	if (iKistenNr >=1 && iKistenNr <=100 )
	{
		if (aenKiste[iKistenNr-1].iNummer != 0)
		{
			aenKiste[iKistenNr-1].iNummer=aenKiste[iKistenNr-1].iNummer;
			Console::Write("Bitte geben Sie die Breite der {0}. Kiste ein: ", iKistenNr);
			aenKiste[iKistenNr-1].iBreite = Convert::ToInt32(Console::ReadLine());
			Console::Write("Bitte geben Sie die Länge der {0}. Kiste ein: ", iKistenNr);
			aenKiste[iKistenNr-1].iLaenge = Convert::ToInt32(Console::ReadLine());
			Console::Write("Bitte geben Sie die Höhe der {0}. Kiste ein: ", iKistenNr);
			aenKiste[iKistenNr-1].iHoehe = Convert::ToInt32(Console::ReadLine());	
			aenKiste[iKistenNr-1].iVolumen = aenKiste[iKistenNr-1].iBreite * aenKiste[iKistenNr-1].iLaenge * aenKiste[iKistenNr-1].iHoehe;
			
			Console::BackgroundColor=ConsoleColor::Green;
			Console::ForegroundColor=ConsoleColor::Black;
			Console::WriteLine("Die Kiste wurde erfolgreich geändert!");
			Console::ResetColor();
		}
		else
		{
			Console::BackgroundColor=ConsoleColor::Yellow;
			Console::ForegroundColor=ConsoleColor::Black;
			Console::WriteLine("Die von Ihnen gewählte Kiste ist nicht belegt und kann somit nicht geändert werden!");
			Console::ResetColor();
		}
	}
	else
	{
		Console::BackgroundColor=ConsoleColor::Red;
		Console::ForegroundColor=ConsoleColor::Black;
		Console::WriteLine("Fehleingabe! Die Kistennummer liegt außerhalb des zulässigen Bereichs!");
		Console::ResetColor();
	}
}

Void fn_Anzeigen(kisten anzKiste[100])
{
	Int32 iKistenNr;

	Console::Write("Bitte geben Sie eine Kistennummer zwischen 1 und 100 ein: ");
	iKistenNr=Convert::ToInt32(Console::ReadLine());
	if (iKistenNr >=1 && iKistenNr <=100 )
	{
		if (anzKiste[iKistenNr-1].iNummer != 0)
		{
			Console::WriteLine("Kistennummer    : {0} ",anzKiste[iKistenNr-1].iNummer);
			Console::WriteLine("Kisten-Breite   : {0} ",anzKiste[iKistenNr-1].iBreite);
			Console::WriteLine("Kisten-Länge    : {0} ",anzKiste[iKistenNr-1].iLaenge);
			Console::WriteLine("Kisten-Höhe     : {0} ",anzKiste[iKistenNr-1].iHoehe);
			Console::WriteLine("Kisten-Volumen  : {0} ",anzKiste[iKistenNr-1].iVolumen);
		}
		else
		{
			Console::BackgroundColor=ConsoleColor::Yellow;
			Console::ForegroundColor=ConsoleColor::Black;
			Console::WriteLine("Die von Ihnen gewählte Kiste ist nicht belegt und kann somit nicht angezeigt werden!");
			Console::ResetColor();
		}
	}
	else
	{
		Console::BackgroundColor=ConsoleColor::Red;
		Console::ForegroundColor=ConsoleColor::Black;
		Console::WriteLine("Fehleingabe! Die Kistennummer liegt außerhalb des zulässigen Bereichs!");
		Console::ResetColor();
	}
}

Void fn_Loeschen(kisten loeKiste[100])
{
	Int32 iKistenNr;

	Console::Write("Bitte geben Sie eine Kistennummer zwischen 1 und 100 ein: ");
	iKistenNr=Convert::ToInt32(Console::ReadLine());
	if (iKistenNr >=1 && iKistenNr <=100 )
	{
		if (loeKiste[iKistenNr-1].iNummer != 0)
		{
			loeKiste[iKistenNr-1].iNummer = 0;
			Console::BackgroundColor=ConsoleColor::Green;
			Console::ForegroundColor=ConsoleColor::Black;
			Console::WriteLine("Die von Ihnen gewählte Kiste wurde erfolgreich gelöscht!");
			Console::ResetColor();
		}
		else
		{
			Console::BackgroundColor=ConsoleColor::Yellow;
			Console::ForegroundColor=ConsoleColor::Black;
			Console::WriteLine("Die von Ihnen gewählte Kiste ist nicht belegt und kann somit nicht gelöscht werden!");
			Console::ResetColor();
		}
	}
	else
	{
		Console::BackgroundColor=ConsoleColor::Red;
		Console::ForegroundColor=ConsoleColor::Black;
		Console::WriteLine("Fehleingabe! Die Kistennummer liegt außerhalb des zulässigen Bereichs!");
		Console::ResetColor();
	}
}

Void fn_Liste(kisten lisKiste[100])
{
	Int32 iKistenZaehler = 0;

	for (Int32 i=0; i<=99; i++)
	{
		if (lisKiste[i].iNummer) /* nur "belegte" Kisten */
		{
			Console::BackgroundColor=ConsoleColor::Cyan;
			Console::ForegroundColor=ConsoleColor::Black;
			Console::WriteLine("Kistennummer    : {0} ",lisKiste[i].iNummer);
			Console::ResetColor();
			Console::WriteLine("Kisten-Breite   : {0} ",lisKiste[i].iBreite);
			Console::WriteLine("Kisten-Länge    : {0} ",lisKiste[i].iLaenge);
			Console::WriteLine("Kisten-Höhe     : {0} ",lisKiste[i].iHoehe);
			Console::WriteLine("Kisten-Volumen  : {0} \n",lisKiste[i].iVolumen);
			iKistenZaehler++;
		}
	}
	if (iKistenZaehler == 0)
	{
		Console::BackgroundColor=ConsoleColor::Cyan;
		Console::ForegroundColor=ConsoleColor::Black;
		Console::WriteLine("Es sind keine Kisten belegt!");
		Console::ResetColor();
	}
}

/* Hauptprogramm */
int main(array<System::String ^> ^args)
{
    Int32 iFktAuswahl;
	kisten LagerKiste[100];
	/* Kistennummern mit '0' vorbelegen, als Indikator ob "belegt" oder nicht */	
	for (Int32 i=0; i<=99; i++)
	{
		LagerKiste[i].iNummer=0;
	}
	
	/* Auswahlmenü */ 
	do{
		Console::WriteLine("-------------------------------------------------------------");
		Console::WriteLine("|\t\t\t Lagerverwaltung \t\t    |");
		Console::WriteLine("-------------------------------------------------------------");
		Console::WriteLine();
		Console::WriteLine("\t\t\t1 = Kiste anlegen");
		Console::WriteLine("\t\t\t2 = Kiste anzeigen");
		Console::WriteLine("\t\t\t3 = Kiste ändern");
		Console::WriteLine("\t\t\t4 = Kiste löschen");
		Console::WriteLine("\t\t\t5 = Kistenliste");
		Console::WriteLine("\t\t\t---------------------");
		Console::WriteLine("\t\t\t0 = Programmende\n\n");
		
		Console::Write("Bitte wählen Sie: ");
		iFktAuswahl = Convert::ToInt32(Console::ReadLine());

		/* Funktionsaufrufe */
		switch (iFktAuswahl)
		{
		case 1: /* Anlegen */
			fn_Anlegen(LagerKiste);
			break;
		case 2: /* Anzeigen */
			fn_Anzeigen(LagerKiste);
			break;
		case 3: /* Ändern */
			fn_Aendern(LagerKiste);
			break;
		case 4: /* Löschen */
			fn_Loeschen(LagerKiste);
			break;
		case 5: /* Liste */		
			fn_Liste(LagerKiste);
			break;
		/* "default" nicht notwendig */
		}
	}while(iFktAuswahl != 0);	

    return 0;
}
