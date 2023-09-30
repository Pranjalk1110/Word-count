#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char line[100];
	cout<<"Enter the line :";
	cin.getline(line,100);
	int count=0;
	for(int i=0;i<=100;i++)
	{
		if(line[i]==' ')
		{
			if(line[i+1]!=' ')
			{
				count++;
			}
		}
	}
	cout<<"Number of words:"<<count;
	return 0;
}
