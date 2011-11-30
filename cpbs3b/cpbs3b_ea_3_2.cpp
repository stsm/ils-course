/* #################################################
Einsendeaufgabe 3.2
################################################# */

#include "stdafx.h"

using namespace System;

int main(array<System::String ^> ^args)
{
    
	for (Int32 i=1; i<=100; i++)
	{	
		if (i<100){
			Console::Write("{0},",i);
		}
		else{
			Console::Write("{0}",i);
		}
	}
	Console::Write("\n\n");

    return 0;
}