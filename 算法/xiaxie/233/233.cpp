#include<stdio.h>
#include<string.h>

int main()
{
	char a[200];
	int i,j,k,n;
	printf("����һ����:\n");
	scanf("%d",&n);
	for(i=0;i<2*n;i++)
	{	a[i]='@'; } //��2n���˶���ʼ��Ϊ��ͽ
	
	for(i=j=0;i<n;i++)
	{
		k=0;
		while(k<9)
		{
			while(a[j++]=='@'&&j<2*n&&k<9)
				k++;
			if(j>=2*n) j=0;
		}
		a[j-2]='+';
		if(a[j-1]=='+')
			while(a[j]=='+') j++;
			else j--;



		
		
			//return 0;
	}
	a[2*n]='\0';
	printf("%s\n",a);
}