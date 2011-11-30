/* #################################################
Einsendeaufgabe 3.3
################################################# */

#include "stdafx.h"

using namespace System;

int main(array<System::String ^> ^args)
{
    Int32 i=1;

	while (i<=100)
	{	
		if (i<100){
			Console::Write("{0},",i);
		}
		else{
			Console::Write("{0}",i);
		}
		i++;
	}
	Console::Write("\n\n");

    return 0;
}