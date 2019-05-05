#include<iostream>
 using	namespace	std;

 void	printAverage(int	a,	int	b ){		//return	type	of	the	function	is	void
											int	avg	=	(a	+	b)	/	2;
cout<<avg	<<	endl;
 }																															//	This	function	does	not	return	any	value

 int main ()	{
 												int	a	=	15,	b	=	25;
 													printAverage (a,	b);
}
