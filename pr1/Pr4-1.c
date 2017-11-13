#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUF_SIZE 32

int checksp(int c)	/* 文字cが空白なら1,それら以外のときは0を返す関数 */
{
	if(c==' ' || c=='\n' || c=='\t')	return 1;
	return 0;
}

void compress(char *s)	/* 文字列を圧縮する関数 */
{
	char *p,*phead,*shead=s;
	int i=0;
	int j=0;
	p=phead=(char *)malloc(strlen(s));
	/* 行頭の空白を消去 */
	while(checksp(*s)){
		s++;
	}
	/* 新しい文字列を作成していく */
	while(*s!='\0'){ /* while文内の条件を記入せよ（必ずしもwhile文で実装しなくても良い）*/
		if(checksp(*s)==0){
			*p=*s;
			p++;
		} else {
			if(('a'<=*(s+1) && *(s+1)<='z') || ('A'<=*(s+1) && *(s+1)<='Z') || (*(s+1)=='!')){
				*p=*s;
				p++;
			}
		
		}
		
		s++;
	}
	*s='\0';
	*p='\0';
	strcpy(shead,phead);
}

int main(void)
{
	char s[] = "     Nice to \n meet \t you    ,  Jack !\n     I'm      Mike \n\t\t .    ";

	printf("Before = \"%s\"\n",s);
	compress(s);

	printf("After  = \"%s\"\n",s);

	return 0;
}
