#include<iostream>
using namespace std;
int main()
{
int i,j,k,l;
char pass[10]={'0','1','2','3','4','5','6','7','8','9'};
for(i=0;i<10;i++)
{
	
	for(j=0;j<10;j++)
	{
		for(k=0;k<10;k++)
		{    
			for(l=0;l<10;l++)
			
			 cout<<pass[i]<<pass[j]<<pass[k]<<pass[l]<<"\n";	 
				
	     }
	}
}

return 0;
}
