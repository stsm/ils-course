/* #################################################
Einsendeaufgabe 3.4
################################################# */

#include "stdafx.h"

using namespace System;

 Int32 fn_Addition(Int32 iWert1, Int32 iWert2)
{
	Int32 iErgebnis = 0;
	return iErgebnis = iWert1 + iWert2;
}

 Int32 fn_Subtraktion(Int32 iWert1, Int32 iWert2)
{
	Int32 iErgebnis = 0;
	return iErgebnis = iWert1 - iWert2;
}

 Int32 fn_Multiplikation(Int32 iWert1, Int32 iWert2)
{
	Int32 iErgebnis = 0;
	return iErgebnis = iWert1 * iWert2;
}

 Int32 fn_Division(Int32 iWert1, Int32 iWert2)
{
	Int32 iErgebnis = 0;
	return iErgebnis = iWert1 / iWert2;
}


int main(array<System::String ^> ^args)
{
	Int32 iEingabe1, iEingabe2, iOperation;
	Boolean bOperation=false;

	do{
		Console::Write("Welche Operation möchten Sie ausführen?\n [1=Addition, 2=Subtraktion, 3=Multiplikation, 4=Division] ");
		iOperation=Convert::ToInt32(Console::ReadLine());
		if ( (iOperation<=0) || (iOperation >4) ){
			bOperation=false;
			Console::BackgroundColor=ConsoleColor::Red;
			Console::ForegroundColor=ConsoleColor::Black;
			Console::WriteLine("Fehleingabe! Bitte kontrollieren Sie Ihre Eingabe.");
			Console::ResetColor();
		}
		else{
			bOperation=true;
		}
	} while (bOperation==false);
	
	Console::Write("\nGeben Sie den ersten Wert ein: ");
	iEingabe1=Convert::ToInt32(Console::ReadLine());
	
	Console::Write("Geben Sie den zweiten Wert ein: ");
	iEingabe2=Convert::ToInt32(Console::ReadLine());
	Console::Write("\n");

switch (iOperation){
	
		case 1: // Addition
			Console::WriteLine("Das Ergebnis von {0} + {1} ist {2}", iEingabe1, iEingabe2, fn_Addition(iEingabe1, iEingabe2));
			break;
		case 2: // Subtraktion
			Console::WriteLine("Das Ergebnis von {0} - {1} ist {2}", iEingabe1, iEingabe2, fn_Subtraktion(iEingabe1, iEingabe2));
			break;
		case 3: // Multiplikation
			Console::WriteLine("Das Ergebnis von {0} * {1} ist {2}", iEingabe1, iEingabe2, fn_Multiplikation(iEingabe1, iEingabe2));
			break;
		case 4: // Division
			Console::BackgroundColor=ConsoleColor::Red;
			Console::ForegroundColor=ConsoleColor::Black;
			Console::WriteLine("Bitte beachten Sie, dass ggf. Nachkommastellen nicht angezeigt werden!");
			Console::ResetColor();
			Console::WriteLine("Das Ergebnis von {0} / {1} ist {2}", iEingabe1, iEingabe2, fn_Division(iEingabe1, iEingabe2));
			break;
	}
	Console::Write("\n");
    return 0;
}
