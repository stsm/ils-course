/* #################################################
Einsendeaufgabe 6.3
################################################# */

#include "stdafx.h"

using namespace System;

ref class listenelement 
{
	String ^daten;
	listenelement ^next;
public:
	Void datenSetzen(String ^datenneu); 
	Void anhaengen(String ^datenneu);
	Void ausgeben();
};

//die Zeichenkette in das Element schreiben
Void listenelement::datenSetzen(String ^datenneu) 
{
	daten=datenneu;
}
	
//neues Element am Ende der Liste anhängen
Void listenelement::anhaengen(String ^datenneu) 
{
	//hat next den Wert nullptr?
	//dann ein neues Element anhängen
	if (next == nullptr)
	{
		next = gcnew listenelement;
		next->daten=datenneu;
		//nullptr wird automatisch zugewiesen!
	}
	//sonst die Methode für next noch einmal aufrufen
	else
		next->anhaengen(datenneu);
}

//Alle Elemente der Liste ausgeben
Void listenelement::ausgeben()
{
	//wenn das Ende nicht erreicht ist, die Methode für next erneut aufrufen

	if (next != nullptr)
	{
		next->ausgeben();
	}
	Console::WriteLine("{0}",daten);
}

int main(array<System::String ^> ^args)
{
	//Handle auf den Anfang der Liste
	listenelement ^listenanfang;

	//das erste Element per Hand erzeugen
	listenanfang = gcnew listenelement;
	//Zeichenkette in das erste Element schreiben
	listenanfang->datenSetzen("Element 1");

	//in einer Schleife mehrere Elemente anfügen
	for (Int32 schleife=2;schleife<4;schleife++)
	{
		listenanfang->anhaengen("Element "+schleife);
	}

	//die Liste ausgeben
	listenanfang->ausgeben();

	return 0;
}