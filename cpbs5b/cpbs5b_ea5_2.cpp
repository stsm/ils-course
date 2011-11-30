/*  ############################################
Einsendeaufgabe 5.2
############################################# */

#include "stdafx.h"

using namespace System;

ref struct listenelement {
	String ^daten;
	listenelement ^next;
	listenelement ^last;
};

//neues Element am Ende der Liste anhängen
listenelement^ anhaengen(String ^datenneu, listenelement ^listenende) {
	//ein Hilfshandle zum Wandern in der Liste
	listenelement ^hilfsHandle;

	//Hilfshandle an den Anfang der Liste setzen
	hilfsHandle = listenende;
	//Neues Element am Ende der Liste anhängen
	hilfsHandle->next = gcnew listenelement;
	hilfsHandle->next->last = hilfsHandle;
	//Hilfshandle auf das neue Element setzen
	hilfsHandle = hilfsHandle->next;
	//Zeichenkette im neuen Element eintragen
	hilfsHandle->daten=datenneu;
	//nullptr wird automatisch zugewiesen!

	return hilfsHandle;
}

//Alle Elemente der Liste ausgeben
Void ausgeben(listenelement ^listenanfang) {
	//ein Hilfshandle zum Wandern in der Liste
	listenelement ^hilfsHandle;

	hilfsHandle = listenanfang;
	//erstes Element ausgeben
	Console::WriteLine("{0}",hilfsHandle->daten);

	//Solange das Ende der Liste noch nicht erreicht ist:
	//hilfshandle auf das nächste Element setzen und die Daten ausgeben
	while (hilfsHandle->next != nullptr) {
		hilfsHandle = hilfsHandle->next;
		Console::WriteLine("{0}",hilfsHandle->daten) ;
	}
}
//Alle Elemente der Liste rückwärts ausgeben
Void rueckwaerts(listenelement ^listenende) {
	//ein Hilfshandle zum Wandern in der Liste
	listenelement ^hilfsHandle;

	hilfsHandle = listenende;
	//erstes Element ausgeben
	Console::WriteLine("{0}",hilfsHandle->daten);

	//Solange der Anfange der Liste noch nicht erreicht ist:
	//hilfshandle auf das vorherige Element setzen und die Daten ausgeben
	while (hilfsHandle->last != nullptr) {
		hilfsHandle = hilfsHandle->last;
		Console::WriteLine("{0}",hilfsHandle->daten) ;
	}
}

int main(array<System::String ^> ^args)
{
	//Handle auf den Anfang der Liste
	listenelement ^listenanfang;
	listenelement ^listenende;

	//das erste Element per Hand erzeugen
	listenanfang = gcnew listenelement;

	//Zeichenkette in das erste Element schreiben
	//nullptr wird automatisch gesetzt
	listenanfang->daten="Element 1";
	listenende = listenanfang;

	//in einer Schleife mehrere Elemente einfügen
	for (Int32 schleife=2;schleife<4;schleife++) 
	{
		listenende = anhaengen("Element "+schleife,listenende);
	}
	//die Liste(n) ausgeben
	ausgeben(listenanfang);
	Console::WriteLine();
	rueckwaerts(listenende);
	Console::WriteLine();
	return 0;
}