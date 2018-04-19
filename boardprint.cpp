#include<stdio.h>
#include<iostream>
#include"boardprint.h"
using namespace std;
void printboard(char a[9][9])
{
	for(int i=0;i<9;i++)
    {
      for(int j=0;j<9;j++)
	{
	  printf("%c ",a[i][j]);
	}
      printf("\n");
    }
}
