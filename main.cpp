#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
  int k=1;
  char a[9][9]={{'8','R','N','B','Q','K','D','N','R'},{'7','P','P','P','P','P','P','P','P'},{'6',' ',' ',' ',' ',' ',' ',' ',' '},{ '5',' ',' ',' ',' ',' ',' ',' ',' '},{ '4',' ',' ',' ',' ',' ',' ',' ',' '},{'3',' ',' ',' ',' ',' ',' ',' ',' '},{'2','p','p','p','p','p','p','p','p'},{ '1','r','n','b','k','q','d','n','r'},{' ','a','b','c','d','e','f','g','h'}};
  char x0=0,y0=0,x1=0,y1=0,strk=0; 
  while(1)
  {
  scandate(a,x0,y0,x1,y1,strk);
  if(queue(a,x0,y0,x1,y1,strk,k))
  	{
	  motion0(a,x0,y0,x1,y1,strk);
	  printboard(a);
	  k++;
	}
  }
  return 0;
}
