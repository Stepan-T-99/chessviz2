#include<stdio.h>
#include<iostream>
using namespace std;
void scandate(char a[9][9],char &x0,char &y0,char &x1,char &y1,char &strk)			//ââîä !âîçìîæíûõ! äàííûõ
{
	//scanf("%c %c %c %c %c",&x0,&y0,&strk,&x1,&y1);
	cin>>x0>>y0>>strk>>x1>>y1;
//	printf("%c%c%c%c%c \n",x0,y0,strk,x1,y1);
	while(checkdate(x0,y0,x1,y1,strk)||checkstartposition(a,x0,y0,x1,y1,strk)||checkfirstposition(a,x0,y0,x1,y1,strk))
	{
//	scanf("%c%c%c%c%c",&x0,&y0,&strk,&x1,&y1);
	cin>>x0>>y0>>strk>>x1>>y1;	
	}
}
void motion0(char a[9][9],char x0,char y0,char x1,char y1,char strk)		// õîä -
{
//	printf("%c%c%c%c%c \n",x0,y0,strk,x1,y1);
	char zdviz=0;
	zdviz=a[-(((int)y0)-56)][((int)x0)-96];
	a[-(((int)y0)-56)][((int)x0)-96]=a[-(((int)y1)-56)][((int)x1)-96];
	a[-(((int)y1)-56)][((int)x1)-96]=zdviz;
}
int checkdate(char x0,char y0,char x1,char y1,char strk)			//ïðîâåðêà íàõîæäåíèÿ â èãðîâîì ïîëå
{
	if(((int)x0>=97)&&((int)x0<=104)&&((int)x1>=97)&&((int)x1<=104)&&((int)y0>=49)&&((int)y0<=56)&&((int)y1>=49)&&((int)y1<=56)) return 0;
	else return 1;
}
int	checkstartposition(char a[9][9],char x0,char y0,char x1,char y1,char strk)					//ïðîâåðêà õîäà ó÷èòûâàÿ íà÷àëüíóþ ïîçèöèþ
{
	switch((int)a[-(((int)y0)-56)][((int)x0)-96])
	{
	case 112:
	if(y0=='2') {
		if(((int)x0==(int)x1)&&(((int)y0==((int)y1-1))||((int)y0==((int)y1-2)))) return 0; 	else	return 1;
	}
	else
	if(((int)x0==(int)x1)&&((int)y0==((int)y1-1)))	return 0;	else	return 1;
	case 80:
	if(y0=='7')	{
		if(((int)x0==(int)x1)&&(((int)y0==((int)y1+1))||((int)y0==((int)y1+2)))) return 0; 	else	return 1;
	}
	else
	if(((int)x0==(int)x1)&&((int)y0==((int)y1+1)))	return 0;	else	return 1;
	default: return 1;
	}
}
int	checkfirstposition(char a[9][9],char x0,char y0,char x1,char y1,char strk)					//ïðîâåðêà íà÷àëüíîé ïîçèöèè
{
	if(a[-(((int)y0)-56)][((int)x0)-96]!=' ')
	{
	if(strk=='-') { if(a[-(((int)y1)-56)][((int)x1)-96]==' ') return 0; else return 1;	}
	if(strk=='x') { if(a[-(((int)y1)-56)][((int)x1)-96]!=' ') return 0; else return 1;	} 
	}
	else return 1;
}
int queue(char a[9][9],char x0,char y0,char x1,char y1,char strk,int k)								//ïðîâåðêà íà î÷åðåäíîñòü õîäà ïåðâûå-ìàëåíüêèå
{
	if(k%2)
	{
		if((int)a[-(((int)y0)-56)][((int)x0)-96]>94)
		return 1;
		else return 0;
	}
	else
	{
		if((int)a[-(((int)y0)-56)][((int)x0)-96]<94)
		return 1;
		else return 0;
	}
}
