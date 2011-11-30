/* #################################################
Einsendeaufgabe 6.2
################################################# */

#include "stdafx.h"

using namespace System;

ref class listenelement
{
	String ^daten;
	listenelement ^next;
public:
	Void datenSetzen(String ^datenneu); 
	listenelement ^anhaengen(String ^datenneu, listenelement ^listenende);
	Void ausgeben();
};

//die Zeichenkette in das Element schreiben
Void listenelement::datenSetzen(String ^datenneu)
{
	daten=datenneu;
}
	
//neues Element am Ende der Liste anhängen
listenelement^ listenelement::anhaengen(String ^datenneu, listenelement ^listenende)
{
		next = gcnew listenelement;
		next->daten=datenneu;

	return next;
}

//Alle Elemente der Liste ausgeben
Void listenelement::ausgeben() 
{
	//den ersten Eintrag ausgeben
	Console::WriteLine("{0}",daten);
	//wenn das Ende nicht erreicht ist, die Methode für next erneut aufrufen
	if (next != nullptr)
		next->ausgeben();
}

int main(array<System::String ^> ^args)
{
	//Handle auf den Anfang der Liste
	listenelement ^listenanfang;
	listenelement ^listenende;

	//das erste Element per Hand erzeugen
	listenanfang = gcnew listenelement;
	//Zeichenkette in das erste Element schreiben
	listenanfang->datenSetzen("Element 1");
	listenende = listenanfang;
	//in einer Schleife mehrere Elemente anfügen
	for (Int32 schleife=2;schleife<4;schleife++) 
	{
		listenende = listenende->anhaengen("Element "+schleife, listenende);
	}
	//die Liste ausgeben
	listenanfang->ausgeben();

	return 0;
}