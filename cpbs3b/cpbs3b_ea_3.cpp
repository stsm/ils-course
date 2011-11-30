/* #################################################
Einsendeaufgabe 3.1
################################################# */


#include "stdafx.h"

using namespace System;



Boolean fn_PruefeSchaltjahr(Int32 iJahr)
{
	Boolean bSchaltjahrFlag = false; // variable zur prüfung auf schaltjahr

	if (iJahr % 4 != 0){ // nicht durch 4 teilbar
		bSchaltjahrFlag = false;
	}
	else if( (iJahr % 4 == 0) && (iJahr % 100 != 0) ){ // durch 4 aber nicht durch 100 teilbar
		bSchaltjahrFlag = true;
	}
	else if( (iJahr % 4 == 0) && (iJahr % 100 == 0) && (iJahr % 400 == 0) ){ //durch 4, durch 100 und durch 400 teilbar
		bSchaltjahrFlag = true;
	}
	else{
		bSchaltjahrFlag = false;
	}

	return bSchaltjahrFlag;

}

int main(array<System::String ^> ^args)
{
	Int32 iEingabe;
	
	Console::Write("Geben Sie bitte eine vier stellige Jahreszahl ein: ");
	iEingabe=Convert::ToInt32(Console::ReadLine());

	if (fn_PruefeSchaltjahr(iEingabe)==true){
		Console::BackgroundColor=ConsoleColor::Green;
		Console::ForegroundColor=ConsoleColor::Black;
		Console::WriteLine("\nDas eingegebene Jahr - {0} - ist ein Schaltjahr. [{1}]\n",iEingabe,fn_PruefeSchaltjahr(iEingabe));
		Console::ResetColor();
	}
	else{
		Console::BackgroundColor=ConsoleColor::Red;
		Console::ForegroundColor=ConsoleColor::Black;
		Console::WriteLine("\nDas eingegebene Jahr - {0} - ist KEIN Schaltjahr. [{1}]\n",iEingabe,fn_PruefeSchaltjahr(iEingabe));
		Console::ResetColor();
	}

    return 0;
}