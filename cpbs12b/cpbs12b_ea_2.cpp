try
{
	//try something ...
}
catch (FormatException^)
{
	//format exception
}
catch (DivideByZeroException^)
{
	//divide by zero
}
catch (StackOverflowException^)
{
	//stack overflow
}
catch (IO::FileNotFoundException^)
{
	//file not found
}
catch(...)
{
	//all other exceptions
} 