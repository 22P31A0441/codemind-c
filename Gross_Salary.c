#include <stdio.h>
 
int main()
{
	float Basic, HRA, DA, Gross_Salary;
  	scanf("%f", &Basic);
  
  	if (Basic <= 10000)
  	{
  		HRA = Basic*0.8;// or HRA = Basic * (8 / 100)
		DA = Basic*0.2; // Or Da= Basic * 0.1    	
  	} 
  	else if (Basic <= 20000)
  	{
  		HRA = Basic*0.9;
	  	DA = Basic*0.25;  	
  	}
  	else
  	{
	   	HRA = Basic*0.95; 
	   	DA = Basic*0.3;
	}
	Gross_Salary = Basic + HRA + DA;
	printf("%.2f", Gross_Salary); 
	
  	return 0;
}
