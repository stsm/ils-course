/* #################################################
Einsendeaufgabe 6.1
################################################# */

#include "stdafx.h"

using namespace System;

ref class TV
{
	Int32 iProgram;
	Int32 iVolume;
	Boolean bPower;

public:
	Void init();
	Void statusAusgeben();
	Void switchPowerOn();
	Void switchPowerOff();
	Void switchVolumeUp(Int32);
	Void switchVolumeDown(Int32);
	Void switchProgramUp(Int32);
	Void switchProgramDown(Int32);
};

// TV initialisieren
Void TV::init()
{
	iProgram = 0;
	iVolume = 0;
	bPower = false;
}

// Status ausgeben
Void TV::statusAusgeben()
{
	Console::WriteLine("Status An/Aus    : {0}", bPower);
	Console::WriteLine("Status Programm  : {0}", iProgram);
	Console::WriteLine("Status Lautstärke: {0}", iVolume);
	Console::WriteLine("----------------------");
}

Void TV::switchPowerOn()
{
	bPower = true;
}

Void TV::switchPowerOff()
{
	init(); // Werte wieder auf "Anfang"

}

Void TV::switchProgramUp(Int32 iValue)
{
	if (!bPower)
	{
		Console::WriteLine("Fernseher ist nicht eingeschaltet! Eine Änderung des Kanals ist somit nicht möglich!\n");
	}
	else
	{
		iProgram = iProgram + iValue;
	}
}

Void TV::switchProgramDown(Int32 iValue)
{
	if (!bPower)
	{
		Console::WriteLine("Fernseher ist nicht eingeschaltet! Eine Änderung des Kanals ist somit nicht möglich!\n");
	}
	else
	{
		iProgram = iProgram - iValue;
		if (iProgram < 0)
		{
			iProgram = 0;
		}
	}
}

Void TV::switchVolumeUp(Int32 iValue)
{
	if (!bPower)
	{
		Console::WriteLine("Fernseher ist nicht eingeschaltet! Eine Änderung der Lautstärke ist somit nicht möglich!\n");
	}
	else
	{
		iVolume = iVolume + iValue;
	}
}

Void TV::switchVolumeDown(Int32 iValue)
{
	if (!bPower)
	{
		Console::WriteLine("Fernseher ist nicht eingeschaltet! Eine Änderung der Lautstärke ist somit nicht möglich!\n");
	}
	else
	{
		iVolume = iVolume - iValue;
		if (iVolume < 0)
		{
			iVolume = 0;
		}
	}
}

int main(array<System::String ^> ^args)
{
	TV^ meinTV;
	meinTV = gcnew TV;

	meinTV->init();
	meinTV->statusAusgeben();
	
	meinTV->switchProgramUp(5);
	meinTV->switchVolumeUp(20);
	meinTV->statusAusgeben();
	
	meinTV->switchPowerOn();
	meinTV->statusAusgeben();

	meinTV->switchProgramUp(2);
	meinTV->statusAusgeben();

	meinTV->switchVolumeUp(11);
	meinTV->statusAusgeben();

	meinTV->switchPowerOff();
	meinTV->statusAusgeben();

    return 0;
}
