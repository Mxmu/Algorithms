#include<stdio.h>
#include<string.h>
int main()
{
	int i,flag,n,count;
	char a[100100];
	printf("本程序实现对教徒和非教徒的位置确定\n");
	printf("please put in a number n:\n");
	scanf("%d",&n);
	count=2*n;
	memset(a,'@',count);/*先讲2n个人都初始化为教徒*/
	a[count]='\0';
	for(flag=0,i=0;count>n;i++)/**/
	{
		if(i==2*n)i=0;/*如果数到最后就重头，以达到数组头尾相连*/
		if(a[i]=='@')/*继续数还没被扔下去的人*/
			flag++;
		if(flag==9)/*数到第九个，被扔，此位置为非教徒*/
		{
			a[i]='+';/*非教徒*/
			count--;
			flag=0;/*重置计数的数*/
		}
	}
	printf("%s\n",a);
	return 0;
}
