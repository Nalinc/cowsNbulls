
#include<iostream>
#include<fstream>
#include<string>
#include<time.h>
#include<cstdlib>
using namespace std;

int main()
{
int n,cow=0,bull=0,chance=0,flag;
char str[5];
char line[4];
fstream fin;
fin.open("pwlog.txt");
fstream fout;
fout.open("refree.txt");
label:
srand(time(NULL));
n=rand();
n=(n%10000)*5;
fin.seekg(n);
fin.get(line,5,'\n');
if(line[0]==line[1]||line[0]==line[2]||line[0]==line[3]||line[1]==line[2]||line[1]==line[3]||line[2]==line[3])
goto label;

cout<<"\t\t***//COWS AND BULLS//***\n\n\n";
cout<<"\t\t\t==|GaMe On|===\n";
fout<<"original case:"<<line<<"\n";
//cout<<line<<"\n";
while(chance!=5)
{
	cow=0,bull=0;
cout<<"chance["<<chance+1<<"]\t";	
printf("enter a 4 digit number: ");
scanf("%s",&str);
fout<<"\n\ntest case:"<<str;

for(int i=0;i<4;i++)
{
	
	for(int j=0;j<4;j++)
	{ 
		if(line[i]==str[j])
	   {  if(i!=j)
	       cow++;
		  else
		   bull++;
	   }
	}
	   
}
cout<<"\n\t\tcows="<<cow<<"\n"<<"\t\tbulls="<<bull<<"\n";
chance++;
if(bull==4)
{
flag=1;
break;	
}

}
if(flag!=1)
{
        cout<<"\n\nSORRY u couldnt made it\n:'( :'( :'(\n\noriginal number was: "<<line<<"\n";
}

fin.close();
fout.close();
return 0;
}


                       
                       
                       
 
