
using System;

class PatternX
{
	public void DisplayPattern(int iNo)
	{
		if(iNo < 0)
		{
			iNo = -iNo;
		}

		for(int i = 1; i <= iNo; i++)
		{
			Console.Write("$\t*\t");
		}
		Console.WriteLine();
	}
}

class main
{
	public static void Main(string[] args)
	{
		Console.WriteLine("Enter Number");
		int iValue = Convert.ToInt32(Console.ReadLine());

		PatternX pobj = new PatternX();
		pobj.DisplayPattern(iValue);
	} 
}