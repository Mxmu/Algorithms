#include<stdio.h>
#include<string.h>
int main()
{
	int i,flag,n,count;
	char a[100100];
	printf("������ʵ�ֶԽ�ͽ�ͷǽ�ͽ��λ��ȷ��\n");
	printf("please put in a number n:\n");
	scanf("%d",&n);
	count=2*n;
	memset(a,'@',count);/*�Ƚ�2n���˶���ʼ��Ϊ��ͽ*/
	a[count]='\0';
	for(flag=0,i=0;count>n;i++)/**/
	{
		if(i==2*n)i=0;/*�������������ͷ���Դﵽ����ͷβ����*/
		if(a[i]=='@')/*��������û������ȥ����*/
			flag++;
		if(flag==9)/*�����ھŸ������ӣ���λ��Ϊ�ǽ�ͽ*/
		{
			a[i]='+';/*�ǽ�ͽ*/
			count--;
			flag=0;/*���ü�������*/
		}
	}
	printf("%s\n",a);
	return 0;
}
