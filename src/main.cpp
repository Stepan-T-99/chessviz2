#include<stdio.h>
#include<iostream>
#include"board.h"
#include"boardprint.h"
#include"boardread.h"
using namespace std;
int main()
{
  int k=1;
  char a[8][8]={{'R','N','B','Q','K','D','N','R'},{'P','P','P','P','P','P','P','P'},{' ',' ',' ',' ',' ',' ',' ',' '},{ ' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '},{'p','p','p','p','p','p','p','p'},{ 'r','n','b','k','q','d','n','r'}};
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
