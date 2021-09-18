/*


#include<bits/stdc++.h>
using namespace std;

const int N=1e5+9;

int main(){
	int i,j;
}




#include<bits/stdc++.h>
using namespace std;
#define T  int ttt;cin>>ttt;while(ttt--)
#define ll long long
const ll mod=1e+9;
const int N=1e5+9;
int main(){
	int i,j;
}



#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define T  int ttt;cin>>ttt;while(ttt--)
#define DUO int nnn; while(~scanf("%d",&nnn))
#define ll long long
#define fo(i,b) for(int i=0;i<b;i++)
#define foo(i,b) for(int i=0;i<=b;i++)
#define fa(i,a,b) for(int i=a;i<b;i++)
#define faa(i,a,b) for(int i=a;i<=b;i++)
#define fb(i,b,a) for(int i=b;i>a;i--)
#define fbb(i,b,a) for(int i=b;i>a;i--)
const ll mod=1e+9;
bool cmp(int a,int b)
{
return a>b;		//降序
//return a<b;	//升序
}
int i,j;
int main(){
	//IOS;
}


*/



/*
			//测试时间
#include<bits/stdc++.h>
using namespace std;
int main(){
	clock_t strat,finish;
	strat=clock();


	finish=clock();
	printf("time=%llf",(double)(finish-strat)/CLOCKS	_PER_SEC);
}

*/
//随机数
/*

#include<bits/stdc++.h>
using namespace std;
int main(){
	srand(time(NULL));
	for(int i=0;i<1e4;i++)
	cout<<rand()<<" ";
}

*/
/*
		//写入数据
#include<bits/stdc++.h>
using namespace std;
int a[1000000];
void inputfile()
{
	FILE *f;
	int i;
	if((f=fopen("ce_shi.txt","w+"))!=NULL)
	{
		for(int i=0;i<1e5+200;i++)
			fprintf(f,"%d\n",a[i]);
			printf("文件写入成功!\n");
		fclose(f);
	}
	else
		printf("文件打开失败!\n");
}
int main()
{
	srand(time(NULL));
	for(int i=0;i<1e5+200;i++)
		a[i]=rand();
	inputfile();
}
*/
/*
//1-5-02
#include<stdio.h>
int main ()
{
	float a[12],s=0,b;
	for(int i=0;i<12;i++)
	scanf("%f",&a[i]);
	for(int i=0;i<12;i++)
	s+=a[i];
	b=s/12;
	printf("$%.2f",b);
	return 0;
}
*/

/*
#include<stdio.h>
int main()
{
	int n,a[100],b=0;
	float p;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(int i=0;i<n;i++)
	b+=a[i];
	p=float (b)/n;
	printf("%.2f",p);
}
*/


/*
#include<stdio.h>
int main () {
	int a[109],b,i,j,c,d,pin,max1,max2,max3;
	scanf("%d",&b);
	scanf("%d",&pin);
	for(i=0; i<b; i++) {
		scanf("%d",&a[i]);
	}
	max1=a[0];
	max2=a[0];
	max3=a[0];
	for(i=0; i<b; i++)
		if(max1<a[i])max1=a[i];
		printf("%d\n",max1);
	for(i=0; i<b; i++)
		if(a[i]!=max1&&max2<a[i]) max2=a[i];
		printf("%d\n",max2);
	for(i=0; i<b; i++)
		if(a[i]!=max1&&a[i]!=max2&&max3<a[i]) max3=a[i];
		printf("%d\n",max3);
if(max1+max2+max3>=pin) printf("%d",max1+max2+max3);
else printf("Waiver!");
}

*/


/*
#include<stdio.h>
int main ()
{
	int a[3]={1,1,2},b,t,i;
	scanf("%d",&b);
	for(i=0;i<b;i++)
{
	t=a[i+2];
	a[i+2]=a[i]+a[i+1];
	a[i]=a[i+1];
	a[i+1]=t;
	}
	printf("%d",a[i]);
}
*/

/*

#include<stdio.h>
int main () {
	int a[409][3],b[409][3],m,i,j,sum[409];
	scanf("%d",&m);
	for(i=0; i<m; i++) {
		for(j=0; j<3; j++) {
			scanf("%d",&a[i][j]);
		}
		for(j=0; j<3; j++) {
			-
			scanf("%d",&b[i][j]);
		}
		sum[i]=a[i][2]+b[i][2]+a[i][1]+b[i][1];
	}
	for(i=0; i<m; i++) {
		//	continue;

		if(sum[i]==a[i][0]&&a[i][0]!=b[i][0]) {
			printf("alice\n");
			//	continue;

		} else	if(sum[i]==b[i][0]&&a[i][0]!=b[i][0]) {
			printf("bob\n");
			//	continue;
		} else
			printf("continue\n");
	}
}
*/


/*
#include<stdio.h>
int main () {
	int m,i,j,a,b,c,k;
	scanf("%d",&m);
	for(i=0; i<m; i++) {
		scanf("%d",&a);
		scanf("%d",&b);
		scanf("%d",&c);

		if(a>c)printf("%d\n",(c+b)*(c+b)+a*a);
		else printf("%d\n",(a+b)*(a+b)+c*c);
	}
}

*/


/*
#include<stdio.h>
int f(int m){
	if(m==1)return 0;
	else if(m==2)return 1;
	else return f(m-1)+f(m-2);
}

int main () {
	int m,n,i,j,a,b,d;
	a=1;	//	scanf("%d",&a);
	for(i=0; i<a; i++) {
		scanf("%d%d",&m,&n);
		printf("%d\n",a=f(m));
		printf("%d\n",b=f(n));
		if(a>b)d=b;
		else d=a;
		for(j=d;j>1;j--)
		{
			if(a%j==0&&b%j==0)break;
		}
		printf("%d",j);
	}
}
*/

/*
void(int a[],int L)
{
	int i,max=a[0],j;
	for(i=0;i<L;i++)
	{
		if(max<a[i]){
		max=a[i];
		j=i;
		}
	}
	return j;
}
*/

/*
void (LinkList *L) {
	LinkList *l1=NULL,*l2=NULL,*p=L,*r1,*r2;
	while(p!=NULL) {
		if(p->data<=0) {
			if(l1==NULL) {
				l1=p;
				r1=p;
			} else {
				r1->next=p;
				r1=p;
			}
		} else if(l2==NULL) {
			l2=p;
			r2=p;
		} else {
			r2->next=p;
			r2=p;
		}
		p=p->next;
	}
	r1->next=r2->next=NULL;
	r1->next=l2
}
*/

/*
void (LinkList *L) {
	LinkList *p=L,*q=L->next,*l1=L,*l2,*r1=L,*r2;
	while(q!=NULL) {
		r1->next=p;
		r1=p;
		if(l2==NULL) {
			l2=q;
			r2=q;
		} else {
			r2->next=q;
			r2=q;
		}
		p=q->next;
		q=p->next;
	}
}
*/

/*
void (LinkList *L,int x)
{
	LinkList *p=L;
	int i=0;
	while(p->next!=NULL){
		if(p->data==x) i++;
		p=p->next;
	}
	return i;
}
*/

/*
void (LinkList *L,int x)
{
	LinkList *p=L,*pre=L;
	while(p->next!=NULL){
		if(p->data==x) {
			pre->next=p->next;
			break;
		}
		pre=p;
		p=p->next;
	}
}
*/

/*
void (LinkList *L) {
	LinkList i=0,j,*p=L,*pre=L;
	while(p->next!=L) {
		if(p->data==pre->data) {
			pre->next=p->next;
		}
		pre=p;
		p=p->next;
	}
}
*/

/*
void A(SqList *L1,SqList *L2) {
	LinkList *p=L1,*q=L2,*L3,*s,*r,*wei;
	int i=0,j=0,k=0;
	L3=(SqList*)malloc(sizeof(SqList));
	while(p->next!=NULL&&q->next!=NULL) {
		if(L1->data!=L2->data) {
			L3->data[k]=L1->data[i];
			L3->data[k+1]=L2->data[j];
			k+=2;
			i++;
			j++;
		} else {
			L3->data[k]=L1->data[i];
			i++;
			k++;
			j++;
		}
		while(L1->next!=NULL) {
			L3->data[k]=L1->data[i];
			i++;
			k++;
		}
		while(L2->next!=NULL) {
			L3->data[k]=L2->data[j];
			j++;
			k++;
		}
		L3->length=k;
	}
}
*/

/*
int A(LinkList *L) {
	LinkList *p=L,ji=L->data;
	int i=0,k=0;
	while(p->next!=L) {
		if(p->data>ji) {
			ji=p->data;
			k=i;
		}
		p=p->next;
		i++;
	}
	return k;
}
*/



/*
void A(LinkList *L1,LinkList *L2,LinkList *L3)
{
	LinkList *p1=L1->next,*p2=L2->next,*s,*r,*wei;
	L3=(LinkList*)malloc(sizeof(LinkList));
	wei=l3;
	while(p1!=NULL&&p2!=NULL)
	{
		if(p1->data>p2->data)
		{
			r==(LinkList*)malloc(sizeof(LinkList));
			r->data=p2->data;wei->next=r;wei=r;
			p2=p2->next;
		}
		else
		{
			s==(LinkList*)malloc(sizeof(LinkList));
			s->data=p1->data;wei->next=s;wei=s;
			p1=p1->next;
		}
	}
	while(p1!=NULL)
	{
		s==(LinkList*)malloc(sizeof(LinkList));
		s->data=p1->data;wei->next=s;wei=s;p1=p1->next;
	}
	while(p2!=NULL)
	{
		s==(LinkList*)malloc(sizeof(LinkList));
		s->data=p2->data;wei->next=s;wei=s;p2=p2->next;
	}
	wei->next=NULL;
}
*/



/*
bool Math(char exp[],int n)
{
	int i=0;char e;
	bool match=true;
	LiStack *st;
	InitStack(st);
	while(i<n&&match)
	{
		if(exp[i]=='('||exp[i]=='['||exp[i]=='{')Push(st,exp[i]);
		else if(exp[i]==')'||exp[i]==']'||exp[i]=='}')
		{
			if(GetTop(st,e)==true)
			{
				if(e!='('||exp[i]!=']'||exp[i]!='}')match=false;
				else Pop(st,e);
			}
			else math=false;
		}
		i++;
	}
 }

*/

/*
bool Math(char exp[],int n)
{
	int i=0;char e;
	bool match=true;
	LiStack *st;
	InitStack(st);
	while(i<n&&match)
	{
		if(exp[i]=='1')Push(st,exp[i]);
		else if(exp[i]=='0')
		{
			if(GetTop(st,e)==true)
			{
				if(e!='1')match=false;
				else Pop(st,e);
			}
			else math=false;
		}
		i++;
	}
}
*/


/*
int Count(int *front,int *rear,int MaxSize )
{
	count=(rear-front+MaxSize)%MaxSize
	return count
}
*/


/*
int jiajia(int a,int b)
{
	if(b==0)return a;
	else return jiaia(b--);
}
*/

/*
int pin(int n-1,double s,int a[])
{
	if(n==0)return s/n;
	else return pin(n-1,s+=a[n],a[]);
}
*/

/*
int shan(LinkList h)
{
	if(h->next->data==x)return h->next=h->next->next;
	else shan(LinkList h->next)
}
*/

/*
TB* T(TB *p)
{
	while(1){
		if(p->rtag==1&&p->rchild!=tb)break;
		else p=p->rchild;
	}
	return *p
}
*/

/*
void findparent(BTNode *b，char x，BTNode *&p)
{
	if(p->father==NULL&&p->mother==NULL)p=b;
}
*/


/*
#include<stdio.h>
int main ()
{
	int m,n=3,a[22]={13,312,343},k=1,j,i,wei,b[22],zan,max;
	for(i=0;i<n;i++){
		k=a[i],wei=0,zan=1;
		for(m=0;k!=0;m++)
		{
			k/=10;
			wei++;
			zan*=10;
		}
		for()
		{
			b[i]=a[i]/zan;max=b[0];
			for(m=0;m<n;m++)
			{
				if(max<)
			}
		}
	}

}
*/


/*
#include<stdio.h>
int main ()
{
	long int n=0,m=1,k=2,a,i=0;
	char b[40]="1234";
	scanf("%d %d",&a,&k);
//	while(b[i]!=0){i++,n++;
//	}
//	printf("%d",n);
	for(int i=0;i<k;i++)
	{
		scanf("%d %d",&a,&a);
	}
	for(int i=0;i<k;i++)
	{
		m*=2;
	}
	printf("%d",m);
}
*/

/*
#include<stdio.h>
int main ()
{
	int i,m,n;
	char s[300009]="00011";
	for(i=0;s[i]!='0';i++)
	{
		m++;
	}

 }
*/

/*
#include<stdio.h>
int main () {
	int m=6,n[3]= {4,5,0},k=0,i,j=0,f[3][3],sum=0,ji[3]= {1,1,1},mi[3]= {6,7,8};
	for(i=0; i<10009; i++) {
//		for(j=0;j<3;j++)
		if(n[0]-2>0&&n[1]-1>0&&n[2]-1>0)n[0]-=2,n[1]-=1,n[2]-=1;
	}
	m=n[0]+n[1]+n[2];
//		for(k=0; k<3; k++)
//	printf("%d\n",n[k]);
	for(k=0; k<3; k++) {
		if(n[k]==0) {
			ji[k]=0;
			continue;
		}
		for(i=0;i<;i++)
		{
			for(j=0;j<;j++)
			{
				f[i][j]=
			}
		}
		for(int i = 0; i < N; i++ ) {
			for(int j = 0; j <= i; j++ ) {
				if(!j)f[i][j] = 1;//第一列时，都为1
				else f[i][j] = f[i - 1][j] + f[i - 1][j - 1];//其他则为两数相加
			}
		}
//		for(i=m; i>n[k]; i--) {
//			ji[k]*=i;
//		}
		sum+=ji[k];
	}
//	printf("%d\n",sum);
	for(k=0; k<3; k++)
		printf("%d\n",ji[k]);
}
*/

/*
#include<stdio.h>
int main ()
{
	 int m,n,k,t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d%d",&m,&n,&k);
		if(m%2==0)printf("%lld\n",n*m*k*m/4);
		else printf("%lld\n",(m-3)*n*k*(m+1)/4);
	}
}

*/


/*
#include<stdio.h>
int main ()
{
	long long int m,n,k,t;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld%lld%lld",&n,&m,&k);
		if(n%2==0)printf("%lld\n",(n/2)*m*k*(n/2));
		else printf("%lld\n",(n/2)*m*k*((n+1)/2));
	}
}
*/

/*
#include<stdio.h>
int main () {
	long long int n=75;
	while(n!=0) {
		scanf("%lld",&n);
		if(n==0)break;
		if(n<=75)printf("AOLIGEI!");
		else printf("DAAAAAMN!");
	}
}
*/

/*
#include<stdio.h>
int main () {
	int a[100009]={10,1,1,3},n=4,m=1;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int min=a[0]-1,max=a[0]+1,j1=0,j2=0;
	for(int j=0;j<m;j++)
	{
		for(int i=0;i<n;i++)
		{
			if(min>a[i]-i-1){
				min=a[i]-i-1;j1=i;
			}

		}
		for(int i=0;i<n;i++)
		{
			if(max<a[i]+i+1)max=a[i]+i+1,j2=i;
		}
		if(a[j1]-min>max-a[j2])
		{
			a[j1]=min;
			max=a[0];
		}
		else {
			a[j2]=max;
			min=a[0];
		}
	}
//	for(int i=0;i<n;i++)
//	printf("%d ",a[i]);
	max=a[0],min=a[0];
	for(int i=0;i<n;i++)
	{
		if(min>a[i])min=a[i];
		if(max<a[i])max=a[i];
	}
	printf("%d",max-min);
}
*/


/*
#include<stdio.h>
int main () {
	int a[100009]= {10,1,1,3},n=4,m=99999;
//	scanf("%d%d",&n,&m);
	int min=a[0]-1,max=a[0]+1,j1=0,j2=0,ji=0;
//	for(int i=0; i<n; i++) {
//		scanf("%d",&a[i]);
//	}
	for(int i=0; i<n&&m!=0; i++) {
		if(min>a[i]-i-1) {
			min=a[i]-i-1;
			j1=i;
		}
		if(max<a[i]+i+1)max=a[i]+i+1,j2=i;
	}
	for(int i=0; i<n&&m!=0; i++) {
		if(max<a[i]+i+1)max=a[i]+i+1,j2=i;
	}
	printf("%d %d\n",max,min);
	if(m!=0) {
		if(a[j1]-min>max-a[j2]) {
			a[j1]=min;
			ji=1;
		} else {
			a[j2]=max;
			ji=2;
		}
	}
//	for(int i=0; i<n; i++)
//		printf("%d ",a[i]);
	for(int i=0; i<m-1; i++) {
		if(ji==1)
			a[j1]=a[j1]-j1-1;
		else a[j2]=a[j2]+j2+1;
	}max=a[0],min=a[0];
	for(int i=0;i<n;i++)
	{
		if(min>a[i])min=a[i];
		if(max<a[i])max=a[i];
	}
	printf("%d",max-min);

//	for(int i=0; i<n; i++)
//		printf("%d ",a[i]);
}
*/

/*
//第一次cf
#include<stdio.h>
int main () {
	int a=3,b=2,t;
	int m[10009];
	scanf("%d",&t);
	for(int i=0; i<t; i++) {
		scanf("%d%d",&a,&b);
			if(a>=b) {
				if(2*b>=a)m[i]=4*b*b;
				else m[i]=a*a;
			} else {
				if(2*a>=b) m[i]=4*a*a;
				else m[i]=b*b;
			}
	}
	for(int i=0; i<t; i++)printf("%d\n",m[i]);
}
*/

/*
#include<stdio.h>

//float y(float x)
//{
//	float y=a*x*x*x+b*x*x+c*x+d;
//	return y;
//}

int main()
{
	float x;
	int a=1,b=-5,c=-4,d=20;
//	scanf("%d%d%d%d",&a,&b,&c,&d);
	for(x=-100;x<100;x++)
	{
//		if(y(x)*y(x+2)<0)
		printf("%.2f \n",x+1);
	}
}
*/

/*
#include<stdio.h>
int main () {
	int n=3,k=3,i,j,min[100],a[100]= {3,2,1,3,4},ji=-1,max,t=1;
//	scanf("%d",&t);
	while(t--) {
//		scanf("%d%d",&n,&k);
//		for(i=0; i<n; i++)
//			scanf("%d",&a[i]);
		for(i=0; i<k; i++) {
			if(i==0) {
				min[i]=a[0];
				max=a[0];
			} else min[i]=max;
			for(j=0; j<n; j++) {
				if(min[i]>a[j]&&ji!=j) {
					min[i]=a[j];
					ji=j;
				}
				if(max<a[j])max=a[j];
				printf("min=%d %d\n",min[i],ji);
			}
		//	printf("max=%d %d\n",max,ji);
		}
		for(i=0; i<k; i++)
			printf("%d\n",min[i]);
	}
}
*/


/*
#include<stdio.h>
int main () {
	int x1=0,x2=0,x3=0,x4=5,n=2,zhuan=0,kui=0,min;
	scanf("%d",&n);
	for(x1=0; x1<=n; x1++) {
		for(x2=0; x2<=n; x2++) {
			for(x3=0; x3<=n; x3++) {
				for(x4=0; x4<=n; x4++) {
					if(x1+x2+x3+x4==n) {
						if((x1+2*x2+3*x3+4*x4)>=3*n)//printf("%d  %d  %d  %d\n",x1,x2,x3,x4);
						{
							zhuan++;
							if(x1==x2&&x1!=0||x1==x3&&x1!=0||x1==x4&&x1!=0||x2==x3&&x2!=0||x2==x4&&x2!=0||x3==x4&&x3!=0)zhuan++;
						}
						else { //printf("fenmu=%d  %d  %d  %d\n",x1,x2,x3,x4);
							kui++;
							if(x1==x2&&x1!=0||x1==x3&&x1!=0||x1==x4&&x1!=0||x2==x3&&x2!=0||x2==x4&&x2!=0||x3==x4&&x3!=0)kui++;
						}

					}

				}
			}
		}
	}
	if(kui>zhuan)min=zhuan;
	else min=kui;
	for(int i=2;i<=min;i++)
	{
		if(zhuan%i==0&&kui%i==0)zhuan/=i,kui/=i;
	}
	if(n==0)zhuan=1,kui=0;
	if(zhuan==0)kui=1;
	printf("%d/%d",zhuan,zhuan+kui);

//	printf("%f",(double)1/4*(x1+2*x2+3*x3+4*x4));
//	printf("%d\n",kui);
//	printf("%d",zhuan);
}
*/


/*
#include<stdio.h>
int main () {
	int a[19][19]= {{1,2},{3,4}},n=2,m=2,b[19][19]= {{1,2},{3,4}};
	bool s=1;
	scanf("%d%d",&n,&m);
	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++)
			scanf("%d",&a[i][j]);
	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++)
			scanf("%d",&b[i][j]);
	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++)
		if(a[i][j]!=b[i][j]) s=0;
		if(s==1) printf("Yes\n");
		else printf("No\n");
}
*/

/*
#include<stdio.h>
int main () {
	int a=1,b=3,k=3,n=1,m=2;
	int sum1=1,sum2=1,sum3=1,sum4=1,sum5=1;
	float sum;
//	scanf("%d%d%d%d%d",&a,&b,&k,&n,&m);
	for(int i=k; i>0; i--)
		sum1*=i;
	for(int i=m; i>0; i--)
		sum2*=i;
	for(int i=k-m; i>0; i--)
		sum3*=i;
	sum4*=a;
	sum5*=b;
	for(int i=n-1; i>0; i--)
		sum4*=a;
	for(int i=m-1; i>0; i--)
		sum5*=b;
		if(n==0)sum=(float)sum1/(sum2*sum3)*sum5;
		else if(m==0)sum=(float)sum1/(sum2*sum3)*sum4;
		else sum=(float)sum1/(sum2*sum3)*sum4*sum5;
		printf("%d",(int)sum%10007);
}
*/


/*  顺时针旋转90度
#include<stdio.h>
int main () {
	char a[1009][1009]={{'1','2','3'},{'4','5','6'},{'7','8','9'}},b[1009][1009];
	int n=3,i,j;
	scanf("%d",&n);
	for(int i=0; i<n; i++)
		scanf("%s",&a[i]);
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			b[i][j]=a[n-1-j][i];
	for(int i=0; i<n; i++)
	{
			printf("%s",b[i]);
		printf("\n");
	}
}
*/


/*
#include<stdio.h>
int main () {
	int x,y,a=1,b=-1,c=0;
	scanf("%d%d%d",&a,&b,&c);
	if((b==0&&c==0)||(a==0&&c==0)) {
		printf("non");
		return 0;
	}
	if(b==0) {                 //与y轴平行
		if(-((float)c/a)>0) {
			printf("1 4");
			return 0;
		}
		if(-((float)c/a)<0) {
			printf("2 3");
			return 0;
		}
	}

	if(a==0) {            //与x轴平行
		if(-((float)c/b)>0) {
			printf("1 2");
			return 0;
		}
		if(-((float)c/b)<0) {
			printf("3 4");
			return 0;
		}
	}

	if(c==0) {    //过原点
		if(-((float)a/b)<0) {
			printf("2 4");
			return 0;
		}
		if(-((float)a/b)>0) {
			printf("1 3");
			return 0;
		}
	}
	if(-((float)c/b)>0) {    //  y>0
		if(-((float)c/a)>0) {
			printf("1 2 4");
			return 0;
		}
		if(-((float)c/a)<0) {
			printf("1 2 3");
			return 0;
		}
	}
	if(-((float)c/b)<0) {     //  y<0
		if(-((float)c/a)>0) {
			printf("1 3 4");
			return 0;
		}
		if(-((float)c/a)<0) {
			printf("2 3 4");
			return 0;
		}
	}
}

*/

/*
#include<stdio.h>
int main ()
{
	int t=1,a[100009]={1,3,5,2,7,1},n=1,biao=0,b[100009],data[100009];
//	scanf("%d",&t);
//	while(t--)
//	{
//	scanf("%d",&n);

	s=(int*)malloc(sizeof(int))
	s->top=-1;
	for(int i=0;i<n;i++)
	{
		if(a[i]==1)biao=1;
		if(biao==0){
			s->top++;
			s->data[s->top]=a[i];
		}
		if(biao==1){
			for(int j=i-1;s->top!=-1;j--){
				a[j]=s->data[s->top]-1;
			s->top--;
			}

		}
	}


//	}
}
*/


/*
#include<stdio.h>
int main () {
	int t=1,n=2,m,a[102]= {1,3},b[102]= {2,4},sum=0;
	scanf("%d",&t);
	while(t--) {
		sum=0;
		scanf("%d",&n);
		for(int i=0; i<n; i++) {
		scanf("%d%d",&a[i],&b[i]);
		}
		for(int i=0; i<n; i++) {
			sum+=(a[i]*b[i]);
		}
		printf("%d",sum);
	}
}
*/


/*
#include<stdio.h>
int main () {
	char a,b[99]= {'a','A','e','E','i','I','o','O','u','U'},ji=0;
	while(~scanf("%c",&a)) {
		ji=0;
		for(int i=0; i<10; i++) {
			if(a==b[i])ji++;
			}
		if(ji!=0)printf("Vowel\n");
		else printf("Consonant\n");
	}
}
*/

/*
#include<stdio.h>
int main ()
{
	char m;
	while(~scanf(" %c",&m)){
		if(m=='a'||m=='A'||m=='e'||m=='E'||m=='i'||m=='I'||m=='o'||m=='O'||m=='u'||m=='U')printf("Vowel\n");
	else printf("Consonant\n");
	}

}
*/


/*
#include<stdio.h>
int main ()
{
	int a[99][2];
	for(int i=10000;i<=99999;i++)
	{
		a[0][0]=i/10,a[0][1]=i%10;
		a[1][0]=i/10/10,a[1][1]=i%100;
		a[2][0]=i/10/10/10,a[2][1]=i%1000;
		a[3][0]=i/10/10/10/10,a[3][1]=i%10000;
		if(a[0][0]*a[0][1]+a[1][0]*a[1][1]+a[2][0]*a[2][1]+a[3][0]*a[3][1]==i)printf("%d ",i);
	}
}
*/

/*
#include<stdio.h>
int main () {
	int a=4;
	//duo zu shu ru
	while(~scanf("%d",&a)) {
		for(int i=0; i<a; i++) {
			for(int j=0; j<i; j++) {
				printf(" ");
			}
			printf("*");
			for(int j=0;j<a-i-1;j++)
			printf(" ");
				printf("\n");
		}
	}
}
*/

/*
#include<stdio.h>
int main ()
{
	int n,a[60],b,c,ji=0;
	scanf("%d",&n);
	ji=n;
	for(int i=0;i<n;i++)scanf("%d",&a[i]);
	scanf("%d",&b);
	for(int i=0;i<n;i++)
	{
		if(b==a[i]){
			a[i]=-999;
		}
	}
	for(int i=0;i<n;i++)if(a[i]!=-999)printf("%d ",a[i]);
}
*/

/*
#include<stdio.h>
int main () {
	int a;
	while(~scanf("%d",&a)) {
		if(a==200)printf("OK\n");
		if(a==202)printf("Accepted\n");
		if(a==400)printf("Bad Request\n");
		if(a==403)printf("Forbidden\n");
		if(a==404)printf("Not Found\n");
		if(a==500)printf("Internal Server Error\n");
		if(a==400)printf("Bad Gateway\n");
	}
}
*/


/*
#include<stdio.h>
int main () {
	int a,b;
	while(~scanf("%d",&a)) {
		for(int i=0; i<a; i++) {
			for(int j=0; j<a; j++) {
				printf("*");
				if(i!=a-1||j!=a-1)printf(" ");
			}
			printf("\n");
		}
	}
}
*/

/*
//////计算01哪个最长
#include<stdio.h>
int main () {
	int n=10,m=0,max=1;
	char a[300009]={"0001101111"};
	scanf("%d",&n);
	gets(a);
	gets(a);
	 for(int i=0;i<n;i++)
	 {
	 	if(a[i]=='0')m++;
	 	if(a[i]=='1')m++;
	 	if(a[i]!=a[i+1]){
	 		if(max<m)max=m;
	 		m=0;
		 }
	 }
	 printf("%d",max);
}
*/


/*
#include<stdio.h>
int main ()
{

	int a[109][4]={{1,8,3,7},{2,6,2,4},{3,6,5,0},{4,2,6,3},{5,1,6,8}},n=5,ji[109],max,m;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	for(int j=0;j<4;j++)scanf("%d",&a[i][j]);
	////
	max=0;

	for(int i=0;i<n;i++)
	{
		ji[i]=a[i][1]*1+a[i][2]*2+a[i][3]*3;
	}
//	for(int j=0;j<4;j++)
	for(int i=0;i<n;i++)
	{
		if(max<ji[i]){max=ji[i];m=i;
		}
	}
	printf("%d %d",m+1,max);
}
*/

/*
#include<stdio.h>
#include<math.h>
int main () {
	int   m=3,n=3,c=0,d;
	char a[109][109],b[109][109];
	scanf("%d%d",&n,&m);
	for(int i=0; i<n; i++)
			scanf("%s",&a[i]);
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			if(a[i][j]=='*')b[i][j]='*';
			else
			 {
				c=0;
				for(int ii=-1; ii<=1; ii++)
					if(a[i-1][j+ii]=='*')c++;
				if(a[i][j-1]=='*')c++;
				if(a[i][j+1]=='*')c++;
				for(int ii=-1; ii<=1; ii++)
					if(a[i+1][j+ii]=='*')c++;
				b[i][j]='0'+c;
			}
		}
	}
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++)
			printf("%c",b[i][j]);
		printf("\n");
	}

}
*/


/*
#include<stdio.h>
int main()
{
	int n=11,x=1,w=0,a,ci=0,b;
	scanf("%d%d",&n,&x);
	for(int i=1;i<=n;i++)
	{
		a=i;
		w=0;
		while(a)
		{
			a/=10;
			w++;
		}
		a=i;
		for(int j=0;j<w;j++)
		{
			b=a%10;
			a/=10;
			if(b==x)ci++;
		}
//			printf("%d ",ci);
	}
	printf("%d",ci);
}

*/


/*
#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,de;
	while(~scanf("%lf%lf%lf",&a,&b,&c)){
		de=b*b-4*a*c;
		if(a==0)printf("Not quadratic equation\n");
		else
		{
			if(de==0)printf("x1=x2=%.2lf\n",(-b)/(2*a));
			if(de>0)printf("x1=%.2lf;x2=%.2lf\n",(-b-sqrt(de))/(2*a),(-b+sqrt(de))/(2*a));
			if(de<0&&b/(2*a)==0)printf("x1=%.2lf-%.2lfi;x2=%.2lf+%.2lfi",b/(2*a),sqrt(-de)/(2*a),b/(2*a),sqrt(-de)/(2*a));
			else if(de<0)printf("x1=%.2lf-%.2lfi;x2=%.2lf+%.2lfi",-b/(2*a),sqrt(-de)/(2*a),-b/(2*a),sqrt(-de)/(2*a));
		}
	}
}
*/


/*
#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	while(~scanf("%d",&a))
	{
		for(int i=0;i<a;i++)
		{
			for(int j=a-i;j<a;j++)
			{
				printf(" ");
			}
			for(int j=i;j<a;j++)
			{
				printf("*");
				printf(" ");
			}
			for(int j=a-i;j<a;j++)
			{
				printf(" ");
			}
			printf("\n");
		}

	}

}

*/

/*
#include<stdio.h>
int main()
{
	int a[109][109],b[109][109],m,n,xiang=0,zong;
	scanf("%d%d",&m,&n);
	zong=m*n;
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&b[i][j]);
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			if(a[i][j]==b[i][j])xiang++;
			printf("%.2f",xiang*1.0/zong*100);
}
*/


/*
#include<stdio.h>
int main()
{
	int n,a[10009],max=0,min=100;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(int i=0;i<n;i++)
	{
		if(max<a[i])max=a[i];
		if(min>a[i])min=a[i];
	}
	printf("%d\n",max-min);

}
*/

/*
#include<stdio.h>
int main()
{
	int n,a[39][39],m=1;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	for(int j=i;j<n;j++)
	a[i][j]=0;
	for(int i=0;i<n;i++)
	a[i][0]=1;
	for(int i=1;i<n;i++)
	{
		for(int j=1;j<i+1;j++)
		{
			a[i][j]=a[i-1][j]+a[i-1][j-1];
		}
	}

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i+1;j++)
		{
			printf("%5d",a[i][j]);
		}
		printf("\n");
	}
}
//a[i][j]=a[i-1][j]+a[i-1][j-1];

*/

/*
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int n=4,a[500009]={3,3,2,4},min=0,b[500009];
	long long int A=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
	for(int i=0;i<n/2;i++)
	{
		A+=a[i];
	}
	for(int i=n/2;i<n;i++)
	{
		A*=a[i];
	}
	printf("%lld\n",A%998244353);
}
*/


/*
#include<stdio.h>
int main()
{
	int n,m,k;
	long long int mod,a[2009][2009],b[2009],max,s=1;
	scanf("%d%d%d%lld",&n,&m,&k,&mod);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			scanf("%lld",&a[i][j]);
			while(a[i][j]!=1){
				a[i][j]=a[i][j]/k;
				b[i]++;
			}
		}
	}
//	for(int i=0;i<n;i++)
//	{
//		for(int j=0;j<m;j++)
//		{
//			while(a[i][j]){
//				a[i][j]=a[i][j]/k;
//				b[i]++;
//			}
//		}
////		printf("%lld\n",b[i]);
//	}

	max=b[0];
	for(int i=0;i<n;i++)
	{
		if(max<b[i])max=b[i];
	}
//	printf("%lld\n",max);

		for(int ji=0;ji<max;ji++){
				s*=k;
				s%=mod;
		}
	printf("%lld\n",s);
}
*/

/*
#include<stdio.h>
int main()
{
	float a,b;
	char c;
	while(~scanf("%f%c%f",&a,&c,&b)){
		if(c=='+')printf("%.4f+%.4f=%.4f\n",a,b,a+b);
		if(c=='-')printf("%.4f-%.4f=%.4f\n",a,b,a-b);
		if(c=='*')printf("%.4f*%.4f=%.4f\n",a,b,a*b);
		if(c=='/'){
			if(b==0)printf("Wrong!Division by zero!\n");
			else printf("%.4f*%.4f=%.4f\n",a,b,a/b);
		}
		if(c=='+'||c=='-'||c=='*'||c=='/') ;
		else printf("Invalid operation!\n",a,b,a/b);
	}
}
*/


/*
#include<stdio.h>

int gcd(int a,int b) {
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}

int main() {
	int t,n,max;
	double m;
	scanf("%d",&t);
	while(t--) {
		max=1;
		scanf("%d",&n);
		for(int i=1; i<n; i++) {
			for(int j=i+1; j<n; j++) {
				if(max<gcd(i,j))max=gcd(i,j);
			}

		}
		printf("%d\n",max);
	}
}

*/


/*///////////////////////////////////////////////////栈
//#include<stdio.h>
//#include<malloc.h>
//
//struct zhan {
//	int *top;
//	int *bottom;
//	int maxsize;
//};
//int main() {
//	struct zhan *s;
//	s=(struct zhan*)malloc(sizeof(struct zhan));
//	s->bottom=(int*)malloc(sizeof(int)*10);
//	s->top=s->bottom;
//	s->maxsize=10;
//
//	int n,t,a;
//	scanf("%d",&n);
//	t=n;
//	while(t--) {
//		if(s->bottom+s->maxsize==s->top) {
//			s->bottom=(int*)realloc(s->bottom,sizeof(int)*(s->maxsize+10));
//			s->top=s->bottom+s->maxsize;
//			s->maxsize+=10;
//		}
//		scanf("%d",&*s->top);
//		s->top++;
//		if(*(s->top-1)==n) {
//			printf("%d ",*(--s->top));
//			n--;
//		}
//		while(s->top!=s->bottom &&*(s->top-1)==n)
//	printf("%d ",*--s->top),n--;
//	}
//	while(s->top!=s->bottom )
//	printf("%d ",*--s->top);
//	printf("\n");
//	free(s->bottom);
//	free(s);
//}
*/


/*
#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n,x[1009],y[1009],b[1009],ba[1009],max1=0,max2=0,ji=0,m1=0,m2=0,max=0,m=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	scanf("%d",&x[i]);
	for(int i=0;i<n;i++)
	scanf("%d",&y[i]);
	for(int i=0;i<n;i++)
	b[i]=y[i]+x[i];
	for(int i=0;i<n;i++)
	ba[i]=y[i]-x[i];
	sort(b,b+n);
	sort(ba,ba+n);
	m1=b[0],m2=ba[0];
	for(int i=0;i<n;i++)
	{
		m++;
		if(b[i]!=b[i+1]){
            if(max1<m)max1=m;
            m=0;
        }
	}
	m=0;
	for(int i=0;i<n;i++)
	{
		m++;
		if(ba[i]!=ba[i+1]){
            if(max2<m)max2=m;
            m=0;
        }
	}
	printf("%d\n",max1+max2);
	for(int i=0;i<n;i++)
	printf("%d ",b[i]);
}
*/


/*
#include<stdio.h>

int gcd(int a,int b)
{
	if(b==0)return a;
	else return gcd(b,a%b);
}

int main()
{
	int m[50]={0,1,1},t,a,b;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&a,&b);
		for(int i=2;i<=46;i++)
		m[i]=m[i-1]+m[i-2];
		printf("%d\n",gcd(m[a],m[b]));
	}
}
*/

/*
#include<Stdio.h>
int main(){
    long long int a[500009],n,sum=0,ji=0;
    scanf("%lld",&n);
    for(int i=0;i<n;i++){
    	scanf("%lld",&a[i]);
	}
	for(int i=0;i<n;i++){
    	sum+=a[i];
    	while(sum<0)
    	{
    		sum++;
    		ji++;
		}
	}
	printf("%lld\n",ji);
}
*/

/*
#include<Stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	long long int a[n+9][2],sum=0,ji=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<2;j++){
			scanf("%lld",&a[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		if(sum<=a[i][0])sum=a[i][0]+a[i][1];
			else sum+=a[i][1];
	}
	printf("%lld\n",sum);
}
*/

/*
#include<Stdio.h>
int main(){
	int n,t,m1;
	scanf("%d",&n);
	long long int a[n+9],b[n+9],sum=0,ji=0,l,r,m;
	for(int i=1;i<=n;i++)
	{
		scanf("%lld",&a[i]);
		b[i]=a[i];
	}
	scanf("%d",&t);
	while(t--){
		for(int i=1;i<=n;i++)
		a[i]=b[i];
		scanf("%lld%lld%lld",&l,&r,&m);
		for(int i=l;i<=r;i++){
			a[i]+=m;
			b[i]=a[i];
		}

//		for(int i=1;i<=n;i++)
//		printf("%lld ",a[i]);
		m1=n;
		for(int i=1;i<n;i++)
		a[i+1]=a[i+1]-a[i];

		printf("%lld\n",a[n]);
	}
}
*/

/*
#include<stdio.h>
int main()
{
	int n,k,a[1009],ji=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i+=2)
	ji++;
	if(n%2==0)ji++;
	printf("%d\n",ji);
	for(int i=1;i<=n;i+=2)
	printf("%d ",i);
	if(n%2==0)printf("%d\n",n);
}*//*
#include<stdio.h>
 int main()
 {
 	int n,q;
 	scanf("%d",&n);
 	int a[n],i;
 	for(i=0;i<n;i++)
 	scanf("%d",&a[i]);
 	scanf("%d",&q);
 	while(q--)
 	{
 		int l,r,b,c[n];
 		scanf("%d%d%d",&l,&r,&b);
 		l-=1;
 		r-=1;
 		for(i=0;i<n;i++)
 		{
 			if(l<=i&&i<=r)
 			{
 				a[i]+=b;
			 }
			 c[i]=a[i];
	}
 		int k=0;
 		while(k<n-1)
 		{
 			c[k+1]-=c[k];
 			k++;
		 }
		 printf("%d\n",c[n-1]);
	 }
 }*/
/*
#include<stdio.h>
int main()
{
	long long int n,q;
	scanf("%lld",&n);
	long long int a[n],i;
	for(i=0;i<n;i++)
	scanf("%lld",&a[i]);
	scanf("%lld",&q);
	int k=0;
	while(k<n-1)
	{
		a[k+1]-=a[k];
		k++;
}
	while(q--)
	{
		long long int l,r,b;
		scanf("%lld%lld%lld",&l,&r,&b);
		if((r-l+1)%2==1)
		{
			if((n-r)%2==1)a[n-1]-=b;
			else a[n-1]+=b;
	 }
	 printf("%lld\n",a[n-1]);
	}
}*/

/*
#include<stdio.h>
struct user
{
	int z;
	int y;
};
int main()
{
	int n,i;
	scanf("%d",&n);
	struct user a[n];
	int b[n][n]={-2147483648},c[n]={0};
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&a[i].z,&a[i].y);
		b[a[i].y][c[a[i].y]++]=a[i].z;
		printf("c[a[i].y]=%d\n",c[a[i].y]++);
 }
 int k=0,j;
 for(i=0;i<n;i++)
 {
 	for(j=0;j<c[a[i].y];j++)
 	{
 			if(c[a[i].y]<=1)break;

 		if(b[i][j]>b[i][j+1]&&
		 b[i][j]!=-2147483648&&b[i][j+1]!=-2147483648)
 		{

 			printf("NO\n");
 			k++;
 			break;
		 }
	 }
	 if(k!=0)break;
 }
 if(k==0)printf("YES\n");
}*/

/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[4],i;
	for(i=0;i<4;i++)
	scanf("%d",&a[i]);
	sort(a,a+4);
	int l=a[1]-a[0];
	int r=a[3]-a[2];
	if(l==r)printf("YES\n");
	else printf("NO\n");
}*/


/*
#include<bits/stdc++.h>
int main(){
    char s[100000+9],t[100000+9],a[100000+9],b[100000+9];
    scanf("%s",s);
     int m=strlen(s),i,j=m/2+2;
   //  printf("%d ",m);
     for( i=0;i<m/2;i++)
     {
     	a[i]=s[i];
	 }
	 a[i]=0;
	 printf("%s\n",a);
	 for( i=m/2;i<=m;i++)
     {
     	printf("%c",s[i]);
	 }
	 printf("\n");
	 for( i=0;j<m;j++)
     {
     	if(a[i]==s[j]&&a[i+1]==s[j+1]){
     		b[i]=a[i];
     		i++;

			 printf("%c %d %c %d\n",s[j],j,a[i-1],i-1);
		 }
	 }
	 b[i]=a[i];
	 for(j=0;j<=i;j++){
	 	printf("%c",b[j]);
	 }
}
*/

/*
#include<bits/stdc++.h>
int main() {
	char a[2000000+9],b[2000000+9];
	int max,len1,len2,min,ji=0,i=0,j=0,k=0,min2;
	while(~scanf(" %s",a)) {
		scanf("%s",b);
		len1=strlen(a);
		len2=strlen(b);
		if(len1>len2)max=len1,min=len2,min2=2;
		else max=len2,min=len1,min2=1;
		ji=0;
		for(; i<max; i++) {
			if(a[i]>b[i]) {
				printf(">");
				ji=1;
				break;
			}
			if(a[i]<b[i]) {
				printf("<");
				ji=1;
				break;
			}
			if(j==min)j=0;
		}
		if(ji==1)continue;
	}
}
*/


/*
#include<bits/stdc++.h>
int main(){
    long long int n,a[2000+9][4],r[2000+9],i,j,k=0,max=0,ji=0;
    scanf("%lld",&n);
    for(i=0;i<n;i++){
        for(j=0;j<2;j++)
            scanf("%lld",&a[i][j]);
       r[i]=a[i][0]*a[i][0]+a[i][1]*a[i][1];
    //    printf("%d ",r[i]);
    }
    for(k=0;k<n;k++){
        ji=0;
        for(i=0;i<n;i++){
        if(k!=i&&r[k]==(a[i][0]-a[k][0])*
		(a[i][0]-a[k][0])+(a[i][1]-a[k][1])
		*(a[i][1]-a[k][1]))ji++;
           // printf("%d\n",ji);
        }
        if(max<ji)max=ji;
    }
    printf("%lld\n",max);
}
*/

/*
//mai ji
#include<bits/stdc++.h>
int main(){
    int g=0,m=0,x=0,sum=0;
    for(g=0;g<=20;g++){
        for(m=0;m<=34;m++){
            for(x=0;x<=300;x+=3){
                if(5*g+3*m+x/3==100&&x+g+m==100)
				printf("%d %d %d\n",g,m,x);
            }
        }
    }
}
*/

/*
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=2;
	scanf("%d",&n);
	getchar();
	char c[1000+9];
	int a[1000+9],max=0,max2=0;
	long long int sum=0,ans=0,q=1;
	for(int i=0;i<n;i++){
		scanf("%c",&c[i]);
		scanf("%d",&a[i]);
		scanf("%c",&c[i+1]);
	}


	for(int i=0;i<n;i++){
		if(c[i]=='M'&&max<a[i])max=a[i];
		if(c[i]=='S'&&max2<a[i])max2=a[i];
	}
	for(int i=0;i<max;i++)
	q*=2;
	q-=1;
	if(q>max2)cout<<q<<endl;
	else cout<<max2<<endl;
}
*/


/*
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,i,pan=0;
	char a[1000005];
	cin>>t;
	stack<char> s;
	char m;
	while(t--){
		cin>>a;
		pan=0;
		for(i=0;a[i]!='\0';i++){
		//printf("size=%d\n",s.size());
			if(a[i]=='a')s.push(a[i]);
			//printf("size=%c\n",s.top());
			//if(s.empty==0)break;
			if(a[i]=='b'){
				//printf("size=%d\n",s.size());
				if(s.size()==0){
				pan=1;
			//	printf("111\n");
				break;
			}
				s.top();
				s.pop();
				//printf("size=%c\n",s.top());
			//	pan=s.size();
			}
		}

	//	printf("size=%d\n",s.size());
		if(s.size()==0){
				if(pan==1) printf("Dead Fang\n");
				else if(pan==0)  printf("Happy Fang\n");
			}
		else printf("Sad Fang\n");

		for(int i=0;i<s.size();i++)
		s.pop();

	}
}
*/

//#include<bits/stdc++.h>
//using namespace std;
//char a[1000005];
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	while(n--)
//	{
//		scanf("%s",a);
//		int i;
//		stack<char>s;
//		for(i=0;a[i]!='\0';i++)
//		s.push(a[i]);
//
//	}
//
//}


/*
#include<bits/stdc++.h>
using namespace std;
#define cin std::ios::sync_with_stdio(false);cin
//#define	 cout ios_base::sync_with_stdio(false);cout
int main(){
	int a=0;
	clock_t strat,finish;
	strat=clock();
	a=0;
	for(int i=0;i<1e6*2;i++);
	//printf("%d",a);
	finish=clock();
	printf("\ntime1=%llf\n",(double)(finish-strat)/CLOCKS_PER_SEC);

	strat=clock();
	a=0;
	for(int i=0;i<1e8;i++);
	//cout<<a;
	finish=clock();
	printf("\ntime2=%llf\n",(double)(finish-strat)/CLOCKS_PER_SEC);

}
*/

/*
#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
	if(b==0)return a;
	return gcd(b,a%b);
}

int main(){
	int n,max=1,m=0,c,cout=0;
	scanf("%d",&n);
//	for(int i=1;i<n;i++){
//		m=gcd(i,n);
//		if(max<m)max=m;
//	}
//	printf("max=%d\n",max);
//	max=1,m=0;
	while(1){
		for(int i=2;i<n;i++){
		if(n%i==0)m=n/i;
		if(m>max)max=m;
	}
	cout++;
	n=max;
	if(max==1)break;
	printf("max=%d\n",cout);
	}


	printf("max=%d\n",cout);
//	printf("%d\n",gcd(n,(int)sqrt(n)));
//	printf("%d\n",gcd(n,(int)sqrt(n)+1));
}

*/


/*
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
	int t=1,ji=1,a[30][9999],j=0;
		ll n,c,m;
		for(m=1; m<=1000*9*9; m++) {
				ll i,count=0,sum=1,n=m;
				while(1) {
					for(i=n-1; i>=1; i--) {
						if(n%i==0) {
							n=i;
							break;
						}
					}
					count++;
					if(n==1)break;
				}

//				printf("n=%lld,count=%3lld  ",m,count);
//				if(m%5==0)printf("\n");
				if(count>=10){
					a[count][j++]=m;
					printf("n=%lld,count=%3lld  ",m,count);
					ji++;
					if(ji%5==0)printf("\n");
				}
			}
//			ji=0;
//			for(j=0;j<10;j++){
//				printf("%d ",a[10][j+1]-a[10][j]);
//				ji++;
//				if(ji%5==0)printf("\n");
//			}

}
*/


/*
#include <stdio.h>
#include <algorithm>
#include <string.h>
using namespace std;
int a[1005],dp[1005],n=8;
int LIS() {
	int i,j,ans,m;
	dp[1] = 1;
	ans = 1;
	for(i = 1; i<=n; i++) {
		m = 0;
		for(j = 1; j<=i; j++) {
			if(dp[j]>m && a[j]<a[i])
				m = dp[j];
		}
		dp[i] = m+1;
		if(dp[i]>ans)ans = dp[i];
	}
	return ans;
}
int main() {
	//scanf("%d",&n);
//    int i;
//    for(i=0;i<n;i++)
//    {
//        scanf("%d",&a[i]);
//    }
	for(int i=1;i<9;i++)a[i]=i;
	do {
		 for(int i=1;i<9;i++)
            printf("%d ",a[i]);
        printf("\n");
		printf("%d\n",n-LIS());
	} while(next_permutation(a+1,a+n+1));

}
*/




/*
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll sum,sum1;
	int n,k,i,j;
	//scanf("%d%d",&n,&k);
	for(int n=1; n<5000; n++) {
		//for(int k=0; k<20; k++) {
		//k=0;
		int t,z=2,h,flag,ji=0;
		sum1=(n*(1+n))/2;
		k=sum1%n;
		while(z<=n-1) {
			flag=0;
			sum=(z*(1+z))/2;
			if(sum%n==k) {
				flag=1;
			} else {
				for(i=1; i<=n-z; i++) {
					sum+=z;
//                  printf("z=%d,sum=%lld\n",z,sum);
					if(sum%n==k) {
						flag=1;
						break;
					}
				}
			}
			if(flag==0) {
				//printf("-1\n");
				ji=111;
				break;
			}
			z++;
		}
		if(ji!=111) {
			for(i=1; i<=n; i++)
				printf("%d ",i);
			printf("	%d %d\n",n,k);
		}

		//	}
	}

}
*/

/*
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	int t,n,m,a[200+9][200+9];
	ll sum=0,di=0;
	double ans,max;
	scanf("%d",&t);
	while(t--) {
		max=0;
		scanf("%d%d",&n,&m);

		for(int i=0; i<n; i++) {
			for( int j=0; j<m; j++) {
				scanf("%d",&a[i][j]);
			}
		}

		for(int j=0; j<m; j++) {
			sum=0;
			di=0;
			ans=0;
			for(int i=0; i<n; i++) {
				sum+=a[i][j];
				if(i==n-1)di+=a[i][j];
			}
			printf("%llf ",max);
			ans=(double)sum/di;
			if(max<ans)max=ans;
		}
		printf("%0.8lf\n",max);
	}
}
*/

/*
#include<bits/stdc++.h>
using namespace std;
#define e 1e-9
int main(){
	double sum=0,mu=1,fu=1;
	while(1/mu>e){
		sum+=1.0/mu*fu;
		fu*=-1;
		mu+=2;
	}
	printf("pi=%.10llf\n",sum*4);
}
*/

/*
#include<bits/stdc++.h>
using namespace std;
int main() {
	int n=30,k=11,m1,m2,sum=0;

//		for(int a=7; a<=10; a++) {
//		//int a=9;
//			for(int b=1; b<=30; b++) {
//
//				sum=a;
//				printf("n=%d,k=%d\n",a,b);
//				printf("%d  ",a);
//				for(int j=2; j<=b; j++) {
//					m1=(a-1)/j+1;
//					if(j>n)m2=0;
//					else m2=(a-1*j)/j+1;
//					printf("%d  ",m1+m2);
//					sum+=m1+m2;
//				}
//				printf("\n%d\n",sum);
//
//			}
//		}


//	n=9;
//	k=8;
//	sum=n;
//	printf("%d  ",n);
//	for(int j=2; j<=k; j++) {
//		m1=(n-1)/j+1;
//		if(j>n)m2=0;
//		else m2=(n-1*j)/j+1;
//		printf("%d  ",m1+m2);
//		sum+=m1+m2;
//	}
//	printf("\n%d\n",sum);



	n=8;
	k=11;
	for(int i=2; i<=k; i++) {
		sum=n;
		for(int j=2; j<=i; j++) {
			m1=(n-1)/j+1;
			if(j>n)m2=0;
			else m2=(n-1*j)/j+1;
			printf("%d  ",m1+m2);
			sum+=m1+m2;
		}
		printf("\nn=%d k=%d %d\n",n,i,sum);
	}


}
*/



/*
#include<bits/stdc++.h>
using namespace std;
const long long mod=1e9+7;
long long n,k,ans;
void find(long long n) {
	long long i,j;
	for(i=2; i<=n && i<=k; i=j+1) {
		j=min(n/(n/i),k);
		printf("%lld %lld %lld\n",n/(n/i),k,ans);
		(ans+=(j-i+1)%mod*(n/i)%mod)%=mod;
	}
}
int main() {
	//scanf("%lld%lld",&n,&k);
	n=8,k=4;
	find(n);
	find(n-1);
	printf("\n%lld\n",(ans+n+k-1)%mod);
	return 0;
}
*/

/*
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd(ll a,ll b) {
	if(b==0)return a;
	return gcd(b,a%b);
}

int main() {
	ll a=1,b=3,c=1,d=3,x,y,ans=1,m;
//	for(a=1;a<5;a++){
//		for(c=1;c<5;c++){
//			for(a=1;a<5;a++)
//		}
//	}
//	for(x=2; x<5; x++) {
//		for(y=3; y<5; y++) {
			ans=1;
			x=15;y=5;
			b=10;d=10;
			for(int i=a; i<b; i++) {
				for(int j=c; j<d; j++) {
					m=gcd(pow(x,i),pow(y,j));
					printf("%.0lf %.0lf %lld\n",pow(x,i),pow(y,j),m);
					ans*=m;
				}
			}
		//	printf("%lld %lld %lld\n\n",x,y,ans);
//		}
//	}

}
*/

/*
#include<bits/stdc++.h>
using namespace std;
int main() {
	int t,n;
	scanf("%d",&t);
	while(t--) {
		scanf("%d",&n);
		int a[n+9],min,i,j=0,b[n+9],k=0,m;
		for(i=0; i<n; i++) {
			scanf("%d",&a[i]);
			b[i]=0;
		}
		sort(a,a+n);
		for(i=0; i<n; i++) {
			if(a[i]!=0) {
				min=a[i];
                m=i;
				break;
			}
		}

		b[0]=a[m+1];
		if(m==0) {
			for(j=1; j+1<n; j++) {
				b[j]=a[j+1];
			}
		} else {
			m++;
			for(j=1; j-1<m-1; j++) {
				b[j]=a[j-1];
			}
			for(i=m+1; i<n; i++) {
				b[j++]=a[i];
			}
		}
//		cout<<endl;
		for(i=0; i<n-1; i++)
		cout<<b[i];
		cout<<" "<<min<<endl;
		int p=0;
		for(i=n-1; i>=0; i--) {
			if(i!=0){
				b[i]*=min;
				b[i]+=p;
				p=b[i]/10;
				b[i]%=10;
			}
			else{
				b[i]*=min;
				b[i]+=p;
			}
		}

		for(i=0; i<n-1; i++){
			printf("%d",b[i]);
		}
		printf("\n");
	}
}
*/

/*
//#include<bits/stdc++.h>
//#include<iostream>
//#include<vector>
//using namespace std;
//
//void AllSubsets(int *arr,int len)
//{
//	int i,j,k;
//	int num=1<<len;//1左移len位,即乘以2^len,num=2^len个子集
//	for(i=0;i<num;i++)
//	{
//		j=i;
//		k=0;
//		printf("{");
//		while(j)
//		{
//			//j的二进制与0001按位与，输出不为0则打印
//			//和0001按位与意思是判断最右边是否为1
//			if(j&1)
//			{
//				printf("%d",arr[k]);
//			}
//			j>>=1;//j右移一位，即/2，0011变为0001，意思是从右往左遍历每一位，为1则输出为0则不输出
//			k++;
//		}
//		printf("}\n");
//	}
//}
//
//int main() {
//	int t,n;
//	scanf("%d",&t);
//	while(t--) {
//		scanf("%d",&n);
//		int i,j,ji=0;
//		vector<int>a;
//		for(int i=1; i<n; i++)a.push_back(i);
//		do {
//			int m=0;
//			int len=sizeof(a)/sizeof(a[0]);
//			AllSubsets(,len);
//			if(ji==0) {
//				for(int i=0; i<n-1; i++)
//					printf("%d ",a[i]);
//				printf("\n");
//				break;
//			}
//		} while(next_permutation(a.begin(),a.end()));
//	}
//}
*/

/*
#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;



int main() {
	int t,n;
	scanf("%d",&t);
	while(t--) {
		scanf("%d",&n);
		int i,j,ji=0;
		int a[n+9];
		for(i=1; i<n+1; i++)a[i]=i;
//		do {
//			int m=0;
//			AllSubsets(a+1,n);
//			if(ji==0) {
//				for(int i=0; i<n-1; i++)
//					printf("%d ",a[i]);
//				printf("\n");
//				break;
//			}
//		} while(next_permutation(a+1,a+n+1));
	}
}
*/

/*
#include<stdio.h>
#include<stdlib.h>

//求集合的所有子集 整形数组arr,arr长度为len
void AllSubsets(int *arr,int len)
{
	int i,j,k;
	int num=1<<len;//1左移len位,即乘以2^len,num=2^len个子集
	for(i=0;i<num;i++)
	{
		j=i;
		k=0;
		printf("{");
		while(j)
		{
			//j的二进制与0001按位与，输出不为0则打印
			//和0001按位与意思是判断最右边是否为1
			if(j&1)
			{
				printf("%d",arr[k]);
			}
			j>>=1;//j右移一位，即/2，0011变为0001，意思是从右往左遍历每一位，为1则输出为0则不输出
			k++;
		}
		printf("}\n");
	}
}

int main()
{
	int b=0;
	scanf("%d",&b);
	int arr[b];
	for(int i=1;i<b+1;i++)
	{
		arr[i]=i;
	}
	int len=sizeof(arr)/sizeof(arr[0]);
	AllSubsets(arr+1,len);

}
*/

/*
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int i,j,a[n+9];
        ll sum=0,max=0,ji,m;
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        m=a[0];
        for(i=0;i<n;i++){
        	sum+=a[i];
        	if(m>ceil((double)sum/(i+1))){
        		//continue;
        		;
			}
			else{
				m=ceil((double)sum/(i+1));
			}
		}
        printf("%d\n",m);
    }
}
*/

/*
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd(ll a,ll b){
    if(b==0)return a;
    return gcd(b,a%b);
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a;
        ll n,i,j,ji=0,x,y;
        scanf("%d%lld",&a,&n);
        for(i=1;i<=n;i++){
            for(j=i;j<=n;j++){
                if(gcd(i,j)==1&&j%(i*i+a)==0)ji++;
            }
        }
        printf("%lld\n",ji);
    }
}
*/

/*
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	int n,m,k;
	scanf("%d%d%d",&n,&m,&k);
	int a[n+9][m+9] ,i,j,ji=0,ji2=0,ii;
	ll ans=0,sum=0,max=0;
	for(i=0; i<n; i++)
		for(j=0; j<m; j++)
			scanf("%d",&a[i][j]);
	for(ii=0; ii<k; ii++) {
		max=0;
		for(i=0; i<n; i++) {
			sum=0;
			for(j=0; j<m; j++) {
				sum+=a[i][j];
			}
			if(max<=sum){
				max=sum;
                ji=i;
                ji2=1;
			}
		}

		for(j=0; j<m; j++) {
			sum=0;
			for(i=0; i<n; i++) {
				sum+=a[i][j];
			}
			if(max<=sum){
                max=sum;
                ji=j;
                ji2=2;
            }
		}

		if(ji2==1) {
			for(j=0; j<m; j++) {
				a[ji][j]=0;
			}
		} else {
			for(i=0; i<n; i++) {
				a[i][ji]=0;
			}
		}
		ans+=max;
	}
	printf("%lld\n",ans);
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define p 998244353
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		int n,i,j;
		scanf("%d",&n);
		ll sum=0,ans=1,ji=1,ji2=0;
		for(i=1; i<=n; i++) {
			ji2+=i;
		}
		ji2%=p;
		sum=ji2*ji2%p;
		//printf("%lld\n",ji2);
		for(i=1; i<=n; i++) {
			ji*=i;
			ji%=p;
		}
		//printf("%lld\n",ji);
		for(i=0; i<2*n; i++) {
			ans*=ji;
			ans%=p;
		}


		ll sum1=0,ans1=1;
//		for(i=1; i<=n; i++) {
//			for(j=1; j<=n; j++) {
//				sum1+=i*j;
//				sum1%=p;
//			}
//		}
//
//		for(i=1; i<=n; i++) {
//			for(j=1; j<=n; j++) {
//				ans1*=i*j;
//				ans1%=p;
//			}
//		}
//		printf("正确：\n%lld %lld\n",sum1,ans1);

		printf("%lld %lld\n",sum,ans);
	}
}
*/




/*
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e5+5;
const ll mod=1e9+3;
//#define N 1e5+9
int main(){
	ll f[N];
	f[0]=1;
	for(ll i=1;i<N;i++) f[i]=f[i-1]*i%mod;
	//for(ll i=1;i<N;i++)
	cout<<f[1000]<<" ";
}
*/

/*
#include<bits/stdc++.h>
using namespace std;
int main() {
	int v,k;
	scanf("%d%d",&v,&k);
	char a[100000+9];
	int i,j,m,n;
	long long sum=0,ji=1;
	if(k>v) {
		a[1]='1';
		a[v]='1';
		for(i=2; i<=v-1; i++) {
			a[i]='0';
		}

		m=v/2;
		n=m+1;
		k=k-2;
		for(i=0; i<k/2; i++) {
			a[m]='1';
			a[n]='1';
			m--;
			n++;
		}
		for(i=1; i<=v; i++) {
			ji=1;
			for(j=0; j<v-i; j++) {
				ji*=2;
			}
			sum+=ji*(a[i]-'0');
			sum=sum%(1000000000+7);
		}
	} else {
		for(i=1; i<=k; i++) {
			a[i]='1';
		}
		for(i=1; i<=k; i++) {
			ji=1;
			for(j=0; j<v-i; j++) {
				ji*=2;
			}
			sum+=ji*(a[i]-'0');
			sum=sum%(1000000000+7);
		}
	}
	printf("%lld\n",sum);
}
*/

/*
#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,m;
	scanf("%d%d",&n,&m);
	char a[n+9][100+9],b[m+9][30+9];
	int i,j,ci[n+9],k1,k2;
	for(i=0; i<n; i++) {
		scanf("%s",a[i]);
		getchar();
	}
	for(j=0; j<m; j++) {
		scanf("%s",b[j]);
		getchar();
	}
	memset(ci, n, sizeof(a[0]));
	for(i=0; i<n; i++) {
		for(j=0; j<m; j++) {
			for(k1=0; k1<strlen(a[j]); k1++) {
				for(k2=0; k2<strlen(b[j]); k2++) {
					if(a[k1]!=b[k2])break;
				}
				if(k2==strlen(b[j]))ci[i]++;
			}
		}
	}
}
*/


//#include<bits/stdc++.h>
//using namespace std;
//int main() {
//	char mm[99];
//	scanf("%[^\n]",mm);
//	cout<<mm<<endl;
//}

/*
#include<bits/stdc++.h>
using namespace std;
const int maxn=100+9;
int main(){
    int t,n,i,j;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        //cout<<n<<endl;
        fflush(stdin);
        char a[n+9][maxn];
        for(i=0;i<n;i++){
            scanf("%[^\n]",a[i]);
            fflush(stdin);
            //cout<<a[i]<<endl;
        }
        int cnt=0;
        double ans=0;
        for(i=0;i<n;i++){
            for(j=0;j<strlen(a[i]);j++){
                if(a[i][j]=='2'){
                    cnt++;
                    break;
                }
            }
        }
        ans=(double)cnt/n;
        printf("%.10lf\n",ans);
    }
}
*/

/*
#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,k;
	//cin>>n>>k;
	n=3;
	k=5;
	long long ji1=1,ji2=1,ji3=1,ji;
	int i,j,m,a,b,c;
	for(a=1; a<=n; a++) {
		for(b=1; b<=n; b++) {
			for(c=1; c<=n; c++) {
				ji1=pow(a,n);
				long long ji22=pow(b,n);
				ji2=pow(ji22%k,n);
				long long ji33=pow(c,n);
				long long ji333=pow(ji33%k,n);
				ji3=pow(ji333%k,n);
				//ji3=pow(pow(pow(c,n),n),n);
				//cout<<"ji1="<<ji1<<"ji2="<<ji2<<"ji3="<<ji3<<endl;
				if((ji1+ji2)%k==ji3%k)cout<<" "<<a<<" "<<b<<" "<<c<<endl;
			}
		}
	}
}
*/


//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	long long i,j,ji=1;
//	for(i=0;i<27;i++)ji*=3;
//	cout<<ji;
//}

/*
#include<bits/stdc++.h>
using namespace std;
bool compare(int a,int b) {
	return a>b;
}
int main() {
	int n;
	cin>>n;
	int i,j,a[n+9];
	for(i=0; i<n; i++) {
		scanf("%d",&a[i]);
	}
	sort(a,a+n,compare);
	int ans=0,m=n,ji,flag=1;
	for(i=0; i<n;) {
		if(m-a[i]>=0) {
			ans++;
			m-=a[i];
			//cout<<m<<" ";
			i+=a[i];
			//cout<<i<<endl;
		} else {
			if(ans>=1)break;
			else {
				flag=0;
				break;
			}

		}
	}
	if(flag==1)cout<<ans<<endl;
	else printf("-1\n");
}
*/

/*
#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cout<<"\t\t\t\t\t你想要多少要多大的爱心"<<endl;
	cout<<"\t\t\t\t\t不要犹豫了，输入那个数吧！！  ";
	scanf("%d",&n);
	cout<<"\t\t\t\t\tI love U forever."<<endl;
	cout<<"\t\t\t\t\t  我的傻狗狗"<<endl;
	cout<<"\t\t\t\t\t送给我的傻子的一个爱心"<<endl;
	int i,j;
	for(i=1; i<=n; i++) {
		cout<<"\t\t\t\t\t";
		for(j=0; j<=n-i; j++) {
			printf(" ");
		}
		for(j=0; j<n+2*i-2; j++) {
			printf("*");
		}
		for(j=0; j<2*(n-i+1)-1; j++) {
			printf(" ");
		}
		for(j=0; j<n+2*i-2; j++) {
			printf("*");
		}
		printf("\n");
	}
	for(i=1; i<=n*3; i++) {
		cout<<"\t\t\t\t\t";
		for(j=0; j<i-1; j++) {
			printf(" ");
		}
		for(j=0; j<2*(3*n-i)+1; j++) {
			printf("*");
		}
		printf("\n");
	}
	system("pause");
}
*/


/*
#include<bits/stdc++.h>
using namespace std;

void InsertSort(int a[]) {
	int i,j;
	for(i=1;i<n;i++){
		if(a[i]<a[i-1]){
			int tmp=a[i];
			for(j=i-1;j>0&&a[j]>)
		}
	}
}

int main() {
	int a[99]= {49,38,65,97,76,13,27,49};
	InsertSort(a[]);
}
*/

/*
#include<bits/stdc++.h>
using namespace std;
string m="puleyaknoi";
int main() {
	int t;
	cin>>t;
	int i,j,k;
	string s;
	for(k=0; k<t; k++) {
		cin>>s;
		int max=-1;
		for(i=0; i<s.size(); i++) {
			int f=1,fla=1;
			if(a[i]=='p') {
				int j=1;
				while(j>=10){
					if(a[i+f]==m[j]) j++;
					f++;
					if(i+f>s.size()){
						fla=0;
						break;
					}
				}
			}
			if(fla==1&&max<)
		}

	}
}
*/


/*
#include<bits/stdc++.h>
using namespace std;
int main() {
	int i,j,count=0;
	string s,s1,s2,s3,s4;
	cin>>s;
	for(i=0; i<s.length(); i++) {
		if(s[i]>='a'&&s[i]<='z') {
			if(s1.length()==0)count++;
			s1.push_back(s[i]);
		}

		else if(s[i]>='A'&&s[i]<='Z') {
			if(s2.length()==0)count++;
			s2.push_back(s[i]);
		}

		else if(s[i]>='0'&&s[i]<='9') {
			if(s3.length()==0)count++;
			s3.push_back(s[i]);
		} else {
			if(s4.length()==0)count++;
			s4.push_back(s[i]);
		}

	}
	cout<<"password level:"<<count<<endl;
	if(s1.length()==0)cout<<"(Null)"<<endl;
	else cout<<s1<<endl;
	if(s2.length()==0)cout<<"(Null)"<<endl;
	else cout<<s2<<endl;
	if(s3.length()==0)cout<<"(Null)"<<endl;
	else cout<<s3<<endl;
	if(s4.length()==0)cout<<"(Null)"<<endl;
	else cout<<s4<<endl;
}
*/


/*
#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin>>s;
	long long int ans=0,i;
	for(i=0; i<s.length(); i++) {
		if(i==0) {
			if(s[i]=='w')
			ans+=1;
		} else if(s[i]=='w'&&s[i-1]=='w')
			ans+=2;
		else if(s[i]=='w')
			ans+=1;
	}
	cout<<ans<<endl;
}

*/


/*
#include<bits/stdc++.h>
using namespace std;

char a[1009][1009];
int v[1009][1009],ans=0,n,m,sum=0;

void dfs(int x,int y) {
	if(v[x][y]==1) {
		//printf("x=%d,y=%d,ans=%d\n",x,y,ans);
		return;
	}
	if(x<1||x>n||y<1||y>m) {
		ans++;
		//printf("x=%d,y=%d,ans=%d\n",x,y,ans);
		return;
	}

	if(a[x-1][y]=='W') {
		v[x-1][y]=1;
		dfs(x-1,y);
		v[x-1][y]=0;
	}
	if(a[x][y+1]=='A') {
		v[x][y+1]=1;
		dfs(x,y+1);
		v[x][y+1]=0;
	}
	if(a[x+1][y]=='S') {
		v[x+1][y]=1;
		dfs(x+1,y);
		v[x+1][y]=0;
	}
	if(a[x][y-1]=='D') {
		v[x][y-1]=1;
		dfs(x,y-1);
		v[x][y-1]=0;
	}
}

int main() {
	cin>>n>>m;
	int i,j;
	for (i=1; i<=n; i++) {
		getchar();
		for(j=1; j<=m; j++) {
			scanf("%c",&a[i][j]);
		}
	}
	for(i=0; i<n; i++) {
		for(j=0; j<m; j++) {
			//v[i][j]=1;
			dfs(i,j);
			//v[i][j]=0;
		}
	}
	cout<<ans<<endl;
}
*/



/*
#include<bits/stdc++.h>
using namespace std;
char p[1010][1010];
int n, m;
int MA=2;
int dp[1010][1010],vis[1010][1010];
int dfs(int x, int y) {
	if (dp[x][y]) return dp[x][y];
	if (vis[x][y]) return 1;
	if(x<1||x>n||y<1||y>m) {
		return MA;
	}
	vis[x][y]=1;
	if(p[x][y]=='W') {
		dp[x][y]=max(dp[x][y], dfs(x-1,y));
	} else if(p[x][y]=='S') {
		dp[x][y]=max(dp[x][y], dfs(x+1,y));
	} else if(p[x][y]=='A') {
		dp[x][y] = max(dp[x][y], dfs(x,y-1));
	} else if(p[x][y]=='D') {
		dp[x][y] = max(dp[x][y], dfs(x, y + 1));
	}
	return dp[x][y];
}
int main() {
	scanf("%d%d",&n,&m);
	for (int i=1; i<=n; i++) {
		getchar();
		for(int j=1; j<=m; j++) {
			scanf("%c",&p[i][j]);
		}
	}
	long long sum=0;
	for (int i=1; i<=n; i++) {
		for (int j=1; j<=m; j++) {
			if (dfs(i,j)==MA) {
				sum++;
			}
		}
	}
	printf("%lld\n",sum);
}

*/




/*
1
3 3
3 6 8
2 4 1
5 9 10

9 4 6
5 2 3
10 1 8

5 9 10
2 4 1
*/

/*
#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,m,i,j;
		cin>>n>>m;
		int a[n][m];
		int b[m][n];
		int c[n][m];

		for(i=0; i<n; i++) {
			for(j=0; j<m; j++) {
				scanf("%d",&a[i][j]);
			}
		}
		for(i=0; i<m; i++) {
			for(j=0; j<n; j++) {
				scanf("%d",&b[i][j]);
			}
		}

		for(int k=0; k<n; k++) {
			int flag=1;
			for(i=0; i<m; i++) {
				for(j=0; j<n; j++) {
					if(a[k][0]==b[i][j]) {
						flag=0;
						break;
					}
				}
				if(flag==0) {
					break;
				}
			}
			if(flag==0) {
				for(i=0; i<m; i++) {
					c[j][i]=a[k][i];
				}
			}
		}

		for(i=0; i<n; i++) {
			for(j=0; j<m; j++) {
				cout<<c[i][j]<<" ";
			}
			cout<<endl;
		}
	}
}
*/



/*
#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
		int b;
		cin>>b;
		int v[b];
		for(int j = 0; j<b; j++) {
			cin>>v[j];
			if (j>(b/2-1)) {
				//cout<<v[j]<<endl;
				v[j] = -v[j];
			}
		}
		for (int k = b-1; k>=0; k--) {
			cout<<v[k]<<" ";
		}
	}
}

*/

/*
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[n+3],i,j;
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		int sum=0;
		for(i=0;i<n;i++){
			sum+=a[i];
		}
		if(sum==m)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
*/

/*
#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
		int x,n,m,i,j;
		scanf("%d%d%d",&x,&n,&m);
		for(i=0; i<n; i++){
			if(x<=20)break;
			x=x/2+10;
		}
		for(i=0; i<m; i++){
			x=x-10;
		}
		if(x<=0)printf("YES\n");
		else printf("NO\n");
	}
}
*/

/*
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	int t;
	cin>>t;
	while(t--) {
		int n1,n2,n3,i,j,k;
		cin>>n1>>n2>>n3;
		ll a1[n1],a2[n2],a3[n3],m1,m2,m3,sum=9223372036854775807;
		for(i=0; i<n1; i++)
			scanf("%lld",&a1[i]);
		for(i=0; i<n2; i++)
			scanf("%lld",&a2[i]);
		for(i=0; i<n3; i++)
			scanf("%lld",&a3[i]);
		 ;
		for(i=0; i<n1; i++) {
			for(j=0; j<n2; j++) {
				for(k=0; k<n3; k++) {
					sum=min((a1[i]-a2[j])*(a1[i]-a2[j])+(a3[k]-a2[j])*(a3[k]-a2[j])+(a1[i]-a3[k])*(a1[i]-a3[k]),sum);
//					if(abs(a1[i]-a2[j])+abs(a3[k]-a2[j])+abs(a1[i]-a3[k])<sum) {
//						sum=abs(a1[i]-a2[j])+abs(a3[k]-a2[j])+abs(a1[i]-a3[k]);
//						m1=i;
//						m2=j;
//						m3=k;
//					}


				}
			}
		}
		//printf("%lld\n",(a1[m1]-a2[m2])*(a1[m1]-a2[m2])+(a3[m3]-a2[m2])*(a3[m3]-a2[m2])+(a1[m1]-a3[m3])*(a1[m1]-a3[m3]));
		printf("%lld\n",sum);
	}
}

*/


/*
#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,a,i,j,maxn,sum=0,sum2=0,l=-1,r=-1;
		cin>>n;
		string s,s2;
		cin>>s;
		s2=s;
		for(i=0; i<n; i++) {
			l=-1,r;
			for(j=0; j<n; j+=2) {
				if(s[j]!='1') {
					l=j;
					r=n-i;
					break;
				}
			}
			if(l==-1)break;
			for(j=l; j<(n-l)/2; j++) {
				char m;
				m=s[j];
				s[j]=s[n-j-1];
				s[n-j-1]=m;
			}
			//if(l<n/2)
			sum++;
		}
		for(i=0; i<n; i++) {
			l=-1,r;
			for(j=0; j<n; j+=2) {
				if(s2[j]!='0') {
					l=j;
					r=n-i;
					break;
				}
			}
			if(l==-1)break;
			for(j=l; j<(n-l)/2; j++) {
				char m;
				m=s2[j];
				s2[j]=s2[n-j-1];
				s2[n-j-1]=m;
			}

			//if(l<n/2)
			sum2++;
		}
		cout<<sum<<" "<<sum2<<endl;
		//cout<<min(sum,sum2)<<endl;
	}
}
*/

/*
#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,i,j,sum=0,sum2=0;
		string s,s1;
		cin>>n>>s;
		s1=s;
		for(i=0; i<n; i++) {
			int l=-1,r=0;
			for(j=0; j<n/2; j+=2) {
				if(s[j]!='0') {
					l=j;
					break;
				}
			}
			for(j=n/2; j>=0; j-=2) {
				if(s[j]!='0') {
					r=j;
					break;
				}
			}
			if(l==-1)break;
			for(j=l; j<r; j++) {
				char m;
				m=s[j];
				s[j]=s[n-j-1];
				s[n-j-1]=m;
			}
			sum++;
		}
		for(i=0; i<n; i++) {
			int l=-1;
			for(j=0; j<n/2; j+=2) {
				if(s1[j]!='1') {
					l=j;
					break;
				}
			}

			if(l==-1)break;
			for(j=l; j<(n-l)/2; j++) {
				char m;
				m=s1[j];
				s1[j]=s1[n-j-1];
				s1[n-j-1]=m;
			}
			sum2++;
		}
			cout<<sum<<" "<<sum2<<endl;
	}
}

*/



/*
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i,j,sum=0,sum2=0;
		string s;
		cin>>n>>s;
		if(s[0]=='1'){
			for(i=0;i<n;i++)
				if(s[i]=='0'&&s[i+1]=='0')sum++;
		}
		else {
			for(i=1;i<n;i++)
				if(s[i]=='1'&&s[i+1]=='1')sum2++;
		}
		//cout<<sum<<" "<<sum2<<endl;
		cout<<max(sum,sum2)<<endl;
	}
}
*/

/*
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n+5][2],i,j,sum,maxn=0;

	for(i=0;i<n;i++){
		sum=0;
		for(j=0;j<2;j++){
			cin>>a[i][j];
			sum+=a[i][j];
		}
		maxn=max(maxn,sum);
	}
		cout<<maxn<<endl;

}
*/

/*
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n+5],i,j,max1=1,max2=1,sum;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	max1=__gcd(a[0],a[1]);
	for(i=0;i<n;i++){
		sum=__gcd(a[i],a[i+1]);
		if(sum<max1){
			max2=max1;
			max1=sum;
		}
	}
	cout<<max1<<" "<<max2<<endl;
}

*/


/*
#include<bits/stdc++.h>
using namespace std;
stack<int> s;
int main() {
	int n;
	cin>>n;
	int a[n+9],i,j;
	for(i=0; i<n; i++)
		cin>>a[i];
	i=0;
	while(i<n) {
		int m=a[i];
		if(m>s.top()) {
			while(m>=s.top()) {
				printf("%d ",m);
				m=s.top();
				s.pop();
			}
		} else s.push(a[i]);
		i++;
	}
	while(!s.empty()) {
		printf("%d ",s.top());
		s.pop();
	}
}
*/


/*
#include<bits/stdc++.h>
using namespace std;
int n,m,ans;
char a[500+9][500+9];
int  v[500+9][500+9];
int dx[]= {0,1,0,-1};
int dy[]= {1,0,-1,0};

void dfs(int x,int y) {
	if(a[x][y]=='E') {
		//cout<<"Yes"<<endl;
		ans=0;
		return ;
	}
	if(x<0||x>=n||y<0||y>=m)return;
	int i;
	for(i=0; i<4; i++) {
		int tx=x+dx[i];
		int ty=y+dy[i];
		if(a[tx][ty]==1&&v[tx][ty]==0) {
			v[tx][ty]=1;
			dfs(tx,ty);
			v[tx][ty]=0;
		}
	}
}

int main() {
	while(scanf("%d%d",&n,&m)==2) {
		int i,j;
		ans=1;
		for(i=0; i<n; i++)
			cin>>a[i];
		int flat=1,jx,jy;
		for(i=0; i<n; i++) {
			for(j=0; j<m; j++) {
				if(a[i][j]=='S') {
					jx=i;
					jy=j;
					flat=0;
					break;
				}
			}
			if(flat==0)break;
		}
		v[jx][jy]=1;
		dfs(jx,jy);
		if(ans==0)cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
}

*/

/*
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	int a[100+9];
	while(t--){
		int n;
		scanf("%d",&n);
		int i,j,m=4*n;
		for(i=0;i<n;i++){
			a[i]=m-2*i;
		}
		for(i=0;i<n;i++){
			printf("%d ",a[i]);
		}
		printf("\n");
	}
}

*/


/*
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b;
		scanf("%d%d",&a,&b);
		int i,j=0,sum=0,n;
		string s;
		vector<int> v;
		getline(cin,s);
		getline(cin,s);
		for(i=0;i<s.length();i++){
			sum++;
			if(s[i]!=s[i+1]){
				v.push_back(sum);
				sum=0;
			}
		}
		for(i=0;i<v.size();i++)
		printf("%d ",v[i]);
		printf("\n");
//		cout<<s<<endl;
	}
}
*/


/*
#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define CI  int ttt;cin>>ttt;while(ttt--)
#define DUO int nnn; while(!scanf("%d",&nnn))
#define ll long long
#define fo(i,b) for(int i=0;i<b;i++)
#define foo(i,b) for(int i=0;i<=b;i++)
#define fa(i,a,b) for(int i=a;i<b;i++)
#define faa(i,a,b) for(int i=a;i<=b;i++)
#define fb(i,b,a) for(int i=b;i>a;i--)
#define fbb(i,b,a) for(int i=b;i>a;i--)
bool cmp(int a,int b)
{
return a>b;		//降序
//return a<b;	//升序
}
const ll mod=1e+9;
int main(){
	CI{
		int n,x,i,j;
		scanf("%d%d",&n,&x);
		int a[n+9];
		//vector<int> b;
		int b[n+9];
		fo(i,n){
			scanf("%d",&a[i]);
		}
		fo(i,n){
			scanf("%d",&b[i]);
		}
		sort(a,a+n);
		sort(b,b+n,greater<int>());
		for(i=0;i<n;i++){
			if(a[i]+b[i]>x){
				printf("No\n");
				break;
			}
		}
		if(i==n){
			printf("Yes\n");
		}
	}
}
*/



/*
#include<bits/stdc++.h>
using namespace std;
//#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define T  int tt;cin>>tt;while(tt--)
#define DUO int nnn; while(!scanf("%d",&nnn))
#define ll long long
#define fo(i,b) for(int i=0;i<b;i++)
#define foo(i,b) for(int i=0;i<=b;i++)
#define fa(i,a,b) for(int i=a;i<b;i++)
#define faa(i,a,b) for(int i=a;i<=b;i++)
#define fd(i,b,a) for(int i=b;i>a;i--)
#define fdd(i,b,a) for(int i=b;i>a;i--)
const ll mod=1e+9;
int main() {
	stack<char> s;
	s.push('a');
	s.push('l');
	cout<<s.top()<<endl;s.pop();
	cout<<s.top()<<endl;

	s.push('a');
	s.push('a');
	cout<<s.empty()<<endl;
}
*/

/*
#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define CI  int ttt;cin>>ttt;while(ttt--)
#define DUO int nnn; while(!scanf("%d",&nnn))
#define ll long long
#define fo(i,b) for(int i=0;i<b;i++)
#define foo(i,b) for(int i=0;i<=b;i++)
#define fa(i,a,b) for(int i=a;i<b;i++)
#define faa(i,a,b) for(int i=a;i<=b;i++)
#define fb(i,b,a) for(int i=b;i>a;i--)
#define fbb(i,b,a) for(int i=b;i>a;i--)
const ll mod=1e+9;
bool cmp(int a,int b) {
	return a>b;		//降序
//return a<b;	//升序
}
int i,j;
int main() {
	//IOS;
	string a;
	cin>>a;
	stack<char> s;
	int maxn=0;
	fo(i, a.size()) {
		int sum=0;
		fa(j,i,a.size()) {
			if(a[j]=='(')s.push(a[i]);
			if(a[j]=='[')s.push(a[i]);
			if(a[j]=='{')s.push(a[i]);
			if(s.size()==0)break;
			if(a[j]==')'&&s.top()=='(')s.pop(),sum+=2;
			if(a[j]==']'&&s.top()=='[')s.pop(),sum+=2;
			if(a[j]=='}'&&s.top()=='{')s.pop(),sum+=2;
		}
		while(s.size()!=0)
			s.pop();
		fo(k,j,s)
		maxn=max(maxn,sum);
	}
	cout<<maxn<<endl;
	//cout<<a.size()<<endl;
}

*/


/*
#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define CI  int ttt;cin>>ttt;while(ttt--)
#define DUO int nnn; while(!scanf("%d",&nnn))
#define ll long long
#define fo(i,b) for(int i=0;i<b;i++)
#define foo(i,b) for(int i=0;i<=b;i++)
#define fa(i,a,b) for(int i=a;i<b;i++)
#define faa(i,a,b) for(int i=a;i<=b;i++)
#define fb(i,b,a) for(int i=b;i>a;i--)
#define fbb(i,b,a) for(int i=b;i>a;i--)
const ll mod=1e+9;
bool cmp(int a,int b) {
	return a>b;		//降序
//return a<b;	//升序
}
int i,j;
int main() {
	//IOS;
	DUO {
		stack<char> s;
		string str;
		cin>>str;
		s.push(str[0]);
		fa(i,1, str.size()) {
			if(s.size()==0) {
				s.push(str[i]);
			} else {
				if(s.top()=='o') {
					if(str[i]=='o') {
						s.pop();
						if(s.size()==0)
							s.push('O');
						else {
							if(s.top()='O') {
								s.pop();
							} else s.push('O');
						}
					} else {
						s.push(str[i]);
					}
				} else {
					if(s.top()=='O') {
						if(s.size()==0)
							s.push('O');
						else if(str[i]=='O')s.pop();
						else s.push(str[i]);
					}
				}
			}
			//if(s.size()!=0)cout<<i+1<<" "<<s.top()<<endl;
		}
		while(s.size()!=0) {
			cout<<s.top();
			//cout<<"111";
			s.pop();
		}
		cout<<endl;
	}
}

*/




/*
#include<bits/stdc++.h>
using namespace std;
#define T  int ttt;cin>>ttt;while(ttt--)
#define DUO int nnn; while(!scanf("%d",&nnn))
#define ll long long
const ll mod=1e+9;
bool cmp(int a,int b)
{
return a>b;		//降序
//return a<b;	//升序
}
int i,j;
int main(){
	//IOS;
	int n;
	cin>>n;
	int a[n+9];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	sort(a,a+n);
	int ans=0,ji=1;
	for(i=a[n-1];i>1;i--){
		int sum=0;
		for(j=0;j<n;j++){
			if(a[j]%i==0)sum++;
		}
		if(ans<sum){
			//cout<<i<<" ";
			ans=sum;
			ji=i;
		}
	}
	cout<<ji<<endl;
}
*/



/*
#include<bits/stdc++.h>
using namespace std;
#define T  int ttt;cin>>ttt;while(ttt--)
#define DUO int nnn; while(!scanf("%d",&nnn))
#define ll long long
const ll mod=1e+9;
bool cmp(int a,int b) {
	return a>b;		//降序
//return a<b;	//升序
}
int i,j;
int main() {
	//IOS;
	int m,k=0,n,ans,sum=0,a[20];
	cin>>m;
	n=m;
	i=0;
	while(n) {
		sum+=n%10;
		if(n%10!=3)a[i++]=n%10;
		n=n/10;
		k++;
	}
	if(sum%3==0) {
		cout<<0<<endl;
		return 0;
	}
	j=0;
	while(sum%3!=0) {

	}
	if(k<=ans)
		cout<<ans<<endl;
	else cout<<"-1"<<endl;
}
*/


/*
#include<bits/stdc++.h>
using namespace std;
#define T  int ttt;cin>>ttt;while(ttt--)
#define DUO int nnn; while(!scanf("%d",&nnn))
#define ll long long
const ll mod=1e+9;
bool cmp(int a,int b) {
	return a>b;		//降序
//return a<b;	//升序
}
int i,j;

#define MAXN 10000000
int maps[100][100];
int s[100];//用来存储点到原点的距离 假设 点由数字 1-100 表示
int flag[100];//用来判断点是否计算过

void init() {
	int i,j;
	memset(flag,-1,sizeof(flag));
	for (i=0; i<100; i++)
		for (j=0; j<100; j++) {
			if (i==j)
				maps[i][j] = 0;
			else
				maps[i][j] = MAXN;
		}
}
void dijkstra(int x,int n) { //X 表示 起始点 ,n表示点的数量
	int i,j,k;
	for (i=1; i<=n; i++)
		s[i] = maps[x][i];
	s[x] = 0;
	flag[x] = 1;
	for (i=1; i<=n; i++) {
		int min = MAXN;
		for (j=1; j<=n; j++) {
			if (flag[j]==-1 && min > s[j]) {
				min = s[j]; //记录最小值
				k = j; // 记录最小值的点
			}
		}
		flag[k] = 1;//标记最小值的点 该点距离起始点已是最短距离
		for (j=1; j<=n; j++) {
			if (flag[j]!=1&&s[k]+maps[k][j] < s[j]) {
				s[j] = min + maps[k][j];
			}
		}
	}
}
int main() {
	//IOS;

}
*/


/*
#include<bits/stdc++.h>
using namespace std;
#define T  int ttt;cin>>ttt;while(ttt--)
#define DUO int nnn; while(!scanf("%d",&nnn))
#define ll long long
const ll mod=1e+9;
bool cmp(int a,int b) {
	return a>b;		//降序
//return a<b;	//升序
}
int i,j;
int main() {
	//IOS;
	T {
		int n;
		cin>>n;
		int a[n+9],maxn;
		for(i=0; i<n; i++)
			scanf("%d",&a[i]);
		maxn=a[0];
		for(i=0; i<n; i++){
			if(a[i]==n)break;
		}
		if(i==0||i==n-1){
			cout<<"NO"<<endl;
		}
		else {
			cout<<"YES"<<endl;
			printf("%d %d %d\n",i,i+1,i+2);
		}
	}
}
*/


/*
#include<bits/stdc++.h>
using namespace std;
#define T  int ttt;cin>>ttt;while(ttt--)
#define DUO int nnn; while(!scanf("%d",&nnn))
#define ll long long
const ll mod=1e+9;
bool cmp(int a,int b) {
	return a>b;		//降序
//return a<b;	//升序
}
int i,j;
int main() {
	//IOS;
	int n;
	cin>>n;
	int a[n+9];
	ll sum=0;
	for(i=0; i<n; i++) {
		scanf("%d",&a[i]);
	}
	int maxn=a[0],k=0;
	for(i=0; i<n; i++) {
		if(maxn<a[i]) {
			maxn=a[i];
			k=i;
		}
	}
	for(i=0; i<n; i++) {

	}

}
*/
/*
int GetMaxSequence(vector<int>& v) {
	stack<int> st;
	vector<int> vs(v.size()+1);
	vs[0] = 0;
	for (int i = 1; i < vs.size(); i++) {
		vs[i] = vs[i - 1] + v[i-1];
	}
	v.push_back(-1);
	int top, start, end, ret = 0;
	for (int i = 0; i < v.size(); i++) {
		if (st.empty() || v[st.top()] <= v[i]) {
			st.push(i);
		} else {
			while (!st.empty() && v[st.top()] > v[i]) {
				top = st.top();
				st.pop();
				int tmp = vs[i] - vs[top];
				tmp = tmp * v[top];
				if (tmp > ret) {
					ret = tmp;
					start = top+1;
					end = i;
				}
			}
			st.push(top);
			v[top] = v[i];
		}
	}
	return ret;
}
*/

/*
#include<bits/stdc++.h>
using namespace std;
#define T  int ttt;cin>>ttt;while(ttt--)
#define DUO int nnn; while(!scanf("%d",&nnn))
#define ll long long
const ll mod=1e+9;
bool cmp(int a,int b) {
	return a>b;		//降序
//return a<b;	//升序
}

int FieldSum(vector<int>& v) {
	v.push_back(1e8);
	stack<int> st;
	int sum = 0;
	for (int i = 0; i < (int)v.size(); i++) {
		if (st.empty() || v[st.top()] > v[i]) {
			st.push(i);
		} else {
			cout<<i+1<<endl;
			while (!st.empty() && v[st.top()] <= v[i]) {
				int top = st.top();
				st.pop();
				cout<<i+1<<" "<<top+1<<endl;
				sum += (i - top - 1);
			}
			st.push(i);
		}
	}
	//cout<<st.top()<<endl;
	return sum;
}
// 4 3 7 1
int i,j;
int main() {
	//IOS;
	vector<int> a;
	int n;
	cin>>n;
	for(i=0; i<n; i++) {
		int m;
		cin>>m;
		a.push_back(m);
	}
	cout<<FieldSum(a);
}
*/

/*
#include<bits/stdc++.h>
using namespace std;
#define T  int ttt;cin>>ttt;while(ttt--)
#define DUO int nnn; while(!scanf("%d",&nnn))
#define ll long long
const ll mod=1e+9;
bool cmp(int a,int b) {
	return a>b;		//降序
//return a<b;	//升序
}
int i,j;
int main() {
	//IOS;
	T {
		int n,l1,r1,l2,r2,l,r;
		cin>>n;
		set<int>a;
		for(i=0;i<n;i++){
			int m;
			scanf("%d",&m);
			a.insert(m);
		}
		if(a.size()==n)cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
}
*/


/*
#include<bits/stdc++.h>
using namespace std;
#define T  int ttt;cin>>ttt;while(ttt--)
#define DUO int nnn; while(!scanf("%d",&nnn))
#define ll long long
const ll mod=1e+9;
const int N=1e6+9;
struct node {
	int d,v;
} b[N];

bool cmp(node a,node b) {
	if(a.v==b.v)return a.d<b.d;
	return a.v>b.v;
}

int i,j;
int main() {
	//IOS;

	int n,m;
	cin>>n>>m;
	int a[n+9];
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0; i<m; i++)
		cin>>b[i].d;
	for(i=0; i<m; i++)
		cin>>b[i].v;
	sort(b,b+m,cmp);
	sort(a,a+n);
	int ans=0;
//	for(i=0;i<m;i++)
//		printf("%d %d\n",b[i].d,b[i].v);

	int l=n-1,r=0;
	while(1) {
		if(a[l]>b[r].d){
			//if(b[r].v>0)
			ans+=b[r].v;
			l--;
		}
		else r++;
		if(l<0||r>=m)break;
	}

	cout<<ans<<endl;
}
*/


/*
#include<bits/stdc++.h>
using namespace std;
#define T  int ttt;cin>>ttt;while(ttt--)
#define DUO int nnn; while(!scanf("%d",&nnn))
#define ll long long
const ll mod=1e+9;
bool cmp(int a,int b)
{
return a>b;		//降序
//return a<b;	//升序
}
int i,j;
int main(){
	//IOS;
	int m;
	cin>>m;
	for(i=0;i<m;i++){

	}
}
*/



/*
#include<bits/stdc++.h>
using namespace std;
#define T  int ttt;cin>>ttt;while(ttt--)
#define DUO int nnn; while(!scanf("%d",&nnn))
#define ll long long
const ll mod=1e+9;
bool cmp(int a,int b) {
	return a>b;		//降序
//return a<b;	//升序
}
int i,j;
int main() {
	//IOS;
	char s[99];
	cin>>s;
	int sum=0;
	int a[20]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	char b[20]="10x98765432";
	for(i=14;i>5;i--){
		s[i+2]=s[i];
	}
	s[6]='1';
	s[7]='9';
	for(i=0;i<17;i++)
		sum+=(s[i]-'0')*a[i];
	sum%=11;
	s[17]=b[sum];
	s[18]=0;
	cout<<s<<endl;
}
*/

/*
#include<bits/stdc++.h>
using namespace std;
#define T  int ttt;cin>>ttt;while(ttt--)
#define DUO int nnn; while(!scanf("%d",&nnn))
#define ll long long
const ll mod=1e+9;
bool cmp(int a,int b) {
	return a>b;		//降序
//return a<b;	//升序
}
int i,j;
int main(){
	T{
		int n,c0,c1,h;
		cin>>n>>c0>>c1>>h;
		string s;
		cin>>s;
		int a=0,b=0,minn,m;
		for(i=0;i<s.size();i++){
			if(s[i]=='0')a++;
			else b++;
		}
		minn=c0*a+b*c1;
		m=c0*a+b*c1;
		for(i=0;i<a;i++){
			m+=+h-c0+c1;
			minn=min(minn,m);
		}
		m=c0*a+b*c1;
		for(i=0;i<b;i++){
			m+=+h-c1+c0;
			minn=min(minn,m);
		}
		cout<<minn<<endl;
	}
}
*/

/*
#include<bits/stdc++.h>
using namespace std;
#define T  int ttt;cin>>ttt;while(ttt--)
#define DUO int nnn; while(!scanf("%d",&nnn))
#define ll long long
const ll mod=1e+9;
const ll N=2e5+9;
bool cmp(int a,int b) {
	return a>b;		//降序
//return a<b;	//升序
}
int i,j;
int main() {
	T {
		int n,k;
		cin>>n>>k;
		int a[200000+9];
		for(i=1; i<=n*k; i++)
			scanf("%d",&a[i]);
		sort(a,a+n*k);
		ll sum=0;
		for(i=ceil(n/2); i<=n*k; i+=n) {
			sum+=a[i];
			cout<<i<<" ";
		}
		cout<<endl;
		cout<<sum<<endl;
	}
}
*/



/*
#include<bits/stdc++.h>
using namespace std;
#define T  int ttt;cin>>ttt;while(ttt--)
#define DUO int nnn; while(!scanf("%d",&nnn))
#define ll long long
const ll mod=1e+9;
const ll N=2e5+9;
bool cmp(int a,int b) {
	return a>b;		//降序
//return a<b;	//升序
}
int i,j;
int main() {
	T {
		int n,m;
		cin>>n>>m;
		int a[n+9][m+9],sumz=0,sum0=0,sumf=0,minn,sum=0;
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				scanf("%d",&a[i][j]);
				if(i==0&&j==0)minn=abs(a[i][j]);
				else minn=min(minn,abs(a[i][j]));
				if(a[i][j]>0)sumz++;
				else if(a[i][j]==0) sum0++;
				else sumf++;
			}
		}

		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				sum+=abs(a[i][j]);
			}
		}
		//cout<<sum<<endl;
		if(sum0>0)cout<<sum<<endl;
		else if(sumf%2==1)cout<<sum-minn*2<<endl;
		else cout<<sum<<endl;
	}
}
*/

/*
#include<bits/stdc++.h>
using namespace std;
#define T  int ttt;cin>>ttt;while(ttt--)
#define DUO int nnn; while(!scanf("%d",&nnn))
#define ll long long
const ll mod=1e+9;
const ll N=2e5+9;
bool cmp(int a,int b) {
	return a>b;		//?μDò
//return a<b;	//éyDò
}
int i,j;

int main() {
	T {
		int n;
		cin>>n;
		int a[n+9],value=-1;
		map<int,int> m;
		for(i=0; i<n; i++) {
			scanf("%d",&a[i]);
			m[a[i]]++;
		}
		int flag=0;
		std::map<int,int>::iterator it;

		for(it=m.begin(); it!=m.end(); it++) {
			if(it->second==1){
				break;
			}
		}
		if(it==m.end())cout<<"-1"<<endl;
		else for(i=0; i<n; i++) {
				if(it->first==a[i]){
					cout<<i+1<<endl;
					break;
				}
			}
	}
}
*/


/*
#include<bits/stdc++.h>
using namespace std;
#define T  int ttt;cin>>ttt;while(ttt--)
#define DUO int nnn; while(!scanf("%d",&nnn))
#define ll long long
const ll mod=1e+9;
bool cmp(int a,int b)
{
return a>b;		//降序
//return a<b;	//升序
}
int i,j;
int main(){
	//IOS;
	T{
		int n,k;
		cin>>n>>k;
		int a[n+9],b[n+9][2],ji=0,maxn=0;
		memset(b,0,sizeof(b));
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
			b[a[i]]++;
		}
		for(i=1;i<=100;i++){
			if(maxn<b[i]){
				maxn=b[i];
				ji=b[i];
			}
		}

	}
}
*/

/*
#include<bits/stdc++.h>
using namespace std;
#define T  int ttt;cin>>ttt;while(ttt--)
#define DUO int nnn; while(!scanf("%d",&nnn))
#define ll long long
const ll mod=1e+9;
bool cmp(int a,int b)
{
return a>b;		//降序
//return a<b;	//升序
}
int ans=1e9;

void dfs(int sum,int ci,int x){
	if(ci>x)return;
	if(sum==x){
		ans=min(ans,ci);
		return;
	}
	dfs(sum-1,ci+1,x);
	dfs(sum+1+ci,ci+1,x);
}

int i,j;
int main(){
	//IOS;
	T{
		ans=1e9;
		int x;
		cin>>x;
		dfs(0,0,x);
		cout<<ans<<endl;
	}
}
*/


/*
#include<bits/stdc++.h>
using namespace std;
#define T  int ttt;cin>>ttt;while(ttt--)
#define DUO int nnn; while(!scanf("%d",&nnn))
#define ll long long
const ll mod=1e+9;
bool cmp(int a,int b)
{
return a>b;		//降序
//return a<b;	//升序
}
int i,j;
int main(){
	//IOS;
	T{
		int x;
		cin>>x;
		int sum=0;
		for(i=0;;i++){
			sum+=i;
			if(sum>=x)break;
		}
		if(sum==x)cout<<i<<endl;
		else {
			int cha;
			cha=sum-x-1;
			if(cha<=0){
				i++;
				sum+=i;
			}
			cout<<i<<endl;
		}
	}
}
*/


/*
#include<bits/stdc++.h>
using namespace std;
#define T  int ttt;cin>>ttt;while(ttt--)
#define DUO int nnn; while(!scanf("%d",&nnn))
#define ll long long
const ll mod=1e+9;
bool cmp(int a,int b)
{
return a>b;		//降序
//return a<b;	//升序
}
int i,j;
int main(){
	//IOS;
	T{
		int x,y;
		cin>>x>>y;
		cout<<x-1<<" "<<y<<endl;
	}
}
*/


/*
#include<bits/stdc++.h>
using namespace std;
#define T  int ttt;cin>>ttt;while(ttt--)
#define DUO int nnn; while(!scanf("%d",&nnn))
#define ll long long
const ll mod=1e+9;
bool cmp(int a,int b) {
	return a>b;		//降序
//return a<b;	//升序
}
int i,j;
int main() {
	int n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	int a[n+9];
	for(i=0; i<n; i++)
		a[i]=s[i]-'a'+1;
	sort(a,a+n);
	int sum=a[0],f=a[0];
	k--;
	for(i=1; i<n; i++) {
		if(k==0)break;
		if(a[i]-f>1) {
			f=a[i];
			sum+=f;
			k--;
		}
	}
	if(k>0)cout<<"-1"<<endl;
	else cout<<sum<<endl;
}
*/


/*
#include<bits/stdc++.h>
using namespace std;
#define T  int ttt;cin>>ttt;while(ttt--)
#define DUO int nnn; while(!scanf("%d",&nnn))
#define ll long long
const ll mod=1e+9;
bool cmp(int a,int b)
{
return a>b;		//降序
//return a<b;	//升序
}
int i,j;
int main(){
	//IOS;
	string s;
	cin>>s;
	T{
		char q[40000++9];
		scanf("%s",q);
		getchar();
		if(q[0]=='A'){
			string m;
			cin>>m;
			s=s+m;
		}
		if(q[0]=='I'){
			int n,k=0;
			scanf("%d",&n);
			getchar();
			string ss,s2=s;
			cin>>ss;
			for(i=n-1;k<ss.size();i++){
				s[i]=ss[k];
			}
		}
	}

}
*/


/*
#include<bits/stdc++.h>
using namespace std;
#define T  int ttt;cin>>ttt;while(ttt--)
#define DUO int nnn; while(!scanf("%d",&nnn))
#define ll long long
const ll mod=1000007;
const int N=100000;
const int maxn=1000000+9;
int i,j;
int s[maxn];
void init_set() {
	for(i=1; i<=maxn; i++)
		s[i]=i;
}
int find_set(int x) {
	return x==s[x]?x:find_set(s[x]);
}
void union_set(int x,int y) {
	x=find_set(x);
	y=find_set(y);
	if(x!=y)s[x]=s[y];
}
int main() {
	//IOS;
	int n,m,x,y,k;
	cin>>m>>n>>k;
	init_set();
	for(i=1; i<=k; i++) {
		cin>>x>>y;
		union_set(x,y);
	}
	int ans=0;
	for(i=1; i<=n*m; i++)
		if(s[i]==i)
			ans++;
	cout<<ans<<endl;
}
*/



/*
#include<bits/stdc++.h>
using namespace std;
#define T  int ttt;cin>>ttt;while(ttt--)
#define DUO int nnn; while(!scanf("%d",&nnn))
#define ll long long
ll mod=1e+9;
int i,j;
ll ksc(ll x,ll y) {
	ll ans=0;
	x=x%mod;
	while(y) {
		if(y&1)
			ans=(ans+x)%mod;
		x=(x+x)%mod;
		y>>=1;
	}
	return ans;
}
ll F(ll x,ll y) {
	ll ans=1;
	x=x%mod;
	while(y) {
		if(y&1)
			ans=ksc(x,ans)%mod;
		x=ksc(x,x)%mod;
		y>>=1;
	}
	return ans;
}
int main() {
	//IOS;
	T {
		ll a,b;
		cin>>a>>b>>mod;
		cout<<F(a,b)<<endl;
	}
}

*/


/*
57284938291657 827493857294857
*/

/*
#include<bits/stdc++.h>
using namespace std;
#define T  int ttt;cin>>ttt;while(ttt--)
#define DUO int nnn; while(!scanf("%d",&nnn))
#define ll long long
const ll mod=1e+9;
int i,j;
inline void read(__int128 &X) {			//  int128的输入
	X = 0;
	int w=0;
	char ch=0;
	while(!isdigit(ch)) {
		w|=ch=='-';
		ch=getchar();
	}
	while(isdigit(ch)) X=(X<<3)+(X<<1)+(ch^48),ch=getchar();
	if(w)X=-X;
}
void print(__int128 x) {				//int128的输出
	if(x<0) {
		putchar('-');
		x=-x;
	}
	if(x>9) print(x/10);
	putchar(x%10+'0');
}
__int128 F(__int128 x,__int128 y,__int128 p) {
	__int128 ans=1;
	x=x%p;
	while(y) {
		if(y&1)
			ans=ans*x%p;
		x=x*x%p;
		y>>=1;
	}
	return ans;
}
int main() {
	//IOS;
	T {
		__int128 a,b,p;
		read(a);
		read(b);
		read(p);
		print(F(a,b,p));
		cout<<endl;
	}
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
#define T  int ttt;cin>>ttt;while(ttt--)
#define DUO int nnn; while(!scanf("%d",&nnn))
#define ll long long
const ll mod=1e+9;
int i,j;
string s[30];
string f(int i) {
	if(i==1) return "A";
	char a=i+'A'-1;
	return f(i-1)+a+f(i-1);
}
int main() {
	int n;
	cin>>n;
	cout<<f(n)<<endl;
}
*/

/*
#include<bits/stdc++.h>
using namespace std;
#define T  int ttt;cin>>ttt;while(ttt--)
#define DUO int nnn; while(!scanf("%d",&nnn))
#define ll long long
const ll mod=1e+9;
int i,j;
int main() {
	T {
		int n,q;
		cin>>n>>q;
		int a[n+9];
		for(i=1; i<=n; i++)
			scanf("%d",&a[i]);
		for(int k =0; k<q; k++) {
			int x,ans1,ans2=0,ans3,chu=1;
			cin>>x;
			if(x==1)ans3=a[2],chu=2;
			else ans3=a[1];
			if(x==1)ans1=a[2];
			else ans1=a[1];
			for(i=1; i<=n; i++) {
				if(i!=x) {
					ans1=a[i]&ans1;
				}
				if(i!=x) {
					ans2=ans2|a[i];
				}
				if(i!=x&&i!=chu) {
					ans3=ans3^a[i];
				}
			}
			printf("%d %d %d\n",ans1,ans2,ans3);
		}
	}
}
*/

/*
#include<bits/stdc++.h>
using namespace std;
#define T  int ttt;cin>>ttt;while(ttt--)
#define DUO int nnn; while(!scanf("%d",&nnn))
#define ll long long
const ll mod=1e+9;
const ll maxn=1e5+9;
int i,j;
int a[maxn];
int ans1[maxn],ans2[maxn],ans3[maxn],chu=1;
int main() {
	T {
		int n,q;
		cin>>n>>q;
		for(i=1; i<=n; i++)
			scanf("%d",&a[i]);
		for(i=1; i<=n; i++) {
			chu=1;
			if(i==1) {
				ans1[i]=a[2];
				ans3[i]=a[2],chu=i;
				chu=2;
			} else {
				ans1[i]=a[1];
				ans3[i]=a[1];
			}
			if(i!=) {
				ans1[i]=ans1[i]&a[i];
				ans2[i]=ans2[i]|a[i];
				if(i!=chu) {
					ans3[k]=ans3[k]^a[i];
				}
			}
		}
		for(i=1; i<=n; i++) {
			int x;
			cin>>x;
			printf("%d %d %d\n",ans1[x],ans2[x],ans3[x]);
		}
	}
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
#define T  int ttt;cin>>ttt;while(ttt--)
#define DUO int nnn; while(!scanf("%d",&nnn))
#define ll long long
const ll mod=1e+9;
const int maxn=1e4+9;
int i,j;
int main() {
	//IOS;
	T {
		int n;
		cin>>n;
		string s[n+9],s1="*";
		for(i=1; i<=n; i++) {
			for(j=1; j<=n; j++) {
				s[i][j]='*';
			}
		}
		if(n%2==0) {
			for(i=n; i>0; i--) {
				for(j=n-i+1; j<n; j++) {
					s[i][j]=' ';
				}
			}
		} else {
			for(i=2; i<=n; i++) {
				for(j=2; j<=i; j++) {
					s[i][j]=' ';
				}
			}
		}
		if(n%5==0) {
			for(i=5; i<=n; i++) {
				for(j=1; j<=n; j++)
					printf("%c",s[i][j]);
				printf("\n");
			}
		} else {
			for(i=1; i<=n; i++) {
				for(j=1; j<=n; j++)
					printf("%c",s[i][j]);
				printf("\n");
			}
		}
        printf("\n");

	}
}
*/


/*
#include<bits/stdc++.h>
using namespace std;
#define T  int ttt;cin>>ttt;while(ttt--)
#define DUO int nnn; while(!scanf("%d",&nnn))
#define ll long long
const ll mod=1e+9;
const int maxn=1e3+9;
int i,j;
int main() {
	//IOS;
	T {
		int n;
		cin>>n;
		char s[maxn][maxn];
		for(i=1; i<=n; i++) {
			for(j=1; j<=n; j++) {
				s[i][j]='*';
			}
		}
		if(n%2==0) {
			for(i=n; i>0; i--) {
				for(j=n-i+1; j<n; j++) {
					s[i][j]=' ';
				}
			}
		} else {
			for(i=2; i<=n; i++) {
				for(j=2; j<=i; j++) {
					s[i][j]=' ';
				}
			}
		}
		if(n%5==0) {
			for(i=5; i<=n; i++) {
				for(j=1; j<=n; j++)
					printf("%c",s[i][j]);
				printf("\n");
			}
		} else {
			for(i=1; i<=n; i++) {
				for(j=1; j<=n; j++)
					printf("%c",s[i][j]);
				printf("\n");
			}
		}
        printf("\n");
	}
}
*/

/*
#include<bits/stdc++.h>
using namespace std;
#define T  int ttt;cin>>ttt;while(ttt--)
#define DUO int nnn; while(!scanf("%d",&nnn))
#define ll long long
ll mod=1e+9;
int i,j;
ll ksc(ll x,ll y) {
	ll ans=0;
	x=x%mod;
	while(y) {
		if(y&1)
			ans=(ans+x)%mod;
		x=(x+x)%mod;
		y>>=1;
	}
	return ans;
}
ll fastPower(ll x,ll y) {
	ll ans=1;
	x=x%mod;
	while(y) {
		if(y&1)
			ans=x*ans%mod;
		x=x*x%mod;
		y>>=1;
	}
	return ans;
}
int main() {
	//IOS;
	T {
		ll a,b;
		cin>>a>>b>>mod;
		cout<<fastPower(a,b)<<endl;
	}
}
*/

/*
#include<bits/stdc++.h>
using namespace std;
#define T  int ttt;cin>>ttt;while(ttt--)
#define ll long long
const ll mod=1e+9;
int i,j;
int main() {
    int n;
    while(~scanf("%d",&n)){
    	int ans=0;
    	if(n==1){
    		cout<<ans<<endl;
    		continue;
		}
    	for(i=0;;i++){
    		if(n%2!=0) n-=1,ans++;
    		n/=2;
			ans++;
    		if(n==1)break;
		}
		cout<<ans<<endl;
    }
}
*/

/*
#include<bits/stdc++.h>
using namespace std;
#define T  int ttt;cin>>ttt;while(ttt--)
#define DUO int nnn; while(~scanf("%d",&nnn))
#define ll long long
const ll mod=1e+9;
bool cmp(int a,int b)
{
return a>b;		//降序
//return a<b;	//升序
}
int i,j;
int main(){
	//IOS;
	string s1,s2;
	cin>>s1>>s2;
	for(i=0;i<s1.length();i++){
		for(j=0;j<s2.length();j++){
			if(s1[i]==s2[j]){
				cout<<"YES"<<endl;
				return ;
			}
		}
	}
}
*/

/*
#include<bits/stdc++.h>
using namespace std;
#define T  int ttt;cin>>ttt;while(ttt--)
#define ll long long
const ll mod=1e+9;
int i,j;
int main() {
	//IOS;
	char a[10][10];
	for(i=0; i<3; i++) {
		scanf("%s",a[i]);
	}
	int zi=0,mu=0;
	for(i=0; i<3; i++) {
		for(j=0; j<3; j++) {
			if(a[i][j]=='.') {
				mu++;
			}
		}
	}
	if(a[0][0]=='.'&&a[0][1]=='.'&&a[0][2]=='.') zi++;
	if(a[1][0]=='.'&&a[1][1]=='.'&&a[1][2]=='.') zi++;
	if(a[2][0]=='.'&&a[2][1]=='.'&&a[2][2]=='.') zi++;

	if(a[0][0]=='.'&&a[1][0]=='.'&&a[2][0]=='.') zi++;
	if(a[0][1]=='.'&&a[1][1]=='.'&&a[2][1]=='.') zi++;
	if(a[0][2]=='.'&&a[1][2]=='.'&&a[2][2]=='.') zi++;

	if(a[0][0]=='.'&&a[1][1]=='.'&&a[2][2]=='.') zi++;
	if(a[0][2]=='.'&&a[1][1]=='.'&&a[2][0]=='.') zi++;
	int cnt1=1,cnt2=1,ans;
	for(i=1;i<=mu;i++){
		cnt1*=i;
	}
	for(i=1;i<=mu-3;i++){
		cnt2*=i;
	}
	ans=cnt1/(6*cnt2);
	cout<<zi/__gcd(zi,ans)<<" "<<ans/__gcd(zi,ans)<<endl;
}
*/



/*
#include<bits/stdc++.h>
using namespace std;
#define T  int ttt;cin>>ttt;while(ttt--)
#define DUO int nnn; while(~scanf("%d",&nnn))
#define ll long long
const ll mod=1e+9;
bool cmp(int a,int b)
{
return a>b;		//降序
//return a<b;	//升序
}
int i,j;
int main(){
	//IOS;
	string s;
	cin>>s;
	ll sum=0;
	ll a[10]={1};
	for(i=1;i<=8;i++){
		a[i]=a[i-1]*16;
	}
//	for(i=0;i<10;i++){
//		cout<<a[i]<<" ";
//	}
	for(i=s.size()-1;i>=0;i--){
		if(s[i]>='A'){
			sum+=(s[i]-'A'+10)*a[s.size()-i-1];
		}
		else {
			sum+=(s[i]-'0')*a[s.size()-i-1];
		}
	}
	cout<<sum<<endl;
}
*/

/*
#include<bits/stdc++.h>
using namespace std;
#define T  int ttt;cin>>ttt;while(ttt--)
#define DUO int nnn; while(~scanf("%d",&nnn))
#define ll long long
const ll mod=1e+9;
bool cmp(int a,int b)
{
return a>b;		//降序
//return a<b;	//升序
}
int i,j;
int main(){
	int n;
	cin>>n;
	string s;
	int a[8]={1};
	for(i=1;i<8;i++){
		a[i]=a[i-1]*16;
	}
//	for(i=0;i<8;i++){
//		cout<<a[i]<<endl;
//	}
	j=0;
	if(n==0){
		cout<<"0";
		return 0;
	}
	for(i=7;i>=0;i--){
		if(n>=a[i]){
			if(n/a[i]>9){
				s[j++]=n/a[i]-10+'A';
			}
			else {
				s[j++]=n/a[i]+'0';
				//cout<<s[0]<<endl;
				//cout<<i<<endl;
			}
			n-=n/a[i]*a[i];
			if(n==0&&i!=0){
				for(;i>0;i--){
					s[j++]='0';
				}
			}
		}
	}
	for(i=0;i<=j;i++)
	cout<<s[i];
}
*/


/*
#include<bits/stdc++.h>
using namespace std;
#define T  int ttt;cin>>ttt;while(ttt--)
#define DUO int nnn; while(~scanf("%d",&nnn))
#define ll long long
const ll mod=1e+9;
bool cmp(int a,int b) {
	return a>b;		//降序
//return a<b;	//升序
}
int i,j;
int main() {
	//IOS;
	int n;
	cin>>n;
	string s;
	int a[8]= {1};
	for(i=1; i<8; i++) {
		a[i]=a[i-1]*16;
	}
	j=0;
	int flag=1;
	for(i=7; i>=0; i--) {
		if(n>=a[i]) {
			if(n/a[i]>9) {
				s[j++]=n/a[i]-10+'A';
			} else {
				s[j++]=n/a[i]+'0';
			}
			n-=n/a[i]*a[i];
			flag=0;
		}
		if(flag==0){
			for(int k=;k<i;k++){
				s[k]='0';
			}
		}

	}
	if(j==0)s[0]='0',j++;
	for(i=0;i<s.size();i++)
	cout<<s[i];
}
*/

/*
5
9
12 15
10 6 8
2 18 9 5
19 7 10 4 16
*/

/*
#include<bits/stdc++.h>
using namespace std;
#define T  int ttt;cin>>ttt;while(ttt--)
#define DUO int nnn; while(~scanf("%d",&nnn))
#define ll long long
const ll mod=1e+9;
const int maxn=50;
bool cmp(int a,int b) {
	return a>b;		//降序
//return a<b;	//升序
}
int i,j;
int data[maxn][maxn];
int dp[maxn][maxn];
int main() {
	//IOS;
	int n;
	cin>>n;
	for(i=0; i<n; i++) {
		for(j=0; j<=i; j++) {
			cin>>data[i][j];
			dp[i][j]=data[i][j];
		}
	}

	for(i=0; i<n; i++) {
		dp[n-1][j]=data[n-1][j];
	}
	int temp;
	for(i=n-1; i>=0; i--) {
		for(j=0; j<=i; j++) {
			temp=max(dp[i+1][j],dp[i+1][j+1]);
			dp[i][j]=temp+dp[i][j];
		}
	}
	cout << "最大路径和：" << dp[0][0] << '\n';
	cout << "最大路径：" << data[0][0];
	int j = 0, node_value;
	for (i = 1; i < n; ++i) {
		node_value = dp[i - 1][j] - data[i - 1][j];
//		 如果node_value == dp[i][j]则说明下一步应该是data[i][j]；
//		如果node_value == dp[i][j + 1]则说明下一步应该是data[i][j + 1]
		if (node_value == dp[i][j + 1]) j++;
		cout << "->" << data[i][j];
	}
	cout << endl;
}
*/


/*

#include<bits/stdc++.h>
using namespace std;
#define T  int ttt;cin>>ttt;while(ttt--)
#define DUO int nnn; while(~scanf("%d",&nnn))
#define ll long long
const ll mod=1e+9;
const int maxn=50;
bool cmp(int a,int b) {
	return a>b;		//降序
//return a<b;	//升序
}
int i,j;
int main() {
	//IOS;

}


*/


/*
5
9
12 15
10 6 8
2 18 9 5
19 7 10 4 16
*/

/*
#include <iostream>
#include <algorithm>

using namespace std;

const int N = 50;
//为了算法写起来简单，
这里定义一个足够大的数用来存储数据(为了避免运算过程中动态申请空间，
这样的话算法看起来比较麻烦，这里只是为了算法看起来简单)
int data[N][N];//存储数塔原始数据
int dp[N][N];//存储动态规划过程中的数据
int n;//塔的层数

void tower_walk()
{
    // dp初始化
    for (int i = 0; i < n; ++i)
    {
        dp[n - 1][i] = data[n - 1][i];
    }
    int temp_max;
    for (int i = n - 1; i >= 0; --i)
    {
        for (int j = 0; j <= i; ++j)
        {
            // 使用递推公式计算dp的值
            temp_max = max(dp[i + 1][j], dp[i + 1][j + 1]);
            dp[i][j] = temp_max + data[i][j];
        }
    }
}

void print_result()
{
    cout << "最大路径和：" << dp[0][0] << '\n';
    int node_value;
    // 首先输出塔顶元素
    cout << "最大路径：" << data[0][0];
    int j = 0;
    for (int i = 1; i < n; ++i)
    {
        node_value = dp[i - 1][j] - data[i - 1][j];
        if (node_value == dp[i][j + 1]) ++j;
        cout << "->" << data[i][j];
    }
    cout << endl;
}

int main()
{
    cout << "输入塔的层数：";
    cin >> n;
    cout << "输入塔的节点数据(第i层有i个节点)：\n";
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j <= i; ++j)
        {
            cin >> data[i][j];
        }
    }

    tower_walk();
    print_result();
}

*/


/*
#include<bits/stdc++.h>
using namespace std;
#define T  int ttt;cin>>ttt;while(ttt--)
#define DUO int nnn; while(~scanf("%d",&nnn))
#define ll long long
const ll mod=1e+9;
const int N=100000+9;
int i,j;
int data[N][19];
int dp[N][19];
int main() {
	//IOS;
	int n;
	cin>>n;
	int maxn=0;
//	memset(dp,0,sizeof(dp));
//	memset(data,0,sizeof(data));
for(i=1; i<=n; i++) {
	int x,y;
	scanf("%d%d",&x,&y);
	maxn=max(maxn,y);
	data[y][x]++;
	dp[y][x]++;
}
//for(i=n-1;i>=0;i--){
//	dp[n-1][i]=data[n-1][i];
//}
int temp;
for(i=maxn-1; i>=0; i--) {
	for(j=0; j<=10; j++) {
		temp=max(dp[i+1][j],max(dp[i+1][j+1],dp[i+1][j-1]));
		dp[i][j]=temp+data[i][j];
	}
}
//	int sum=0;
//	for(i=0;i<=maxn;i++){
//		for(j=0;j<=10;j++){
////			cout<<data[i][j]<<" ";
//			cout<<dp[i][j]<<" ";
////			if(data[i][j]==1)sum++;
//		}
//		cout<<endl;
//	}
//	cout<<sum<<endl;
cout<<dp[0][5]<<endl;
}
*/

/*
#include<bits/stdc++.h>
using namespace std;
#define T  int ttt;cin>>ttt;while(ttt--)
#define DUO int nnn; while(~scanf("%d",&nnn))
#define ll long long
const ll mod=1e+9;
const int N=100000+9;
int i,j;
int data[N][19];
int dp[N][19];
int main() {
	//IOS;
	int n;
	scanf("%d",&n);
	int maxn=0;
	for(i=1; i<=n; i++) {
		int x,y;
		scanf("%d%d",&x,&y);
		maxn=max(maxn,y);
		data[y][x]++;
		dp[y][x]++;
	}
//	for(i=n-1;i>=0;i--){
//		dp[n-1][i]=data[n-1][i];
//	}
	int temp;
	for(i=maxn-1; i>=0; i--) {
		for(j=0; j<=10; j++) {
			temp=max(dp[i+1][j],max(dp[i+1][j+1],dp[i+1][j-1]));
			dp[i][j]=temp+data[i][j];
		}
	}
//	for(i=0;i<=maxn;i++){
//		for(j=0;j<=10;j++){
////			cout<<data[i][j]<<" ";
//			cout<<dp[i][j]<<" ";
//		}
//		cout<<endl;
//	}
	cout<<dp[0][5]<<endl;
}
*/



/*
#include<bits/stdc++.h>
using namespace std;
#define T  int ttt;cin>>ttt;while(ttt--)
#define DUO int nnn; while(~scanf("%d",&nnn))
#define ll long long
const ll mod=1e+9;
const int N=100000+9;
int i,j;
int data[N][19];
int dp[N][19];
int main() {
	//IOS;
	int n;
	while(scanf("%d",&n)==1&&n!=0) {
        memset(data,0,sizeof(data));
        memset(dp,0,sizeof(data));;
		int maxn=0;
		for(i=1; i<=n; i++) {
			int x,y;
			scanf("%d%d",&x,&y);
			maxn=max(maxn,y);
			data[y][x]++;
			dp[y][x]++;
		}

//	for(i=0;i<=10;i++){
//		dp[maxn][i]=data[maxn][i];
//	}
		int temp;
		for(i=maxn-1; i>=0; i--) {
			for(j=0; j<=10; j++) {
				temp=max(dp[i+1][j],max(dp[i+1][j+1],dp[i+1][j-1]));
				dp[i][j]=temp+data[i][j];
			}
		}
	for(i=0;i<=maxn;i++){
		for(j=0;j<=10;j++){
//			cout<<data[i][j]<<" ";
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}
		cout<<dp[0][5]<<endl;
	}
}
*/

/*
4  4
1 2 0
3 4 1
1 4 0
2 3 0

*/

/*
#include<bits/stdc++.h>
using namespace std;
#define T  int ttt;cin>>ttt;while(ttt--)
#define DUO int nnn; while(~scanf("%d",&nnn))
#define ll long long
const ll mod=1e+9;
const int N=2e5+9;
int n,m;
struct node{
    int x,y,z;
}a[N];
bool cmp(node a,node b)
{
    return a.z<b.z;
}
int i,j;
int s[N];
void init_set() {					//初始化
	for(i=1; i<=n; i++)
		s[i]=i;
}
int find_set(int x){				//查找
    if(x!=s[x])s[x]=find_set(s[x]);
    return s[x];
}
void union_set(int x,int y) {		//合并
	x=find_set(x);
	y=find_set(y);
	if(x!=y)s[x]=s[y];
}
int main(){
	//IOS;
    cin>>n>>m;
	init_set();
    for(i=1; i<=m; i++) {		//k行输入数据
		scanf("%d%d%d",&a[i].x,&a[i].y,&a[i].z);
	}
    sort(a+1,a+m+1,cmp);
	int sum=0;
	for(i=1;i<=m;i++){
		union_set(a[i].x,a[i].y);
		if(find_set(a[i].x)!=find_set(a[i].y)){
			sum+=a[i].z;
		}
	}
	int flag=0;
	for(i=2;i<=n;i++){
		if(find_set(i)!=find_set(n)){
			flag=1;
		}
	}
    if(flag==0)cout<<sum<<endl;
    else cout<<"-1"<<endl;
}

*/

/*
#include<bits/stdc++.h>
using namespace std;
#define T  int ttt;cin>>ttt;while(ttt--)
#define DUO int nnn; while(~scanf("%d",&nnn))
#define ll long long
const ll mod=1e+9;
int i,j;
int main() {
	//IOS;
	T{
		int n;
		cin>>n;
		int a[n+9];
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		ll sum1=0,sum2=0;
		for(i=0;i<n;i++){
			if(i%2==0){
				sum2+=a[i];
			}
			else {
				sum1+=a[i];
			}
		}
		cout<<max(sum1,sum2)<<endl;
	}
}
*/


/*
5
1 100 101 100 1
*/
/*
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
const int N = 1e5 + 100;
int n;
int sa[N], dp[N][2];
int main() {
        scanf("%d", &n);
        for (int i = 1; i <= n; i++) {
            scanf("%d", &sa[i]);
        }

        for (int i = 1; i <= n; i++){
        	dp[i][0] = max(dp[i - 1][0], dp[i - 1][1]);
            dp[i][1] = dp[i - 1][0] + sa[i];
		}

        for (int i = 1; i <= n; i++){
        	printf("%d %d\n",dp[i][0], dp[i][1]);
		}
//        printf("%d\n", max(dp[n][0], dp[n][1]));
    return 0;
}
*/




/*
#include<bits/stdc++.h>
using namespace std;
#define T  int ttt;cin>>ttt;while(ttt--)
#define DUO int nnn; while(~scanf("%d",&nnn))
#define ll long long
const ll mod=1e+9;
int i,j;
int a[40]= {1};
int b[40];
int main() {
	for(i=1; i<40; i++) {
		a[i]=a[i-1]*2;
		if(a[i]>2e7)break;
	}
	int n;
	cin>>n;
	j=0;
	int flag=0;
	for(i=24; i>=0; i--) {
		if(n==1) flag=1;
		if(n/a[i]>0) {
			b[j++]=i;
			n=n-a[i];
		}
	}
	if(n!=0)flag=1;
//	cout<<"j="<<j<<endl;
	if(flag==0) {
		for(i=0; i<j; i++) {
			cout<<a[b[i]]<<" ";
		}
	}
	else {
		cout<<"-1";
	}
}

*/



/*
#include<bits/stdc++.h>
using namespace std;
#define T  int ttt;cin>>ttt;while(ttt--)
#define DUO int nnn; while(~scanf("%d",&nnn))
#define ll long long
const ll mod=1e+9;
int i,j;
int main() {
	int n;
	cin>>n;
	int a[n+9];
	for(i=0; i<n; i++) {
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++) {
		int b;
		scanf("%d",&b);
		a[i]-=b;
	}
//	for(i=0;i<n;i++){
//		printf("%d ",a[i]);
//	}
	ll sum=0;
	for(j=0;j<n;j++) {
		int maxn=a[0],ji=0;
		for(i=0; i<n; i++) {
			if(maxn<a[i]) {
				maxn=a[i];
				ji=i;
			}
		}
//		printf("%d %d\n",ji,maxn);
		if(maxn==0)break;
		for(i=0; ji-i>=0; i++) {
			if(a[ji-i]<0) {
				a[ji]--;
				a[ji-i]++;
				sum+=i;
				break;
			}
		}
		for(i=0;ji<n-1; i++) {
			if(a[ji+i]<0) {
				a[ji]--;
				a[ji+i]++;
				sum+=i;
				break;
			}
		}
//		for(i=0;i<n;i++){
//			printf("%d ",a[i]);
//		}
//		printf("\n");
	}
	cout<<sum<<endl;
}

*/

/*
#include<bits/stdc++.h>
using namespace std;
#define T  int ttt;cin>>ttt;while(ttt--)
#define DUO int nnn; while(~scanf("%d",&nnn))
#define ll long long
const ll mod=1e+9;
const int N=1e5+9;
int i,j;
int main() {
	//IOS;
	int n;
	cin>>n;
	int a[n+9];
	int sum1=0,sum2=0,sum3=0,flag=0;
	for(i=0; i<n; i++) {
		scanf("%d",&a[i]);
		if(a[i]==25)sum1++;
		if(a[i]==50) {
			if(sum1>0) {
				sum1--;
				sum2++;
			} else flag=1;
		}
		if(a[i]==100) {
			if(sum1>0) {
				if(sum2>0) {
					sum2--;
					sum1--;
					sum3++;
				}
				else {
					if(sum1>=3){
						sum1-=3;
						sum3++;
					}else flag=1;
				}
			} else  flag=1;
		}
	}
	if(flag==0) cout<<"YES";
	else cout<<"NO";
}
*/

/*
#include<bits/stdc++.h>
using namespace std;
#define T  int ttt;cin>>ttt;while(ttt--)
#define DUO int nnn; while(~scanf("%d",&nnn))
#define ll long long
const ll mod=1e+9;
const int N=1e5+9;
int i,j;
double r(double r)
{
    return (r > 0.0) ? floor(r + 0.5) : ceil(r - 0.5);
}
int main() {
//    int n;
//    double a[n+9],sum=0,ans;
//    while(~scanf("%d",&n)){
//        sum=0;
//        for(i=0;i<n;i++){
//            scanf("%lf",&a[i]);
//            sum+=a[i];
//        }
//        ans=sum/n;
//        cout<<ans<<endl;
//    }
}
*/




//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define DUO int nnn; while(~scanf("%d",&nnn))
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int i,j;
//int main() {
////	cout<<(5^2);
//	/*
//	stack<int> a;
//	int sum=s[0]-'0';
//	for(i=1;i<s.size();i++){
//	    a.push(s[i]);
//	    if(a.top()=='^'){
//	        a.pop();
//	        a.push(a.top()^s[i]);
//	        i++;
//	    }
//
//	}*/
//	string s,s1;
//	cin>>s;
//	j=0;
//	for(i=0; i<s.size(); i++) {
//		if(s[i]=='^') {
//			//cout<<(s[i-1]^s[i+1])<<endl;
//			s1[j-1]=(s[i-1]^s[i+1])+'0';
//			i++;
//
//		} else s1[j++]=s[i];
//	}
//	s1[j]=0;
////	for(i=0; i<5; i++) {
////		cout<<s1[i];
////	}
//	cout<<s[4];
//	ll sum=0;
//	for(i=0; i<s1.size(); i++,j++) {
//		if(s1[i]=='+') {
//			sum+=s1[i-1]+s1[i+1];
//			i++;
//		}
//		if(s1[i]=='-') {
//			sum-=s1[i-1]+s1[i+1];
//			i++;
//		}
//	}
//	cout<<sum<<endl;
//}





//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define DUO int nnn; while(~scanf("%d",&nnn))
//#define ll long long
//const ll mod=1e+9;
//int i,j;
//int N=1e5;
//char a[100000][2];
//void inputfile()
//{
//	FILE *f;
//	if((f=fopen("output2.txt","a"))!=NULL)
//	{
//		fprintf(f,"%c\n",a[0][0]);
//		printf("文件写入成功!\n");
//		fclose(f);
//	}
//	else
//		printf("文件打开失败!\n");
//}
//int main(){
//	int m;
//	i=0;
//	int sum1=0,sum2=0;
//	while(cin>>m){
//		if(m==0)sum1++;
//		if(m==1)sum2++;
//		if(sum1>=21&&sum1>sum2){
//			a[0][0]='A';
//			inputfile();
//			sum1=0;sum2=0;
//		}
//		if(sum2>=21&&sum1<sum2){
//			a[0][0]='B';
//			inputfile();
//			sum1=0;sum2=0;
//		}
//	}
//}



//#include<bits/stdc++.h>
//using namespace std;
//int N=1e3;
//int a[10000000];
//void inputfile()
//{
//	FILE *f;
//	int i;
//	if((f=fopen("input3.txt","w+"))!=NULL)
//	{
//		for(int i=0;i<N;i++)
//			fprintf(f,"%d\n",a[i]);
//			printf("文件写入成功!\n");
//		fclose(f);
//	}
//	else
//		printf("文件打开失败!\n");
//}
//int main()
//{
//	srand(time(NULL));
//	for(int i=0;i<N;i++)
//		a[i]=rand()%2;
//	inputfile();
//}



//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define DUO int nnn; while(~scanf("%d",&nnn))
//#define ll long long
//const ll mod=1e+9;
//int i,j;
//int main(){
//	int m;
//	i=0;
//	int sum1=0,sum2=0;
//	while(cin>>m){
//		if(m==0)sum1++;
//		if(m==1)sum2++;
//		if(sum1>=21&&sum1>sum2){
//			printf("A\n");
//			sum1=0;sum2=0;
//		}
//		if(sum2>=21&&sum1<sum2){
//			printf("B\n");
//			sum1=0;sum2=0;
//		}
//	}
//}

/*
#include<bits/stdc++.h>
using namespace std;
#define T  int ttt;cin>>ttt;while(ttt--)
#define DUO int nnn; while(~scanf("%d",&nnn))
#define ll long long
const ll mod=1e+9;
const int N=1e5+9;
int i,j;
struct node{
	int x,y;
}a[10000+9];
int main(){
	//IOS;
	T{
		int n;
		scanf("%d",&n);
		int sum=0;
		for(i=0;i<n;i++){
			scanf("%d%d",&a[i].x,&a[i].y);
			if(a[i].x==a[i].y){
				sum+=a[i].x;
				a[i].y=0;
				a[i].x=0;
			}
		}


	}
}
*/



//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define DUO int nnn; while(~scanf("%d",&nnn))
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int i,j;
//int main(){
//	//IOS;
//	T{
//		int a,b,c,m=0;
//		cin>>a>>b>>c;
//		while(a>0&&b>0&&c>0){
//
//			if(m!=7){
//				if(a<b) swap(a,b);
//			if(a<c) swap(a,c);
//			if(b<c)swap(b,c);
//				a--;
//				m++;
//			}
//			else {
//				a--;b--;c--;
//				m=0;
//			}
//			if(a==b&&b==c)break;
//		}
////		cout<<a<<b<<c;
//		if(a==b&&b==c) cout<<"YES"<<endl;
//		else cout<<"NO"<<endl;
//	}
//}



/*
#include<bits/stdc++.h>
using namespace std;
#define T  int ttt;cin>>ttt;while(ttt--)
#define DUO int nnn; while(~scanf("%d",&nnn))
#define ll long long
const ll mod=1e+9;
const int N=1e5+9;
int i,j;
int main(){
	T{
		int a[5];
		for(i=0;i<3;i++){
			scanf("%d",&a[i]);
		}
		sort(a,a+3);
		ll sum=a[0]+a[1]+a[2];
		if(sum%9==0&&(sum-a[0])/6<=a[0]) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
*/



/*
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		ll a,b,c;
		scanf("%lld%lld%lld",&a,&b,&c);
		ll sum=a+b+c;
		ll minn=min(a,min(b,c));
		if(sum%9==0&&sum/9<=minn)printf("YES\n");
		else printf("NO\n");
	}
}
*/




//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define DUO int nnn; while(~scanf("%d",&nnn))
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int i,j;
//int main(){
//	T{
//		int a,b,n,m=1,z,ans=0;
//		int ji=0;
//		cin>>a>>b>>n;
//		for(i=0;i<=n;i++){
//			z=a*i+b;
//			m=1;
//			for(j=0;j<i;j++){
//				m*=2;
//			}
//			if(i==0) ans=1.0*z/m;
//			else {
//				if(ans<1.0*z/m) {
//					ji=i;
//					ans=1.0*z/m;
//				}
//			}
//		}
//		z=a*ji+b;
//		m=1;
//		for(j=0;j<ji;j++){
//			m*=2;
//		}
//		if(m<0){
//			m=-m;
//			cout<<"-"<<z/__gcd(z,m)<<m/__gcd(z,m)<<endl;
//		}
//		else {
//			cout<<z/__gcd(z,m)<<m/__gcd(z,m)<<endl;
//		}
//	}
//}





/*
#include<bits/stdc++.h>
using namespace std;
#define T  int ttt;cin>>ttt;while(ttt--)
#define DUO int nnn; while(~scanf("%d",&nnn))
#define ll long long
const ll mod=1e+9;
const int N=1e5+9;
int i,j;
int a[100],b[100];
int main(){
	a[1]=1;
	b[1]=1;
	for(i=2;i<60;i++){
		a[i]=b[i-1];
		b[i]=a[i-1]+b[i-1];
	}
	T{
		int n;
		cin>>n;
		cout<<a[n]<<" "<<b[n]<<endl;
	}
}

*/

/*
#include<bits/stdc++.h>
using namespace std;
#define T  int ttt;cin>>ttt;while(ttt--)
#define DUO int nnn; while(~scanf("%d",&nnn))
#define ll long long
const ll mod=1e+9;
const int N=1e5+9;
int i,j,k;
int a[12];
int f() {
	memset(a,0,sizeof(a));
	a[i/100]++;
	a[i/10%10]++;
	a[i%10]++;

	a[j/100]++;
	a[j/10%10]++;
	a[j%10]++;

	a[k/100]++;
	a[k/10%10]++;
	a[k%10]++;

	int ii;
	for(ii=1; ii<=10; ii++) {
		if(a[ii]==0)break;
	}
//	if(i==125&&j==376&&k==498) {
//		for(ii=1; ii<10; ii++) {
//			cout<<a[ii]<<" ";
////			if(a[ii]==0)break;
//		}
//		cout<<endl;
//	}
	if(ii==10&&a[0]==0) return 1;
	else return 0;
}

int main() {
	for(i=125; i<1000; i++) {
		for(j=i+1; j<1000; j++) {
			for(k=j+1; k<1000; k++) {
				if(i+j+k>999)break;
				if(i+j+k==999) {
//					printf("%d %d %d\n",i,j,k);
					if(f()==1) {
						printf("%d %d %d\n",i,j,k);
					}
				}
			}
		}
	}
}

*/


/*
#include<bits/stdc++.h>
using namespace std;
#define T  int ttt;cin>>ttt;while(ttt--)
#define DUO int nnn; while(~scanf("%d",&nnn))
#define ll long long
const ll mod=1e+9;
const int N=1e5+9;
int i,j;
int main(){
	//IOS;
	T{
		int n,x;
		cin>>n>>x;
		int a[n+9];
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		a[n]=x;
		sort(a,a+n+1);
		int flag=1,flag2=1;
		for(i=0;i<n;i++){
			if(a[i]==a[i+1]){
				if(flag==1){
					flag=0;
					x=a[i];
				}
				else {
					flag2=0;
				}
			}
		}
		if(flag2==0) cout<<"0"<<endl;
		else if(flag==1) cout<<x<<endl;
		else cout<<a[n+1]<<endl;
	}
}
*/

//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define DUO int nnn; while(~scanf("%d",&nnn))
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int i,j;
//int main(){
//
//}



//#include<bits/stdc++.h>
//using namespace std;
//double dp[100100][2];
//double a[100100];
//int main()
//{
//    int t;
//    scanf("%d",&t);
//    for(int i=1;i<=t;i++)
//        scanf("%lf",&a[i]);
//    dp[0][1]=1;
//    dp[0][0]=1;
//    double maxx=-1e3;
//    for(int i=1;i<=t;i++)
//    {
//        dp[i][0]=a[i];
//        dp[i][1]=max(dp[i-1][1],dp[i-1][0])*a[i];
//        maxx=max(maxx,max(dp[i][0],dp[i][1]));
//    }
////    printf("%.2lf\n",maxx);
//	for(int i=1;i<=t;i++)
//		cout<<dp[i][0]<<" "<<dp[i][1]<<endl;
//}


//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define DUO int nnn; while(~scanf("%d",&nnn))
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int i,j;
//int main() {
//	//IOS;
//	T {
//		int n;
//		cin>>n;
//		string s;
//		cin>>s;
//		int sum1=0,sum2=0,flat=1;
//		for(i=s.size()-1; i>=0; i--) {
//			if(s[i]!=')')flat=0;
//			if(flat==1) {
//				if(s[i]==')') sum1++;
//			}
//			else sum2++;
//		}
//		if(sum1>sum2)cout<<"Yes"<<endl;
//		else cout<<"No"<<endl;
//	}
//}



//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define DUO int nnn; while(~scanf("%d",&nnn))
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int i,j;
//int main() {
//	//IOS;
//	T {
//		ll n;
//		cin>>n;
//		while(1){
//			int wei=0;
//			ll a=n;
//			while(a=a/10){
//				wei++;
//			}
//			a=n;
//			for(i=0;i<=wei;i++){
//				if(a%10==0){
//					a=a/10;
//					continue;
//				}
//				if(n%(a%10)!=0)break;
//				a=a/10;
////				cout<<a<<endl;
//			}
//			if(i==wei+1){
//				cout<<n<<endl;
//				break;
//			}
//			n++;
//		}
//	}
//}


//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define DUO int nnn; while(~scanf("%d",&nnn))
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int i,j;
//int main() {
//	//IOS;
//	T{
//		int m,n;
//		cin>>n>>m;
//		int a[m+9][2];
//		int b[m+9];
//		memset(b,0,sizeof(b));
//		for(i=1;i<=m;i++){
//			scanf("%d %d",&a[i][0],&a[i][1]);
//		}
//		int ans=0;
//		for(i=1;i<=m;i++){
//			if(a[i][0]==a[i][1])continue;
//			if(b[a[i][0]]!=0)ans++;
//			b[a[i][0]]++;
//			a[i][1]=a[i][0];
//
//		}
//		int sum=0;
//		for(i=1;i<=n;i++){
//			ans+=b[i];
//		}
//		cout<<ans<<endl;
//	}
//}

//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define DUO int nnn; while(~scanf("%d",&nnn))
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int i,j;
//int main(){
//	//IOS;
//	T{
//		int w,h,n;
//		cin>>w>>h>>n;
//		int sum=1,sum2=1;
//		while(w){
//			if(w==1)break;
//			if(w%2==0){
//				sum*=2;
//				w/=2;
//			}
//			else break;
//		}
//		while(h){
//			if(h==1)break;
//			if(h%2==0){
//				sum2*=2;
//				h/=2;
//			}
//			else break;
//		}
//		//cout<<sum*sum2<<endl;
//		if(sum*sum2>=n) cout<<"YES"<<endl;
//		else cout<<"NO"<<endl;
//	}
//}






//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define DUO int nnn; while(~scanf("%d",&nnn))
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int i,j;
//int main(){
//	//IOS;
//	T{
//		int n;
//		cin>>n;
//		int a[n+9],sum=0,sum2=0;
//		for(i=0;i<n;i++){
//			scanf("%d",&a[i]);
//		}
//		for(i=0;i<n;i++){
//			if(a[i]==1){
//				sum++;
//			}
//			if(a[i]==2){
//				sum2++;
//			}
//		}
//		int flag=1;
//		if(sum2%2==0){
//			if(sum%2==0){
//				flag=0;
//			}
//		}
//		else {
//			if(sum%2==0&&sum>=2&&(sum-2)%2==0){
//				flag=0;
//			}
//		}
//		if(flag==0)cout<<"YES"<<endl;
//		else cout<<"NO"<<endl;
//	}
//}




//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define DUO int nnn; while(~scanf("%d",&nnn))
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int i,j;
//int main(){
//	//IOS;
//	T{
//		int n;
//		cin>>n;
//		int a[n+9];
//		for(i=1;i<=n;i++){
//			scanf("%d",&a[i]);
//		}
//		int ans=0;
//		for(i=1;i<=n;i++){
//			int sum=0;
//			for(j=i;j<=n;){
//				sum+=a[j];
//				j+=a[j];
//			}
//			ans=max(ans,sum);
//		}
//		cout<<ans<<endl;
//	}
//}



//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define DUO int nnn; while(~scanf("%d",&nnn))
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int i,j;
//int main(){
//	//IOS;
//	T{
//		int n,x;
//		cin>>n>>x;
//		int a[n+9],b[n+9],c[n+9];
//		for(i=0;i<n;i++){
//			scanf("%d",&a[i]);
//		}
//		for(i=0;i<n;i++){
//			if(ceil((double)a[i]/n)>)
//		}
//	}
//}




//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define DUO int nnn; while(~scanf("%d",&nnn))
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int i,j;
//int main() {
//	//IOS;
//	int n;
//	cin>>n;
//	int a[n+9];
//	ll sum=0;
//	for(i=0; i<n; i++) {
//		scanf("%d",&a[i]);
//	}
//	sort(a,a+n);
//	for(i=0; i<n; i++) {
//		if(i<n/2) sum-=a[i];
//		else sum+=a[i];
//	}
//	if(n%2==1) sum-=a[n/2];
//	cout<<sum<<endl;
//}



//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define DUO int nnn; while(~scanf("%d",&nnn))
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int i,j;
//int main() {
//	//IOS;
//	int n,m;
//	cin>>n>>m;
//	int a[100+9][100+9];
//	int k=1;
//	int left = 0, right = n - 1;
//	int top = 0, bottom = m - 1;
//	while(left <= right || top <= bottom) {
//		for(i = left; i <= right && top <= bottom; i++) { //构造最上面一行
//			a[top][i] = k++;
//		}
//		top++;
//		for(i = top; i <= bottom && left <= right; i++) { //构造最右侧一列
//			a[i][right] = k++;
//		}
//		right--;
//		for(i = right; i >= left && top <= bottom; i--) { //构造最下面一行
//			a[bottom][i] = k++;
//		}
//		bottom--;
//		for(i = bottom; i >= top && left <= right; i--) { //构造最左侧一列
//			a[i][left] = k++;
//		}
//		left++;
//	}
//	for(i = 0; i < n; i++) {
//		for(j = 0; j < m; j++) cout<< a[i][j] << " ";
//		cout << endl;
//	}
//}

//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define DUO int nnn; while(~scanf("%d",&nnn))
//#define ll long long
//const ll mod=1e+9;
//const int N=500+9;
//int i,j;
//int dp[N][N];
//int data[N][N];
//int main(){
//	int n;
//	cin>>n;
//	memset(dp,0,sizeof(dp));
//	memset(data,0,sizeof(data));
//	for(i=1;i<=n;i++){
//		for(j=1;j<=i;j++){
//			cin>>data[i][j];
//			dp[i][j]=data[i][j];
//		}
//	}
//	for(i=n;i>0;i--){
//		for(j=1;j<=i;j++){
//			dp[i-1][j]+=max(dp[i][j],dp[i][j+1]);
//		}
//	}
//	for(i=0;i<=n+1;i++){
//		for(j=0;j<=i+1;j++){
//			cout<<dp[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//}


//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define DUO int nnn; while(~scanf("%d",&nnn))
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int i,j;
//char a[20+9][20+9];
//int v[20+9][20+9];
//int ans;
//int dx[4]=	{0,1,0,-1};
//int dy[4]=	{1,0,-1,0};
//int n,m;
//void dfs(int x,int y) {
//	for(int k=0;k<4;k++){
//		int tx,ty;
//		tx=dx[k]+x;
//		ty=dy[k]+y;
//		if(a[tx][ty]=='.'&&v[tx][ty]==0){
//			v[tx][ty]=1;
//			ans++;
//			dfs(tx,ty);
//		}
//	}
//	return;
//}
//int main() {
//	while(1) {
//		cin>>m>>n;
//		if(n==0&&m==0)break;
//		memset(v,0,sizeof(v));
//		ans=1;
//		for(i=0; i<n; i++) {
//			cin>>a[i];
//		}
//		int flag=1;
//		for(i=0; i<n; i++) {
//			for(j=0; j<m; j++) {
//				if(a[i][j]=='@') {
//					flag=0;
//					break;
//				}
//			}
//			if(flag==0)break;
//		}
//		v[i][j]=1;
//		dfs(i,j);
//		cout<<ans<<endl;
//	}
//}



//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define DUO int nnn; while(~scanf("%d",&nnn))
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int i,j;
//int b;
//string pan(int a) {
//	string s;
//	int c;
//	c=a%b;
//	if(a==0)break;
//	if(c>=10) s[k++]=('A'+c);
//	else s[k++]=('0'+c);
//	a/=b;
//}
//int main() {
//	int c,k=;
//	cin>>b;
////	b=10;
//	string s;
//	string s1;
//	for(i=1; i<=300; i++) {
//		a=i*i;
//		k=0;
//		s.clear();
//		while(1) {
//
//		}
//		int l,r;
//		l=0;
//		r=k-1;
//		while(1) {
//			if(l>=k||r<0)break;
//			if(s[l]!=s[r]) break;
//			l++;
//			r--;
//		}
//		if(l>r) {
//			s1.clear();
//			int k1=0;
//			a=i;
//			while(1) {
//				c=a%b;
//				if(a==0)break;
//				if(c>=10) s1[k1++]=('A'+c);
//				else s1[k1++]=('0'+c);
//				a/=b;
//			}
//			for(j=k1-1; j>=0; j--)
//				cout<<s1[j];
//			cout<<" ";
//			for(j=k-1; j>=0; j--)
//				cout<<s[j];
//			cout<<endl;
//		}
//	}
//}

//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define DUO int nnn; while(~scanf("%d",&nnn))
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int i,j;
//int b;
//string pan(int a) {
//	string s;
//	while(1) {
//		int c=a%b;
//		if(a==0)break;
//		if(c>=10) s+=('A'+c-10);
//		else s+=('0'+c);
//		a/=b;
//	}
//	reverse(s.begin(),s.end());
//	return s;
//}
//int main() {
//	int a,c,k;
//	cin>>b;
//	for(i=1; i<=300; i++) {
//		a=i*i;
//		string s=pan(a);
//		string s1=s;
//		reverse(s1.begin(),s1.end());
//		if(s==s1){
//			cout<<pan(i)<<" "<<s<<endl;
//		}
////		for(j=; j>=0; j--)
////			cout<<s1[j];
////		cout<<" ";
////
////		for(j=k-1; j>=0; j--)
////			cout<<s[j];
////		cout<<endl;
//	}
//}


//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define DUO int nnn; while(~scanf("%d",&nnn))
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int i,j;
//int main(){
//	int n,m;
//	cin>>n>>m;
//	int a[n+9];
//	for(i=0;i<n;i++){
//		scanf("%d",&a[i]);
//	}
//	double l = 0, r = 1e9, mid = (l + r) / 2;
//	while(1){
//		if(r - l < 1e-3)break;
//		int sum=0;
//		mid=(l + r) / 2;
//		for(i=0;i<n;i++){
//			sum+=a[i]/mid;
//		}
//		if(sum>=m){
//			l=mid;
//		}
//		else {
//			r=mid;
//		}
//	}
////	cout<<r;
//	printf("%.2lf\n",l);
//}

//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define DUO int nnn; while(~scanf("%d",&nnn))
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int i,j;
//int main() {
//	int n,k;
//	cin>>n>>k;
//	int h[n+9],w[n+9];
//	for(i=0; i<n; i++) {
//		cin>>h[i]>>w[i];
//	}
//	ll sum=0;
//	int a=1;
//	for(j=1; j<1000; j++) {
//		sum=0;
//		for(i=0; i<n; i++) {
//			sum+=(h[i]*w[i]/(j*j));
//		}
//		if(sum<=k) break;
//	}
//	cout<<j-1<<endl;
//}







//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define DUO int nnn; while(~scanf("%d",&nnn))
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int i,j;
//int main() {
//	int n,k;
//	cin>>n>>k;
//	int h[n+9],w[n+9];
//	for(i=0; i<n; i++) {
//		cin>>h[i]>>w[i];
//	}
//	int l=1,r=1e5,mid=(l+r+1)/2;
//	int sum=0;
//	while(1) {
//		if(r<=l)break;
//		sum=0;
//		for(i=0; i<n; i++) {
//			sum+=h[i]/mid*h[i]/mid;
//		}
//		cout<<sum<<" ";
//		if(sum<k) {
//			r=mid-1;
//		} else {
//			l=mid;
//		}
//		mid=(l+r+1)/2;
//		cout<<l<<" "<<r<<endl;
//	}
//	cout<<l<<endl;
//}



//#include <iostream>
//using namespace std;
//int const N = 100010;
//int w[N], h[N];//存储长、宽
//int n, k;
//
//bool chack(int a) {
//	int num = 0;//记录分成长度为 a 的巧克力数量
//	for (int i = 0; i < n; i++) {
//		num += (w[i] / a) * (h[i] / a);//每一大块可以分成的边长为 a 的巧克力数量
//		if (num >= k) {
//		cout<<num<<endl;
//		return true;//大于要求数量，返回真
//		}
//	}
//	cout<<num<<endl;
//	return false;
//}
//int main() {
//	cin >> n >> k;
//	for (int i = 0; i < n; i++) cin >> h[i] >> w[i];
//	int l = 1, r = 1e5;//小巧克力数量边长一定在 1 -- 100000 之间
//	while (l < r) { //二分小巧克力边长范围，找到符合要求的最大值
//		cout<<l<<" "<<r<<" ";
//		int mid = (l+r+1)/2;//因为l = mid ，所以 mid 取 l + r + 1 >> 1,为了防止加和越界，改写成 l + (r - l + 1 >> 1)
//		if (chack(mid)) l = mid;
//		else r = mid - 1;
//	}
//	cout << r;
//}


//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define DUO int nnn; while(~scanf("%d",&nnn))
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//struct Node{
//	int a,b,c,sum=0,h;
//}node[309];
//bool cmp(Node x,Node y){
//	if(x.sum==y.sum) {
//		if(x.a==y.a){
//			return x.h<y.h;
//		}
//		else return x.a>y.a;
//	}
//	else return x.sum>y.sum;
//}
//int main(){
//	int i,j;
//	int n;
//	cin>>n;
//	for(i=1;i<=n;i++){
//		node[i].h=i;
//		scanf("%d%d%d",&node[i].a,&node[i].b,&node[i].c);
//		node[i].sum=node[i].a+node[i].b+node[i].c;
//	}
//	sort(node+1,node+n+1,cmp);
//	for(i=1;i<=5;i++)
//		printf("%d %d\n",node[i].h,node[i].sum);
//}


//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define DUO int nnn; while(~scanf("%d",&nnn))
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int main(){
//	int i,j;
//	string s,s2;
//	cin>>s>>s2;
//
//}


//#include<bits/stdc++.h>
//using namespace std;
//#define ll long long
//inline long long read() {
//	long long x=0;
//	bool t=false;
//	char ch=getchar();
//	while((ch<'0'||ch>'9')&&ch!='-')ch=getchar();
//	if(ch=='-')t=true,ch=getchar();
//	while(ch<='9'&&ch>='0')x=x*10+ch-48,ch=getchar();
//	return t?-x:x;
//}
//int main() {
//	ll n;
//	ll k;
//	n=read();
//	k=read();
//	ll sum[n+50],a[n+50];
//	int maxx=0,flag=0;
//	for(int i=1; i<=n; i++) {
//		a[i]=read();
//		if(i==1)sum[i]=a[i];
//		else sum[i]=sum[i-1]+a[i];
//		if(sum[i]==k){
//			maxx=max(maxx,i);
//			cout<<i<<endl;
//		}
//	}
//	for(int i=1; i<=n; i++) {
//
//		if(sum[i]>k) {
//			int l=1,r=i;
//			while(l<r) {
//			 	int mid=(l+r+1)>>1;
//				if(sum[l]-sum[mid]<=k)l=mid;
//				else r=mid-1;
//				if(i==8)cout<<l<<" "<<r<<endl;
//			}
////			cout<<r<<endl;
//			if(sum[i]-sum[r]==k){
//				maxx=max(maxx,i-l);
//				cout<<maxx<<endl;
//			}
//		}
//	}
//	printf("%d\n",maxx);
//}


//#include<bits/stdc++.h>
//using namespace std;
//#define ll long long
//inline long long read()
//{
//    long long x=0;
//    bool t=false;
//    char ch=getchar();
//    while((ch<'0'||ch>'9')&&ch!='-')ch=getchar();
//    if(ch=='-')t=true,ch=getchar();
//    while(ch<='9'&&ch>='0')x=x*10+ch-48,ch=getchar();
//    return t?-x:x;
//}
//int main()
//{
//    ll n;
//    ll k;
//    n=read();
//    k=read();
//    ll sum[n+50],a[n+50];
//    int maxx=0,flag=0;
//    for(int i=1;i<=n;i++)
//    {
//        a[i]=read();
//        if(i==1)sum[i]=a[i];
//        else sum[i]=sum[i-1]+a[i];
//        if(sum[i]==k)maxx=max(maxx,i);
//    }
//    for(int i=1;i<=n;i++)
//    {
//        if(sum[i]>k)
//        {
//            int l=1,r=i;
//            while(l<r)
//            {
//                int mid=(l+r)>>1;
//                if(sum[i]-sum[mid]<=k)r=mid;
//                else l=mid+1;
//            }
//            if(i-l){
//                	flag=1;
//                	if(flag==1){
//                		cout<<l<<" "<<r<<endl;
//					}
//				}
//            if(sum[i]-sum[l]==k)maxx=max(maxx,i-l);
//        }
//    }
//    printf("%d\n",maxx);
//}





//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define DUO int nnn; while(~scanf("%d",&nnn))
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int a[200+9][2];
//double pan(int x,int y,int i){
//	return sqrt((pow(x-a[i][0],2)+pow(y-a[i][1],2)));
//}
//int main(){
//	int i,j;
//	int n;
//	cin>>n;
//	for(i=0;i<n;i++){
//		scanf("%d%d",&a[i][0],&a[i][1]);
//	}
//	int x,y;
//	for(x=1;x<=200;x++){
//		for(y=1;y<=200;y++){
//			double ju;
//			for(i=0;i<n;i++){
//				if(i==0) ju=pan(x,y,i);
//				else {
//					if(abs(ju-pan(x,y,i))>=1e-4)break;
//				}
//			}
//			if(i==n){
//				cout<<x<<" "<<y;
//				return 0;
//			}
//		}
//	}
//	cout<<"War is cruel."<<endl;
//}



//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define DUO int nnn; while(~scanf("%d",&nnn))
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//struct Node{
//	int x;
//	int id;
//}node[800000+9];
//bool cmp(Node m,Node n){
//	return m.x>n.x;
//}
//int main(){
//	int i,j;
//	int n;
//	cin>>n;
//	for(i=0;i<n;i++){
//		cin>>node[i].x;
//		node[i].id=i+1;
//	}
//	sort(node,node+n,cmp);
//	for(i=0;i<n;i++)
//	cout<<node[i].x<<" "<<node[i].id<<endl;
//	int ans=0;
//	for(i=1;i<n;i++){
//		if(node[i-1].id>node[i].id) ans++;
//	}
//	cout<<ans;
//}





////每日一题1532
//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define DUO int nnn; while(~scanf("%d",&nnn))
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int main(){
//	int i,j;
//	int n,m;
//	cin>>n>>m;
//	int a[n+9];
//	for(i=0;i<n;i++){
//		cin>>a[i];
//	}
//	sort(a,a+n);
////	for(i=0;i<n;i++){
////		cout<<a[i]<<" ";
////	}
//	int l=0,r=n;
//	while(1){
//		int mid=(l+r+1)/2;
//		if(l>r) break;
//		if(a[l]+a[r]>)
//	}
//}





//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define DUO int nnn; while(~scanf("%d",&nnn))
//#define ll long long
//const ll mod=1e+9;
//int N=1e5+9;
//int main() {
//	int i,j;
//	int n,N=5000;
//	int a[N];
//	int b[N];
//	int c[N];
////	n=20;
//	cin>>n;
//	memset(a,0,sizeof(a));
//	memset(b,0,sizeof(a));
//	memset(c,0,sizeof(a));
////	for(i=1;i<n;i++){
////		for(j=1;j<=i;j++){
////			if(i%j==0){
////				a[i]+=j;
////			}
////		}
////	}
//	int l,r;
//	for(i=1; i<=n; i++) {
//		for(l=1; l<=i; l=r+1) {
//			r=i/(i/l);
//			a[i]+=(i/l)*(r-l+1);
//		}
//	}
//	for(i=1; i<n; i++) {
//		b[i]=b[i-1]+a[i];
//		c[i]=c[i-1]+b[i];
//	}
////	for(i=1; i<n; i++) {
////		for(j=1; j<=i; j++) {
////			b[i]+=a[j];
////		}
////	}
////	for(i=1; i<n; i++) {
////		for(j=1; j<=i; j++) {
////			c[i]+=b[j];
////		}
////	}
//	for(i=1; i<n; i++) {
//		cout<<a[i]<<" "<<b[i]<<" "<<c[i]<<endl;
//	}
//}


//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define DUO int nnn; while(~scanf("%d",&nnn))
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int main(){
//	int i,j;
//	int n=20;
//	int l,r,sum=0;
//	for(l=1;r<=n;l=r+1){
//		r=n/(n/l);
//		sum+=(n/l)*(r-l+1);
////		cout<<sum<<endl;
//		printf("%d %d %d\n",sum,l,r);
//	}
////	cout<<sum<<endl;
//	printf("sum=%d %d %d\n",sum,l,r);
//}





//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define DUO int nnn; while(~scanf("%d",&nnn))
//#define ll long long
//const ll mod=1e+9;
//int main() {
//	int i,j;
//	int n,N=50000+9;
//	int a[N];
//	int b[N];
//	int c[N];
////	n=20;
//	cin>>n;
//	memset(a,0,sizeof(a));
//	memset(b,0,sizeof(a));
//	memset(c,0,sizeof(a));
////	for(i=1;i<n;i++){
////		for(j=1;j<=i;j++){
////			if(i%j==0){
////				a[i]+=j;
////			}
////		}
////	}
//	int l,r;
//	for(i=1; i<=n; i++) {
//		for(l=1; l<=i; l=r+1) {
//			r=i/(i/l);
//			a[i]+=(i/l)*(r-l+1);
//		}
//	}
//	for(i=1; i<=n; i++) {
//		b[i]=b[i-1]+a[i];
//		c[i]=c[i-1]+b[i];
//	}
////    cout<<c[n];
////	for(i=1; i<n; i++) {
////		for(j=1; j<=i; j++) {
////			b[i]+=a[j];
////		}
////	}
////	for(i=1; i<n; i++) {
////		for(j=1; j<=i; j++) {
////			c[i]+=b[j];
////		}
////	}
// 	for(i=1; i<=n; i++) {
// 		cout<<a[i]<<" "<<b[i]<<" "<<c[i]<<endl;
// 	}
//}


//#include<bits/stdc++.h>
//using namespace std;
//long long n, ans;
//int main() {
//	scanf("%d", &n);
//	long long t=-1,t2;
//	for(long long l = 1, r; l <= n; l = r+1) {
//		r = n/(n/l); // 区间最右边
//		printf("%d %d %d ,t=%d,t2=%d\n",r,(n/l),(r-l+1),t,t2); //因子，因子贡献次数，因子跳跃的大小
//		if(t==-1)
//			t2=r;
//		else t2=r*(r+1)/2-t*(t+1)/2;
//		ans += t2*(n/l) ;
//		printf("%d %d\n",t2,ans);//跳跃的因子的求和  答案
//		t=r;
//	}
//	//printf("%lld\n", ans);
//	long long aans=0;
//	t=-1;
//	for(long long l = 1, r; l <= ans; l = r+1) {
//		r = ans/(ans/l); // 区间最右边
//		//printf("%d %d %d\n",r,(n/l),(r-l+1));
//		if(t==-1)
//			t2=r;
//		else t2=r*(r+1)/2-t*(t+1)/2;
//		aans += t2*(ans/l) ;
//		//printf("%d %d\n",t2,ans);
//		t=r;
//	}
//	printf("%lld\n", aans);
//}



//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define DUO int nnn; while(~scanf("%d",&nnn))
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int main(){
//	int i,j;
//	T{
//		int n,k;
//		cin>>n>>k;
//		for(i=k+1;i<=n;i++){
//			cout<<i<<" ";
//		}
//		int a=n/2;
//		for(i=k-1;i>=0;i--){
//			if(i+i+1>k)cout<<i<<" ";
//		}
//		cout<<endl;
//	}
//}


//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define DUO int nnn; while(~scanf("%d",&nnn))
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int main(){
//	int i,j;
//	T{
//		int n,k;
//		cin>>n>>k;
//		cout<<n-1-(k-1)/2<<endl;
//		for(i=k+1;i<=n;i++){
//			cout<<i<<" ";
//		}
//		int a=n/2;
//		for(i=k-1;i>(k-1)/2;i--){
//			cout<<i<<" ";
//		}
//		cout<<endl;
//	}
//}

//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define DUO int nnn; while(~scanf("%d",&nnn))
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
////char s1[20]={'',1,2,3,4,5,6,7,8,9};
//int s2[20]= {0,1,5,-1,-1,2,-1,-1,8,-1};
//
//bool pan(char a) {
//	if(s2[a-'0']==-1)return false;
//	else return true;
//}
//void fan(char &a,char &b) {
//	char c=a;
//	a=s2[b-'0']+'0';
//	b=s2[c-'0']+'0';
//}
//int main() {
//	int i,j;
//	T {
//		int h,m;
//		cin>>h>>m;
//		string s;
//		cin>>s;
//		char a[3],b[3];
//		a[0]=s[0];
//		a[1]=s[1];
//		b[0]=s[3];
//		b[1]=s[4];
//		int flag=1;
//		while(1) {
//			if(a[0]=='0'&&a[1]=='0'&&b[0]=='0'&&b[1]=='0') break;
//			if(pan(b[0])&&pan(b[1])&&pan(a[0])&&pan(a[1])==1) {
//				char a1=b[0],a2=b[1];
//				fan(a1,a2);
//				int a3=(a1-'0')*10+a2-'0';
//				if(a3<h) flag=0;
//				if(flag==0) {
//					char b1=a[0],b2=a[1];
//					fan(b1,b2);
//					int b3=(b1-'0')*10+b2-'0';
//					if(b3<m) {
////					b[0]=a1,b[1]=a2;
////					a[0]=b1,a[1]=b2;
//						break;
//					}
//				}
//				flag=1;
//			}
//			b[1]++;
//			if(b[1]-'0'>=10)b[0]++,b[1]='0';
//
////			if(m<100) {
////				if(b[0]-'0'>=m/10)a[1]++,b[0]='0';
////			}
////			else {
////				int a5=(b[0]-'0')*10+b[1]-'0';
////				if(a5>=100) a[1]++,b[0]='0',b[1]='0';
////			}
//			int a5=(b[0]-'0')*10+b[1]-'0';
//			if(a5>=m) a[1]++,b[0]='0',b[1]='0';
////			cout<<a[0]<<a[1]<<":"<<b[0]<<b[1]<<endl;
//			if(a[1]-'0'>=10)a[0]++,a[1]='0';
////			if(h<100) {
////				if(a[0]-'0'>=h/10)a[0]='0',a[1]='0',b[0]='0',b[1]='0';
////			}
////			else {
////				int a5=(a[0]-'0')*10+a[1]-'0';
////				if(a5>=100) a[0]='0',a[1]='0',b[0]='0',b[1]='0';
////			}
//			int a6=(a[0]-'0')*10+a[1]-'0';
//			if(a6>=h) a[0]='0',a[1]='0',b[0]='0',b[1]='0';
//		}
//		cout<<a[0]<<a[1]<<":"<<b[0]<<b[1]<<endl;
//	}
//}


/*
1
51 3
30:01
*/





//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define DUO int nnn; while(~scanf("%d",&nnn))
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int main() {
//	int i,j;
//	int n;
//	cin>>n;
//	char a[25][25];
//	int flag=0;
//	for(i=0; i<n; i++) {
//		cin>>a[i];
//	}
//	int sum1=0,sum2=0;
//	for(i=0; i<n; i++) {
//		sum1=0,sum2=0;
//		int flag1=0,flag2=0;
//		for(j=0; j<n; j++) {
//			if(a[i][j]=='B'){
//				sum1++;
//				flag1++;
//				flag2=0;
//			}
//			else{
//				sum2++;
//				flag2++;
//				flag1=0;
//			}
//			if(flag1>=3||flag2>=3) flag=1;
//		}
//		if(sum1!=sum2)flag=1;
//	}
//
//	for(j=0; j<n; j++) {
//		sum1=0,sum2=0;
//		int flag1=0,flag2=0;
//		for(i=0; i<n; i++) {
//			if(a[i][j]=='B'){
//				sum1++;
//				flag1++;
//				flag2=0;
//			}
//			else{
//				sum2++;
//				flag2++;
//				flag1=0;
//			}
//			if(flag1>=3||flag2>=3) flag=1;
//		}
//		if(sum1!=sum2)flag=1;
//	}
//	if(flag==0) cout<<1;
//	else cout<<0;
//}

/*
6
BWBWWB
WBWBWB
WBBWBW
BBWBWW
BWWBBW
WWBWBB
*/






//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define DUO int nnn; while(~scanf("%d",&nnn))
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int main() {
//	int i,j;
//	int n;
//	cin>>n;
//	int a[n+9];
//	for(i=1; i<=n; i++) {
//		scanf("%d",&a[i]);
//	}
//	sort(a+1,a+n+1);
//	int l=1,r=n;
//	ll sum1=0,sum2=0;
//	while(1) {
//		if(a[l]==a[r])break;
//		int mid=(l+r+1)/2;
//		if(sum1+mid>sum2) {
//			for(i=mid+1; i<=r; i++) {
//				sum2+=a[i];
//			}
//			r=mid;
//		} else {
//			if(sum1+mid<sum2) {
//				for(i=l; i<mid; i++) {
//					sum1+=a[i];
//				}
//
//			}
//			l=mid;
//		}
//		cout<<l<<" "<<r<<" "<<sum1<<" "<<sum2<<endl;
////		cout<<l<<r<<endl;
//	}
////	cout<<l<<r<<endl;
//	if(sum1!=sum2) cout<<l+1<<endl;
//	else cout<<a[l]<<endl;
//}

/*
5
11
8
3
10
10
*/




//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define DUO int nnn; while(~scanf("%d",&nnn))
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int main() {
//	int i,j;
//	char a[1000+9][1000+9];
//	T {
//		int n;
//		cin>>n;
//		for(i=1; i<=n; i++) {
//			for(j=1; j<=n; j++) {
//				a[i][j]='*';
//			}
//		}
//		if(n%2==0) {
//			for(i=2; i<=n; i++) {
//				for(j=n-i+1; j<=n-1; j++) {
//					a[i][j]=' ';
//				}
//			}
//		} else {
//			for(i=2; i<=n; i++) {
//				for(j=2; j<=i; j++) {
//					a[i][j]=' ';
//				}
//			}
//		}
//		if(n%5==0) {
//			for(i=5; i<=n; i++) {
//				for(j=1; j<=n; j++) {
//					cout<<a[i][j];
//				}
//				cout<<endl;
//			}
//		} else{
//			for(i=1; i<=n; i++) {
//				for(j=1; j<=n; j++) {
//					cout<<a[i][j];
//				}
//				cout<<endl;
//			}
//		}
//		printf("\n");
//	}
//}



//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define DUO int nnn; while(~scanf("%d",&nnn))
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int main(){
//	int i,j;
//	T{
//		string s;
//		cin>>s;
//		int l,k;
//		cin>>l>>k;
//		string s1;
//		for(i=0;i<k;i++){
//			s1+=s[l+i-1];
//		}
////		cout<<s1<<endl;
//		for(i)
//	}
//}



//#include<bits/stdc++.h>
//using namespace std;
//#define ll long long
//ll a[100100];
//int n;
//ll sum1,sum2;
//void check(int x) {
//	sum1=0,sum2=0;
//	ll sum=0;
//	for(int i=1; i<=n; i++) {
//		if(a[i]<x)sum1+=a[i];
//		if(a[i]>x)sum2+=a[i];
//		if(a[i]==x)sum++;
//	}
//	if(sum%2==1)sum--;
////	sum1+=(x*(sum/2));
////	sum2+=(x*(sum/2));
//}
//int main() {
//	scanf("%d",&n);
//	for(int i=1; i<=n; i++)
//		scanf("%lld",&a[i]);
//	sort(a+1,a+1+n);
//	ll l=1,r=20000;
//	while(l<r) {
//		ll mid=(l+r)/2;
//		check(mid);
//		if(sum1==sum2)r=mid;
//        else if(sum1<sum2)l=mid+1;
//        else r=mid;
//		printf("%lld %lld %lld %lld\n",sum1,sum2,l,r);
//	}
//	printf("%lld\n",l);
//}



//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//ll a[100000+9];
//ll sum1=0,sum2=0,sum;
//int main() {
//	int i,j;
//	int n;
//	cin>>n;
//	for(i=1; i<=n; i++)
//		scanf("%d",&a[i]);
//	sort(a+1,a+1+n);
//	int l=1,r=20000;
//	while(l<r) {
//		int mid=(l+r)/2;
//		sum1=0,sum2=0,sum=0;
//		for(i=1; i<=n; i++) {
//			if(a[i]<mid)sum1+=a[i];
//			if(a[i]>mid)sum2+=a[i];
//			if(a[i]==mid)sum+=a[i];
//		}
//		if(sum%2==1)sum--;
//		if(sum1<sum2)l=mid+1;
//		else r=mid;
////		printf("%lld %lld %lld %lld\n",sum1,sum2,l,r);
//	}
//	cout<<l<<endl;
//}






//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int main() {
//	int i,j;
//	T{
//		string s;
//		cin>>s;
//		int l,k;
//		cin>>l>>k;
//		int x=l-1;
//		int y=l+k-2;
//		l=x-1;
//		int r=y+1;
//		int flag=0,flag0=0,flag1=0;
//		while(l>=0){
//			if(s[x]==s[l]){
//				flag=1;
//			}
//			l--;
//		}
//		while(r<s.size()){
//			if(s[y]==s[r]){
//				flag=1;
//			}
//			r++;
//		}
//		if(flag==1)cout<<"YES"<<endl;
//		else cout<<"NO"<<endl;
//	}
//}


//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int dp[100009][20];
//int main() {
//	int i,j;
//	int n;
//	while(~scanf("%d",&n)&&n!=0) {
//		int t=1;
//		memset(dp,0,sizeof(dp));
//		for(i=0; i<n; i++) {
//			int a,b;
////			scanf("%d%d",&a,&b);
//			cin>>a>>b;
//			dp[b][a]++;
//			t=max(t,b);
//		}
////		for(i=0; i<n; i++) {
////			for(j=0; j<=20; j++) {
////				cout<<dp[i][j]<<" ";
////			}
////			cout<<endl;
////		}
////		cout<<endl;
//		for(i=t-1; i>=0; i--) {
//			for(j=0; j<10; j++) {
//				dp[i][j]=max(dp[i+1][j-1],max(dp[i+1][j],dp[i+1][j+1]))+dp[i][j];
//			}
//		}
//		cout<<dp[0][5]<<endl;
//
////		for(i=0; i<n; i++) {
////			for(j=0; j<=21; j++) {
////				cout<<dp[i][j]<<" ";
////			}
////			cout<<endl;
////		}
//	}
//}



//#include<bits/stdc++.h>
//using namespace std;
//string str;
//int main() {
//	int t;
//	cin>>t;
//	while(t--) {
//		cin>>str;
//		int k=str.size();
//		int x,y;
//		scanf("%d%d",&x,&y);
//		x=x-1;
//		y=x+y-1;
//		int flag=1;
//		int f1=x-1,f2=y+1;
//		while(f1>=0) {
//			if(str[x]==str[f1]) {
//				flag=0;
//				break;
//			}
//			f1--;
//		}
//		while(flag&&f2<k) {
//			if(str[y]==str[f2]) {
//				flag=0;
//				break;
//			}
//			f2++;
//		}
//		if(flag==1) {
//			printf("NO\n");
//		} else printf("YES\n");
//	}
//}




//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//const int maxn=1000000+9;
//int i,j;
//int s[maxn];
//void init_set() {
//	for(i=1; i<=maxn; i++)
//		s[i]=i;
//}
//int find_set(int x) {
//	return x==s[x]?x:find_set(s[x]);
//}
//void union_set(int x,int y) {
//	x=find_set(x);
//	y=find_set(y);
//	if(x!=y)s[x]=s[y];
//}
//
//int main() {
//	int n,m;
//	cin>>n>>m;
//	int t;
//	cin>>t;
//	int x,y;
//	init_set();
//	for(i=0; i<t; i++) {
//		cin>>x>>y;
//		union_set(x,y);
//	}
//	int sum=0;
//
////	int a[10000];
////	memset(a,0,sizeof a);
////	for(i=1;i<=n*m;i++){
////		a[find_set(s[i])]++;
////	}
////	sort(a,a+n*m+1);
////	for(i=1;i<=n*m;i++){
////		if(a[i]!=0) sum++;
////	}
////	cout<<sum<<endl;
////	for(i=1;i<=n*m;i++){
////		if(a[i]!=0) cout<<a[i]<<" ";
////	}
//
////	for(i=0;i<n*m;i++){
////		if(s[i]==i)sum++;
////	}
////	cout<<sum;
//
////	for(i=1;i<=n*m;i++){
////		cout<<s[i]<<" ";
////	}
//
//	map<int,int>a;
//	for(i=1; i<=n*m; i++) {
//		a[find_set(s[i])]++;
//	}
//	cout<<a.size()<<endl;
//	int siz=a.size();
//	int b[a.size()+9];
//	i=0;
//	map<int,int>::iterator it=a.begin();
//	for(;it!=a.end();it++){
//		b[i++]=it->second;
//	}
//	sort(b,b+siz);
//	for(i=0;i<siz;i++){
//		if(b[i]!=0)cout<<b[i]<<" ";
//	}
//}




//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int a[10009];
//int main(){
//	int i,j;
//	int n,m;
//	for(~scanf("%d%d",&n,&m)){
//
//	}
//
//}


//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int main(){
//	int i,j;
//	int a[N];
//	string s;
//	T{
//		int n,k,flag=0;
//		cin>>n>>k;
//		cin>>s;
//		for(i=0;i<k;i++){
//			if(s[i]!=s[n-i-1])break;
//		}
//		if(i!=k||2*k>=n)cout<<"NO"<<endl;
//		else cout<<"YES"<<endl;
//	}
//}




//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int a[N];
//int main() {
//	int i,j;
//	T {
//		int n,k,flag=0;
//		cin>>n>>k;
//		for(i=0; i<n; i++) {
//			scanf("%d",&a[i]);
//		}
//		sort(a,a+n);
//		for(i=0; i<n; i++) {
//			if(i!=a[i])flag=1;
//		}
//		if(flag==0) {
//			cout<<n+k<<endl;
//		} else {
//			if(k==0) cout<<n<<endl;
//			else {
//				int mex=0,maxn=0,flag1=0;
//				for(i=0; i<n; i++) {
//					if(i!=a[i]&&flag1==0) mex=i,flag1=1;
//					maxn=max(a[i],maxn);
//				}
//				for(i=0; i<n; i++) {
//					if(a[i]==(maxn+mex+1)/2) break;
//				}
//				if(i==n) cout<<n+1<<endl;
//				else cout<<n<<endl;
//			}
//		}
//	}
//}









//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int main() {
//	int i,j;
//	int a[1009];
//	int n,m;
//	while(~scanf("%d%d",&n,&m)) {
//		for(i=1; i<=n; i++) {
//			a[i]=i;
//		}
//		j=0;
//		do {
//			j++;
//			if(j==m) {
//				for(i=1; i<=n-1; i++) {
//					cout<<a[i]<<" ";
//				}
//				cout<<a[i]<<endl;
//				break;
//			}
//		} while(next_permutation(a+1,a+n+1));
//	}
//}




//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int main() {
//	int i,j;
//	int n;
//	cin>>n;
//	string s[105];
//	while(~scanf("%d",&n)) {
//		int ans=0;
//		for(i=0; i<n; i++) {
//			s[i].clear();
//			cin>>s[i];
//		}
//		for(i=0; i<n; i++) {
//			for(j=0; j<i; j++) {
////				if(s[i].compare(s[j]))break;
//				if(s[i]==s[j])break;
//			}
//			if(j==i) {
//				ans++;
////				cout<<i<<endl;
//			}
//		}
////		for(i=0; i<n; i++) {
////			cout<<s[i]<<endl;
////		}
//		cout<<ans<<endl;
//	}
//}
/*
5
aoaoao
aoao
acm
aoaoao
aoaoao
*/


//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int a[200];
//int main(){
//	int i,j;
//	int n,m;
//	cin>>n>>m;
//	int cnt=0;
//	for(i=n;i<m;i++){
//		int b=i,sum=0;
//		for(j=0;j<5;j++){
//			int c=b%10;
//			sum+=pow(c,5);
//			b/=10;
//		}
//		if(sum==i) {
//			a[cnt++]=i;
//		}
//	}
//	cout<<cnt<<endl;
//	for(i=0;i<cnt;i++){
//		cout<<a[i]<<" ";
//	}
//}

//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int main(){
//	int i,j;
//	T{
//		int n;
//		cin>>n;
//		cout<<3*(n-3)+1<<" ";
//		int m=n%3;
//		if(m==0) cout<<n/3-1+9<<endl;
//		else cout<<n/3+((n%3)*3)<<endl;
//	}
//}

//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int a[30];
//int main(){
//	int i,j;
//	int n;
//	cin>>n;
//	for(i=1;i<=25;i++){
//		a[i]=i;
//	}
//
//}






//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int main() {
//	int i,j;
//	int n,m;
//	set<int> s;
//	int a;
//	while(cin>>n>>m) {
//		s.clear();
//		for(i=0; i<n; i++) {
//			cin>>a;
//			s.insert(a);
//		}
//		for(i=0; i<m; i++) {
//			cin>>a;
//			s.insert(a);
//		}
//		set<int>::iterator it=s.begin();
//		printf("%d",*s.begin());
//		for(it=++s.begin(); it!=s.end(); it++)
//			printf(" %d",*it);
//		printf("\n");
////		for(;it!=s.end();it++){
////			cout<<*it;
////			if(it==s.end())break;
////			cout<<" ";
////		}
////		cout<<endl;
//	}
//}


//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int n,m;
//    while(~scanf("%d%d",&n,&m))
//    {
//        set<int>s;
//        for(int i=1;i<=n+m;i++)
//        {
//            int x;
//            scanf("%d",&x);
//            s.insert(x);
//        }
//        set<int>::iterator it;
//        printf("%d",*s.begin());
//        for(it=++s.begin();it!=s.end();it++)
//        printf(" %d",*it);
//        printf("\n");
//    }
//    return 0;
//}


//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int main() {
//	int i,j;
//	int a[300],b[300];
//	set<int> s;
//	T {
//		s.clear();
//		int n;
//		cin>>n;
//		memset(a,0,sizeof a);
//		memset(b,0,sizeof b);
//		for(i=0; i<n; i++) {
//			int m;
//			scanf("%d",&m);
//			a[m]++;
//			s.insert(m);
//		}
//		set<int> ::iterator it=s.begin();
//		for(; it!=s.end(); it++) {
//			cout<<*it<<" ";
//		}
//		for(i=0; i<n; i++) {
//			for(j=1; j<a[i]; j++) {
//				cout<<i<<" ";
//			}
//		}
//		cout<<endl;
//	}
//}

/*
1
10
4 2 0 1 3 3 7 3 3 3
*/

//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int main() {
//	int i,j;
//	T {
//		int n;
//		cin>>n;
//		int a[n+9];
//		set<int>s;
//		map<int,int>m;
//		for(i=1; i<=n; i++) {
//			scanf("%d",&a[i]);
//			s.insert(a[i]);
//			m[a[i]]++;
//		}
//		sort(a+1,a+1+n);
//		set<int>::iterator it;
//		for(it=s.begin(); it!=s.end(); it++)
//			cout<<*it<<" ";
//		for(i=1; i<=n; i++) {
//			if(m[a[i]]>1) {
//				cout<<a[i]<<" ";
//				m[a[i]]--;
//			}
//		}
//		cout<<endl;
//	}
//}




//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int main(){
//	int i,j;
//	T{
//		int n,m;
//		cin>>n>>m;
//		int a[n+9];
//		for(i=0;i<n;i++){
//			scanf("%d",&a[i]);
//		}
//
//	}
//}


//#include<bitsdc++.h>
//using namespace std;
//int t;
//int n, m;
//int A[100005];
//int B[100005];
//
//int main() {
//	cin >> t;
//	while (t--) {
//		memset(B, 0, sizeof(B));
//		cin >> n >> m;
//		for (int i = 0; i < n; i++) {
//			int a;
//			cin >> a;
//			A[i] = a % m;
//			B[A[i]]++;
//		}
//		int ans = 0;
//		if (B[0] != 0) {
//			ans = 1;
//		}
//		B[0] = 0;
//		for (int i = 1; i < m; i++) {
//			int mi;
//			if (B[i] == 0) {
//				continue;
//			}
//			if (m % 2 == 0 && i == m / 2) {
//				ans++;
//				B[i] = 0;
//			} else {
//				if (B[i] > B[m - i]) {
//					B[i] -= (B[m - i] + 1);
//					ans += (B[i] + 1);
//					B[i] = 0;
//					B[m - i] = 0;
//				} else if (B[i] < B[m - i]) {
//					B[m - i] -= (B[i] + 1);
//					ans += (B[m - i] + 1);
//					B[i] = 0;
//					B[m - i] = 0;
//				} else {
//					ans++;
//					B[i] = B[m - i] = 0;
//				}
//			}
//		}
//		cout << ans << endl;
//	}
//}



//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1009;
//int main(){
//	int i,j;
//	T{
//		string s;
//		cin>>s;
//		int flag=0;
//		for(i=0;i<s.size();i++){
//			if(s[i]=='1')break;
//		}
//		for(;i<s.size();i++){
//			if(s[i]=='0'&&s[i-1]=='0') break;
//		}
//		if(i==s.size()) flag=1;
////		cout<<flag<<endl;
//		for(i=0;i<s.size();i++){
//			if(s[i]=='1'&&s[i-1]=='1') break;
//		}
//		if(i==s.size()||flag==1)cout<<"YES"<<endl;
//		else cout<<"NO"<<endl;
//	}
//}



//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//string s,m;
//int n;
//void zhuan(int a) {
//	while(1) {
//		if(a==0)break;
//		if(a%n>=10){
//			s+=a%n-10+'A';
//		}
//		else
//			s+=a%n+'0';
//		a/=n;
//	}
//}
//int main() {
//	int i,j;
//	cin>>n>>m;
//	for(i=0; i<30; i++) {
//		string f=m;
//		reverse(f.begin(),f.end());
//		if(f==m) {
//			cout<<i<<endl;
//			break;
//		}
//		for(j=m.size()-1;j>0;j++){
//			if(m[j]+f[j]-'0'-'0'>=n){
//				m[j]+=f[j]-'0'-n;
//				m[j-1]++;
//			}
//			else m[j]+=f[j]-'0';
//		}
//		if(m[0]+f[0]-'0'-'0'>=n){
//			for(j=m.size()-1;j=>0;j++){
//				s[j+1]=s[j];
//			}
//		}
//
//	}
//
//}




//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int main(){
//	int i,j;
//	int n,m;
//	cin>>n>>m;
//	int a[n+9];
//	for(i=0;i<n;i++){
//		cin>>a[i];
//	}
//	sort(a,a+n);
//	int b[m+9][5];
//	for(i=0;i<m;i++){
//		for(j=0;j<2;j++){
//			scanf("%d",&b[i][j]);
//		}
//	}
//	for(i=0;i<n;i++){
//		for(j=0;j<m;j++){
//			if(!(a[i]>=b[j][0]&&a[i]<=b[j][1])) break;
//		}
//		cout<<j<<endl;
////		if(j==m) {
////			cout<<a[i]<<endl;
//////			return 0;
////		}
//	}
//}



//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod = 1e+9;
//const int N = 1e5 + 9;
//int main() {
//	int i, j;
//	int n, m;
//	cin >> n >> m;
//
//	string s;
//	while (1) {
//		if (m == 0)break;
//		s += m % 10+'0';
//		m /= 10;
//	}
//	string f=s;
//	reverse(s.begin(),s.end());
//	for(i=0;i<s.size();i++){
//		if(s[i]+f[i]-'0'-'0'>=n)
//	}
//	cout << s << endl;
//}

//#include<bitsdc++.h>
//using namespace std;
//int n;
//bool check(string a) {
//	string b = a;
//	reverse(a.begin(), a.end());
//	if (b == a)return true;
//	else return false;
//}
//int main() {
//	cin >> n;
//	string a;
//	cin >> a;
//	if (check(a))printf("STEP=0\n");
//	else {
//		int flag = 0;
//		int sum = 0;
//		for (int i = 1; i <= 30; i++) {
//			string b = a,s="";
//			reverse(b.begin(), b.end());
//			int sum = 0;
//			for (int j = a.length() - 1; j >= 0; j--) {
//				int x, y;
//				if (a[j] >= 'A'&&a[j] <= 'F')x = a[j] - 'A' + 10;
//				else x = a[j] - '0';
//				if (b[j] >= 'A'&&b[j] <= 'F')y = b[j] - 'A' + 10;
//				else y = b[j] - '0';
//				int xx = (x + y + sum);
//				s += (xx%n + '0');
//				sum = xx / n;
//			}
//			if (sum != 0)s += sum + '0';
//			reverse(s.begin(), s.end());
//			a = s;
//			//cout << s << endl;
//			if (check(s)) {
//				printf("STEP=%d\n", i);
//				flag = 1;
//				break;
//			}
//		}
//		if (flag == 0)printf("Impossible!\n");
//	}
//}









//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int n,m;
//int a[39][2];
//int i,j;
//int ans=0;
//void dfs(int sum,int x){
//	if(x>1000) return ;
//	ans=max(ans,sum);
//	cout<<sum<<"  x="<<x<<endl;
////	for(i=0;x+i<m;i++){
//		dfs(sum+a[x][0]*a[x][1],x+a[x][0]);
////	}
//	return ;
//
//}
//int main(){
//	cin>>n>>m;
//	for(i=0;i<m;i++){
//		cin>>a[i][0]>>a[i][1];
//	}
////	cout<<a[0][0];
//	dfs(0,0);
////	cout<<ans;
//}




//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int main(){
//	int i,j;
//	int n;
//	cin>>n;
//	int a[n+9],b[n+9];
//	for(i=0;i<n;i++){
//		cin>>a[i];
//	}
//	b[0]=a[0];
//	for(i=1;i<n;i++){
//		b[i]=max(a[i],b[i-1]);
//	}
//	int c[n+9];
//	c[0]=b[0];
//	for(i=1;i<n;i++){
//		if(b[i]>c[i-1]){
//			c[i]=c[i-1];
//		}
//		else {
//			if(b[i]==c[i-1]){
//				j=i-1;
//				while(j>0){
//					j--;
//					if(c[j-1]<c[j])break;
//				}
//				c[i]=c[j-1];
//			}
//			else {
//				c[i]=b[i];
//			}
//		}
//	}
//	int q;
//	cin>>q;
//	while(q--){
//		int x;
//		cin>>x;
//		cout<<c[x]<<endl;
//	}
//}



//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e4+9;
//int a[N],b[209];
//int main(){
//	int i,j;
//	T{
//		int n;
//		cin>>n;
//		memset(b,0,sizeof b);
//		for(i=0;i<n;i++){
//			int m;
//			b[m]++;
//		}
//		ll sum=0;
//		for(i=1;2*i<=100;i++){
//			if(b[2*i]>=1&&b[i]>=1) sum+=max(b[i],b[2*i]);
//		}
//		cout<<sum<<endl;
//	}
//}

//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int main(){
//	int i,j;
//	T{
//		int a[10];
//		for(i=0;i<6;i++){
//			cin>>a[i];
//		}
//
//	}
//
//}

//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int main(){
//	int i,j;
//	int n;
//	cin>>n;
//	int a[209],flag=0,maxn=1;
//	memset(a,0,sizeof a);
//	for(i=0;i<n;i++){
//		int m;
//		cin>>m;
//		a[m]++;
//		maxn=max(maxn,m);
//	}
//	for(i=1;i<=maxn;i++){
//		if(a[i]==0) {
//			flag=1;
//			cout<<i<<endl;
//		}
//	}
//	if(flag==0) cout<<"good job"<<endl;
//}





//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//char AA[10]={'T','F','T','F'};
//char BB[10]={'T','T','F','F'};
//char CC[10]={'T','F','F','F'};
//char DD[10]={'T','T','T','F'};
//int main(){
//	int i,j;
//	int n;
//	cin>>n;
//	getchar();
//	string aa;
//	int a[30];
//	memset(a,0,sizeof a);
//	for(i=0;i<n;i++){
//		scanf(" %c",&aa[i]);
//		if()a[aa[i]-'A']=1;
//	}
//
////	for(i=0;i<n;i++){
////		cout<<a[i];
////	}
////	cout<<endl;
//
//	getchar();
//	char c,aaaa;
//	stack<char> s;
//	s.push('1');
//	while(1){
//		cin>>c;
//		aaaa=getchar();
//		cout<<c;
//		if(aaaa=='\n')break;
//		if(c>='A'&&c<='Z'){
//			s.push(c);
//		}
//		else {
//			char b=s.top();
//			s.pop();
//			char bb=s.top();
//			s.pop();
//			if(c=='*'){
//
//			}
//		}
//
//	}
//
//
//
//}




//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int main() {
//	int i,j;
//	int n;
//	cin>>n;
//	getchar();
//	int a[30];
//	memset(a,0,sizeof a);
//	for(i=0; i<n; i++) {
//		char m;
//		scanf(" %c",&m);
//		if(m=='T') a[i]=1;
//	}
//	stack<int> s;
//	while(1) {
//		char bbbb;
//		char b;
//		cin>>b;
//		bbbb=getchar();
//		if(b>='A'&&b<='Z') {
//			s.push(b-'A');
//		} else {
//			if(b=='-') {
//				int aa=s.top();
//				s.pop();
//				if(aa==1) s.push(0);
//				else s.push(1);
//			} else {
//				int aa=s.top();
//				s.pop();
//				int bb=s.top();
//				s.pop();
//				if(b=='*') {
////					if(a[aa-'A']*a[bb-'A']==0) s.push('F');
//					if(aa*bb==0)  s.push(0);
//					else s.push(1);
//				}
//				else{
////					if(a[aa-'A']+a[bb-'A']>=1) s.push(1);
//					if(aa+bb>=1)  s.push(1);
//					else s.push(0);
//				}
//			}
//		}
//		cout<<s.top()<<endl;
//	if(bbbb=='\n')break;
//	}
////	cout<<s.top()<<endl;
////	if(s.top()==1)cout<<"T"<<endl;
////	else cout<<"F"<<endl;
//	while(!s.empty()){
//		cout<<s.top();
//		s.pop();
//	}
//
//}

//#include<bitsdc++.h>
//using namespace std;
//int main() {
//	int i,k,l,t,y;
//	cin>>i;
//	char o;
//	int  a[29];
//	char b[260];
//	for(int j=0; j<i; j++) {
//		cin>>o;
//		if(o=='T') {
//			a[j]=1;
//		} else if(o=='F') {
//			a[j]=0;
//		}
//	}
//	a[26]=1;
//	a[28]=0;
//	for(int j=0; j<260; j++) {
//		cin>>b[j];
//	}
//	for(int j=0; b[j]!=NULL; j++) {
//		if(b[j]>='A'&&b[j]<=']') {
//			;
//		} else {
//			if(b[j]=='*'||b[j]=='+') {
//				for(int p=j; p>=0; p--) {
//					if(b[p]>='A'&&b[p]<=']') {
//						if(y==1) {
//							y=0;
//							t=b[p]-'A';
//							b[p]='9';
//							break;
//						}
//						l=b[p]-'A';
//						b[p]='9';
//						y=1;
//					}
//				}
//				if(b[j]=='*') {
//					if(a[l]*a[t]==0) {
//						b[j]=']';
//					} else {
//						b[j]='[';
//					}
//				} else if(b[j]=='+') {
//					if(a[l]+a[t]==0) {
//						b[j]=']';
//					} else {
//						b[j]='[';
//					}
//				}
//			} else if(b[j]=='-') {
//				for(int p=j; p>=0; p--) {
//					if(b[p]>='A'&&b[p]<=']') {
//						l=b[p]-'A';
//						b[p]='9';
//						break;
//					}
//				}
//				if(a[l]==0) {
//					b[j]='[';
//				} else {
//					b[j]=']';
//				}
//			}
//		}
//	}
//	for(int j=0; b[j]!=NULL; j++) {
//		if(b[j]=='[') {
//			printf("T");
//			break;
//		} else if(b[j]==']') {
//			printf("F");
//			break;
//		}
//	}
//}




//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int main(){
//	int i,j;
//	int p,d;
//	cin>>p>>d;
//	int a[1009][5];
//	memset(a,0,sizeof a);
//	ll ans=0;
//	for(i=0;i<p;i++){
//		int b,b2,b3;
//		cin>>b>>b2>>b3;
//		a[b][1]+=b2;
//		a[b][2]+=b3;
//		ans+=b2;
//		ans+=b3;
//	}
//	for(i=1;i<=d;i++){
//		int sum=(a[i][1]+a[i][2])/2+1;
//		if(a[i][1]>=sum){
//			cout<<"A"<<" ";
//			a[i][1]-=sum;
////			a[i][2]=sum-a[i][2];
//			cout<<a[i][1]<<" ";
//			cout<<a[i][2]<<endl;
//		}
//		else{
//			cout<<"B"<<" ";
////			a[i][1]=sum-a[i][1];
//			a[i][2]-=sum;
//			cout<<a[i][1]<<" ";
//			cout<<a[i][2]<<endl;
//		}
//	}
//	ll wa=0,wb=0;
//	for(i=1;i<=d;i++){
//		wa+=a[i][1];
//		wb+=a[i][2];
//	}
//	printf("%.10lf\n",abs(wa-wb)/(ans*1.0));
//}


//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int main(){
//	int i,j;
//	int n,m;
//	cin>>n>>m;
//	int dp[m+9][3];
//	memset(dp,0,sizeof dp);
//	for(i=1;i<=m;i++){
//		cin>>dp[i][0]>>dp[i][1];
//	}
//	for(i=0;i<=m;i++){
//		dp=
//	}
//}







//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int main(){
//	int i,j;
//	string s;
//	getline(cin,s);
//	cout<<s<<endl;
//}


//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int main() {
//	int i,j;
//	int n;
////	vector<int> a;
////	for(i=1;i<=n;i++){
////		a.pop_back(i);
////	}
//	n=3;
//	int a[500],size=n;
//	for(i=1; i<=n; i++) {
//		a[i]=i;
//	}
//	a[i]=-1;
//	i=1;
//	int flag=1;
//	while(1) {
//		if(a[2]==-1)break;
//		if(i>size) i=1;
//		if(flag==1) {
//			flag=2;
//			continue;
//		}
//		flag=1;
//		cout<<a[i+1]<<endl;
//		a[i]=a[i+1];
//		size--;
//		i++;
//	}
//	cout<<a[1]<<endl;
//}




//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int main(){
//	int i,j;
//	int n=8,m;
//	cin>>n;
//	m=n;
//	int sum=0;
//	while(m/=2){
//		sum++;
//	}
//	int sum1=1;
//	for(i=0;i<sum;i++){
//		sum1*=2;
//	}
//	n-=sum1;
//	cout<<2*n+1;
//}


//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
////string con(double d) {
////	ostringstream os;
////	if (os << d)
////		return os.str();
////	return "invalid conversion";
////}
////bool check(string s) {
////	string f=s;
////	reverse(f.begin(),f.end());
////	if(s==f) return true;
////	return false;
////}
//int main() {
//	int i,j;
//	int a,b;
//	cin>>a>>b;
//	int n;
//	cin>>n;
//	string s;
//	int flag=0,tmp,sum1;
//	for(i=0;i<n;i++){
//		tmp=a;
//		sum1=a/b;
//		a%=b;
//		a*=10;
//		if(a==tmp){
//			for(j=0;j<3;j++)
//			cout<<sum1;
//		}
//	}
//	for(i=0;i<3;i++){
//		s+=a/b+'0';
//		a%=b;
//		a*=10;
//	}
//	cout<<s<<endl;
//}



//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//bool check(string s) {
//	string f=s;
//	reverse(f.begin(),f.end());
//	if(s==f) return true;
//	return false;
//}
//
//int main() {
//	int i,j;
//	int n;
//	string m;
//	cin>>n>>m;
//	if(check(m)) {
//		cout<<"0"<<endl;
//		return 0;
//	}
//	int sum=1;
//	while(1) {
//		string f=m,s;
//		reverse(f.begin(),f.end());
//		for(i=0; i<m.size(); i++) {
//			if(s.size()-1==i) {
//				int a=m[i]+f[i]-'0'-'0'+s[i]-'0';
//				if(a>=n) {
//					if(a-n>=10&&n==16) {
//						s[i]=a-n+'A'-10;
//					} else s[i]=a-n+'0';
//					s+='1';
//				} else {
//					s[i]=a+'0';
//				}
//			} else {
//				int a=m[i]+f[i]-'0'-'0';
//				if(a>=n) {
//					if(a-n>=10&&n==16) {
//						s[i]=a-n+'A'-10;
//					} else
//						s+=a+'0'-n;
//					s+='1';
//				} else {
//					if(a>=10&&n==16) {
//						s[i]=a+'A'-10;
//					} else
//						s+=a+'0';
//				}
//			}
//		}
//		reverse(s.begin(),s.end());
//		cout<<s<<endl;
//		if(check(s)) {
//			cout<<"STEP="<<sum<<endl;
//			return 0;
//		}
//		m=s;
//		sum++;
//	}
//	cout<<"Impossible!"<<endl;
//}




//#include<bits/stdc++.h>
//using namespace std;
//#define T int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int main(){
//	int i,j;
//	int n;
//	cin>>n;
//	int a[30];
//	memset(a,0,sizeof a);
//	for(i=0; i<n; i++) {
//		char m;
//		scanf(" %c",&m);
//		if(m=='T') a[i]=1;
//	}
//	stack<char> s;
//	string st;
//	getline(cin,st);
//	stringstream str(st);
//	int k;
//	while(str>>k){
//		cout<<k<<"\n";
//	}
//}


//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int main() {
//	int i,j;
//	int n;
//	cin>>n;
//	int a=n,c=n,b;
//	for(i=0; i<10000; i++) {
//		b=0;
//		c=a;
//		while(1) {
//			if(a==0)break;
//			b+=(a%10)*(a%10);
//			a/=10;
//		}
////		cout<<b<<" ";
//
//		if(b==1) {
//			cout<<"HAPPY"<<endl;
//			return 0;
//		}
//		a=b;
//	}
//	cout<<"UNHAPPY"<<endl;
//	return 0;
//}


//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int main(){
//	int i,j;
//	int n,m;
//	cin>>n>>m;
//	n=*n
//}



//#include<bits/stdc++.h>
//using namespace std;
//#define ll long long int
//#define maxn 1000010
//ll num[maxn];
//vector<ll> flag[maxn];
//typedef struct nodee {
//	int member;
//	ll countt;
//} node;
//ll endd[maxn];
//node maze[maxn];
//bool panduan(node u,node v) {
//	return u.countt<v.countt;
//}
//int main() {
//	int n,m;
//	ll x,y;
//	scanf("%d %d",&n,&m);
//	memset(num,0,sizeof(num));
//	memset(maze,0,sizeof(maze));
//	for(int i=0; i<m; i++) {
//		scanf("%lld %lld",&x,&y);
//		maze[x].member=x;
//		maze[y].member=y;
//		maze[x].countt++;
//		maze[y].countt++;
//		flag[x].push_back(y);
//		flag[y].push_back(x);
//		num[x]++;
//		num[y]++;
//	}
////	for(int i=0; i<n; i++){
////		cout<<i<<" ";
////		cout<<num[i]<<endl;
////	}
//	sort(maze,maze+n,panduan);
//	memset(endd,0,sizeof(endd));
//	for(int i=0; i<n; i++) {
//		ll indx=maze[i].member;
//		int l=flag[indx].size();
//		for(int j=0; j<l; j++) {
//			if(num[indx]<num[flag[indx][j]])
//				endd[flag[indx][j]]=max(endd[flag[indx][j]],endd[indx]+1);
//		}
//	}
////	ll maxx=0;
//	for(int i=0; i<n; i++)
//		printf("%lld\n",endd[i]);
////		maxx=max(maxx,endd[i]);
////	printf("%lld\n",maxx+1);
//	return 0;
//}



//
//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//#define maxn 1000010
//const ll mod=1e+9;
//const int N=1e5+9;
//int n,m;
//ll num[maxn];
//vector<ll> flag[maxn];
//struct Node {
//	int mumber;
//	ll count;
//} node;
//ll naze[maxn];
//bool panduan(node a,node b){
//	return a.count<b.count;
//}
//void dfs(int indx,) {
//	if(maze[index])
//}
//int main() {
//	int i,j;
//	cin>>n>>m;
//	memset(num,0,sizeof(num));
//	memset(maze,0,sizeof(maze));
//	for(int i=0; i<m; i++) {
//		scanf("%lld %lld",&x,&y);
//		maze[x].member=x;
//		maze[y].member=y;
//		maze[x].countt++;
//		maze[y].countt++;
//		flag[x].push_back(y);
//		flag[y].push_back(x);
//		num[x]++;
//		num[y]++;
//	}
//	sort(maze,maze+n,panduan);
//	dfs()
//}

//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int main(){
//	int i,j;
//
//}


//#include<bits/stdc++.h>
//using namespace std;
//#define ll long long
//int main() {
//	int i,j;
//	int n;
//	cin>>n;
//	int a[n+9];
//	for(i=0; i<n; i++) {
//		cin>>a[i];
//	}
//	int k[n+9];
//	memset(k,0,sizeof k);
//	ll sum=0;
//	for(i=0; i<n; i++) {
//		for(j=0; j<n-1; j++) {
//			if(a[j]>a[j+1]) {
//				swap(a[j],a[j+1]);
//				k[j]++;
//				k[j+1]++;
//				swap(k[j],k[j+1]);
//				for(int aaa=0; aaa<n; aaa++) cout<<a[aaa]<<" ";
//				cout<<endl;
//				for(int aaa=0; aaa<n; aaa++) cout<<k[aaa]<<" ";
//				cout<<endl;
//			}
//		}
//	}
//	for(j=0; j<n; j++) {
//		sum+=(k[j]+1)*(k[j])/2;
//	}
//	cout<<sum<<endl;
//}




//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int main(){
//	int i,j;
//	T{
//		int n;
//		cin>>n;
//		if(n%3==0){
//			cout<<n-1<<" ";
//		}
//		else {
////			if(n/3+n%3*3>=n-(3-n%3)*3+1) cout<<n/3+n%3*3<<" ";
////			else cout<<n-(3-n%3)*3+1<<" ";
//			int m=n-n/3;
//			cout<<m/3+m%3*3+n/3<<endl;
//		}
//		cout<<n/3+n%3*3<<endl;
//	}
//}




//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int dx[4]=	{0,1,0,-1};
//int dy[4]=	{1,0,-1,0};
//int n,m,ci;
//string a[109];
//int b[109][109];
//int i,j;
//void dfs(){
//
//}
//int main(){
//	cin>>n>>m>>ci;
//	for(i=0;i<n;i++){
//		cin>>a[i];
//	}
//	memset(b,0,sizeof b);
//	for(i=0;i<n;i++){
//		for(j=0;j<m;j++){
//			if(a[i][j]=='0'&&b[i][j]==0){
//				for(int k=0;k<4;k++){
//					int x=dx[k]+i;
//					int y=dx[k]+i;
//
//				}
//			}
//		}
//
//	}
////	for(i=0;i<n;i++){
////		for(j=0;j<m;j++){
////			cout<<a[i][j]<<" ";
////		}
////		cout<<endl;
////	}
//}

//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//int n,m;
//int a[20][20],vis[20][20];
//int minn=INT_MAX,sum;
//int dx[]= {0,1,0,-1};
//int dy[]= {1,0,-1,0};
//void dfs(int x, int y, int sum1, int step) {
//	if (sum1 == sum / 2) {
//		minn = min(minn, step);
//		return;
//	}
//	for (int i = 0; i < 4; i++) {
//		int xx, yy;
//		xx = x + dx[i];
//		yy = y + dy[i];
//		if (xx >= 1 && xx <= n && yy >= 1 && yy <= m &&
//vis[xx][yy] == 0 && sum1 + a[xx][yy] <= sum / 2) {
//			vis[xx][yy] = 1;
//			dfs(xx, yy, sum1 + a[xx][yy], step + 1);
//			vis[xx][yy] = 0;
//		}
//	}
//}
//int main() {
//	scanf("%d%d", &m, &n);
//	for(int i=1; i<=n; i++)
//		for (int j = 1; j <= m; j++) {
//			scanf("%d", &a[i][j]);
//			sum += a[i][j];
//		}
//	vis[1][1]=1;
//	dfs(1, 1, a[1][1], 1);
//	cout<<minn<<endl;
//}
/*
int main()
{
	int i,j;
	cin>>n>>m;
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=m; j++)
		{
			cin>>a[i][j];
			sum+=a[i][j];
		}
	}
	vis[1][1]=1;
	dfs(1,1,a[1][1],1);
	cout<<minn<<endl;
}*/

//#include<iostream>
//#include<algorithm>
//using namespace std;
//int a[20][20],n,m;
//int vis[20][20];
//int dx[] = { 0,0,-1,1 };
//int dy[] = { 1,-1,0,0 };
//int sum = 0;
//int minn = 1e8;
//void dfs(int x, int y, int sum1, int step) {
//	if (sum1 == sum / 2) {
//		minn = min(minn, step);
//		return;
//	}
//	for (int i = 0; i < 4; i++) {
//		int xx, yy;
//		xx = x + dx[i];
//		yy = y + dy[i];
//		if (xx >= 1 && xx <= n && yy >= 1 && yy <= m && vis[xx][yy] == 0 && sum1 + a[xx][yy] <= sum / 2) {
//			vis[xx][yy] = 1;
//			dfs(xx, yy, sum1 + a[xx][yy], step + 1);
//			vis[xx][yy] = 0;
//		}
//	}
//}
//int main() {
//	scanf("%d%d", &m, &n);
//	for(int i=1; i<=n; i++)
//		for (int j = 1; j <= m; j++) {
//			scanf("%d", &a[i][j]);
//			sum += a[i][j];
//		}
//	vis[1][1]=1;
//	dfs(1, 1, a[1][1], 1);
//	cout<<minn<<endl;
//}



//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int main(){
//	int i,j;
//	string s;
//	cin>>s;
//	int len=s.size();
//	int minn=INT_MAX,sum=0,flag=0,cnt=0;
//	for(i=0;i<len;i++){
//		if(s[i]=='1') sum++;
//		else if(sum!=0){
////			cout<<sum<<endl;
//			minn=min(minn,sum);
//			sum=0;
//			cnt++;
//		}
//		if(i==len-1&&sum!=0){
//			minn=min(minn,sum);
//			cnt++;
//		}
//	}
//	for(i=0;i<len;i++){
//		if(s[0]=='1'&&s[1]=='0'||s[len-2]=='0'&&s[len-1]=='1') flag=1;
//		if(s[i]=='1'&&s[i-1]==s[i+1]&&s[i-1]=='0') flag=1;
//		if(s[i]=='0'&&s[i-1]==s[i+1]&&s[i-1]=='1') flag=1;
//	}
//	if(flag==1)cnt--;
//	cout<<cnt;
//}

//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int main(){
//	int i,j;
//	string s,s2;
//	cin>>s>>s2;
//	int l=0,r=0;
//	for(i=0;i<s.size();i++){
//		if(s[i]==s2[r]){
//			r++;
//		}
//	}
//	if(r==s2.size()) cout<<"Yes"<<endl;
//	else cout<<"No"<<endl;
//}



//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int n,m,k;
//string s[109];
//int v[109][109],idx[109][109];
//int dx[]={-1,-1,-1,0,0,0,1,1,1};
//int dy[]={-1,0,1,-1,0,1,-1,0,1};
//void dfs(int x,int y) {
//	if(s[x][y]=='1'&&v[x][y]==1) {
//		for(int i=0; i<9; i++) {
//			int tx=dx[i]+x;
//			int ty=dy[i]+y;
//			if(!(tx>=0&&tx<n&&ty>=0&&ty<m)) continue;
//			if(s[tx][ty]=='0') {
//				s[tx][ty]='1';
//				dfs(tx,ty);
//			}
//		}
//	}
//}
//void dfs2(int x,int y,int id) {
//	if(v[x][y]>0 || s[x][y]!='1' ) return ;
//	v[x][y]=id;
//	for(int i=0; i<9; i++) {
//		int tx=dx[i]+x;
//		int ty=dy[i]+y;
//		if(!(tx>=0&&tx<n&&ty>=0&&ty<m)) continue;
//		dfs2(tx,ty,id);
//	}
//}
//void dfs3(int x,int y) {
//	s[x][y]='0';
//	for(int i=0; i<9; i++) {
//		int tx=x+dx[i];
//		int ty=y+dy[i];
//		if(!(tx>=0&&tx<n&&ty>=0&&ty<m)) continue;
//		if(s[tx][ty]=='1') {
//			dfs3(tx,ty);
//		}
//	}
//}
//int main() {
//	int i,j;
//	cin>>n>>m>>k;
//	for(i=0; i<n; i++) {
//		cin>>s[i];
//	}
//	while(k--) {
//		memset(v,0,sizeof v);
//		for(i=0; i<n; i++) {
//			for(j=0; j<m; j++) {
//				if(s[i][j]=='1') v[i][j]=1;
//			}
//		}
//		for(i=0; i<n; i++) {
//			for(j=0; j<m; j++) {
//				if(s[i][j]=='1')dfs(i,j);
//			}
//		}
//	}
////	for(i=0; i<n; i++) {
////		cout<<s[i]<<endl;
////	}
//	int cnt=0;
//	for(i=0; i<n; i++) {
//		for(j=0; j<m; j++) {
//			if(s[i][j]=='1')cnt++,dfs3(i,j);
//		}
//	}
//	cout<<cnt;
//
////	memset(v,0,sizeof v);
////	for(i=0; i<n; i++) {
////		for(j=0; j<m; j++) {
////			if(s[i][j]=='1'&&v[i][j]==0)dfs2(i,j,++cnt);
////		}
////	}
//
////	for(i=0; i<n; i++) {
////		for(j=0; j<m; j++) {
////			cout<<v[i][j]<<" ";
////		}
////		cout<<endl;
////	}
//
////	for(i=0; i<n; i++) {
////		cout<<s[i]<<endl;
////	}
//}


//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int a[N],n;
//bool check(int b) {
//	for(int i=0; i<n; i++) {
//		if(b>a[i]) {
//			b+=b-a[i];
//		} else b-=a[i]-b;
//		if(b<0)return false;
//		if (b>=1e5)return true;
//	}
//	return true;
//}
//int main() {
//	int i,j;
//	cin>>n;
//	for(i=0; i<n; i++) {
//		cin>>a[i];
//	}
//	int l=0,r=1e5;
//	while(l<r) {
//		int mid=(l+r)/2;
//		if(check(mid)) {
//			r=mid;
//		} else {
//			l=mid+1;
//		}
//	}
//	cout<<l;
//}





//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int main() {
//	int i,j;
//	int n,k;
//	cin>>n>>k;
//	ll dp[n+9][k+9];
//	memset(dp,0,sizeof dp);
//	for(i=0; i<=n; i++)
//		dp[i][1]=1;
//	if(n<k) ;
//	for(i=1; i<=n; i++) {
//		for(j=2; j<=k; j++) {
//			if(i>=j) dp[i][j]=dp[i-1][j-1]+dp[i-j][j];
//		}
//	}
//	cout<<dp[n][k];
//}


//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int main(){
//	int i,j;
//
//}


//#include<bits/stdc++.h>
//#define LL long long
//#define MAX 100009
//using namespace std;
//
//int tree[MAX]; // 线段树
//int lz[MAX]; // 延迟标记
//int n,m;
//int a[MAX];
//void init() {
//	memset(tree,0,sizeof(tree));
//	memset(lz,0,sizeof(lz));
//}
//
//// 创建线段树
//void build(int node,int l,int r) {
//	if(l == r) {
//		cin >> tree[node];
//		return;
//	}
//	int mid = (l+r)/2;
//	build(node*2,l,mid);
//	build(node*2+1,mid+1,r);
//	tree[node] = tree[node*2] + tree[node*2 + 1];
//}
//
//// 单点更新，n为更新值，index为更新点，lr为更新范围
//void update(int node,int l,int r,int index,int n) {
//	if(l == r) {  // 更新方式，可以自由改动
//		tree[node]+=n;
//		if(tree[node]<0) tree[node]=0;
//		return;
//	}
//	int mid = (l+r) / 2;
//	// push_down(node,mid-l+1,r-mid); 若既有点更新又有区间更新，需要这句话
//	if(index <= mid) {
//		update(n,index,l,mid,node*2);
//	} else {
//		update(n,index,mid+1,r,node*2+1);
//	}
//	tree[node] = tree[node*2] + tree[node*2 + 1];
//}
//
//void push_down(int node,int l,int r) {
//	if(lz[node]) {
//		int mid = (l+r) / 2;
//		lz[node*2] += lz[node];
//		lz[node*2 + 1] += lz[node];
//		tree[node*2] += 1LL*(mid - l + 1)*lz[node];
//		tree[node*2 + 1] += 1LL*(r - mid)*lz[node];
//		lz[node] = 0;
//	}
//}
//
//// 区间更新，lr为更新范围，LR为线段树范围，add为更新值
//void update_range(int node,int l,int r,int L,int R,int add) {
//	if(l <= L && r >= R) {
//		lz[node] += 1LL*add;
//		tree[node] += 1LL*(R - L + 1)*add; // 更新方式
//		return;
//	}
//	push_down(node,L,R);
//	int mid = (L+R) / 2;
//	if(mid >= l) update_range(node*2,l,r,L,mid,add);
//	if(mid < r) update_range(node*2 + 1,l,r,mid+1,R,add);
//	tree[node] = tree[node*2] + tree[node*2 + 1];
//}
//
//// 区间查找
//LL query_range(int node,int L,int R,int l,int r) {
//	if(l <= L && r >= R) return tree[node];
//	push_down(node,L,R);
//	int mid = (L+R) / 2;
//	LL sum = 0;
//	if(mid >= l) sum += query_range(node*2,L,mid,l,r);
//	if(mid < r) sum += query_range(node*2 + 1,mid+1,R,l,r);
//	return sum;
//}
//
//int main() {
//	int i,j;
//	init();
//	cin>>n>>m;
//	build(1,1,n);
//	for(i=0; i<n; i++) {
//		cin>>a[i];
//	}
//	while(m--) {
//		 string c;
//        int a, b;
//        cin >> c >> a >> b;
////		cout<<s<<b<<c<<endl;
//		if(c=="+") {
//			update(1, 1, n, a, b);
//		} else {
//			update(1, 1, n, a, -b);
//		}
//		if (c == "Query") {
//			if (a > b) swap(a, b);
//			LL aa = query_range(1, 1, n, a, b);
//			cout << aa << endl;
//		}
//	}
//}

//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int main(){
//	int i,j;
//	string s;
//	while(1){
//		getlcin>>s;
//		int len=s.size();
//		if(s[len-1]=='!')break;
//		if(s[len-1]=='.'){
//			cout<<"*Nod*"<<endl;
//		}
//		if(s[len-1]=='?'){
//			cout<<"Quack!"<<endl;
//		}
//	}
//}

//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int main(){
//	int i,j;
//	int n;
//	cin>>n;
//	int a[n+9];
//	ll sum=0,sum1=1;
//	float ans=1;
//	for(i=0;i<n;i++){
//		cin>>a[i];
//	}
//	sort(a,a+n);
//	for(i=0;i<n;i++){
//		sum+=a[i]*(sum1);
//		sum1*=2;
////		cout<<sum<<endl;
//	}
////	cout<<sum;
//	ans=sum;
//	for(i=0;i<n;i++){
//		cout<<ans<<endl;
//		ans/=2;
//	}
//	cout<<ans;
//}


//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int main(){
//	int i,j;
//	ll n,k;
//	cin>>n>>k;
//	ll he=n/k;
//	ll minn=n%k;
//	ll a[he+9];
//	if(minn==0){
//		cout<<k;
//		return 0;
//	}
//	cout<<n/(he+1);
////	for(i=0;i<he;i++){
////		a[i]=k;
////	}
////	a[i]=minn;
////	for(i=0;i<n/k||i<k;i++){
////		if()
////	}
//}


//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//ll fan(ll x){
//	string s;
//	while(1){
//		if(x==0)break;
//		s+=x%10+'0';
//		x/=10;
//	}
//	cout<<s;
//	reverse(s.begin(),s.end());
//	for(int i=0;i<n;i++){
//
//	}
//}
//int main(){
//	int i,j;
//
//}


//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int main(){
//	int i,j;
//	int n;
//	cin>>n;
//	string s[n+9];
//	for(i=0;i<n;i++){
//		cin>>s[i];
//	}
//	for(i=0;i<n-1;i++){
//		if(s[i].size()>s[i+1].size()){
//			cout<<"impossible"<<endl;
//			return 0;
//		}
//	}
//	for(i=0;i<n;i++){
//
//	}
//}


//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int main(){
//	int i,j;
//	int sum=0;
//	for(i=0;i<2021;i++){
//		int m=i;
//		while(m){
//			if(m%10==6)sum++;
//			m/=10;
//		}
//	}
//	cout<<sum;
//}


//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int n,m,k;
//string s[109];
//int v[109][109],idx[109][109];
//int dx[]= {-1,-1,-1,0,0,0,1,1,1};
//int dy[]= {-1,0,1,-1,0,1,-1,0,1};
//struct Point {
//	int x;
//	int y;
//	int step;
//} point;
//void bfs(int x,int y,int step) {
//	queue<point> q;
//	point start;
//	start.x=x;
//	start.y=y;
//	start.step=step;
//	q.push(start);
//	while(!q.empty()) {
//		int xx=q.front().x,yy=front().y;
//		if(v[xx][yy]==1)
//		for(int i=0; i<9; i++) {
//			int tx=dx[i]+x;
//			int ty=dy[i]+x;
//			if(!(tx>=0&&tx<n&&ty>=0&&ty<m)) continue;
//			if(s[tx][ty]=='1'&&v[tx][ty]==0) {
//				point s;
//				s.x=tx;
//				s.y=y;
//				s.step=0;
//				q.push(s);
//			}
//		}
//	}
//
//
//}
//void dfs3(int x,int y) {
//	s[x][y]='0';
//	for(int i=0; i<9; i++) {
//		int tx=x+dx[i];
//		int ty=y+dy[i];
//		if(!(tx>=0&&tx<n&&ty>=0&&ty<m)) continue;
//		if(s[tx][ty]=='1') {
//			dfs3(tx,ty);
//		}
//	}
//}
//int main() {
//	int i,j;
//	cin>>n>>m>>k;
//	for(i=0; i<n; i++) {
//		cin>>s[i];
//	}
//	while(k--) {
//		memset(v,0,sizeof v);
//		for(i=0; i<n; i++) {
//			for(j=0; j<m; j++) {
//				if(s[i][j]=='1') v[i][j]=1;
//			}
//		}
//		for(i=0; i<n; i++) {
//			for(j=0; j<m; j++) {
//				if(s[i][j]=='1')dfs(i,j);
//			}
//		}
//	}
//	int cnt=0;
//	for(i=0; i<n; i++) {
//		for(j=0; j<m; j++) {
//			if(s[i][j]=='1')cnt++,dfs3(i,j);
//		}
//	}
//	cout<<cnt;
//}


//#include<bits/stdc++.h>
//using namespace std;
//#define N 509
//int n,m;
//char a[N][N];
//int v[N][N];
//struct point {
//	int x,y;
//};
//queue<point> q;
//int endx,endy;
//int dx[]={1,-1,0,0};
//int dy[]={0,0,1,-1};
//bool bfs() {
//	while(!q.empty()) {
//		int xx=q.front().x, yy=q.front().y;
//		if(xx==endx&&yy==endy) return true;
//		for(int i=0; i<4; i++) {
//			int tx=dx[i]+xx;
//			int ty=dy[i]+yy;
//			if(!(tx>=0&&tx<=n&&ty>=0&&ty<=m)) continue;
//			if(tx==endx&&ty==endy&&a[xx][yy]=='.') return true;
//			if(a[tx][ty]=='.'&&v[tx][ty]==0){
//				point temp;
//				temp.x=tx;
//				temp.y=ty;
//				q.push(temp);
//				v[tx][ty]=1;
//			}
//		}
//		q.pop();
//	}
//	return false;
//}
//int main() {
//	int i,j;
//	while(cin>>n>>m) {
//		memset(v,0,sizeof v);
//		for(i=1; i<=n; i++) {
//			scanf("%s",a[i]+1);
//		}
//		for(int i=1; i<=n; i++) {
//			for(int j=1; j<=m; j++) {
//				if(a[i][j]=='S') {
//					point start;
//					start.x=i;
//					start.y=j;
//					q.push(start);
//					v[i][j]=1;
//				}
//				if(a[i][j]=='E') {
//					endx=i;
//					endy=j;
//				}
//			}
//		}
////		cout<<q.front().x<<q.front().y<<endl;
////		cout<<endx<<endy<<endl;
//		if(bfs())cout<<"Yes"<<endl;
//		else cout<<"No"<<endl;
//
////		for(i=1; i<=n; i++) {
////			for(j=1; j<=m; j++) {
////				cout<<a[i][j];
////			}
////			cout<<endl;
////		}
//	}
//}


//#include<bits/stdc++.h>
//using namespace std;
//#define N 509
//int v[N][N];
//char a[N][N];
//int n,m,ans=INT_MAX;
//struct point {
//	int x,y,step;
//};
//queue <point> q;
//int dx[]= {-1,1,0,0};
//int dy[]= {0,0,-1,1};
//bool bfs() {
//	int i,j;
//	while(!q.empty()) {
//		int x=q.front().x,y=q.front().y;
//		if(a[x][y]=='K'){
//			ans=min(ans,q.front().step);
//		}
//		for(i=0; i<4; i++) {
//			int tx=dx[i]+x;
//			int ty=dy[i]+y;
//			if(a[tx][ty]!='W'&&v[tx][ty]==0) {
//				point temp;
//				temp.x=tx;
//				temp.y=ty;
//				temp.step=q.front().step+1;
//				q.push(temp);
//				v[tx][ty]=1;
//			}
//		}
//		q.pop();
//	}
//	return false;
//}
//
//int main() {
//	memset(v,0,sizeof v);
//	scanf("%d%d",&n,&m);
//	int i,j;
//	for(i=1; i<=n; i++) {
//		scanf("%s",a[i]+1);
//	}
////         for(i=1;i<=n;i++){
////             for(j=1;j<=m;j++){
////                 cout<<a[i][j];
////             }
////             cout<<endl;
////         }
//	for(i=1; i<=n; i++) {
//		for(j=1; j<=m; j++) {
//			if(a[i][j]=='S') {
//				point start;
//				start.x=i;
//				start.y=j;
//				start.step=0;
//				q.push(start);
//				v[i][j]=1;
//			}
//		}
//	}
//	bfs();
//}


//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//struct point {
//	int x,y,sum;
//};
//void bfs() {
//	queue<point> q;
//	point start;
//	start.x=1;
//	start.y=1;
//	start.sum=1;
//	q.push(start);
////	cout<<q.front().x;
//	while(!q.empty()) {
//		int x=q.front().x,y=q.front().y;
////		cout<<q.front().sum;
////		printf("x=%d,y=%d,sum=%d\n",x,y,q.front().sum);
//		if(x==20&&y==20) {
//			cout<<q.front().sum<<endl;
//			return ;
//		}
//		int tx=x-1;
//		int ty=y+1;
//		if(tx<=0) {
//			tx=tx+ty;
//			ty=1;
//		}
////		cout<<q.front().sum<<endl;
//		point tmp;
//		tmp.x=tx;
//		tmp.y=ty;
//		tmp.sum=q.front().sum+1;
//		q.push(tmp);
//		q.pop();
//	}
//}
//int main() {
//	bfs();
//}


//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//string s,s2;
//char a[10][10],b[10][10];
//int dx[]={1,-1,0,0};
//int dy[]={0,0,1,-1};
//void fan(){
//	int i,j;
//	for(i=0;i<3;i++){
//		a[1][i+1]=s[i];
//		b[1][i+1]=s2[i];
//	}
//	for(i=3;i<6;i++){
//		a[2][i+1-3]=s[i];
//		b[2][i+1-3]=s2[i];
//	}
//	for(i=6;i<9;i++){
//		a[3][i+1-6]=s[i];
//		b[3][i+1-6]=s2[i];
//	}
//	for(i=1;i<=3;i++){
//		for(j=1;j<=3;j++){
//			cout<<a[i][j];
//		}
//		cout<<endl;
//	}
//
//}
//void bfs(){
//
//
//}
//int main(){
//	int i,j;
//	cin>>s>>s2;
//	fan();
//}


//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int main(){
//	int i,j;
//	int n;
//	cin>>n;
//	int a;
//	map<int,int>m;
//	for(i=0;i<n;i++){
//		cin>>a;
//		m[a]++;
//	}
//	map<int,int> ::iterator it;
//	ll ans=0;
//	for(it=m.begin();it!=m.end();it++){
//		ll b=it->first;
//		ll c=it->second;
//		ans=max(ans,b*c);
//	}
//	cout<<ans;
//}

//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int main() {
//	int i,j;
//	string s,s2;
//	cin>>s;
//	s2=s;
//	if(s2[s.size()-1]>'0') {
//		s2[s.size()-1]=s2[s.size()-1]-1;
//	} else {
//		for(i=s.size()-1; i>=0; i--) {
//			if(s2[i]>'0') {
//				s2[i]=s2[i]-1;
//			}
//		}
//	}
//
//	i=s.size()-1;
//	ll ans=0;
//	while(i>=0) {
//		a=s[i]-'0';
//		ans=abs(ans+a);
//		i--;
//	}
//
//}


//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod = 998244353;
//const int N = 1e3 + 9;
//int ll f[N];
//ll  pow(ll x, ll n) {
//	ll res = 1;
//	while (n) {
//		if (n % 2 == 1) res = res * x % mod;
//		x = x * x % mod;
//		n >>= 1;
//	}
//	return res;
//}
//ll inv(ll x) {
//	return pow(x, mod - 2);
//}
//ll C(ll m, ll n) {
//	return f[m] * inv(f[n]) % mod * inv(f[m - n]) % mod;
//}
//ll A(ll m, ll n) {
//	return f[m] * inv(f[m-n]);
//}
//void init() {
//	f[0] = 1;
//	for (int i = 1; i < N; i++) {
//		f[i] = f[i - 1] * i % mod;
//	}
//
//}
//int main() {
//	int i, j;
//	int n, m;
//	cin >> n >> m;
//	init();
//	int mi = min(n, m);
//	ll ans = 0;
//	for (i = 0; i <= mi; i++) {
//		ans = (ans + C(n, i) * A(m, i) % mod) % mod;
////		cout<<C(n,i)<<endl;
//	}
//	cout << ans;
//	//for(i=0;i<100;i++){
//	//	cout<<f[i]<<endl;
//	//}
//}


//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//ll n,k,z;
//ll a[N];
//ll sum[N];
//vector<ll> v[N];
//int main(){
//	int i,j;
//	cin>>n>>k>>z;
//	for(i=1;i<=n;i++){
//		cin>>a[i];
//	}
//	for(i=1;i<=n;i++){
//		sum[i]=sum[i-1]+a[i];
//		v[sum[i]%k].push_back(sum[i]);
//	}
//	ll ans=0;
//	for(i=1;i<=n;i++){
//		if(sum[i]<z) continue;
//		if(sum[i]%k==0) ans++;
//		ll b=sum[i]%k;
//		ll c=sum[i]-z;
//		ans+=upper_bound(v[b].begin(),v[b].end(),c)-v[b].begin();
//	}
//	cout<<ans<<endl;
//}


//#include<bits/stdc++.h>
//using namespace std;
//const int N=1009;
//int tot,n,m;
//char a[N],b[N];
//int mm[N+9][30];
//void insert(string s){
//	int p=0;
//	for(int i=0;i<s.size();i++){
//		if(mm[p][s[i]-'a']==0){
//			mm[p][s[i]-'a']=++tot;
//		}
//		p=mm[p][s[i]-'a'];
//	}
//}
//int search(string s){
//	int p=0;
//	for(int i=0;i<s.size();i++){
//		if(mm[p][s[i]-'a']==0){
//			return s.size()-i;
//		}
//		p=mm[p][s[i]-'a'];
//	}
//}
//int main(){
//	int i,j;
//	cin>>n>>m>>a>>b;
//	for(i=0;i<m;i++){
//		insert(b+i);
//	}
//	int ans=0;
//	for(i=0;i<n;i++){
//		ans+=search(a+i);
//	}
//	cout<<ans;
//}


//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int main(){
//	int i,j;
//	string s;
//	cin>>s;
//	char a=s[0];
//	for(i=0;i<s.size()-1;i++){
//		s[i]=s[i+1];
//	}
//	s[s.size()-1]=a;
//	cout<<s;
//}



//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e2+9;
//int v[N][N];
//char a[N][N];
//int x,y,n,m;
//int dx[]= {-1,1,0,0};
//int dy[]= {0,0,1,-1};
//int ans;
//struct point {
//	int x,y;
//};
//void bfs() {
//	int i,j;
//	queue<point> q;
//	point start;
//	start.x=x;
//	start.y=y;
//	q.push(start);
//	v[x][y]=++ans;
//	while(!q.empty()) {
//		int xx=q.front().x,yy=q.front().y;
//		for(i=0; i<4; i++) {
//			int tx=dx[i]+xx;
//			int ty=dy[i]+yy;
//			if(tx>=1&&tx<=n&&ty>=1&&ty<=m) {
//				if(v[tx][ty]==0&&a[tx][ty]=='.') {
//					point tmp;
//					tmp.x=tx;
//					tmp.y=ty;
//					v[tx][ty]=++ans;
//					q.push(tmp);
////					printf("%d %d\n",tx,ty);
//				}
//
//			}
//		}
//		q.pop();
//	}
//}
//int main() {
//	int i,j;
//	scanf("%d%d%d%d",&n,&m,&x,&y);
//	for(i=1; i<=n; i++) {
//		scanf("%s",a[i]+1);
//	}
//	bfs();
////	if(ans>=4)cout<<4;
////	else
//		cout<<ans;
////	for(i=1;i<=n;i++){
////		for(j=1;j<=m;j++){
////			cout<<a[i][j];
////		}
////		cout<<endl;
////	}
//}

//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e2+9;
//char a[N][N];
//int x,y,n,m;
//int dx[]= {-1,1,0,0};
//int dy[]= {0,0,1,-1};
//int ans;
//int main() {
//	int i,j;
//	scanf("%d%d%d%d",&n,&m,&x,&y);
//	for(i=1; i<=n; i++) {
//		scanf("%s",a[i]+1);
//	}
//	if(a[x][y]=='.')ans++;
//	for(i=0; i<4; i++) {
//		int tx=dx[i]+x;
//		int ty=dy[i]+y;
//		if(tx>=1&&tx<=n&&ty>=1&&ty<=m&&a[tx][ty]=='.') {
//			ans++;
//			while(1) {
//				tx=dx[i]+tx;
//				ty=dy[i]+ty;
//				if(!(tx>=1&&tx<=n&&ty>=1&&ty<=m))break;
//				if(a[tx][ty]!='.')break;
//				if(a[tx][ty]=='.'){
//					ans++;
//				}
//			}
//		}
//	}
//	cout<<ans;
//}

////  3 10
//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int su[10000]= {2};
//int main() {
//	int i,j,k=0;
//	int a,b;
//	cin>>a>>b;
//	for(i=2; i<10000; i++) {
//		for(j=2; j*j<i; j++) {
//			if(i%j==0)break;
//		}
//		if(j*j>i) su[k++]=i;
//	}
////	for(i=0;i<100;i++){
////		cout<<su[i]<<" ";
////	}
//	for(i=a; i<=b; i++) {
//		cout<<i<<"=";
//		int m=i;
//		int flag=0;
//		for(j=0; j<k; j++) {
//			if(m%su[j]==0) {
//				while(1) {
//					if(m%su[j]==0) {
//						if(m/su[j]==1) {
//							cout<<su[j]<<endl;
//							flag=1;
//							break;
//						} else {
//							cout<<su[j]<<"*";
//							m/=su[j];
//						}
//					}else break;
//				}
//			}
//			if(flag==1)break;
//		}
//	}
//}


//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//string s,ss;
//void fan(string &s) {
//	int i;
//	for(i=0; i<s.size(); i++) {
//		if(s[i]>='a'&&s[i]<='z') {
//			s[i]=s[i];
//		} else {
//			s[i]=s[i]-'A'+'a';
//		}
//	}
//}
//int main() {
//	int i,j;
//	cin>>s>>ss;
//	if(s.size()!=ss.size())cout<<1<<endl;
//	else {
//		if(s==ss) cout<<2<<endl;
//		else {
//			fan(s);
//			fan(ss);
//			if(s==ss)cout<<3;
//			else cout<<4;
//		}
//	}
//}




//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int main(){
//	int i,j;
//	double a,b;
//	cin>>a>>b;
//	printf("%.2lf\n",a/100*b*0.8+a);
//}


//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int main(){
//	int i,j;
//	T{
//		int a,b,d;
//		cin>>a>>b>>d;
//		double mi=min(a,b);
//		if(ceil(abs(a-b)/mi)<=d)cout<<"YES"<<endl;
//		else cout<<"NO"<<endl;
//	}
//}


//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e2+9;
//int a[N][N];
//int v[N][N];
//int dx[]= {0,1,0,-1};
//int dy[]= {1,0,-1,0};
//int n,m,k;
//int ans;
//struct point {
//	int x,y,step;
//};
//void bfs() {
//	queue<point> q;
//	point start;
//	start.x=1;
//	start.y=1;
//	start.step=0;
//	q.push(start);
//	v[1][1]=1;
//	while(!q.empty()) {
//		point no=q.front();
//		int x=q.front().x,y=q.front().y;
////		printf("%d %d %d\n",x,y,v[x][y]);
////		if(v[x][y]>=0) {
////			ans+=q.front().step;
////		}
//		if(x==n&&y==m&&no.step==k) {
//			ans=1;
//		}
//		for(int i=0; i<2; i++) {
//			int tx=dx[i]+x;
//			int ty=dy[i]+y;
//			if(tx>=1&&tx<=n&&ty>=1&&ty<=m&&v[tx][ty]==0) {
//				if(tx==x) q.push({tx,ty,no.step+tx});
//				else q.push({tx,ty,no.step+ty});
//				v[tx][ty]=q.front().step+1;
////				printf("%d %d %d\n",tx,ty,v[tx][ty]);
//
//			}
//		}
//		q.pop();
//	}
//}
//int main() {
//	int i,j;
//	T {
//		ans=0;
//		memset(v,0,sizeof v);
//		cin>>n>>m>>k;
//		bfs();
////		for(i=1;i<=n;i++){
////			for(j=1;j<=m;j++){
////				cout<<v[i][j]<<" ";
////			}
////			cout<<endl;
////		}
//		cout<<ans<<endl;
//		if(ans) cout<<"YES"<<endl;
//		else cout<<"NO"<<endl;
//	}
//}
/*
1
2 2 4
*/



//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//
//const int maxn = 100100;
//
//int n;
//int d[maxn];
//int dp[maxn];
//
//int main() {
//	int i,j;
//	cin >> n;
//	int ans = -1;
//	for (int i = 1; i <= n; i++) cin >> d[i];
//	for (int i = 1; i <= n; i++) {
//		dp[i] = 1;
//		for (int j = 1; j <=5; j++) {
//			int x = max(0, i - j);
//			if(x==0) dp[i] = max(dp[i], dp[x] + 1);
//			else if (d[i] % d[x] != 0) {
//				dp[i] = max(dp[i], dp[x] + 1);
//			}
//			for(j=1;j<=n;j++){
//				cout<<dp[j]<<" ";
//			}
//			cout<<endl;
//		}
//		ans = max(dp[i], ans);
//	}
//	cout << ans << endl;
//}



//#include<bits/stdc++.h>
//using namespace std;
//#define ll long long
//int dp[100007];
//int a[100007];
//int main() {
//	int i,j;
//	int n;
//	cin>>n;
//	for(int i=1; i<=n; i++) {
//		scanf("%d",&a[i]);
//	}
//	int ans=0;
//	for(int i=1; i<=n; i++) {
//		printf("i=%d\n",i);
//		for(int j=1; j<i; j++) {
//			if(a[i]%a[j]!=0) {
//				dp[i]=max(dp[i],dp[j]+1);
//				printf("j=%d\n",j);
//				for(int k=1; k<=n; k++) {
//					cout<<dp[k]<<" ";
//				}
//				cout<<endl;
//			}
//		}
//		ans=max(ans,dp[i]);
//	}
//	cout<<ans+1<<endl;
//	return 0;
//}





//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int main() {
//	int i,j;
//	int n,m,t,k;
//	cin>>n>>m>>t>>k;
//	priority_queue <double> a;
//	priority_queue <double> b;
//	for(i=0; i<n; i++) {
//		int aa;
//		cin>>aa;
//		a.push(aa);
//	}
//	for(i=0; i<m; i++) {
//		int aa;
//		cin>>aa;
//		b.push(aa);
//	}
//	double ans=0;
//	k=t-k;
//	for(i=0; i<t; i++) {
//		double aa=a.top(),bb=b.top();
//		double mu=1;
//		if(k<=0) mu=0.8;
//		if(aa>bb*mu) {
//            ans+=aa*mu;
//            a.pop();
//            a.push(aa*0.6);
//        } else {
//            ans+=bb;
//            b.pop();
//            b.push(bb*0.6);
//            k--;
//        }
//	}
//
//	printf("%.2lf\n",ans);
//}




//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//
//int dx[]={0,0,-1,1};
//int dy[]={1,-1,0,0};
//int main(){
//	int i,j;
//	int n;
//	cin>>n;
//	int a[n+9][n+9],b[3][n+9];
//	memset(b,0,sizeof b);
//	for(i=1;i<=n;i++){
//		for(j=1;j<=n;j++){
//			cin>>a[i][j];
//		}
//	}
//	int endx,endy;
//	for(i=1;i<=n;i++){
//		for(j=1;j<=n;j++){
//			if(a[i][j]==-1){
//				endx=i;endy=j;
//			}
//		}
//	}
//	a[endx][endy]=INT_MAX;
//	int k=1;
//	for(i=1;i<=n;i++){
//		int mi=INT_MAX;
//		for(j=1;j<=n;j++){
//			mi=min(mi,a[i][j]);
//		}
//		for(j=1;j<=n;j++){
//			a[i][j]-=mi;
//		}
//	}
//	k=1;
//	for(j=1;j<=n;j++){
//		int mi=INT_MAX;
//		for(i=1;i<=n;i++){
//			mi=min(mi,a[i][j]);
//		}
//		for(i=1;i<=n;i++){
//			a[i][j]-=mi;
//		}
//	}
//	ll sum=0;
//	for(i=0;i<4;i++){
//		int tx=dx[i]+endx;
//		int ty=dy[i]+endy;
//		if(a[tx][ty]!=0){
//			sum+=b[1][tx];
//			sum+=b[2][ty];
//		}
//	}
//	cout<<INT_MAX-a[endx][endy];
////	for(i=1;i<=n;i++){
////		for(j=1;j<=n;j++){
////			cout<<a[i][j]<<" ";
////		}
////		cout<<endl;
////	}
//}




//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int main(){
//	int i,j;
//	int n,m;
//	scanf("%d",&n);
//	int a[1009],b[1009];
//	memset(a,0,sizeof a);
//	memset(b,0,sizeof a);
//	set<int> s;
//	for(i=0;i<n;i++){
//		scanf("%d",&a[i]);
//		s.insert(a[i]);
//	}
//	sort(a,a+n);
//	cin>>m;
//	for(i=0;i<m;i++){
//		scanf("%d",&b[i]);
//		s.insert(b[i]);
//	}
//	sort(b,b+m);
//	int ji[1009],k=0,len=0;
//	for(i=0;i<n;i++){
//		for(j=0;j<m;j++){
//			if(a[i]==b[j]){
//				ji[k++]=a[i];
//			}
//		}
//	}
//	len=k;
//	int bin[2009],len2;k=0;
//	set<int> ::iterator it;
//	for(it=s.begin();it!=s.end();it++){
//		bin[k++]=*it;
//	}
//	len2=k;
//	for(i=0;i<len;i++){
//		printf("%d ",ji[i]);
//	}
//	printf("\n");
//	for(i=0;i<len2;i++){
//		printf("%d ",bin[i]);
//	}
//	printf("\n");
//	int aa[1009];
//	memset(aa,0,sizeof aa);
//	for(i=0;i<len2;i++){
////		aa[i]=2;
//		for(j=0;j<m;j++){
//			if(bin[i]==b[j]){
//				aa[i]=1;
//			}
//		}
//	}
//	for(i=0;i<len2;i++){
//		if(aa[i]!=1)printf("%d ",bin[i]);
//	}
//	printf("\n");
//}


//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int main(){
//	int i,j;
//	int t,m;
//	cin>>t>>m;
//	int val[m+9],wigh[m+9];
//	for(i=1;i<=m;i++){
//		cin>>wigh[i]>>val[i];
//	}
//	int a[m+9][t+9];
//	memset(a,0,sizeof a);
//	for(i=1;i<=m;i++){
//		for(j=1;j<=t;j++){
//			if(j>=wigh[i]){
//				a[i][j]=max(a[i-1][j],a[i-1][j-wigh[i]]+val[i]);
//			}
//			else{
//				a[i][j]=a[i-1][j];
//			}
//		}
//	}
////	for(i=1;i<=m;i++){
////		for(j=1;j<=t;j++){
////			cout<<a[i][j]<<" ";
////		}
////		cout<<endl;
////	}
//	cout<<a[m][t];
//}

//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int main() {
//	int i,j;
//	int n,m;
//	int a[1009],dp[1009];
//	while(cin>>n) {
//		if(n==0)break;
//		memset(dp,0,sizeof dp);
//		for(i=1; i<=n; i++) {
//			cin>>a[i];
//		}
//		sort(a+1,a+n+1);
//		cin>>m;
//		if(m<5) {
//			cout<<m<<endl;
//			continue;
//		}
//		for(i=1; i<n; i++) {
//			for(j=m-5; j>=a[i]; j--) {
////				if(j>a[i]){
//				if(j>=a[i])
//					dp[j]=max(dp[j],dp[j-a[i]]+a[i]);
////				}
////				else{
////					dp[j]=dp[j-1];
////				}
//			}
//		}
//		cout<<m-dp[m-5]-a[n]<<endl;
////		for(i=1;i<=n;i++){
////			for(j=1;j<=m-5;j++){
////				cout<<dp[i][j]<<" ";
////			}
////			cout<<endl;
////		}
//	}
//}


//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int main() {
//	int i,j;
//	int n;
//	int dp[1009],a[1009];
//	int m;
//	cin>>n;
//	memset(dp,0,sizeof dp);
//	for(i=1; i<=n; i++) {
//		cin>>a[i];
//	}
//	cin>>m;
//	sort(a+1,a+1+n);
//	for(i=1; i<n; i++) {
//		for(j=m; j>=a[i]; j--) {
//			dp[j]=max(dp[j],dp[j-a[i]]+a[i]);
//			cout<<i<<"  ";
//			for(int k=1; k<n; k++) {
//				cout<<dp[k]<<" ";
//			}
//			cout<<endl;
//		}
//	}
//}

/*
10
1 2 3 2 1 1 2 3 2 1
50

*/



//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	int i,j;
//	int n;
//	int dp[1009],a[1009];
//	int m;
//	while(cin>>n&&n){
//		memset(dp,0,sizeof dp);
//		for(i=1;i<=n;i++) cin>>a[i];
//		sort(a+1,a+n+1);
//		cin>>m;
//		if(m<5){
//			cout<<m<<endl;
//			continue;
//		}
//		for(i=1;i<n;i++){
//			for(j=m-5;j>=a[i];j--){
//				dp[j]=max(dp[j],dp[j-a[i]]+a[i]);
//			}
//		}
//		cout<<m-a[n]-dp[m-5]<<endl;
//	}
//}



//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	int i,j;
//	int n,m;
//	int w[10000+9];
//	double v[10000+9],dp[10000+9];
//	while(cin>>n>>m){
//		if(n==0&&m==0)break;
//		for(i=0;i<=n;i++) dp[i]=1.0;
//		for(i=1;i<=m;i++){
//			cin>>w[i]>>v[i];
//			v[i]=1-v[i];
//		}
//		for(i=1;i<=m;i++){
//			for(j=n;j>=w[i];j--){
//				dp[j]=min(dp[j],dp[j-w[i]]*v[i]);
//			}
//			for(j=1;j<=n;j++){
//				cout<<dp[j]<<" ";
//			}
//			cout<<endl;
//		}
////		for(i=1;i<=n;i++) cout<<dp[i]<<endl;
//		printf("%.1f%%\n",(1-dp[n])*100);
////		cout<<dp[n]<<endl;
//	}
//}




//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//
//int arr[50009],tree[5000*4];
//void build(int arr[],int tree[],int node,int start ,int end) {
//	if(start==end) {
//		tree[node]=arr[start];
//		return;
//	}
//	int mid=(start+end)/2;
//	int left =2*node;
//	int right=2*node+1;
//	build(arr,tree,left,start,mid);
//	build(arr,tree,right,mid+1,end);
//	tree[node]=tree[left]+tree[right];
//}
//void update(int arr[],int tree[],int node,int start,int end,int idx,int val) {
////	printf("satrt=%d,end=%d\n",start,end);
//	if(start==end) {
//		arr[idx]=val;
//		tree[node]=val;
//		return ;
//	}
//	int mid=(start+end)/2;
//	int left=node*2;
//	int right=node*2+1;
//	if(idx>=start&&idx<=mid) {
//		update(arr,tree,left,start,mid,idx,val);
//	} else {
//		update(arr,tree,right,mid+1,end,idx,val);
//	}
//	tree[node]=tree[left]+tree[right];
//}
//ll query(int arr[],int tree[],int node,int start,int end,int L,int R) {
//	printf("start=%d end=%d\n",start,end);
//	if(R<start||L>end) {
//		return 0;
//	} else if(L<=start&&R>=end) {
//		return tree[node];
//	} else if(start==end) {
//		return tree[node];
//	}
//	int mid=(start+end)/2;
//	int left=node*2;
//	int right=node*2+1;
//	ll left_sum= query(arr,tree,left,start,mid,L,R);
//	ll right_sum=query(arr,tree,right,mid+1,end,L,R);
//	return left_sum+right_sum;
//}
//int main() {
//	int i,j;
//	int n=6;
//	for(i=1; i<=n; i++) {
//		cin>>arr[i];
//	}
//	cout<<endl;
//	build(arr,tree,1,1,n);
//
//	for(i=1; i<16; i++) {
//		cout<<tree[i]<<" ";
//	}
//	cout<<endl<<endl;
//
//	update(arr,tree,1,1,n,5,6);
//
//	for(i=1; i<16; i++) {
//		cout<<tree[i]<<" ";
//	}
//	cout<<endl<<endl;
//
//	ll sum =query(arr,tree,1,1,n,3,6);
//
//	cout<<sum<<endl;
//}

/*

1 3 5 7 9 11
*/




//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//
//int arr[50009],tree[50000*4];
//
//void build(int arr[],int tree[],int node,int start ,int end) {
//	if(start==end) {
//		tree[node]=arr[start];
//		return;
//	}
//	int mid=(start+end)/2;
//	int left =2*node;
//	int right=2*node+1;
//	build(arr,tree,left,start,mid);
//	build(arr,tree,right,mid+1,end);
//	tree[node]=tree[left]+tree[right];
//}
//void update(int arr[],int tree[],int node,int start,int end,int idx,int val) {
//	if(start==end) {
//		arr[idx]=val;
//		tree[node]=val;
//		return ;
//	}
//	int mid=(start+end)/2;
//	int left=node*2;
//	int right=node*2+1;
//	if(idx>=start&&idx<=mid) {
//		update(arr,tree,left,start,mid,idx,val);
//	} else {
//		update(arr,tree,right,mid+1,end,idx,val);
//	}
//	tree[node]=tree[left]+tree[right];
//}
//ll query(int arr[],int tree[],int node,int start,int end,int L,int R) {
//	if(R<start||L>end) {
//		return 0;
//	} else if(L<=start&&R>=end) {
//		return tree[node];
//	} else if(start==end) {
//		return tree[node];
//	}
//	int mid=(start+end)/2;
//	int left=node*2;
//	int right=node*2+1;
//	ll left_sum= query(arr,tree,left,start,mid,L,R);
//	ll right_sum=query(arr,tree,right,mid+1,end,L,R);
//	return left_sum+right_sum;
//}
//int main() {
//	int i,j;
//	int t,ji=0;
//	scanf("%d",&t);
//	int n=6;
//	string s;
//	while(t--) {
//		memset(tree,0,sizeof tree);
//		cin>>n;
//		for(i=1; i<=n; i++) {
//			scanf("%d",&arr[i]);
//		}
//		build(arr,tree,1,1,n);
//		int a,b;
//		printf("Case %d:\n",++ji);
////		cout<<"Case "<<(++ji)<<":"<<endl;
//		while(1) {
//			cin>>s;
//			if(s=="End")break;
//			scanf("%d%d",&a,&b);
//			if(s=="Query") {
//				cout<<query(arr,tree,1,1,n,a,b)<<endl;
//			}
//			if(s=="Add") {
//				update(arr,tree,1,1,n,a,arr[a]+b);
//			}
//			if(s=="Sub") {
//				update(arr,tree,1,1,n,a,arr[a]-b);
//			}
//		}
//	}
//}



//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//
//int arr[200009],tree[200009*4];
//
//void build(int arr[],int tree[],int node,int start ,int end) {
//	if(start==end) {
//		tree[node]=arr[start];
//		return;
//	}
//	int mid=(start+end)/2;
//	int left =2*node;
//	int right=2*node+1;
//	build(arr,tree,left,start,mid);
//	build(arr,tree,right,mid+1,end);
//	tree[node]=max(tree[left],tree[right]);
//}
//void update(int arr[],int tree[],int node,int start,int end,int idx,int val) {
//	if(start==end) {
//		arr[idx]=val;
//		tree[node]=val;
//		return ;
//	}
//	int mid=(start+end)/2;
//	int left=node*2;
//	int right=node*2+1;
//	if(idx>=start&&idx<=mid) {
//		update(arr,tree,left,start,mid,idx,val);
//	} else {
//		update(arr,tree,right,mid+1,end,idx,val);
//	}
//	tree[node]=max(tree[left],tree[right]);
//}
//int query(int arr[],int tree[],int node,int start,int end,int L,int R) {
//	if(L<=start&&R>=end) {
//		return tree[node];
//	}else if(start==end){
//		return tree[node];
//	}
//	int mid=(start+end)/2;
//	int maxv=-1;
//
//	int left=node*2;
//	int right=node*2+1;
//	if(L<=mid)
//		maxv=query(arr,tree,left,start,mid,L,R);
//	if(R>mid)
//		maxv=max(query(arr,tree,right,mid+1,end,L,R),maxv);
//	return maxv;
//}
//int main() {
//	int i,j;
//	int n,m;
//	while(~scanf("%d%d",&n,&m)) {
//		memset(tree,0,sizeof tree);
//		for(i=1; i<=n; i++) {
//			scanf("%d",&arr[i]);
//		}
//		build(arr,tree,1,1,n);
//		char c;
//		int a,b;
//		while(m--) {
//			getchar();
//			scanf("%c",&c);
//			scanf("%d%d",&a,&b);
////			printf("c=%c,a=%d,b=%d\n",c,a,b);
//			if(c=='Q') {
////				for(int k=1;k<=n;k++) cout<<arr[k]<<" ";
////				cout<<endl;
////				for(int k=1;k<=4*n;k++) cout<<tree[k]<<" ";
////				cout<<endl;
//				cout<<query(arr,tree,1,1,n,a,b)<<endl;
//			} else if(c=='U') {
//				update(arr,tree,1,1,n,a,b);
//			}
//		}
//	}
//}




//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//
//int arr[100000],tree[100000*4];
//
//void build(int arr[],int tree[],int node,int start ,int end) {
//	if(start==end) {
//		tree[node]=arr[start];
//		return;
//	}
//	int mid=(start+end)/2;
//	int left =2*node;
//	int right=2*node+1;
//	build(arr,tree,left,start,mid);
//	build(arr,tree,right,mid+1,end);
//	tree[node]=tree[left]+tree[right];
//}
//void update(int arr[],int tree[],int node,int start,int end,int idx,int val) {      //区间修改
//	if(start==end) {
//		arr[idx]=val;
//		tree[node]=val;
//		return ;
//	}
//	int mid=(start+end)/2;
//	int left=node*2;
//	int right=node*2+1;
//	if(idx>=start&&idx<=mid) {
//
//		update(arr,tree,left,start,mid,idx,val);
//	} else {
//		update(arr,tree,right,mid+1,end,idx,val);
//	}
//	tree[node]=tree[left]+tree[right];
//}
//
//ll query(int arr[],int tree[],int node,int start,int end,int L,int R) {	//区间和
//	if(R<start||L>end) {
//		return 0;
//	} else if(L<=start&&R>=end) {
//		return tree[node];
//	} else if(start==end) {
//		return tree[node];
//	}
//	int mid=(start+end)/2;
//	int left=node*2;
//	int right=node*2+1;
//	ll left_sum= query(arr,tree,left,start,mid,L,R);
//	ll right_sum=query(arr,tree,right,mid+1,end,L,R);
//	return left_sum+right_sum;
//}
//int query_max(int arr[],int tree[],int node,int start,int end,int L,int R) {	//范围最大值
//	if(L<=start&&R>=end) {
//		return tree[node];
//	} else if(start==end) {
//		return tree[node];
//	}
//	int mid=(start+end)/2;
//	int maxv=-1;
//
//	int left=node*2;
//	int right=node*2+1;
//	if(L<=mid)
//		maxv=query_max(arr,tree,left,start,mid,L,R);
//	if(R>mid)
//		maxv=max(query_max(arr,tree,right,mid+1,end,L,R),maxv);
//	return maxv;
//}
//int main() {
//	int i,j;
//	int n=6,m;
//	cin>>n>>m;
//	for(i=1; i<=n; i++) {
//		scanf("%d",&arr[i]);
//	}
//	char q;
//	int a,b,c;
//	build(arr,tree,1,1,n);
//	while(m--){
//		getchar();
//		scanf("%c",&q);
//		if(q=='Q'){
//			scanf("%d%d",&a,&b);
//			cout<<query(arr,tree,1,1,n,a,b)<<endl;
//		}
//		else{
//			scanf("%d%d%d",&a,&b,&c);
//			update(arr,tree,1,1,n,a,6);
//		}
//	}
//}


//#include<bits/stdc++.h>
//using namespace std;
//#define ll long long
//const  int N=100;
///* 基础数据结构 */
//int w[N]; //初始化的值
//struct node {
//	int l, r; //维护区间
//	ll sum; //维护的属性
//	ll lazy; //懒标记, 当前节点的懒标记不包括自己.
//} t[N << 2];
//
//
///* 基础函数 */
//void pushdown(node& op, ll lazy) { //重载. 作用: 给当前节点加上懒标记  一定写重载!!!
//	op.sum += lazy * (op.r - op.l + 1);  //维护当前节点属性
//	op.lazy += lazy; //累加懒标记
//}
//
//void pushdown(int x) {
//	if (!t[x].lazy) return;
//	pushdown(t[x], t[x << 1], t[x << 1 | 1]);
//	t[x].lazy = 0; //节点懒标记清空
//}
//
////void pushup(node& p, node& l, node& r) { //重载. 作用: 把l, r区间信息合并得到父亲节点p
////    p.b = l.b + r.b; p.d = gcd(l.d, r.d); //涉及到区间合并的时候重载
////}
//
//void pushup(int x) {
//	pushup(t[x], t[x << 1], t[x << 1 | 1]);
//}
//
//void build(int l, int r, int x = 1) {
//	t[x] = { l, r, w[l], 0 }; //特别注意, 如果有多组的情况, 懒标记一定要赋初值
//	if (l == r) return;
//	int mid = l + r >> 1;
//	build(l, mid, x << 1), build(mid + 1, r, x << 1 | 1);
//	pushup(x); //不要忘了!!!
//}
//
//void modify(int a, int c, int x = 1) { //单点修改, a为要修改的点, c为修改的值
//	if (t[x].l == t[x].r /* && t[x].l == a */) {
//		//修改操作, 这里不需要pushup了, 因为递归结束后会pushup
//		return;
//	}
//	int mid = t[x].l + t[x].r >> 1;
//	modify(a, c, x << 1 | (a > mid));
//	pushup(x);
//}
//void modify(int l, int r, int c, int x = 1) { //区间修改
//	if (l <= t[x].l && r >= t[x].r) {
//		pushdown(t[x], c); //可以认为是对这个节点进行了一次pushdown
//		return;
//	}
//	pushdown(x); //后续pushup需要根据子节点维护父亲节点, 所以要下放懒标记
//	int mid = t[x].l + t[x].r >> 1;
//	if (l <= mid) modify(l, r, c, x << 1);
//	if (r > mid) modify(l, r, c, x << 1 | 1);
//	pushup(x);
//}
//
//auto ask(int l, int r, int x = 1) {
//	if (l <= t[x].l && r >= t[x].r) {
//		return t[x].sum/*t[x]*/; //若涉及到区间合并, 则返回节点类型
//	}
//	pushdown(x);
//	int mid = t[x].l + t[x].r >> 1;
//	/* 维护单值情况
//	ll sum = 0;
//	if (l <= mid) sum += ask(l, r, x << 1);
//	if (r > mid) sum += ask(l, r, x << 1 | 1);
//	return sum;
//	*/
//	/* 涉及到区间合并的情况 */
//	if (r <= mid) return ask(l, r, x << 1); //仅在左半部分
//	if (l > mid) return ask(l, r, x << 1 | 1); //仅在右半部分
//	auto left = ask(l, r, x << 1), right = ask(l, r, x << 1 | 1); //横跨左右, 构造新区间
//	node res; //注意p是否需要初始化某些值, 有的合并不局限于左右儿子
//	pushup(res, left, right); //此时要把left和right合并为新的区间
//	return res;
//}
//
//int main() {
//
//}





//#include <iostream>
//#include<cstdio>
//#include<cstring>
//#include<algorithm>
//using namespace std;
//typedef long long ll;
//const int maxn = 1e5 + 5;
//ll n;
//struct node {
//	ll val;
//	ll lazy;
//} tree[maxn << 2];
//ll a[maxn];
//void pushup(int root) {
//	tree[root].val = tree[root << 1].val + tree[root << 1 | 1].val;
//}
//void build(ll l, ll r, ll root) {
//	tree[root].lazy = 0;
//	if (l == r) {
//		tree[root].val = a[l];	//初始化
//		return;
//	}
//	ll mid = (l + r) >> 1;
//	build(l, mid, root << 1);
//	build(mid + 1, r, root << 1 | 1);
//	pushup(root);
//}
//void pushdown(ll root, ll l, ll r) {
//	if (!tree[root].lazy)return;
//	ll mid = (l + r) >> 1;
//	tree[root << 1].val += tree[root].lazy*(mid - l + 1);		//更新左子树的值
//	tree[root << 1 | 1].val += tree[root].lazy*(r - mid);		//更新右子树的值
//	tree[root << 1].lazy += tree[root].lazy;			//向左子树传递lazy
//	tree[root << 1 | 1].lazy+= tree[root].lazy;			//向右子树传递lazy
//	tree[root].lazy = 0;
//}
//void update(ll L, ll R, ll v, ll l, ll r, ll root) {
//	if (L > r || R < l)return;
//	if (L <= l && R >= r) {
//		tree[root].val += v * (r - l + 1);		//将数值加上lazy
//		tree[root].lazy += v;					//更新lazy
//		return;
//	}
//	pushdown(root, l, r);
//	ll mid = (l + r) >> 1;
//	update(L, R, v, l, mid, root << 1);
//	update(L, R, v, mid + 1, r, root << 1 | 1);
//	pushup(root);
//}
//ll query(ll L, ll R, ll l, ll r, ll root) {
//	if (L > r || R < l)return 0;
//	if (L <= l && R >= r)return tree[root].val;
//	pushdown(root, l, r);
//	ll mid = (l + r) >> 1;
//	return query(L, R, l, mid, root << 1) + query(L, R, mid + 1, r, root << 1 | 1);
//}
//int main() {
//	ll i,j;
//	ll q;
//	scanf("%lld%lld",&n,&q);
//	for(i=1; i<=n; i++) {
//		scanf("%lld",&a[i]);
//	}
//	build(1,n,1);
//	char m;
//	while(q--) {
//		getchar();
//		scanf("%c",&m);
//		int a1,a2;
//		ll a3;
//		if(m=='Q') {
//			scanf("%d%d",&a1,&a2);
////			cout<<query(b,c,1,n,1)<<endl;
//			printf("%lld\n",query(a1,a2,1,n,1));
//		} else {
//
//			scanf("%d%d%lld",&a1,&a2,&a3);
//			update(a1,a2,a3,1,n,1);
//		}
//	}
//}

/*
5 3
1 2 3 4 5
Q 2 5
C 1 3 2
Q 4 5
*/

//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//const int maxn = 2e5 + 5;
//struct node {
//	ll val;
//}tree[maxn << 2];
//ll n, w;
//ll a[maxn];
//void pushup(ll root) {
//	tree[root].val = max(tree[root << 1].val, tree[root << 1 | 1].val);			//区间最大值
//}
//void build(ll l, ll r, ll root) {
//	if (l == r) {
//		tree[root].val = a[l];		//初始化
//		return;
//	}
//	ll mid = (l + r) >> 1;
//	build(l, mid, root << 1);
//	build(mid + 1, r, root << 1 | 1);
//	pushup(root);
//}
//void update(ll idx, ll v, ll l, ll r, ll root) {
//	if (idx > r || idx < l)return;
//	if (idx <= l && idx >= r) {
//		tree[root].val = v;			//将树中值改为 v，增加改成+
//		return;
//	}
//	ll mid = (l + r) >> 1;
//	update(idx, v, l, mid, root << 1);
//	update(idx, v, mid + 1, r, root << 1 | 1);
//	pushup(root);
//}
//ll query(ll L, ll R, ll l, ll r, ll root) {
//	if (L > r || R < l)return 0;
//	if (L <= l && r <= R)return tree[root].val;
//	ll mid = (l + r) >> 1;
//	return max(query(L, R, l, mid, root << 1), query(L, R, mid + 1, r, root << 1 | 1));		//区间最大值
//}
//int main() {
//	while (~scanf("%lld%lld", &n, &w)) {
//		for (int i = 1; i <= n; i++)
//			scanf("%lld", &a[i]);
//		build(1, n, 1);
//		while (w--) {
//			getchar();
//			char s;
//			ll x, y;
//			scanf("%c%lld%lld", &s, &x, &y);
//			if (s == 'Q')printf("%lld\n", query(x, y, 1, n, 1));
//			else update(x, y, 1, n, 1);
//		}
//	}
//}

//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//const int maxn = 100000 + 5;
//struct node {
//	ll val;
//} tree[maxn << 2];
//ll n, m;
//ll a[maxn];
//void pushup(ll root) {
//	tree[root].val = __gcd(tree[root << 1].val, tree[root << 1 | 1].val);			//区间最大值
//}
//void build(ll l, ll r, ll root) {
//	if (l == r) {
//		tree[root].val = a[l];		//初始化
//		return;
//	}
//	ll mid = (l + r) >> 1;
//	build(l, mid, root << 1);
//	build(mid + 1, r, root << 1 | 1);
//	pushup(root);
//}
//void update(ll idx, ll v, ll l, ll r, ll root) {
//	if (idx > r || idx < l)return;
//	if (idx <= l && idx >= r) {
//		if(tree[root].val+v<0){
//			tree[root].val=0;
//		}
//		else{
//			tree[root].val+=v;
//		}
//		return;
//	}
//	ll mid = (l + r) >> 1;
//	update(idx, v, l, mid, root << 1);
//	update(idx, v, mid + 1, r, root << 1 | 1);
//	pushup(root);
//}
//ll query(ll L, ll R, ll l, ll r, ll root) {
//	if (L > r || R < l)return 0;
//	if (L <= l && r <= R)return tree[root].val;
//	ll mid = (l + r) >> 1;
//	return __gcd(query(L, R, l, mid, root << 1), query(L, R, mid + 1, r, root << 1 | 1));		//区间最大值
//}
//
//int main(){
//	int i,j;
//	cin>>n>>m;
//	for(i=1;i<=n;i++){
//		scanf("%d",&a[i]);
//	}
//	build(1,n,1);
//	char aa[10];
//	while(m--){
//		getchar();
//		scanf("%s",aa);
//		int b,c;
//		scanf("%d%d",&b,&c);
//		if(aa[0]=='+'){
//			update(b,c,1,n,1);
//		}
//		if(aa[0]=='-'){
//			update(b,-c,1,n,1);
//		}
//		if(aa[0]=='Q'){
//			if(b>c)swap(b,c);
//			cout<<query(b,c,1,n,1)<<endl;
//		}
//	}
//}



////////////////////////////////////////////////////////线段树
//#include <iostream>
//#include<cstdio>
//#include<cstring>
//#include<algorithm>
//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//const int maxn = 10005;
//ll n;
//int vis[maxn<<3],sum[maxn<<4];
//int li[maxn*2],ri[maxn*2],lsh[maxn<<2];
//
//int main() {
//	int i,j;
//	int q;
//	scanf("%d",&q);
//	while(q--) {
//		memset(lsh,0,sizeof lsh);
//		scanf("%lld",&n);
//		int k=0;
//		for(i=1; i<n; i++) {
//			scanf("%d%d",&li[i],ri[i]);
//			lsh[k++]=li[i];
//			lsh[k++]=ri[i];
//		}
//		sort(lsh+1,lsh+k+1);
//		int cnt=unique(lsh+1,lsh+k+1)-lsh;
//		int tt=cnt;
//		for(i=2; i<=tt; i++) {
//			if(lsh[i]-lsh[i-1]>1) {
//				lsh[cnt++]=lsh[i-1]+1;
//			}
//		}
//		sort(lsh+1,lsh+1+cnt);
//		for(i=1; i<=n; i++) {
//			int x=lower_bound(lsh,lsh+cnt,li[i])-lsh;
//			int y=lower_bound(lsh,lsh+cnt,ri[i])-lsh;
//		}
//
//	}
//}



//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int a[10][10];
//int n,m,k;
//int dx[]={1,-1,0,0};
//int dy[]={0,0,1,-1};
//
//void dfs(int x,int y){
//	if(){
//
//	}
//}
//int main(){
//	int i,j;
//	cin>>n>>m>>k;
//	for(i=1;i<=n;i++){
//		for(j=1;j<=m;j++){
//			cin>>a[i][j];
//		}
//	}
//
//
//}




//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int main(){
//	int i,j;
//	int a[109];
//	int k=1;
//	for(i=2;i<101;i++){
//		for(j=2;j*j<i;j++){
//			if(i%j==0) break;
//		}
//		if(j*j>i) a[k++]=i;
//	}
//	string s;
//	cin>>s;
//	int b[30];
//	memset(b,0,sizeof b);
//	for(i=0;i<s.size();i++){
//		b[s[i]-'a']++;
//	}
//	int minn=INT_MAX,maxn=1;
//	for(i=0;i<30;i++){
//		if(b[i]>0&&minn>b[i]){
//			minn=b[i];
//		}
//		maxn=max(maxn,b[i]);
//	}
//	int m=maxn-minn;
//	for(i=1;i<k;i++){
//		if(m==a[i])break;
//	}
//	if(i!=k) cout<<"Lucky Word"<<endl;
//	else cout<<"No Answer"<<endl;
//	cout<<m;
//}


//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=509;
//int n,m,k;
//int v[N][N];
//char s[N][N];
//int dx[]= {1,0,0,-1};
//int dy[]= {0,-1,1,0};
//char fan[]="DLRU";
//struct point {
//	int x;
//	int y;
//	int step;
//	char a;
//};
//
//point p[10][10];
//void pri(int sx, int sy) {
//	if( sx==0 && sy==0 ) {
//		printf("(%d, %d)\n", sx, sy);
//		return ;
//	}
//	pri(p[sx][sy].x, p[sx][sy].y);
//	printf("(%d, %d)\n", sx, sy);
//}
//void bfs(int x,int y,int step) {
//	queue<point> q;
//	point start;
//	start.x=x;
//	start.y=y;
//	start.step=step;
//	q.push(start);
//	while(!q.empty()) {
//		int xx=q.front().x,yy=q.front().y;
//		if(xx==n&&yy==m) {
//			pri(n,m);
//			break;
//		}
//		for(int i=0; i<4; i++) {
//			int tx=dx[i]+x;
//			int ty=dy[i]+x;
//			if(!(tx>=0&&tx<n&&ty>=0&&ty<m)) continue;
//			if(s[tx][ty]=='1'&&v[tx][ty]==0) {
//				p[tx][ty].x = tx;
//                p[tx][ty].y = ty;
//				point s;
//				s.x=tx;
//				s.y=y;
//				s.step=q.front().step+1;
//				s.a=fan[i];
//				q.push(s);
//			}
//		}
//		q.pop();
//	}
//}
//
//int main() {
//	int i,j;
//	cin>>n>>m;
//	for(i=1; i<=n; i++) {
//		scanf("%s",s[i]+1);
//	}
//	bfs(1,1,0);
//
////	for(i=1; i<=n; i++) {
////		for(j=1; j<=m; j++) {
////
////		}
////	}
//
//}






//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int main() {
//	int i,j;
//	int a[109];
//	int k=1;
//	for(i=2; i<101; i++) {
//		for(j=2; j*j<i; j++) {
//			if(i%j==0) break;
//		}
//		if(j*j>i) a[k++]=i;
//	}
//	string s;
//	cin>>s;
//	int b[30];
//	memset(b,0,sizeof b);
//	for(i=0; i<s.size(); i++) {
//		b[s[i]-'a']++;
//	}
//	int minn=INT_MAX,maxn=1;
//	for(i=0; i<30; i++) {
//		if(b[i]>0&&minn>b[i]) {
//			minn=b[i];
//		}
//		maxn=max(maxn,b[i]);
//	}
//	int m=maxn-minn;
//	for(i=1; i<k; i++) {
//		if(m==a[i])break;
//	}
//	int flag=0;
//	if(i!=k) flag=1;
//	if(flag==1) {
//		cout<<"Lucky Word"<<endl;
//		cout<<m<<endl;
//	} else {
//		cout<<"No Answer"<<endl;
//		cout<<0<<endl;
//	}
//}
//



//#include<bits/stdc++.h>
//using namespace std;
//const int maxn = 500 + 9;
//int endx,endy,minn=99999999;
//
//int idx[maxn][maxn];	//1为空格，2为障碍物
//int v[maxn][maxn];		//是否访问，0为未被访问，1为访问
//int dx[4]=	{0,1,0,-1};
//int dy[4]=	{1,0,-1,0};
//int falg=0;
//
//void dfs(int x,int y,int step) {
//	//printf("%d  %d  %d\n",x,y,step);
//	if(x==endx&&y==endy) {
//		minn=min(minn,step);
//		return;
//	}
//	for(int i=0; i<4; i++) {
//		int tx=dx[i]+x;
//		int ty=dy[i]+y;
//		if(idx[tx][ty]==0&&v[tx][ty]==0) {
//			v[tx][ty]=1;
//			dfs(tx,ty,step+1);
//			v[tx][ty]=0;
//		}
//	}
//	return ;
//}
//int main() {
//	int m,n,i,j,startx,starty;
//	scanf("%d%d",&n,&m);
//	char aa[maxn][maxn];
//	for(i=1; i<=n; i++) scanf("%s",aa[i]+1);
//	for(i=1; i<=n; i++)
//		for(j=1; j<=m; j++)
//			idx[i][j]=aa[i][j]-'0';
//
////	for(i=1; i<=n; i++)
////		for(j=1; j<=m; j++)
////			cout<<idx[i][j];
//	startx=1,starty=1;
//	endx=n,endy=m;
//	memset(v,0,sizeof(v));
//	v[startx][starty]=1;
//	dfs(startx,starty,0);
//	cout<<minn<<endl;
//}



//#include<iostream>
//#include<string>
//#include<algorithm>
//#include<vector>
//#include<queue>
//#include<cstring>
//using namespace std;
//#define MAX_N 100
//int INF = 0x3f3f3f3f;
//char maze[MAX_N][MAX_N];
//int dis[MAX_N][MAX_N];
//bool vis[MAX_N][MAX_N];
//string s;
//int dir[4][2] = {1, 0, 0, -1, 0, 1, -1, 0};
//char print[5] = "DLRU";
//int N, M;
//
//void BFS (int sx, int sy, int fx, int fy) {
//    queue<pair<int, int> > q;
//    q.push(make_pair(sx, sy));
//    dis[sx][sy] = 0;
//    vis[sx][sy] = true;
//    while (!q.empty()) {
//        int x = q.front() .first;
//        int y = q.front().second;
//        q.pop();
//        for (int i = 0; i < 4; i++) {
//            int nx = x + dir[i][0];
//            int ny = y + dir[i][1];
//            if (nx >= 0 && nx < N && ny >= 0 && ny < M && maze[nx][ny] == '0' &&
// vis[nx][ny] == false && dis[nx][ny] == INF) {
//                dis[nx][ny] = dis[x][y] + 1;
//                vis[nx][ny] = true;
//                q.push(make_pair(nx, ny));
//            }
//        }
//    }
//}
//void BFSprint (int sx, int sy) {
//    queue<pair<int, int> > q;
//    q.push(make_pair(sx,sy));
//    while (!q.empty()) {
//        int x = q.front().first;
//        int y = q.front().second;
//        q.pop();
//        for (int i = 0; i < 4; i++){
//            int nx = x + dir[i][0];
//            int ny = y + dir[i][1];
//            if (nx >= 0 && nx < N && ny >= 0
//&& ny < M && dis[nx][ny] + 1 == dis[x][y]){
//                cout << print[i];
//                q.push(make_pair(nx, ny));
//                break;
//            }
//        }
//    }
//}
//int main(){
//    memset(dis,INF,sizeof(dis));
//    cin >> N >> M;
//    for (int i = 0; i < N; i++)
//        for (int j = 0; j < M; j++)
//            cin >> maze[i][j];
//    BFS(N - 1, M - 1, 0, 0);
//    cout << dis[0][0] << endl;
//    BFSprint(0, 0);
//}

//#include<bits/stdc++.h>
//using namespace std;
//#define ll long long
//int a,b;
//bool check(){
//	int i,j;
//	int ans=1,ans2=1;
//	for(i=2;i*i<a;i++){
//		if(a%i==0){
//			ans+=i;
//			ans+=a/i;
//		}
//	}
//	if(i*i==a) ans+=i;
//	for(i=2;i*i<b;i++){
//		if(b%i==0){
//			ans2+=i;
//			ans2+=b/i;
//		}
//	}
//	if(i*i==b) ans2+=i;
////	cout<<ans<<endl<<ans2<<endl;
//	if(ans==b&&ans2==a)return true;
//	else return false;
//}
//int main(){
//	int i,j;
//	cin>>a>>b;
//	if(check()) cout<<"yes"<<endl;
//	else cout<<"no"<<endl;
//}


//#include<bits/stdc++.h>
//using namespace std;
//const int N=10000+9;
//int a[N]={0};
//int main() {
//	int n;
//	int i=0,k=0,cnt=0;
//	cin>>n;
//	while(n>cnt+1) {
//		i++;
//		if(i>n) i=1;
//		if(a[i]==0) {
//			k++;
//			if(k==3) {
//				a[i]=1;
//				k=0;
////				cout<<i<<" ";
//				cnt++;
//			}
//		}
//	}
//	for(i=1;i<=n;i++){
//		if(a[i]==0) cout<<i;
//	}
//	return 0;
//}



//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=100010;
//int a[20],v[N];
//int main() {
//	int i,j;
//	int n;
//	cin>>n;
//	int b=0;
//	for(i=1; i<=n; i++) {
//		cin>>a[i];
//		if(i==1) b=a[i];
//		else b=__gcd(b,a[i]);
//	}
//	if(b==1) {
//		sort(a+1,a+1+n);
//		v[0]=1;
//		for(i=1; i<=n; i++) {
//			for(j=a[i]; j<=N; j++) {
//				v[j]=max(v[j],v[j]+a[i]);
//			}
//		}
//		for(j=1; j<=20; j++) {
//			cout<<v[j]<<endl;
//		}
////		for (int i = 100010; i >= 0; i--)
////			if (!v[i]) {
////				cout << i << endl;
////				return 0;
////			}
//	}
//
//	cout<<"0";
//	return 0;
//}


//#include<bits/stdc++.h>
//using namespace std;
//const int N =100010;
//int w[10], f[20][N];
//int main() {
//	int i,j;
//	int n;
//	cin>>n;
//	for (int i = 1; i <= n; i ++) {
//		cin >> w[i];
//	}
////	for(i=1;i<20;i++)
////		f[i][0]=1;
//	for (int i = 1; i <= n; i ++) {
//		for (int j = w[i]; j <= N; j ++) {
//			f[i][j] = max(f[i][j],f[i][j - w[i]]+1);
//		}
//	}
////	for(i=1;i<=3;i++){
////		for(j=N-10;j<N;j++){
////			cout<<f[i][j]<<" ";
////		}
////		cout<<endl;
////	}
//
//	for(j=N; j>=0; j--) {
//		if(f[3][j]==0) cout<<j<<" ";
//	}
//
////	for (i=N;i>=0;i--) {
////		if(!f[i]) {
////			cout<<i<<endl;
////			return 0;
////		}
////	}
//
//}


//#include <bits/stdc++.h>
//using namespace std;
//
//int w[10], f[100010];
//
//int main() {
//	int n;
//	cin >> n;
//
//	int d = 0;
//	for (int i = 1; i <= n; i ++) {
//		cin >> w[i];
//		d = __gcd(d, w[i]);
//	}
//
//	if (d == 1) {
//		f[0] = 1;
//		for (int i = 1; i <= n; i ++){
//			for (int j = w[i]; j <= 100010; j ++){
//				f[j] = max(f[j],f[j - w[i]]);
//				if(i==1&&j==w[i]) cout<<f[j]<<endl;
//			}
//		}
//
//
//
////		for (int i = 100010; i >= 0; i--)
////			if (!f[i]) {
////				cout << i << endl;
////				return 0;
////			}
//	}
//
////	cout << 0 << endl;
////	return 0;
//}


//#include<bits/stdc++.h>
//using namespace std;
//const int N=100009;
//int w[N],v[N];
//int dp[N];
//int n,m;
//int main() {
//	int i,j;
//	while(cin>>n>>m) {
//		if(n==0&&m==0) break;
//		memset(dp,0,sizeof dp);
//		for(i=1; i<=n; i++) {
//			cin>>w[i]>>v[i];
//		}
//
//		for(i=1; i<=n; i++) {
//			dp[0]=INT_MAX;
//			int maxn=0;
//			int ji=0;
//			for(j=1; j<=i; j++) {
//				if(abs(w[j]-v[j])<=dp[0]&&maxn<=w[j]+v[j]){
//					dp[0]=abs(w[j]-v[j]);
//					maxn=w[j]+v[j];
//					ji=j;
//				}
//			}
//			printf("%d %d %d\n",dp[0],maxn,ji);
////			for(j=m; j>=w[i]; j--) {
////				dp[j]+=dp[j-w[i]];
////			}
//		}
////		cout<<dp[m]<<endl;
//	}
//}



//#include<bits/stdc++.h>
//using namespace std;
//const int N=1000+9;
//int dp[1000+9],w[N],v[N];
//int main(){
//	int i,j;
//	int n,m;
//	cin>>m>>n;
//	for(i=1;i<=n;i++){
//		cin>>w[i]>>v[i];
//	}
//
//	for(i=1;i<=n;i++){
//		for(j=m;j>=w[i];j--){
//			dp[j]=max(dp[j],dp[j-w[i]]+v[i]);
//		}
//	}
//	cout<<dp[m]<<endl;
//}



//#include<bits/stdc++.h>
//using namespace std;
//const int N=30000+9;
//const int M=30;
//int dp[N],w[M],v[M];
//
//int main(){
//	int i,j;
//	int m,n;
//	cin>>m>>n;
//	for(i=1;i<=n;i++){
//		cin>>w[i]>>v[i];
//	}
//	for(i=1;i<=n;i++){
//		for(j=m;j>=w[i];j--){
//			dp[j]=max(dp[j],dp[j-w[i]]+w[i]*v[i]);
//		}
//	}
//	cout<<dp[m];
//}


//#include<bits/stdc++.h>
//using namespace std;
//const int N=100+9;
//int dp[N][N],w[N];
//int main() {
//	int i,j;
//	int n,k;
//	cin>>n>>k;
//	for(i=1; i<=n; i++) {
//		cin>>w[i];
//	}
//	memset(dp,-0x3f,sizeof dp);
//	dp[0][0]=0;
//	for(i=1; i<=n; i++) {
//		for(j=0; j<k; j++) {
//			dp[i][j] = max(dp[i-1][j], dp[i - 1][(j - w[i] % k + k ) % k] + w[i]);
//		}
//	}
//	cout<<dp[n][0];
//}


//#include<bits/stdc++.h>
//using namespace std;
//const int N=100000+9;
//int a[N],b[N];
//int main(){
//	int i,j;
//	int n;
//	cin>>n;
//	for(i=1;i<=n;i++){
//		cin>>a[i];
//	}
//	for(i=1;i<=n;i++){
//		b[i]=1;
//	}
//	for(i=1;i<=n;i++){
//		for(j=1;j<=i;j++){
//			if(a[i]>a[j]){
//				b[i]=max(b[i],b[j]+1);
//			}
//		}
//	}
//	int ans=1;
//	for(i=1;i<=n;i++){
//		ans=max(ans,b[i]);
//	}
//	cout<<ans;
//}

/*
8
10 9 2 5 3 7 101 18
*/




//#include<bits/stdc++.h>
//using namespace std;
//const int N=100000+9;
//int b[N];
//int main(){
//	int i,j;
//	int n;
//	cin>>n;
//	for(i=0;i<n;i++){
//		cin>>b[i];
//	}
//	vector<int> a;
//	a.push_back(b[0]);
//	int ans=0;
//	for(i=1;i<n;i++){
//		if(b[i]>a[ans]){
//			a.push_back(b[i]);
//			ans++;
//		}
//		else{
//			int l=0,r=ans;
//			while(l<r){
//				int mid=(l+r)/2;
//				if(b[i]>b[mid]){
//					l=mid+1;
//				}
//				else r=mid;
//			}
//			a[l]=b[i];
//		}
//	}
//	cout<<ans+1<<endl;
//}



//#include<bist/stdc++.h>
//using namespace std;
//const int N=1e6+9;
//int a[N],b[N];
//
//int main(){
//	int i,j;
//	int n;
//	cin>>n;
//	for(i=0;i<n;i++){
//		cin>>a[i];
//	}
//	for(i=0;i<n;i++){
//		cin>>b[i];
//	}
//
//
//}



//#include<bits/stdc++.h>
//using namespace std;
//
//const int N=1000+9;
//int a[N];
//int b[N][N];
//int main(){
//	int i,j;
//	int n,m;
//	cin>>n>>m;
//	char s[N],s2[N];
//	scanf("%s%s",s+1,s2+1);
//	for(i=1;i<=n;i++){
//		for(j=1;j<=m;j++){
//			if(s[i]==s2[j]){
//				b[i][j]=b[i-1][j-1]+1;
//			}else {
//				b[i][j]=max(b[i-1][j],b[i][j-1]);
//			}
//		}
//	}
//	cout<<b[n][m]<<endl;
//}





//#include<bist/stdc++.h>
//using namespace std;
//const int N=1e6+9;
//int a[N],b[N],id[N];
//
//int main(){
//	int i,j;
//	int n;
//	cin>>n;
//	for(i=0;i<n;i++){
//		cin>>a[i];
//	}
//	for(i=0;i<n;i++){
//		cin>>b[i];
//	}
//	for(i)
//	vector<int> nu;
//	nu.push_back(id[0]);
//	for(i=1;i<n;i++){
//		if()
//	}
//}


//#include<bits/stdc++.h>
//using namespace std;
//const int N=1e6+9;
//
//int id[N],q[N];
//
//int main(){
//	int i,j;
//	int n;
//	cin>>n;
//	memset(id,-1,sizeof id);
//	for(i=0;i<n;i++){
//		int x;
//		cin>>x;
//		id[x]=i;
//	}
//	int tt=0;
//	q[0]=-1;
//	for(i=0;i<n;i++){
//		int x;
//		cin>>x;
//		int k=id[x];
//		if(k==-1)continue;
//		int l=0,r=tt;
//		while(l<r){
//			int mid=l+r>>1;
//			if(q[mid]>k){
//				r=mid;
//			}
//			else l=mid+1;
//		}
//		q[l]=x;
//		tt=max(tt,l+1);
//	}
//	cout<<tt<<endl;
//}




//#include<bits/stdc++.h>
//using namespace std;
//const int N=1e6+9;
//
//int id[N],q[N];
//
//int main() {
//	int i,j;
//	int n;
//	scanf("%d",&n);
//	memset(id,-1,sizeof id);
//	for(i=0; i<n; i++) {
//		int x;
//		scanf("%d",&x);
//		id[x]=i;
//	}
//	int tt=0;
//	q[0]=-1;
//	for(i=0; i<n; i++) {
//		int x;
//		scanf("%d",&x);
//		int k=id[x];
//		if(k==-1)continue;
////		int l=0,r=tt;
////		while(l<r) {
////			int mid=l+r>>1;
////			if(q[mid]<k) {
////				l=mid+1;
////			} else r=mid;
////		}
//		int l=upper_bound(q,q+n,k)-q;
//		q[l]=k;
//		tt=max(tt,l);
//	}
//	cout<<tt<<endl;
//}

//#include<bits/stdc++.h>
//using namespace std;
//const int N=1e5+9;
//int a[5][N];
//int n,k;
//bool check(int m){
//	int i,j;
//	int ans=0;
//	for(i=1;i<=n;i++){
//		ans+=a[1][i]/m*(a[2][i]/m);
//		if(ans>k) return true;
//	}
//	return false;
//}
//int main(){
//	int i,j;
//	cin>>n>>k;
//	for(i=1;i<=n;i++){
//		scanf("%d%d",&a[1][i],&a[2][i]);
//	}
//	int l=0,r=1e5;
//	while(l<r){
//		int mid=l+r>>1;
//		if(check(mid)) l=mid+1;
//		else r=mid;
//	}
//	cout<<l-1;
//}


//#include<bits/stdc++.h>
//using namespace std;
//const int N=1e6+9;
//int id[N];
//int n;
//int main() {
//	int i,j;
//	cin>>n;
//	memset(id,-1,sizeof id);
//	for(i=0; i<n; i++) {
//		int x;
//		scanf("%d",&x);
//		id[x]=i;
//	}
//	int ans=0;
//	vector<int> a;
//	int flag=0;
//	for(i=0; i<n; i++) {
//		int x;
//		scanf("%d",&x);
//		int k=id[x];
//		if(k==-1)continue;
//		if(flag==0) {
//			a.push_back(k);
//			flag=1;
//			continue;
//		}
//		if(k>ans) {
//			ans++;
//			a.push_back(k);
//		} else {
//			int l=0,r=ans;
//			while(l<r) {
//				int mid=l+r>>1;
//				if(k>a[mid]) l=mid+1;
//				else r=mid;
//			}
//			a[l]=k;
//		}
//	}
//	cout<<ans+1;
//}


//#include<bits/stdc++.h>
//using namespace std;
//const int N=1e6+9;
//int id[N];
//int n;
//int main() {
//	int i,j;
//	cin>>n;
//	memset(id,-1,sizeof id);
//	for(i=0; i<n; i++) {
//		int x;
//		scanf("%d",&x);
//		id[x]=i;
//	}
//	int ans=0;
//	vector<int> a;
//	int flag=0;
//	for(i=0; i<n; i++) {
//		int x;
//		scanf("%d",&x);
//		int k=id[x];
//		cout<<k<<" ";
//	}
//}



//#include<bits/stdc++.h>
//using namespace std;
//const int N=1e6+9;
//int id[N];
//int n;
//int main() {
//	int i,j;
//	cin>>n;
//	memset(id,-1,sizeof id);
//	for(i=0; i<n; i++) {
//		int x;
//		scanf("%d",&x);
//		id[x]=i;
//	}
//	int ans=0;
//	vector<int> a;
//	int flag=0;
//	for(i=0; i<n; i++) {
//		int x;
//		scanf("%d",&x);
//		int k=id[x];
//		if(k==-1)continue;
//		if(flag==0) {
//			a.push_back(k);
//			flag=1;
//			continue;
//		}
//		if(k>a[ans]) {
//			ans++;
//			a.push_back(k);
//		} else {
//			int l=0,r=ans;
//			while(l<r) {
//				int mid=l+r>>1;
//				if(k>a[mid]) l=mid+1;
//				else r=mid;
//			}
//			a[l]=k;
//		}
//	}
//	cout<<ans+1;
//}



//#include<bits/stdc++.h>
//using namespace std;
//const int N=1000+9;
//int n,V;
//int v[N],w[N];
//int dp[N];
//int main(){
//	int i,j;
//	cin>>n>>V;
//	for(i=1;i<=n;i++){
//		scanf("%d%d",&w[i],&v[i]);
//	}
//	for(i=1;i<=n;i++){
//		for(j=1;j<=V;j++){
//			if(j>=w[i])
//			dp[j]=max(dp[j],dp[j-w[i]]+v[i]);
//		}
//	}
//	cout<<dp[V];
//}



//#include<bits/stdc++.h>
//using namespace std;
//const int N=10000+9;
//
//int main(){
//	int i,j;
//	int t,tt=0;
//	cin>>t;
//	int n;
//	int dp[N];
//	int z[30]={1};
//	for(i=1;;i++){
//		z[i]=z[i-1]*2;
//		if(z[i]>N)break;
//	}
//	int k=i;
//	while(tt++<t){
//		cin>>n;
//		cout<<"Case #"<<tt<<":";
////		memset(dp,0,sizeof dp);
//		int ans=0;
//		for(i=k;i>=0;i--){
//			ans+=n/z[i];
//			if(n/z[i]>0)n-=n/z[i]*z[i];
//		}
//		cout<<ans<<endl;
//	}
//}



//#include<bits/stdc++.h>
//using namespace std;
//const int N=10000+9;
//
//int main() {
//	int i,j;
//	int t,tt=0;
//	cin>>t;
//	int n;
//	int dp[N];
//	while(tt++<t){
//		cin>>n;
//		cout<<"Case #"<<tt<<":";
//		memset(dp,0x3f,sizeof dp);
//		dp[0]=0;
//		for(i=1;i*i<=n;i++){
//			for(j=i*i;j<=n;j++){
//				dp[j]=min(dp[j],dp[j-i*i]+1);
//			}
//		}
//		cout<<dp[n]<<endl;
//	}
//}




//#include <iostream>
//#include <algorithm>
//#include <cstring>
//
//using namespace std;
//
//bool chess[9][9];    //标记哪些点能走
//bool col[9];		//标记哪几列走过了
//int n,k,status;		//status：可行方案
//
//void dfs(int row,int num) {
//	if(num == k) {
//		status++;
//		return;
//	}
//	if(row > n)
//		return;
//	for(int i = 1; i <= n; i++) {
//		if(!col[i] && chess[row][i]) {
//			col[i] = true;			//标记走过了
//			dfs(row+1,num+1);		//跳到下一行
//			col[i] = false;			//取消标记
//		}
//	}
//	dfs(row+1,num);			//没有取点到下一行
//	return;
//}
//
//int main() {
//	int j,i;
//
//	while(cin>>n>>k) {
//		memset(chess,false,sizeof(chess));
//		memset(col,false,sizeof(col));		//初始化
//		status = 0;
//		if(n == -1 && k == -1)
//			break;
//
//		for(i = 1; i <= n; i++) {
//			for(j = 1; j <= n; j++) {
//				char a;
//				cin>>a;
//				if(a == '#')
//					chess[i][j] = true;
//			}
//		}
//		dfs(1,0);
//		cout<<status<<endl;
//	}
//	return 0;
//}



//#include  <map>
//#include  <set>
//#include  <cmath>
//#include  <queue>
//#include  <cstdio>
//#include  <vector>
//#include  <climits>
//#include  <cstring>
//#include  <cstdlib>
//#include  <iostream>
//#include  <algorithm>
//using namespace std;
//const int N=10;
//bool chess[N][N];    //标记哪些点能走
//bool col[N];		//标记哪几列走过了
//int n,k,ans;
//char c[N][N];
//
//void dfs(int l,int r){
//	int i,j;
//	if(r==k){
//		ans++;
//		return;
//	}
//	if(l>n)return ;
//	for(i=1;i<=n;i++){
//		if(!col[i]&&chess[l][i]){
//			col[i]=true;
//			dfs(l+1,r+1);
//			col[i]=false;
//		}
//	}
//	dfs(l+1,r);
//	return ;
//}
//int main() {
//	int i,j;
//	while(cin>>n>>k) {
//		ans=0;
//		memset(chess,false,sizeof(chess));
//		memset(col,false,sizeof(col));
//		if(n==-1&&k==-1)break;
//		for(i=1; i<=n; i++) {
//			scanf("%s",c[i]+1);
//		}
//		for(i=1; i<=n; i++) {
//			for(j=1; j<=n; j++) {
//				if(c[i][j]=='#')chess[i][j]=true;
//			}
//		}
//		dfs(1,0);
//		cout<<ans<<endl;
//	}
//}



//#include  <map>
//#include  <set>
//#include  <cmath>
//#include  <queue>
//#include  <cstdio>
//#include  <vector>
//#include  <climits>
//#include  <cstring>
//#include  <cstdlib>
//#include  <iostream>
//#include  <algorithm>
//using namespace std;
//const int N=10;
//bool chess[N][N];
//bool lie[N];
//int n,k;
//char lin[N][N];
//int ans=0;
//void dfs(int l,int r){
//	int i,j;
//	if(r==k){
//		ans++;
//		return ;
//	}
//	if(r>n||l>n)return ;
//	for(i=1;i<=n;i++){
//		if(chess[l][i]&&!lie[i]){
//			lie[i]=true;
//			dfs(l+1,r+1);
//			lie[i]=false;
//		}
//	}
//	dfs(l+1,r);
//	return ;
//}
//int main(){
//	int i,j;
//	while(cin>>n>>k){
//		ans=0;
//		memset(chess,0,sizeof chess);
//		if(n==-1&&k==-1)break;
//		for(i=1;i<=n;i++){
//			scanf("%s",lin[i]+1);
//		}
//		for(i=1;i<=n;i++){
//			for(j=1;j<=n;j++){
//				if(lin[i][j]=='#') chess[i][j]=true;
//			}
//		}
//		dfs(1,0);
//		cout<<ans<<endl;
//	}
//}




//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <cstring>
//#include <string.h>
//#include <queue>
//using namespace std;
//const int maxn = 50;
//char s[maxn][maxn][maxn];
//int l,r,c;
//int sx,sy,sk;
//int ex,ey,ek;
//int dx[]= {1,-1,0,0,0,0};
//int dy[]= {0,0,1,-1,0,0};
//int dk[]= {0,0,0,0,1,-1};
//int vis[maxn][maxn][maxn];
//struct point {
//	int x,y,k;
//};
//bool judge(int x,int y,int k) {
//	return (x>=1&&y>=1&&k>=1&&x<=l&&y<=r&&k<=c&&vis[x][y][k]==0&&s[x][y][k]!='#');
//}
//int bfs() {
//	queue<point>que;
//	point t ;
//	t.x=sx;
//	t.y=sy;
//	t.k=sk;
//	que.push(t);
//	while(que.size()) {
//		point p=que.front();
//		que.pop();
//		if(p.x==ex&&p.y==ey&&p.k==ek) return vis[ex][ey][ek];
//		for(int i=0; i<6; i++) {
//			int nx=p.x+dx[i];
//			int ny=p.y+dy[i];
//			int nk=p.k+dk[i];
//			if(judge(nx,ny,nk)) {
//				vis[nx][ny][nk]=vis[p.x][p.y][p.k]+1;
//				t.x=nx;
//				t.y=ny;
//				t.k=nk;
//				que.push(t);
//			}
////            if(vis[ex][ey][ek]) break;
//		}
////        if(vis[ex][ey][ek]) break;
//	}
//	return vis[ex][ey][ek];
//
//}
//int main() {
//	while(scanf("%d%d%d",&l,&r,&c)) {
//		memset(vis,0,sizeof(vis));
//		memset(s,0,sizeof(s));
//		if(l==0&&r==0&&c==0) break;
//		for(int i=1; i<=l; i++) {
//			for(int j=1; j<=r; j++) {
//				scanf("%s",&s[i][j][1]);
//				for(int k=1; k<=c; k++) {
//					if(s[i][j][k]=='S') {
//						sx=i;
//						sy=j;
//						sk=k;
//                        cout << i << ' ' << j << " "<<k <<endl;
//					} else if(s[i][j][k]=='E') {
//						ex=i;
//						ey=j;
//						ek=k;
//					}
//				}
//			}
//		}
//		cout<<endl<<endl;
//        for(int i=1;i<=l;i++)
//        {
//            for(int j=1;j<=r;j++)
//            {
//               for(int k=1;k<=c;k++)
//               {
//                   cout << s[i][j][k];
//               }
//               cout <<endl;
//            }
//        }
//		int ans= bfs();
//		if(ans==0)  printf("Trapped!\n");
//		else printf("Escaped in %d minute(s).\n",ans);
//	}
//
//	return 0;
//}



//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <cstring>
//#include <string.h>
//#include <queue>
//
//using namespace std;
//const int maxn = 50;
//char s[maxn][maxn][maxn];
//int l,r,c;
//int sx,sy,sk;
//int ex,ey,ek;
//int dx[]= {1,-1,0,0,0,0};
//int dy[]= {0,0,1,-1,0,0};
//int dk[]= {0,0,0,0,1,-1};
//int vis[maxn][maxn][maxn];
//struct point {
//	int x,y,k,step;
//};
//bool judge(int x,int y,int k) {
//	if(x>=1&&y>=1&&k>=1&&x<=l&&y<=r&&k<=c&&vis[x][y][k]==0&&s[x][y][k]!='#') return true;
//	return false;
//}
//int bfs() {
//	int i,j;
//	queue<point> q;
//	q.push({sx,sy,sk,0});
//	vis[sx][sy][sk]=1;
//	while(!q.empty()) {
//		point f=q.front();
//		q.pop();
//		int x=f.x,y=f.y,k=f.k,step=f.step;
////		printf("%d %d %d\n",x,y,k);
//		if(s[x][y][k]=='E')return f.step;
//		for(i=0; i<6; i++) {
//			int xx=x+dx[i];
//			int yy=y+dy[i];
//			int kk=k+dk[i];
//			if(judge(xx,yy,kk)) {
////				printf("%d %d %d\n",xx,yy,kk);
//				q.push({xx,yy,kk,step+1});
//				vis[xx][yy][kk]=1;
//			}
//		}
//	}
//	return 0;
//}
//
//
//int main() {
//	int i,j,k;
//	while(cin>>l>>r>>c) {
//		if(l==0)break;
//		memset(vis,0,sizeof vis);
//		for(i=1; i<=l; i++) {
//			for(j=1; j<=r; j++) {
//				scanf("%s",&s[i][j][1]);
//				for(k=1; k<=c; k++) {
//					if(s[i][j][k]=='S') {
//						sx=i,sy=j,sk=k;
//					}
//				}
//			}
//		}
//		int ans=bfs();
//		if(ans==0)
//			printf("Trapped!\n");
//		else {
//			printf("Escaped in %d minute(s).\n",ans);
//		}
//	}
//}
//



//#include  <map>
//#include  <set>
//#include  <cmath>
//#include  <queue>
//#include  <cstdio>
//#include  <vector>
//#include  <climits>
//#include  <cstring>
//#include  <cstdlib>
//#include  <iostream>
//#include  <algorithm>
//using namespace std;
//const int N=100000+9;
//int n,k;
//int vis[N];
//struct point {
//	int x,step;
//};
////int bfs(){
////	queue<point> q;
////	q.push({n,0});
////	while(q.size()){
////		point p=q.front();q.pop();
////		int x=p.x, step=p.step;
//////		cout<<x<<endl;
////		if(x==k) return step;
////		if(x<k&&vis[2*x]==0){
////			q.push({2*x,step+1});
////			vis[2*x]=1;
////		}
////		if(x<k&&vis[x+1]==0){
////			q.push({x+1,step+1});
////			vis[x+1]=1;
////		}
////		if(x>k&&x<k*2&&vis[x-1]==0){
////			q.push({x-1,step+1});
////			vis[x-1]=1;
////		}
////	}
////	return 0;
////}
//int ans;
//void dfs(int x,int step) {
//	if(x>k*2) return ;
//	if(x==k) {
//		ans=step;
//		return ;
//	}
////	cout<<x<<" ";
//	if(x<=k&&vis[x+1]==0) {
//		vis[x+1]=1;
//		dfs(x+1,step+1);
//		vis[x+1]=0;
//	}
//	else if(x<2*k&&x>=0&&vis[x-1]==0) {
//		vis[x-1]=1;
//		dfs(x-1,step+1);
//		vis[x-1]=0;
//	}
//	if(x<k&&vis[2*x]==0) {
//		vis[2*x]=1;
//		dfs(2*x,step+1);
//		vis[2*x]=0;
//	}
//	return ;
//} //   5 17
//int main() {
//	int i,j;
//	cin>>n>>k;
////	cout<<bfs()<<endl;
//	dfs(n,0);
//	cout<<ans<<endl;
//}




//#include  <map>
//#include  <set>
//#include  <cmath>
//#include  <queue>
//#include  <cstdio>
//#include  <vector>
//#include  <climits>
//#include  <cstring>
//#include  <cstdlib>
//#include  <iostream>
//#include  <algorithm>
//using namespace std;
//const int N=100000+9;
//int v[N];
//struct point {
//	int x,step;
//};
//int n,k;
////   5 17
//int main() {
//	cin>>n>>k;
//	if (n>=k) {
//		cout<<n-k<<endl;
//		return 0;
//	}
//	queue<point> q;
//	q.push({n,0});
//	v[n]=1;
//	while(q.size()) {
//		point p=q.front();
//		q.pop();
//		int x=p.x,step=p.step;
//		if(p.x==k) {
//			cout<<p.step;
//			return 0;
//		}
//		if(x-1>=0&&v[x-1]==0) {
//			q.push({x-1,step+1});
//			v[x-1]==1;
//		}
//		if(x+1<N&&v[x+1]==0) {
//			q.push({x+1,step+1});
//			v[x+1]=1;
//		}
//		if(2*x<N&&v[2*x]==0) {
//			q.push({2*x,step+1});
//			v[2*x]=1;
//		}
//	}
//}


//#include<bits/stdc++.h>
//using namespace std;
//const int N=100+9;
//const int INF=1e6;
//int graph[N][N];
//int path[N][N];
//int n,m;
//void floyd() {
// 	int i,j,k;
//	int ans=INF;
//	for(k=1; k<=n; k++) {
//		for(i=1; i<k; i++) {
//			for(j=i+1; j<k; j++) {//保证3个不相同的点
//				ans=min(ans,path[i][k]+path[k][j]+graph[i][j]); // 得到从 i点出发再回到 i点的最小环
//			}
//		}
//		for(i=1; i<=n; i++) {
//			for(j=1; j<=n; j++) {
//				if(graph[i][j]>graph[i][k]+graph[k][j]) {
//					graph[i][j]=graph[i][k]+graph[k][j];
//				}
//			}
//		}
//	}
//	if(ans<INF)	printf("%d\n",ans);
//	else puts("It's impossible.");
//}
//
//int main() {
//	int i,j;
//	while(~scanf("%d%d",&n,&m)) {
//		for(i=1;i<=n;i++){
//			for(j=1;j<=n;j++){
//				path[i][j]=graph[i][j]=(i==j?0:INF);
//			}
//		}
//		for(i=1; i<=m; i++) {
//			int x,y,z;
//			scanf("%d%d%d",&x,&y,&z);
//			path[x][y]=path[y][x]=graph[x][y]=graph[y][x]=min(path[x][y],z);
//		}
//		floyd();
//	}
//}



//#include<bits/stdc++.h>
//using namespace std;
//#define ll long long
//const int  N=3009;
//int a[N];
//int sum1[N];
//string b[]= {"","January","February","March","April","May","June","July","August","September","October", "November","December"};
//int c[]= {0,31,28,31,30,31,30,31,31,30,	31,30,31,30,31,30,31,30,31};
//string f[10]= {"","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
//int main() {
//	int i,j;
//	for(i=1; i<3009; i++) {
//		if(i%4==0&&i%100!=0||i%400==0) a[i]=366;
//		else a[i]=365;
//	}
//	for(i=1; i<3009; i++) {
//		sum1[i]=a[i]+sum1[i-1];
//	}
//	int d,y;
//	string mo;
//	int sum;
//	int m;
//	while(~scanf("%d",&d)) {
//		sum=0;
//		cin>>mo>>y;
//
//		for(i=1; i<=12; i++) {
//			if(mo==b[i]) m=i;
//		}
//		sum+=sum1[y-1];
//		if(a[y]==366) {
//			if(m>=3) {
//				sum++;
//			}
//		}
//		for(i=1; i<m; i++) {
//			sum+=c[i];
//		}
//		sum+=d;
//		if(sum%7==0)  cout<<f[7]<<endl;
//		else cout<<f[sum%7]<<endl;
//	}
//}



//#include<bits/stdc++.h>
//using namespace std;
//#define ll long long
//const int N=1e5+9;
//ll a[N],b[N],sum[N];
//int n,k;
//
//int main(){
//	int i,j;
//	cin>>n>>k;
//	for(i=1;i<=n;i++){
//		cin>>a[i];
//	}
//	ll ans=0;
//	for(i=1;i<=n;i++){
//		int state;
//		cin>>state;
//		if(state==1){
//			ans+=a[i];
//			a[i]=0;
//		}
//		sum[i]=a[i]+sum[i-1];
//	}
//	ll res=0;
//	for(i=1;i<=n;i++){
//		int r=i+k-1;
//		if(r>n)r=n;
//		ll tmp=sum[r]-sum[i-1];
//		if(tmp>res){
//			res=tmp;
//		}
//	}
//	cout<<ans+res<<endl;
//}


//#include<bits/stdc++.h>
//using namespace std;
//typedef pair<int,int>pii;
//const int N=500+9;
//int n,m;
//bool a[N][N];
//char aa[N][N];
//int v[N][N];
//
//int dx[5]= {1,0,0,-1};
//int dy[5]= {0,-1,1,0};
//char print[5]="DLRU";
//
//void bfs() {
//	int i,j;
//	queue<pair<int,int> >q;
//	q.push(pii(1,1));
//	v[1][1]=1;
//	while(!q.empty()) {
//		int x=q.front().first,y=q.front().second;
//		q.pop();
//		if(x==n&&y==m) {
//			return ;
//		}
//		for(i=0; i<4; i++) {
//			int tx=x+dx[i];
//			int ty=y+dy[i];
//			if(tx>=1&&tx<=n&&ty>=1&&ty<=m&&v[tx][ty]==0&&a[tx][ty]==true) {
//				q.push(pii(tx,ty));
//				v[tx][ty]=v[x][y]+1;
//			}
//		}
//	}
//}
//string s;
//void BFSprint() {
//	int i,j;
//	queue<pair<int,int> > q;
//	q.push(pii(1,1));
//	while(!q.empty()) {
//		int x= q.front().first ,y=q.front().second;
//		q.pop();
//		if(x==n&&y==m)break;
//		for(i=0; i<4; i++) {
//			int tx=x+dx[i];
//			int ty=y+dy[i];
//			if(tx>=1&&tx<=n&&ty>=1&&ty<=m&&v[tx][ty]==v[x][y]+1) {
//				cout<<print[i];
//				q.push(pii(tx,ty));
//				break;
//			}
//		}
//	}
//}
//int main() {
//	int i,j;
//	cin>>n>>m;
//	for(i=1; i<=n; i++) {
//		scanf("%s",aa[i]+1);
//	}
//	for(i=1; i<=n; i++) {
//		for(j=1; j<=m; j++) {
//			if(aa[i][j]=='0') a[i][j]=true;
//		}
//	}
//	bfs();
//	cout<<v[n][m]-1<<endl;
//	BFSprint();
////	for(i=s.size()-1;i>=0;i--){
////		cout<<print[3-s[i]];
////	}
//}

/*
15 17
00000011111011110
00000001101111111
00011101111001111
11110100010110100
11100101101111111
11111100101101111
01100100011011110
11100111010010101
10000101000001010
10001101100100110
10001101001110111
01101100010010101
11011011111100011
11110110111100000
00111011101010000
*/

//#include<bits/stdc++.h>
//using namespace std;
//typedef pair<int,int>pii;
//const int N=500+9;
//int n,m;
//bool a[N][N];
//char aa[N][N];
//int v[N][N];
//
//int dx[5]= {1,0,0,-1};
//int dy[5]= {0,-1,1,0};
//char print[5]="DLRU";
//
//int cz[N][N];
//
//void bfs() {
//	int i,j;
//	queue<pair<int,int> >q;
//	q.push(pii(1,1));
//	v[1][1]=1;
//	while(!q.empty()) {
//		int x=q.front().first,y=q.front().second;q.pop();
//		if(x==n&&y==m) {
//			return ;
//		}
//		for(i=0; i<4; i++) {
//			int tx=x+dx[i];
//			int ty=y+dy[i];
//			if(tx>=1&&tx<=n&&ty>=1&&ty<=m&&v[tx][ty]==0&&a[tx][ty]==true) {
//				cz[tx][ty]=i;					// 注释(1) 存储方向，可以改成位置
//				q.push(pii(tx,ty));
//				v[tx][ty]=v[x][y]+1;
//			}
//		}
//	}
//}
//void dfs(int x,int y){
//	if(x==1&&y==1) return ;		//出口
//	dfs(x-dx[cz[x][y]],y-dy[cz[x][y]]);
//	/*
//	//每一次往回走，就是开始是t.x+dx[i],t.y+dy[i]；那么现在就是-dx[i],-dy[i]
//  	//此时减去的cz[n][m]的值，是不是恰好对应了  上面注释（1）记录的第i类变化。
//  	*/
//	cout<<print[cz[x][y]];
//}
//int main() {
//	int i,j;
//	cin>>n>>m;
//	for(i=1; i<=n; i++) {
//		scanf("%s",aa[i]+1);
//	}
//	for(i=1; i<=n; i++) {
//		for(j=1; j<=m; j++) {
//			if(aa[i][j]=='0') a[i][j]=true;
//		}
//	}
//	bfs();
//	cout<<v[n][m]-1<<endl;
//	dfs(n,m);
//}



//#include<bits/stdc++.h>
//using namespace std;
//typedef pair<int,int>pii;
//const int N=500+9;
//int n,m;
//bool a[N][N];
//char aa[N][N];
//int v[N][N];
//
//int dx[5]= {1,0,0,-1};
//int dy[5]= {0,-1,1,0};
//char print[5]="URLD";
//
//int ax[N];
//int bx[N];
//int ii[N][N];
//
//void bfs() {
//	int i,j;
//	queue<pair<int,int> >q;
//	q.push(pii(1,1));
//	v[1][1]=1;
//	while(!q.empty()) {
//		int x=q.front().first,y=q.front().second;q.pop();
//		if(x==n&&y==m) {
//			return ;
//		}
//		for(i=0; i<4; i++) {
//			int tx=x+dx[i];
//			int ty=y+dy[i];
//			if(tx>=1&&tx<=n&&ty>=1&&ty<=m&&v[tx][ty]==0&&a[tx][ty]==true) {
//				ii[tx][ty]=i;
//				ax[x]=tx;
//				ax[y]=ty;
//				q.push(pii(tx,ty));
//				v[tx][ty]=v[x][y]+1;
//			}
//		}
//	}
//}
//void dfs(int x,int y){
//	if(x==1&&y==1) return ;
//	dfs(ax[x],ax[y]);
//	cout<<print[3-ii[x][y]];
//}
//int main() {
//	int i,j;
//	cin>>n>>m;
////	n=30,m=50;
//	for(i=1; i<=n; i++) {
//		scanf("%s",aa[i]+1);
//	}
//	for(i=1; i<=n; i++) {
//		for(j=1; j<=m; j++) {
//			if(aa[i][j]=='0') a[i][j]=true;
//		}
//	}
//	bfs();
//	cout<<v[n][m]-1<<endl;
////	dfs(n,m);
//	for(i=1;i<=3;i++){
//		for(j=1;j<=3;j++){
//			cout<<ax[i]<<" "<<ax[j]<<" ";
//		}
//		cout<<endl;
//	}
//}



//#include<iostream>
//#include<string>
//#include<algorithm>
//#include<vector>
//#include<queue>
//#include<cstring>
//using namespace std;
//#define MAX_N 100
//int INF = 0x3f3f3f3f;
//char maze[MAX_N][MAX_N];
//int dis[MAX_N][MAX_N];
//bool vis[MAX_N][MAX_N];
//string s;
//int dir[4][2] = {1, 0, 0, -1, 0, 1, -1, 0};
//char print[5] = "DLRU";
//int N, M;
//
//void BFS (int sx, int sy, int fx, int fy) {
//    queue<pair<int, int> > q;
//    q.push(make_pair(sx, sy));
//    dis[sx][sy] = 0;
//    vis[sx][sy] = true;
//    while (!q.empty()) {
//        int x = q.front() .first;
//        int y = q.front().second;
//        q.pop();
//        for (int i = 0; i < 4; i++) {
//            int nx = x + dir[i][0];
//            int ny = y + dir[i][1];
//            if (nx >= 0 && nx < N && ny >= 0 && ny < M && maze[nx][ny] == '0' && vis[nx][ny] == false && dis[nx][ny] == INF) {
//                dis[nx][ny] = dis[x][y] + 1;
//                vis[nx][ny] = true;
//                q.push(make_pair(nx, ny));
//            }
//        }
//    }
//}
//void BFSprint (int sx, int sy) {
//    queue<pair<int, int> > q;
//    q.push(make_pair(sx,sy));
//    while (!q.empty()) {
//        int x = q.front().first;
//        int y = q.front().second;
//        q.pop();
//        for (int i = 0; i < 4; i++){
//            int nx = x + dir[i][0];
//            int ny = y + dir[i][1];
//            if (nx >= 0 && nx < N && ny >= 0 && ny < M && dis[nx][ny] + 1 == dis[x][y]){
//                cout << print[i];
//                q.push(make_pair(nx, ny));
//                break;
//            }
//        }
//    }
//}
//int main(){
//    memset(dis,INF,sizeof(dis));
//    cin >> N >> M;
//    for (int i = 0; i < N; i++)
//        for (int j = 0; j < M; j++)
//            cin >> maze[i][j];
//    BFS(N - 1, M - 1, 0, 0);
//    cout << dis[0][0] << endl;
//    BFSprint(0, 0);
//}



//
//#include<bits/stdc++.h>
//using namespace std;
//typedef pair<int,int>pii;
//const int N=500+9;
//int n,m;
//bool a[N][N];
//char aa[N][N];
//int v[N][N];
//
//int dx[5]= {1,0,0,-1};
//int dy[5]= {0,-1,1,0};
//char print[5]="DLRU";
//
//void bfs() {
//	int i,j;
//	queue<pair<int,int> >q;
//	q.push(pii(1,1));
//	v[1][1]=1;
//	while(!q.empty()) {
//		int x=q.front().first,y=q.front().second;
//		q.pop();
//		if(x==n&&y==m) {
//			return ;
//		}
//		for(i=0; i<4; i++) {
//			int tx=x+dx[i];
//			int ty=y+dy[i];
//			if(tx>=1&&tx<=n&&ty>=1&&ty<=m&&v[tx][ty]==0&&a[tx][ty]==true) {
//				q.push(pii(tx,ty));
//				v[tx][ty]=v[x][y]+1;
//			}
//		}
//	}
//}
//void BFSprint() {
//	int i,j;
//	queue<pair<int,int> > q;
//	q.push(pii(n,m));
//	while(!q.empty()) {
//		int x= q.front().first ,y=q.front().second;
//		q.pop();
//		if(x==1&&y==1)break;
//		for(i=0; i<4; i++) {
//			int tx=x+dx[i];
//			int ty=y+dy[i];
//			if(tx>=1&&tx<=n&&ty>=1&&ty<=m&&v[tx][ty]+1==v[x][y]) {
//				cout<<print[3-i];
//				q.push(pii(tx,ty));
//				break;
//			}
//		}
//	}
//}
//int main() {
//	int i,j;
//	cin>>n>>m;
//	for(i=1; i<=n; i++) {
//		scanf("%s",aa[i]+1);
//	}
//	for(i=1; i<=n; i++) {
//		for(j=1; j<=m; j++) {
//			if(aa[i][j]=='0') a[i][j]=true;
//		}
//	}
//	bfs();
//	cout<<v[n][m]-1<<endl;
//	BFSprint();
//}




//#include<bits/stdc++.h>
//using namespace std;
//typedef pair<int,int>pii;
//const int N=500+9;
//int n,m;
//bool a[N][N];
//char aa[N][N];
//int v[N][N];
//
//int dx[5]= {1,0,0,-1};
//int dy[5]= {0,-1,1,0};
//char print[5]="DLRU";
//
//void bfs() {
//	int i,j;
//	queue<pair<int,int> >q;
//	q.push(pii(1,1));
//	v[1][1]=1;
//	while(!q.empty()) {
//		int x=q.front().first,y=q.front().second;q.pop();
//		if(x==n&&y==m) {
//			return ;
//		}
//		for(i=0; i<4; i++) {
//			int tx=x+dx[i];
//			int ty=y+dy[i];
//			if(tx>=1&&tx<=n&&ty>=1&&ty<=m&&v[tx][ty]==0&&a[tx][ty]==true) {
//				q.push(pii(tx,ty));
//				v[tx][ty]=v[x][y]+1;
//			}
//		}
//	}
//}
//string s;
//void BFSprint() {
//	int i,j;
//	queue<pair<int,int> > q;
//	q.push(pii(n,m));
//	while(!q.empty()) {
//		int x= q.front().first ,y=q.front().second;q.pop();
//		if(x==1&&y==1)break;
//		for(i=0; i<4; i++) {
//			int tx=x+dx[i];
//			int ty=y+dy[i];
//			if(tx>=1&&tx<=n&&ty>=1&&ty<=m&&v[tx][ty]+1==v[x][y]) {				//从起点开始 BFS一遍 v[],只要满足 v[tx][ty] + 1 == v[x][y]就可以。
//				s+=i;
//				q.push(pii(tx,ty));
//				break;
//			}
//		}
//	}
//}
//int main() {
//	int i,j;
//	cin>>n>>m;
//	for(i=1; i<=n; i++) {
//		scanf("%s",aa[i]+1);
//	}
//	for(i=1; i<=n; i++) {
//		for(j=1; j<=m; j++) {
//			if(aa[i][j]=='0') a[i][j]=true;
//		}
//	}
//	bfs();
//	BFSprint();
//	cout<<v[n][m]-1<<endl;
//	for(i=s.size()-1;i>=0;i--){
//		cout<<print[3-s[i]];
//	}
//}


//////////////////////////////////////////////////////////线段树
//#include <iostream>
//#include<cstdio>
//#include<cstring>
//#include<algorithm>
//using namespace std;
//typedef long long ll;
//const int maxn = 10005;
//int n;
//int vis[maxn<<3],sum[maxn<<4];
//int li[maxn*2],ri[maxn*2],lsh[maxn<<2];
//
//void pushdown(int rt) {
//	sum[rt<<1]=sum[rt];
//	sum[rt<<1|1]=sum[rt];
//	sum[rt]=-1;
//}
//void update(int L,int R,int C,int l,int r,int rt) {
//	if(L<=l&&r<=R) {
//		sum[rt]=C;
//		return ;
//	}
//	if(sum[rt]!=-1) {
//		pushdown(rt);
//	}
//	int mid=l+r>>1;
//	if(mid>=R) update(L,R,C,l,mid,rt<<1);
//	else if(mid<L) update(L,R,C,mid+1,r,rt<<1|1);
//	else update(L,mid,C,l,mid,rt<<1),update(mid+1,R,C,mid+1,r,rt<<1|1);
//}
//int ans=0;
//void query(int l,int r,int rt){
//	if(vis[sum[rt]]==0&&sum[rt]!=-1){
////		cout<<rt<<endl;
//		vis[sum[rt]]=1;
//		ans++;
//		return;
//	}
//	if(l==r){
//		return ;
//	}
//	if(sum[rt]!=-1) {
//		pushdown(rt);
//	}
//	int mid=l+r>>1;
//	query(l,mid,rt<<1);
//	query(mid+1,r,rt<<1|1);
//}
//
//int main() {
//	int i,j;
//	int q;
//	scanf("%d",&q);
//	while(q--) {
//		memset(lsh,-1,sizeof lsh);
//		memset(vis,0,sizeof(vis));
//		scanf("%d",&n);
//		int k=1;
//		for(i=1; i<=n; i++) {
//			scanf("%d%d",&li[i],&ri[i]);
//			lsh[k++]=li[i];
//			lsh[k++]=ri[i];
//		}
//		sort(lsh+1,lsh+k+1);
//		int cnt=unique(lsh,lsh+k)-lsh+1;
//		int tt=cnt;
//		for(i=2; i<=tt; i++) {
//			if(lsh[i]-lsh[i-1]>1) {
//				lsh[cnt++]=lsh[i-1]+1;
//			}
//		}
//		sort(lsh+1,lsh+1+cnt);
//		for(i=1; i<=n; i++) {
//			int x=lower_bound(lsh,lsh+cnt,li[i])-lsh;
//			int y=lower_bound(lsh,lsh+cnt,ri[i])-lsh;
//			update(x,y,i-1,0,cnt-1,1);
//		}
//		ans=0;
//		query(0,cnt-1,1);
//		cout<<ans<<endl;
//	}
//}



//#include<bits/stdc++.h>
//#include<math.h>
//#include<string.h>
//#include<stdio.h>
//#include<algorithm>
//using namespace std;
//const int maxn=10005;
//int n;
//int vis[maxn<<3],sum[maxn<<4];
//int li[maxn*2],ri[maxn*2],lsh[maxn<<2];
//void pushdown(int rt)
//{
//    sum[rt<<1]=sum[rt];
//    sum[rt<<1|1]=sum[rt];
//    sum[rt]=-1;
//}
//void update(int L,int R,int C,int l,int r,int rt)
//{
//    if(L<=l&&r<=R)
//    {
//        sum[rt]=C;
//        return ;
//    }
//    if(sum[rt]!=-1)
//        pushdown(rt);
//    int m=(l+r)>>1;
//    if(m>=R) update(L,R,C,l,m,rt<<1);
//    else if(L>m) update(L,R,C,m+1,r,rt<<1|1);
//    else update(L,m,C,l,m,rt<<1),update(m+1,R,C,m+1,r,rt<<1|1);
//}
//int ans;
//void query(int l,int r,int rt)
//{
//        if(!vis[sum[rt]]&&sum[rt]!=-1)
//        {
//            ans++;
//            vis[sum[rt]]=1;
//        return ;
//        }
//    if(l==r)
//    {
//        return ;
//    }
//    if(sum[rt]!=-1)
//        pushdown(rt);
//    int m=(l+r)>>1;
//    query(l,m,rt<<1);
//    query(m+1,r,rt<<1|1);
//}
//int main()
//{
//    int t;
//    scanf("%d",&t);
//    while(t--)
//    {
//        scanf("%d",&n);
//        memset(sum,-1,sizeof(sum));
//        memset(vis,0,sizeof(vis));
//        int tot=0;
//        for(int i=0;i<n;i++)
//        {
//            scanf("%d%d",&li[i],&ri[i]);
//            lsh[tot++]=li[i];
//            lsh[tot++]=ri[i];
//        }
//        sort(lsh,lsh+tot);
//        int mm=unique(lsh,lsh+tot)-lsh;
//        int tt=mm;
//        for(int i=1;i<tt;i++)
//        {
//            if(lsh[i]-lsh[i-1]>1)
//                lsh[mm++]=lsh[i-1]+1;
//        }
//        sort(lsh,lsh+mm);
//        for(int i=0;i<n;i++)
//        {
//            int x=lower_bound(lsh,lsh+mm,li[i])-lsh;
//            int y=lower_bound(lsh,lsh+mm,ri[i])-lsh;
//            update(x,y,i,0,mm-1,1);
//        }
//        for(int i=0;i<20;i++) cout<<sum[i]<<" ";
//        ans=0;
//        query(0,mm-1,1);
//        printf("%d\n",ans);
//    }
//}




//#include<bits/stdc++.h>
//using namespace std;
//
//const int N=1e5+9;
//int a[N],lsh[N],s[N];
//int n;
//
//
//int main(){
//	int i,j;
//	cin>>n;
//	for(i=1;i<=n;i++){
//		cin>>a[i];
//		s[i]=a[i]+s[i-1];
//		lsh[i]=s[i];
//	}
//	sort(lsh+1,lsh+n+1);
//	int cnt=unique(lsh+1,lsh+n+1)-lsh-1;
//	for(i=1;i<=n;i++){
//		a[i]=lower_bound(lsh+1,lsh+1+cnt,s[i])-lsh;
//	}
//	int ans=0;
//	for(i=1;i<=n;i++){
//		while(a[i]!=i){
//			swap(a[i],a[a[i]]);
//			ans++;
//		}
//	}
//	cout<<ans<<endl;
//}





//#include<bits/stdc++.h>
//using namespace std;
//
//const int N=1e5+9;
//
//int a[N],s[N];
//
//int main(){
//	int i,j;
//	int n;
//	cin>>n;
//	for(i=1;i<=n;i++){
//		cin>>a[i];
//		s[i]=a[i]=a[i]+s[i-1];
//	}
//	sort(s+1,s+1+n);
//	int cnt=unique(s+1,s+1+n)-s-1;
//	for(i=1;i<=n;i++){
//		a[i]=lower_bound(s+1,s+1+cnt,a[i])-s;
//	}
////	for(i=1;i<=n;i++){
////		cout<<a[i]<<" ";
////	}
//	int ans=0;
//	for(i=1;i<=n;i++){
//		while(a[i]!=i){
//			swap(a[i],a[a[i]]);
//			ans++;
//		}
//	}
//	cout<<ans<<endl;
//}



//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int main(){
//	int i,j;
//	map<int ,char>a;
//	string s,s2;
//	while(cin>>s>>s2){
//		a.clear();
//		if(s==s2){
//			cout<<"Equal"<<endl;
//			continue;
//		}
//		for(i=1;i<s.size()-1;i++){
//			a[s[i]]++;
//		}
//		for(i=1;i<s2.size()-1;i++){
//			a[s2[i]]--;
//		}
//		map<int ,char> ::iterator it=a.begin();
//		for(;it!=a.end();it++){
//			if(it->second!=0)break;
//		}
//		if(it==a.end()&&s[0]==s2[0]&&s[s.size()-1]==s2[s2.size()-1]){
//			cout<<"Yes"<<endl;
//		}else{
//			cout<<"No"<<endl;
//		}
//	}
//}


//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int main(){
//	int i,j;
//	int a[200];
//	string s,s2;
//	while(cin>>s>>s2){
//		if(s==s2){
//			cout<<"Equal"<<endl;
//			continue;
//		}
//		memset(a,0,sizeof a);
//		for(i=1;i<s.size()-1;i++){
//			a[s[i]-'a']++;
//		}
//		for(i=1;i<s2.size()-1;i++){
//			a[s2[i]-'a']--;
//		}
//		for(i=1;i<200;i++){
//			if(a[i]!=0)break;
//		}
//		if(i==200&&s[0]==s2[0]&&s[s.size()-1]==s2[s2.size()-1]){
//			cout<<"Yes"<<endl;
//		}else{
//			cout<<"No"<<endl;
//		}
//	}
//}



//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	int i,j;
//	char p[20][5];
//	for(i=0;i<14;i++){
//		cin>>p[i];
//	}
//	for(i=0;i<14;i++){
//		for(j=0;j<2;j++){
//			cout<<p[i][j];
//		}
//		cout<<endl;
//	}
//}



//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//const ll mod=1e+9;
//const int N=1e5+9;
//int main(){
//	int i,j;
//	int a[200];
//	string s,s2;
//	while(cin>>s>>s2){
//		if(s==s2){
//			cout<<"Equal"<<endl;
//			continue;
//		}
//		memset(a,0,sizeof a);
//		for(i=1;i<s.size()-1;i++){
//			a[s[i]]++;
//			a[s2[i]]--;
//		}
//		for(i=0;i<200;i++){
//			if(a[i]!=0)break;
//		}
//		if(i==200&&s[0]==s2[0]&&s[s.size()-1]==s2[s2.size()-1]){
//			cout<<"Yes"<<endl;
//		}else{
//			cout<<"No"<<endl;
//		}
//	}
//}


//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int d[3][9]={0},z[7]={0},i,j;
//	char p[20][5];
//	for(i=0;i<14;i++){
//		cin>>p[i];
//		if(p[i][1]=='w')
//		{
//			d[0][p[i][0]-'1']++;
//		}
//		else if(p[i][1]=='s')
//		{
//			d[1][p[i][0]-'1']++;
//		}
//		else if(p[i][1]=='p')
//		{
//			d[2][p[i][0]-'1']++;
//		}
//		else if(p[i][0]=='d')
//		{
//			z[0]++;
//		}
//		else if(p[i][0]=='n')
//		{
//			z[1]++;
//		}
//		else if(p[i][0]=='x')
//		{
//			z[2]++;
//		}
//		else if(p[i][0]=='z')
//		{
//			z[4]++;
//		}
//		else if(p[i][0]=='f')
//		{
//			z[5]++;
//		}
//		else
//		{
//			if(p[i][1]=='e')
//				z[3]++;
//			else
//				z[6]++;
//		}
//	}
////	for(i=0;i<3;i++){
////		for(j=0;j<9;j++){
////			cout<<d[i][j];
////		}
////	}
////	printf("\n");
////	for(i=0;i<7;i++)
////	{
////		cout<<z[i];
////	 }
//	int sum,flag=0;
//	for(i=0;i<3;i++)
//	{
//		sum=0;
//		for(j=0;j<9;j++)
//		{
//			if(d[i][j]==0)
//				break;
//			sum+=d[i][j];
//		}
//		if(sum==14&&d[i][0]>=3&&d[i][8]>=3)
//		{
//			flag=1;break;
//		}
//	}
//	int flag2=1;
//	sum=0;
//	for(i=0;i<7;i++)
//	{
//		z[i]--;
//		if(z[i]!=0)
//			flag2=0;
//	}
//	if(flag2==1)
//	{
//		d[0][0]--;d[0][8]--;
//		d[1][0]--;d[1][8]--;
//		d[2][0]--;d[2][8]--;
//		if(d[0][0]==1||d[0][8]==1
//			||d[1][0]==1||d[1][8]==1
//			||d[2][0]==1||d[2][8]==1)
//		{
//			flag=2;
//			}
//	}
//	if(flag==0)
//		cout<<"I dont know!"<<endl;
//	else if(flag==1)
//		cout<<"jiulianbaodeng!"<<endl;
//	else
//		cout<<"shisanyao!"<<endl;
//}


//#include<bits/stdc++.h>
//using namespace std;
//
//const int N=2e5+9;
//int n;
//string s="xtCpc",s2;
//queue<int> a[7];
//int main(){
//	int i,j;
//	cin>>n;
//	cin>>s2;
////	n=s2.size();
//	int ans=0;
//	for(i=0;i<n;i++){
//		for(j=0;j<s.size();j++){
//			if(s2[i]==s[j]){
//				a[j].push(i);
//			}
//		}
//	}
////	for(i=0;i<4;i++)
////		cout<<a[i].size()<<" ";
//	while(a[0].size()&&a[1].size()&&a[2].size()&&a[3].size()&&a[4].size()){
//		int x=a[0].front();a[0].pop();
//		cout<<x<<" ";
//		while(a[1].size()){
//			if(a[1].front()>x){
//				x=a[1].front();
//				a[1].pop();
//				break;
//			}
//			else a[1].pop();
//		}cout<<x<<" ";
//		int x1=x;
//		while(a[2].size()){
//			if(a[2].front()>x){
//				x=a[2].front();
//				a[2].pop();
//				break;
//			}
//			else a[2].pop();
//		}cout<<x<<" ";
//		int x2=x;
//		while(a[3].size()){
//			if(a[3].front()>x){
//				x=a[3].front();
//				a[3].pop();
//				break;
//			}
//			else a[3].pop();
//		}cout<<x<<" ";
//		int x3=x;
//		while(a[4].size()){
//			if(a[4].front()>x){
//				x=a[4].front();
//				a[4].pop();
//				break;
//			}
//			else a[4].pop();
//		}
//		cout<<x<<" ";
//		if(x1!=x2&&x2!=x3&&x3!=x){
//			ans++;
//		}
//	}
//	cout<<ans<<endl;
//}


//#include<bits/stdc++.h>
//using namespace std;
//
//const int N=2e5+9;
//int n;
//string s="xtCpc",s2;
//queue<int> a[4];
//int main() {
//	int i,j;
////	cin>>n;
//	while(cin>>n) {
////		for(i=0;i<4;i++){
////			while(!a[i].empty()) a[i].pop();
////		}
//		cin>>s2;
//		n=s2.size();
//		int ans=0;
//		for(i=0; i<n; i++) {
//			for(j=0; j<s.size(); j++) {
//				if(s2[i]==s[j]) {
//					a[j].push(i);
//				}
//			}
//		}
//		int flag=0;
//		while(a[0].size()&&a[1].size()&&a[2].size()&&a[3].size()&&a[4].size()) {
//			int x=a[0].front();
//			a[0].pop();
//			while(a[1].size()) {
//				if(a[1].front()>x) {
//					x=a[1].front();
//					a[1].pop();
//					break;
//				} else a[1].pop();
//			}
//			int x1=x;
//			while(a[2].size()) {
//				if(a[2].front()>x) {
//					x=a[2].front();
//					a[2].pop();
//					break;
//				} else a[2].pop();
//			}
//			int x2=x;
//			while(a[3].size()) {
//				if(a[3].front()>x) {
//					x=a[3].front();
//					a[3].pop();
//					break;
//				} else a[3].pop();
//			}
//			int x3=x;
//			while(a[4].size()) {
//				if(a[4].front()>x) {
//					x=a[4].front();
//					a[4].pop();
//					break;
//				} else a[4].pop();
//			}
//			if(x1!=x2&&x2!=x3&&x3!=x) {
//				ans++;
//			}
//		}
//		cout<<ans<<endl;
//	}
//}







//#include<bits/stdc++.h>
//using namespace std;
//
//const int N=2e5+9;
//int n;
//string s="xtCpc",s2;
//queue<int> a[7];
//int main() {
//	int i,j;
////	n=s2.size();
//	while(cin>>n>>s2) {
//		for(i=0;i<4;i++) while(a[i].size()) a[i].pop();
//		int ans=0;
//		for(i=0; i<n; i++) {
//			for(j=0; j<s.size(); j++) {
//				if(s2[i]==s[j]) {
//					a[j].push(i);
//				}
//			}
//		}
//		int flag=0;
//		while(a[0].size()&&a[1].size()&&a[2].size()&&a[3].size()&&a[4].size()) {
//			int x=a[0].front();
//			a[0].pop();
//			while(a[1].size()) {
//				if(a[1].front()>x) {
//					x=a[1].front();
//					a[1].pop();
//					break;
//				} else a[1].pop();
//			}
//			int x1=x;
//			while(a[2].size()) {
//				if(a[2].front()>x) {
//					x=a[2].front();
//					a[2].pop();
//					break;
//				} else a[2].pop();
//			}
//			int x2=x;
//			while(a[3].size()) {
//				if(a[3].front()>x) {
//					x=a[3].front();
//					a[3].pop();
//					break;
//				} else a[3].pop();
//			}
//			int x3=x;
//			while(a[4].size()) {
//				if(a[4].front()>x) {
//					x=a[4].front();
//					a[4].pop();
//					break;
//				} else a[4].pop();
//			}
//			if(x1!=x2&&x2!=x3&&x3!=x) {
//				ans++;
//			}
//		}
//		cout<<ans<<endl;
//	}
//}






//#include<bits/stdc++.h>
//using namespace std;
//#define ll long long
//int main() {
//	int i,j;
//	int t;
//	cin>>t;
//	ll a[200]={1,2};
//	int si=0;
//	for(i=2;;i++){
//		a[i]=a[i-1]*2;
//		if(a[i]*2>1e10)break;
//	}
//	si=i;
//	while(t--) {
//		int n;
//		cin>>n;
//		for(i=0;i<si;i++){
//			if(n<a[i]) break;
//		}
//		cout<<a[i-1]-1<<endl;
//	}
//}


//#include<bits/stdc++.h>
//using namespace std;
//#define T  int ttt;cin>>ttt;while(ttt--)
//#define ll long long
//int n;
//string s,f;
//bool check(string s) {
//	int i,j;
//	f=s;
//	reverse(f.begin(),f.end());
//	if(s==f)return 0;
//	else return 1;
//}
//ll al,bob;
//int main() {
//	int i,j;
//	T {
//		al=0,bob=0;
//		cin>>n;
//		cin>>s;
//		int flag=1,pan=1;
//		while(1) {
//			for(i=0; i<s.size(); i++) {
//				if(s[i]=='0') break;
//			}
//			if(i==s.size()) break;
//			if(flag&check(s)) {
//				reverse(s.begin(),s.end());
//				flag=0;
//			} else {
//				int m=s.size()/2,flag2=0;
//				for(i=0; m+i<s.size(); i++) {
//					if(s[m+i]!='1') {
//						s[m+i]='1';
//						flag=1;
//						if(pan%2==1)al++;
//						else bob++;
//						flag2=1;
//						break;
//					}
//				}
//				if(flag2!=1) {
//					for(i=0; m-i>=0; i++) {
//						if(s[m-i]!='1') {
//							s[m-i]='1';
//							flag=1;
//							if(pan%2==1)al++;
//							else bob++;
//							break;
//						}
//					}
//				}
//
//			}
//			if(pan==1)pan=0;
//			else pan=1;
//		}
//		if(al>bob) cout<<"BOB"<<endl;
//		else if(al<bob) cout<<"ALICE"<<endl;
//		else cout<<"DRAW"<<endl;
//	}
//}

/*
3
2
00
3
000
3
010
*/


//#include<bits/stdc++.h>
//using namespace std;
//#define ll long long
//const int mod = 998244353;
//char s[1010];
//
//int main() {
//	int t;
//	cin>>t;
//	while(t--) {
//		int n;
//		cin>>n;
//		scanf("%s",s+1);
//		int a = 0,b = 0;
//		int cnt = 0;
//		for(int i = 1; i <= n; i++) {
//			if(s[i] == '0') {
//				cnt++;
//			}
//		}
//		int flag = 0;
//		if(cnt==1) cout<<"BOB"<<endl;
//		else{
//			if(cnt%2==1){
//				cout<<"ALICE"<<endl;
//			}
//			else{
//				cout<<"BOB"<<endl;
//			}
//		}
////		if(cnt % 2) {
////			if(cnt > 1)
////				cout<<"ALICE"<<endl;
////			else
////				cout<<"BOB"<<endl;
////		} else {
////			cout<<"BOB"<<endl;
////		}
//	}
//}





//#include<bits/stdc++.h>
//using namespace std;
//
//int main() {
//	int i,j,k;
//	int t;
//	cin>>t;
//	int a[10];
//	while(t--) {
//		for(i=1; i<=6; i++) {
//			scanf("%d",&a[i]);
//		}
//		sort(a+1,a+6+1);
//		for(i=1; i<=6; i++) {
//			for(j=i+1; j<=6; j++) {
//				for(k=j+1; k<=6; k++) {
//					if(a[i]+a[j]>a[k]&&)
//				}
//			}
//		}
//	}
//}




//#include<bits/stdc++.h>
//using namespace std;
//const int N=1e3+9;
//int n,m;
//char a[N][N];
//int b[N][N];
//int dx[]={0,0,1,-1,1,-1,1,-1};
//int dy[]={1,-1,0,0,1,-1,-1,1};
//int check(int x,int y){
//	int ans=0;
//	int i,j;
//	if(a[x][y]=='*') return -1;
//	for(i=0;i<8;i++){
//		int xx=dx[i]+x;
//		int yy=dy[i]+y;
//		if(a[xx][yy]=='*')ans++;
//	}
//	return ans;
//}
//int main(){
//	int i,j;
//	cin>>n>>m;
//	for(i=1;i<=n;i++){
//		scanf("%s",a[i]+1);
//	}
//	for(i=1;i<=n;i++){
//		for(j=1;j<=m;j++){
//			if(check(i,j)==-1) cout<<"*";
//			else cout<<check(i,j);
//		}
//		cout<<endl;
//	}
//}






//#include<bits/stdc++.h>
//using namespace std;
//
//const int N=1e4+9;
//
//int check(int n){
//	int i,j;
//	int ans=0;
//	for(i=1;i*i<n;i++){
//		if(n%i==0) ans+=2;
//	}
//	if(i*i==n) ans++;
//	return ans;
//}
//int main(){
//	int i,j;
//	int t,n;
//	cin>>t;
//	while(t--){
//		cin>>n;
//		cout<<check(n)<<endl;
//	}
//}





//#include<bits/stdc++.h>
//using namespace std;
//
//const int N=5000+9;
//
//
//int fa[N]; // 记录每个节点的父节点
//int n,m,p;
//
//void init(int n) {
//	for (int i = 1; i <= n; i++) {
//		fa[i] = i;
//	}
//}
//
//int find(int x) {
//	if (fa[x] == x) return x;
//	return fa[x] = find(fa[x]);
//}
//
//void unite(int x, int y) {
//	x = find(x), y = find(y);
//	if (x == y) return;
//	fa[x] = y;
//}
//
//int main() {
//	int i,j;
//	cin>>n>>m>>p;
//	init(n);
//	for(i=1;i<=m;i++){
//		int a,b;
//		cin>>a>>b;
//		unite(a,b);
//	}
//	while(p--){
//		int a,b;
//		cin>>a>>b;
//		if(find(a)==find(b)){
//			cout<<"Yes"<<endl;
//		}
//		else{
//			cout<<"No"<<endl;
//		}
//	}
//}






//#include<bits/stdc++.h>
//using namespace std;
//
//const int N=1e2+9;
//int n,m;
//int a[N],b[N];
//inline int read(int &x) {
//	x = 0;
//	char ch = getchar();
//	while(ch < '0' || ch > '9') ch = getchar();
//	while(ch >= '0' && ch <= '9') x = (x << 1) + (x << 3) + (ch ^ 48), ch = getchar();
//	return x;
//}
//int main() {
//	int i,j;
//	read(n);read(m);
//	for(i=1; i<=n; i++) {
//		read(a[i]);
//		b[a[i]]++;
//	}
//	for(i=1; i<=n; i++) {
//		if(b[a[i]]!=1)cout<<b[a[i]]-1<<endl;
//		else cout<<"BeiJu"<<endl;
//	}
//}




//#include<bits/stdc++.h>
//using namespace std;
//
//char s[50],s2[50],s3[50];
//int main() {
//	int i,j;
//	int t;
//	cin>>t;
//	while(t--) {
//		getchar();
//		scanf("%s",s+1);s[0]='0',s2[0]='0',s3[0]='0';
//		for(i=1; i<=32; i++) {
//			s2[i]=s[i];
//		}
//		for(i=32; i>=0; i--) {
//			if(s[i]=='0')break;
//		}
//		s2[i++]='1';
//		for(; i<=32; i++) {
//			s2[i]='0';
//		}
//		for(i=1; i<=32; i++) {
//			s3[i]=s2[i];
//		}
//		for(i=31; i>=0; i--) {
//			if(s2[i]=='0')break;
//		}
//		s3[i++]='1';
//		for(; i<=31; i++) {
//			s3[i]='0';
//		}
//		printf("%s\n%s\n",s2,s3);
//	}
//}



//#include<bits/stdc++.h>
//using namespace std;
//
//char s[50],s2[50],s3[50];
//int main() {
//	int i,j;
//	int t;
//	cin>>t;
//	while(t--) {
//		getchar();
//		scanf("%s",s+1);
//		s[0]='0',s2[0]='0',s3[0]='0';
//		for(i=1; i<=32; i++) {
//			s2[i]=s[i];
//		}
//		for(i=32; i>=0; i--) {
//			if(s[i]=='0')break;
//		}
//		s2[i++]='1';
//		for(; i<=32; i++) {
//			s2[i]='0';
//		}
//		for(i=0; i<=32; i++) {
//			s3[i]=s2[i];
//		}
//		for(i=31; i>=0; i--) {
//			if(s2[i]=='0')break;
//		}
//		s3[i++]='1';
//		for(; i<=31; i++) {
//			s3[i]='0';
//		}
//		if(s2[0]=='0') printf("%s\n",s2+1);
//		else printf("%s\n",s2);
//		if(s3[0]=='0') printf("%s\n",s3+1);
//		else printf("%s\n",s3);
//	}
//}






//#include<bits/stdc++.h>
//using namespace std;
//const int N=1e3;
//int a[N];
//int main() {
//	int i,j;
//	int n;
//	a[0]=1;
//	for(i=1;i<N;i++){
//		if(a[i-1]*i>1e7)break;
//		a[i]=a[i-1]*i;
//	}
//	int ji=i-1;
//	while(1) {
//		scanf("%d",&n);
//		if(n==0){
//			cout<<"NO"<<endl;
//			continue;
//		}
//		if(n<0)break;
//		for(i=ji;i>=1;i--){
//			if(n>=a[i])n-=a[i];
//		}
//		if(n)cout<<"NO"<<endl;
//		else cout<<"YES"<<endl;
//	}
//}



//#include <iostream>
//
//using namespace std;
//
//const int N = 1e6+5;
//
//int a[15];
//int b[N];
//
//int main()
//{
//    a[0] = 1;
//    a[1] = 1;
//    for (int i = 2; i <= 12; i++) {
//        a[i] = a[i-1] * i;
//    }
//    for(int i = 1 ; i < 1024; i++){
//        int sum = 0;
//        for(int j = 0; j < 12; j++){
//            if(i >> j & 1) sum+=a[j];
//        }
//        b[sum] = true;
//        cout<<sum<<endl;
//    }
//    int n;
//    while(scanf("%d",&n) != EOF){
//        if(n < 0) break;
//        if(b[n]) cout<<"YES"<<endl;
//        else cout<<"NO"<<endl;
//    }
//    return 0;
// }




//#include<bits/stdc++.h>
//using namespace std;
//int a[20];
//int flag=0;
//bool dfs(int u,int n) {
////	cout<<u<<endl;
//	if (n < 0 || (n > 0 && u > 9)) return false;
//		if(n==0) {
//		flag=1;
//		return true;
//	}
//	if(dfs(u+1,n))return true;
//	if(dfs(u-1,n-a[u]))return true;
//	return false;
//}
//int main() {
//	int i,j;
//	int n;
//	a[0]=1;
//	for(i=1; i<=10; i++) a[i]=a[i-1]*i;
//	while(1) {
//		flag=0;
//		cin>>n;
//		if(n<0)break;
//		dfs(0,n);
//		if(flag) cout<<"YES"<<endl;
//		else cout<<"NO"<<endl;
//	}
//}





//#include<bits/stdc++.h>
//using namespace std;
//int a[20];
//int flag=0;
//bool dfs(int u,int n) {
////	cout<<u<<endl;
//	if (n < 0 || (n > 0 && u > 9)) return false;
//		if(n==0) {
//		flag=1;
//		return true;
//	}
//	if(dfs(u+1,n))return true;
//	if(dfs(u+1,n-a[u]))return true;
//	return false;
//}
//int main() {
//	int i,j;
//	int n;
//	a[0]=1;
//	for(i=1; i<=10; i++) a[i]=a[i-1]*i;
//	while(1) {
//		flag=0;
//		cin>>n;
//		if(n<0)break;
//		if(dfs(0,n)&&n) cout<<"YES"<<endl;
//		else cout<<"NO"<<endl;
//	}
//}




//#include<bits/stdc++.h>
//using namespace std;
//int a[20];
//int flag=0;
//void dfs(int u,int n) {
////	cout<<u<<endl;
//	if(n<0||u<0||u>10)return ;
//	if(n==0) {
//		flag=1;
//		return ;
//	}
//	dfs(u+1,n);
//	dfs(u+1,n-a[u]);
//	return ;
//}
//int main() {
//	int i,j;
//	int n;
//	a[0]=1;
//	for(i=1; i<=10; i++) a[i]=a[i-1]*i;
//	while(1) {
//		flag=0;
//		cin>>n;
//		if(n==0){
//			cout<<"NO"<<endl;
//			continue;
//		}
//		if(n<0)break;
//		dfs(0,n);
//		if(flag) cout<<"YES"<<endl;
//		else cout<<"NO"<<endl;
//	}
//}




//#include <iostream>
//#include <unordered_set>
//#include <array>
//#include <string>
////#include<bits/stdc++.h>
////#include<unordered_set>
//using namespace std;
//
//int n;
//int a[20];
//unordered_set<int> s;
//int main(){
//	int i,j;
//	a[0]=1;
//	for(i=1;i<10;i++){
//		a[i]=a[i-1]*i;
//	}
//	for(i=1;i<1<<10;i++){
//		int sum=0;
//		for(j=0;j<10;j++){
//			if(i>>j&1)sum+=a[j];
//		}
//		s.insert(sum);
//	}
//	while(cin>>n,n>=0){
//		if(s.count(n))puts("YES");
//		else puts("NO");
//	}
//}


//#include <iostream>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//
//const int N = 1e5+9,M=30*1e5+9;
//
//int a[N],son[M][2],idx;
//int n;
//
//void insert(int x) {
//	int p=0;
//	for(int i=30; i>=0; i--) {
//		int &s=son[p][x>>i&1];
//		if(!s) s=++idx;		//创建新节点
//		p=s;	//向下传递
//	}
//}
//
//int query(int x) {
//	int res=0,p=0;		//res为最大异或和
//	for(int i=30; i>=0; i--) {
//		int s=x>>i&1;
//		if(son[p][!s]) {	//若与s相反的节点存在 即异或最大
//			res+=1<<i;		//计算最大异或
//			p=son[p][!s];	//向下传递
//		} else p=son[p][s];	//往另一侧走
//	}
//	return res;
//}
//
//int main() {
//	int i,j;
//	scanf("%d", &n);
//	for(i=0; i<n; i++) {
//		scanf("%d", &a[i]);
//		insert(a[i]);
//	}
//	for(i=0; i<idx; i++) {
//		for(j=0;j<2;j++){
//			cout<<son[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//	int ans=0;
//	for(i=0; i<n ; i ++) {
//		ans=max(ans,query(a[i]));
//	}
//	cout<<ans<<endl;
//}






//#include<bits/stdc++.h>
//using namespace std;
//const int N=1e6+9;
//
//int t[N][26];
//int idx,cnt[N][26];
//void insert(string s){
//	int p=0;
//	for(int i=0;i<s.size();i++){
//		int c=s[i]-'a';
//		cnt[p][c]++;
//		if(!t[p][c])t[p][c]=++idx;
//		p=t[p][c];
//	}
//}
//int query(string s){
//	int p=0,q=0;
//	int c;
//	for(int i=0;i<s.size();i++){
//		c=s[i]-'a';
//		if(!t[p][c]) return 0;
//		q=p;
//		p=t[p][c];
//	}
//	return cnt[q][c];
//}
//int main(){
//	int i,j;
//	string s;
//	while(1){
//		getline(cin,s);
//		if(s=="")break;
//		insert(s);
//	}
//	while(cin>>s){
//		cout<<query(s)<<endl;
//	}
//}



//#include<cstdio>
//#include<iostream>
//#include<cstring>
//using namespace std;
//const int N = 1000000 + 9;
//int trie[N][26];
//int color[N];
//int k = 0;
//
//void insert(string s) {
//	int p = 0;
//	for(int i=0; i<s.size(); i++) {
//		int c = s[i] - 'a';
//		if(!trie[p][c]) trie[p][c] = ++k;
//		p = trie[p][c];
//	}
//	color[p] = 1;
//}
//
//int query(string s) {
//	int p = 0;
//	for(int i=0; i<s.size(); i++) {
//		int c = s[i] - 'a';
//		if(!trie[p][c]) return 0;
//		p = trie[p][c];
//	}
//	return color[p] == 1;
//}
//
//int main() {
//	string s;
//	while(getline(cin,s)&&s!="") {
//		insert(s);
//	}
//	while(cin>>s) {
//		if(query(s)) printf("YES\n");
//		else printf("NO\n");
//	}
//	return 0;
//}



//#include<bits/stdc++.h>
//using namespace std;
//const int N=10000+9;
//int t[10000][20];
//int a[N];
//int idx,T,n;
//bool color[100000];
//
//int le(int x) {
//	int sum=0;
//	while(x) {
//		x/=10;
//		sum++;
//	}
//	return sum;
//}
//void insert(int x) {
//	int len=le(x);
//	int p=0;
//	int sum=1;
//	for(int i=0; i<len-1; i++) sum*=10;
//	for(int i=0; i<len; i++) {
//		int c=x/sum;
////		cout<<c<<endl;
//		cout<<sum<<endl;
//		if(!t[p][c]) t[p][c]=++idx;
//		p=t[p][c];
//		sum/=10;
//	}
////	color[p]=true;
//}
//
//int query(int x) {
//	int p=0;
//	int len=le(x);
//	int c;
//	int sum=1;
//	for(int i=0; i<len-1; i++) sum*=10;
//	for(int i=0; i<len; i++) {
//		c=x/sum;
//		if(!t[p][c]) return 0;
//		p=t[p][c];
//		sum/=10;
//	}
////	cout<<x<<endl;
//	return 1;
//}
//
//int main() {
//	int i,j;
//	cin>>T;
//	int x;
//	while(T--) {
//		memset(t,0,sizeof t);
//		int flag=0;
//		cin>>n;
//		for(i=0; i<n; i++) {
//			cin>>a[i];
//		}
//		sort(a,a+n,greater<int>());
//		for(i=0; i<n; i++) {
//			insert(a[i]);
////			if(query(a[i+1])) flag=1;
//		}
//		if(flag) cout<<"NO"<<endl;
//		else cout<<"YES"<<endl;
//	}
//}


/*
1
3
91157
9115
911

1
3
123
456
789

*/

//#include<bits/stdc++.h>
//using namespace std;
//const int N=10000+9;
//int t[N][20];
//int a[N];
//int idx,T,n;
//int cnt[N];
//void insert(string s) {
//	int p=0;
//	for(int i=0; i<s.size(); i++) {
//		int c=s[i]-'0';
//		if(!t[p][c]) t[p][c]=++idx;
//		p=t[p][c];
//		cnt[p]++;
//	}
//}
//
//int query(string s) {
//	int p=0,res=0;
//	for(int i=0; i<s.size(); i++) {
//		int c=s[i]-'0';
//		if(!t[p][c]) return 0;
//		p=t[p][c];
//	}
//	res+=cnt[p];
//	return res;
//}
//
//int main() {
//	int i,j;
//	cin>>T;
//	string s[N];
//	while(T--) {
//		memset(t,0,sizeof t);
//		memset(cnt,0,sizeof cnt);
//		int flag=0;
//		cin>>n;
//		for(i=0; i<n; i++) {
//			cin>>s[i];
//			insert(s[i]);
//		}
//		for(i=0; i<n; i++) {
//			if(query(s[i])-1!=0) {
//				flag=1;
//				break;
//			}
//		}
//		if(flag) cout<<"NO"<<endl;
//		else cout<<"YES"<<endl;
//	}
//}






//#include<bits/stdc++.h>
//using namespace std;
//
//const int N=1000000+9;
//int t[N][20];
//int cnt[N];
//int idx,T,n;
//string s[N];
//
//void insert(string s) {
//	int p=0;
//	for(int i=0; i<s.size(); i++) {
//		int c=s[i]-'0';
//		if(!t[p][c]) t[p][c]=idx++;
//		p=t[p][c];
//		cnt[p]++;
//	}
//}
//
//int query(string s) {
//	int p=0;
//	for(int i=0; i<s.size(); i++) {
//		int c=s[i]-'0';
//		if(!t[p][c]) return 0;
//		p=t[p][c];
////		res+=cnt[p];
//	}
//	return cnt[p];
//}
//
//int main() {
//	int i,j;
//	cin>>T;
//	while(T--) {
//		memset(t,0,sizeof(t));
//        memset(cnt,0,sizeof(cnt));
//		cin>>n;
//		for(i=0; i<n; i++) {
//			cin>>s[i];
//			insert(s[i]);
//		}
//		int flag=0;
//		for(i=0; i<n; i++) {
//			if(query(s[i])-1!=0)flag=1;
////			cout<<query(s[i])<<endl;
//		}
//		if(flag) puts("NO");
//		else puts("YES");
//	}
//}



//#include<bits/stdc++.h>
//using namespace std;
//
//const int N=100000+9;
//int t[N][20];
//int cnt[N];
//int idx,T,n;
//string s[N];
//
//void insert(string s) {
//	int p=0;
//	for(int i=0; i<s.size(); i++) {
//		int c=s[i]-'0';
//		if(!t[p][c]) t[p][c]=++idx;
//		p=t[p][c];
//		cnt[p]++;
//	}
//}
//
//int query(string s) {
//	int p=0,res=0;
//	for(int i=0; i<s.size(); i++) {
//		int c=s[i]-'0';
//		if(!t[p][c]) return 0;
//		p=t[p][c];
////		res+=cnt[p];
//	}
////	return res-s.size();
//	return cnt[p];
//}
//
//int main() {
//	int i,j;
//	cin>>T;
//	while(T--) {
//		memset(t,0,sizeof(t));
//        memset(cnt,0,sizeof(cnt));
//        idx=0;
//		cin>>n;
//		for(i=0; i<n; i++) {
//			cin>>s[i];
//			insert(s[i]);
//		}
//		int flag=0;
//		for(i=0; i<n; i++) {
//			if(query(s[i])-1!=0)flag=1;
////            cout<<query(s[i])<<endl;
//		}
//		if(flag) puts("NO");
//		else puts("YES");
//	}
//}





//#include<bits/stdc++.h>
//using namespace std;
//
//const int N=100000+9;
//int t[N][20];
//int cnt[N];
//int idx,T,n;
//string s[N];
//
//void insert(string s) {
//    int p=0;
//    for(int i=0; i<s.size(); i++) {
//        int c=s[i]-'0';
//        if(!t[p][c]) t[p][c]=++idx;
//        p=t[p][c];
//        cnt[p]++;
//    }
//}
//
//int query(string s) {
//    int p=0,res=0;
//    for(int i=0; i<s.size(); i++) {
//        int c=s[i]-'0';
//        if(!t[p][c]) return 0;
//        p=t[p][c];
////        res+=cnt[p];
//    }
////    return res-s.size();
//	return cnt[p];
//}
//
//int main() {
//    int i,j;
//    cin>>T;
//    while(T--) {
//    	memset(t,0,sizeof(t));
//        memset(cnt,0,sizeof(cnt));
//        idx=0;
//        cin>>n;
//        for(i=0; i<n; i++) {
//            cin>>s[i];
//            insert(s[i]);
//        }
//        int flag=0;
////        for(i=0;i<100;i++){
////        	if(cnt[i]>0) printf("%d %d\n",i,cnt[i]);
////		}
//        for(i=0; i<n; i++) {
//            if(query(s[i])-1!=0)flag=1;
////            cout<<query(s[i])<<endl;
//        }
//        if(flag) puts("NO");
//        else puts("YES");
//    }
//}


//#include<bits/stdc++.h>
//using namespace std;
//
//const int N=100+9;
//
//int n,m,p;
//int a[N][N],b[N][N],c[N][N];
//
//int main() {
//	int i,j;
//	cin>>n>>m;
//	for(i=1; i<=n; i++) {
//		for(j=1; j<=m; j++) {
//			cin>>a[i][j];
//		}
//	}
//	cin>>p;
//	for(i=1; i<=m; i++) {
//		for(j=1; j<=p; j++) {
//			cin>>b[i][j];
//		}
//	}
//	int k=0,k2=0;
//	for(i=1; i<=n; i++) {
//		int res=0;
//		for(j=1; j<=m; j++) {
//			res+=a[i][j]*b[j][i];
////			cout<<c[i][j]<<endl;
//		}
//		c[i][j]=res;
//	}
//	for(i=1; i<=n; i++) {
//		for(j=1; j<=m; j++) {
//			cout<<c[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//}







//#include<bits/stdc++.h>
//using namespace std;
//
//const int N=100+9;
//
//int n,m;
//int a[N][N],b[N][N],c[N][N];
//
//int main() {
//	int i,j;
//	cin>>n>>m;
//	for(i=1; i<=n; i++) {
//		for(j=1; j<=m; j++) {
//			cin>>a[i][j];
//		}
//	}
//	for(i=1; i<=n; i++) {
//		for(j=1; j<=m; j++) {
//			cin>>b[i][j];
//		}
//	}
//	for(i=1; i<=n; i++) {
//		for(j=1; j<=m; j++) {
//			c[i][j]+=a[i][j]+b[i][j];
//		}
//	}
//	for(i=1; i<=n; i++) {
//		for(j=1; j<=m; j++) {
//			cout<<c[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//}




//#include<bits/stdc++.h>
//using namespace std;
//
//stack <char> s;
//
//int main() {
//	int i=0,j=0;
//	string st;
//	cin>>st;
//	s.push(' ');
//	for(i=0; i<st.size(); i++) {
////		cout<<s.top()<<endl;
////		cout<<st[i];
//		s.push(st[i]);
//		if(s.top()==')') {
//			string ss;
//			while(1) {
//				if(s.top()=='(') {
//					ss+=s.top();
//					s.pop();
//					ss+=s.top();
//					s.pop();
//					break;
//				}
//				ss+=s.top();
//				s.pop();
//			}
//			reverse(ss.begin(),ss.end());
//			if(ss[0]==' ') {
//				if(ss[ss.size()-1]=='+'||ss[ss.size()-1]=='-') {
//					for(i=0; i<ss.size()-1; i++) {
//						if(i!=1)s.push(ss[i]);
//					}
//				} else {
//					for(i=0; i<ss.size(); i++) {
//						s.push(ss[i]);
//					}
//				}
//			} else {
//				if(ss[0]=='+') {
////					cout<<ss<<endl;
//					for(i=0; i<ss.size()-1; i++) {
//						if(i!=1){
//							s.push(ss[i]);
////							cout<<ss[i];
//						}
//
//					}
////					cout<<s.top();
//				} else {
//					if(ss[0]=='-') {
//						for(i=0; i<ss.size(); i++) {
//							if(ss[i]=='+'||ss[i]=='-') break;
//						}
//						if(i!=ss.size()) {
//							for(i=0; i<ss.size(); i++) {
//								s.push(ss[i]);
//							}
//						} else {
//							for(i=0; i<ss.size()-1; i++) {
//								if(i!=1)s.push(ss[i]);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	string a;
//	while(s.top()!=' '){
//		a+=s.top();
//		s.pop();
//	}
//	reverse(a.begin(),a.end());
//	cout<<a<<endl;
//}




//#include<bits/stdc++.h>
//using namespace std;
//
//const int N=100+9;
//
//
//int f[N];
//int w[N];
//int s[N];
//
//int n,m;
//int W=1e3;
//int main() {
//	int i,j;
//	cin>>m>>n;
//	for(i=1; i<=n; i++) {
//		cin >> w[i];
//	}
//	f[0]=1;
//	for(int i=1; i<=n; i++) {
//		for(int j=W; j>=w[i]; j--) {
//			for(int k=0; k<=m && k*w[i] <=j ; k++) {
//				f[j] = max(f[j],f[j-k*w[i]] + k*v[i]);
//			}
//		}
//	}
//}




//#include<bits/stdc++.h>
//using namespace std;
//int n,m,x[101],d[25001];
//int main() {
//	cin>>n>>m;
//	int ans=0;
//	for(int i=0; i<m; i++) cin>>x[i];
//	while(true) { //直到断点才打破循环
//		++ans;
//		for(int i=0; i<m; i++) {
//			if(ans>=x[i]) {
//				if(d[ans]==0 || d[ans]>d[ans-x[i]]+1) {
//				//如果由多种情况都满足总权重为ans那么取最小的数量
//					d[ans]=d[ans-x[i]]+1;
////					printf("%d %d\n",ans,d[ans]);
//				}
//			}
//		}
//		if(d[ans]==0 || d[ans]>n) { //如果d[ans]==0表示断点，
//		//d[ans]>n表示要满足权重ans时，需要超过n张邮票
//			cout<<ans-1<<endl;
//			break;
//		}
//	}
//}





//#include<bits/stdc++.h>
//using namespace std;
//
//const int N=50+9;
//int w[N],v[N],dp[20009];
//int m,n;
//int main() {
//	int i,j,k;
//	cin>>m>>n;
//	for(i=1; i<=n; i++) {
//		cin>>w[i]>>v[i];
//	}
//	memset(dp,0x3f,sizeof dp);
//	dp[0]=0;
//	for(i=1; i<=n; i++) {
//		for(k=1; k<=v[i]; k++)
//			for(j=m; j>=w[i]; j--) {
//				dp[j]=min(dp[j],dp[j-w[i]]+1);
//			}
//	}
//	if(dp[m]>55) cout<<"><"<<endl;
//	else cout<<dp[m]<<endl;
//}




//#include<bits/stdc++.h>
//using namespace std;
//
//const int N=2000000+9;
//
//int main(){
//	int i,j;
//
//}



//#include<bits/stdc++.h>
//using namespace std;
//
//const int N=200000+9;
//int n,k;
//int a[N],b[N];
//
//int main(){
//	int i,j;
//	int t;
//	cin>>t;
//	while(t--){
//		cin>>n>>k;
//		for(i=0;i<n;i++){
//			cin>>a[i];
//		}
//		for(i=0;i<n;i++){
//			cin>>b[i];
//		}
//		sort(a,a+n);
//		sort(b,b+n,greater<int>());
//		int l=0;
//		int cnt=0,ans=0;
//		for(i=0;i<n&&l+i<n;i++){
//			if(a[i+l]+b[i]>=k){
//				cnt++;
//			}
//			else{
//				l++;
//			}
//		}
//		ans=cnt;
//		cnt=0;
//		for(i=0;i<n&&l+i<n;i++){
//			if(a[i]+b[i+l]>=k){
//				cnt++;
//			}
//			else{
//				l++;
//			}
//		}
//		ans=max(ans,cnt);
//		cout<<ans<<endl;
//	}
//}


//#include<bits/stdc++.h>
//using namespace std;
//
//const int N=2000000+9;
//
//int main() {
//	int i,j;
//	double n,m;
//	while(cin>>n>>m){
////		cout<<n/(n+m)<<endl;
//		printf("%.5lf\n",n/(n+m));
//	}
//}



//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//const int maxn = 2e5 + 5;
//struct node {
//	ll val;
//} tree[maxn << 2];
//ll n, w,K;
//ll a[maxn];
//void pushup(ll root) {
//	tree[root].val = tree[root << 1].val | tree[root << 1 | 1].val;			//区间最大值
//}
//void build(ll l, ll r, ll root) {
//	if (l == r) {
//		tree[root].val = a[l];		//初始化
//		return;
//	}
//	ll mid = (l + r) >> 1;
//	build(l, mid, root << 1);
//	build(mid + 1, r, root << 1 | 1);
//	pushup(root);
//}
////void update(ll idx, ll v, ll l, ll r, ll root) {
////	if (idx > r || idx < l)return;
////	if (idx <= l && idx >= r) {
////		tree[root].val = v;			//将树中值改为 v，增加改成+
////		return;
////	}
////	ll mid = (l + r) >> 1;
////	update(idx, v, l, mid, root << 1);
////	update(idx, v, mid + 1, r, root << 1 | 1);
////	pushup(root);
////}
//ll query(ll L, ll R, ll l, ll r, ll root) {
//	if (L > r || R < l)return 0;
//	if (L <= l && r <= R)return tree[root].val;
//	ll mid = (l + r) >> 1;
//	return query(L, R, l, mid, root << 1) | query(L, R, mid + 1, r, root << 1 | 1);		//区间最大值
//}
//
//int main() {
//	int t;
//	cin>>t;
//	while(t--) {
//		scanf("%lld%lld%lld", &n, &w,&K);
//		for (int i = 1; i <= n; i++)
//			scanf("%lld", &a[i]);
//		build(1, n, 1);
//		while (w--) {
//			ll x, y;
//			scanf("%lld%lld",&x, &y);
//			printf("%lld\n", query(x, y, 1, n, 1));
//		}
//	}
//}




/*
1
5 3 0
1 2 3 4 5
1 3
2 4
3 5
*/



//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//const int maxn = 1e5 + 5;
//ll n,k;
//struct node {
//	ll val;
//	ll lazy;
//} tree[maxn << 2];
//ll a[maxn];
//void pushup(int root) {
//	tree[root].val = min(tree[root << 1].val,tree[root << 1 | 1].val);
//}
//void build(ll l, ll r, ll root) {
//	tree[root].lazy = 0;
//	if (l == r) {
//		tree[root].val = a[l];	//初始化
//		return;
//	}
//	ll mid = (l + r) >> 1;
//	build(l, mid, root << 1);
//	build(mid + 1, r, root << 1 | 1);
//	pushup(root);
//}
//void pushdown(ll root, ll l, ll r) {
//	if (!tree[root].lazy)return;
//	ll mid = (l + r) >> 1;
//	tree[root << 1].val 	+= tree[root].lazy;		//更新左子树的值
//	tree[root << 1 | 1].val += tree[root].lazy;		//更新右子树的值
//	tree[root << 1].lazy	+= tree[root].lazy;			//向左子树传递lazy
//	tree[root << 1 | 1].lazy+= tree[root].lazy;			//向右子树传递lazy
//	tree[root].lazy = 0;
//}
//void update(ll L, ll R, ll v, ll l, ll r, ll root) {
//	if (L > r || R < l)return;
//	if (L <= l && R >= r) {
//		tree[root].val += v ;		//将数值加上lazy
//		tree[root].lazy += v;					//更新lazy
//		return;
//	}
//	pushdown(root, l, r);
//	ll mid = (l + r) >> 1;
//	update(L, R, v, l, mid, root << 1);
//	update(L, R, v, mid + 1, r, root << 1 | 1);
//	pushup(root);
//}
//ll query(ll L, ll R, ll l, ll r, ll root) {
//	if (L > r || R < l)return 0x3f;
//	if (L <= l && R >= r)return tree[root].val;
//	pushdown(root, l, r);
//	ll mid = (l + r) >> 1;
//	return min(query(L, R, l, mid, root << 1) ,query(L, R, mid + 1, r, root << 1 | 1));
//}
//int main() {
//	int i,j;
//	int t;
//	cin>>t;
//	while(t--) {
//		scanf("%lld%lld",&n,&k);
//		for(i=1; i<=n; i++) {
//			scanf("%lld",&a[i]);
//		}
//		build(1,n,1);
//		int ans=0;
////		update(1,1+k-1,-1,1,n,1);
////		for(i=1; i<=n; i++){
////			cout<<query(i,i,1,n,1)<<endl;
////		}
//
//		for(i=1; i+k-1<=n; i++) {
//			ll ma=query(i,i+k-1,1,n,1);
////			cout<<ma<<endl;
//////			cout<<query(1,n,1,n,1)<<endl;
////			for(j=1; j<=n; j++) {
////				cout<<query(j,j,1,n,1)<<endl;
////			}
////			cout<<endl;
//			if(ma<=0) continue;
//			ans+=ma;
//			update(i,i+k-1,-ma,1,n,1);
//		}
//		printf("%lld\n",ans);
//	}
//}

/*
3
3 2
1 2 1
6 3
1 5 3 4 7 6
9 4
2 7 1 3 6 5 8 9 4

1
9 4
2 7 1 3 6 5 8 9 4


*/

//#include<bits/stdc++.h>
//using namespace std;
//
//const int N=100+9;
//
//string a[N];
//int t[10000009][26];
//int color[1000009];
//int idx,n,q;
//int cnt[1000009];
//
//void insert(string s) {
//	int p = 0;
//	for(int i=0; i<s.size(); i++) {
//		int c = s[i] - 'a';
//		if(!t[p][c]) t[p][c] = ++idx;
//		p = t[p][c];
//	}
//	cnt[p]++;
//	color[p] = 1;
//}
//
//int query(string s) {
//	int p = 0,ans=0;
//	for(int i=0; i<s.size(); i++) {
//		int c = s[i] - 'a';
//		if(!t[p][c]) return ans;
//		p = t[p][c];
//		ans+=cnt[p];
//	}
//	return ans;
//}
//
//int main() {
//	int i,j;
//	cin>>n>>q;
//	for(i=0;i<n;i++){
//		cin>>a[i];
//		insert(a[i]);
//	}
//	string s;
//	while(q--){
//		cin>>s;
//		cout<<query(s)<<endl;
//	}
//}
//





//#include<bits/stdc++.h>
//using namespace std;
//
//const int N=2e4+9;
//int n;
//int h[N],e[N],ne[N],idx;
//
//void add(int a,int b){
//	e[idx]=b; ne[idx]=h[a]; h[a]=idx++;
//}
//
//int main(){
//	int t;
//	cin>>t;
//	while(t--){
//		cin>>n;
//
//	}
//}




//#include<bits/stdc++.h>
//using namespace std;
//
//const int N=100000+9;
//int head,e[N],ne[N],idx;
//void init(){
//	idx=0;head=-1;
//}
//void add(int x){
//	e[idx]=x,ne[idx]=head,head=idx++;
//}
//
//void add_hou(int k,int x){
//	e[idx]=x,ne[idx]=ne[k],ne[k]=idx++;
//}
//
//void remove(int k){
//	ne[k]=ne[ne[k]];
//}
//
//int main(){
//	int i,j;
//	init();
//	int q;
//	cin>>q;
//	while(q--){
//		char p;
//		int k,x;
//		cin>>p;
//		if(p=='H'){
//			cin>>x;
//			add(x);
//		}
//		if(p=='D'){
//			cin>>k;
//			if(!k)head=ne[k];
//			remove(k-1);
//		}
//		if(p=='I'){
//			cin>>k>>x;
//			add_hou(k-1,x);
//		}
//	}
//	for(i=head;i!=-1;i=ne[i]){
//		cout<<e[i]<<" ";
//	}
//}







//#include<bits/stdc++.h>
//using namespace std;
//
//const int N=1000+9;
//int n,q,m;
//int a[N];
//
//int main(){
//	int i,j;
//	cin>>n>>q;
//	for(i=0;i<n;i++){
//		cin>>a[i];
//	}
//	while(q--){
//		int x,y;
//		cin>>x>>y;
//		swap(a[x-1],a[y-1]);
//	}
//	for(i=0;i<n;i++){
//		cout<<a[i]<<endl;
//	}
//}





//#include<bits/stdc++.h>
//using namespace std;
//
//const int N=1000+9;
//int n,b,m;
//typedef struct {
//	long long a[2][2];
//} matrix;
//matrix a;
//matrix P(long long a[2][2],long long b[2][2]) {
//	matrix c;
//	for(int i=0; i<2; i++)
//		for(int j=0; j<2; j++)
//			c.a[i][j]=0;
//
//	for(int i=0; i<2; i++)
//		for(int j=0; j<2; j++) {
//			for(int k=0; k<2; k++) {
//				c.a[i][j]=(c.a[i][j]+a[i][k]*b[k][j])%m;
//			}
//		}
//	return c;
//}
//matrix Quick(matrix m,long long n) {
//	matrix E;
//	for(int i=0; i<2; i++)
//		for(int j=0; j<2; j++)
//			if(i==j)
//				E.a[i][j]=1;
//			else
//				E.a[i][j]=0;
//	while(n>0) {
//		if(n&1)
//			E=P(E.a,m.a);
//		n>>=1;
//		m=P(m.a,m.a);
//	}
//	return E;
//}
//int main() {
//	int i,j;
//	cin>>b>>m;
//	for(i=0; i<2; i++) {
//		for(j=0; j<2; j++) {
//			cin>>a.a[i][j];
//		}
//	}
//	if(b==0&&m==1) {
//		for(i=0; i<2; i++) {
//			for(j=0; j<2; j++) {
//				cout<<0<<" ";
//			}
//			cout<<endl;
//		}
//		return 0;
//	}
//	a=Quick(a,b);
//	for(i=0; i<2; i++) {
//		for(j=0; j<2; j++) {
//			cout<<a.a[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//}




//#include<bits/stdc++.h>
//using namespace std;
//
//const int N=1000+9;
//int a[N];
//int n,m;
//
//int main() {
//	int i,j;
//	cin>>n>>m;
//	for(i=0; i<n; i++) {
//		cin>>a[i];
//	}
//	sort(a,a+n);
//	vector<int >b[m+9];
//	for(j=0; j<m; j++) {
//		for(i=j; i<n; i+=m) {
//			b[j].push_back(a[i]);
//		}
//	}
//	int ans=0;
//	for(i=0; i<m; i++) {
//		int res=0;
//		for(j=0; j<b[i].size()-1; j++) {
//			res+=b[i][j];
//			ans+=res;
//		}
////		cout<<res<<" ";
//	}
//	cout<<ans<<endl;
//}


//#include<bits/stdc++.h>
//using namespace std;
//
//double a,b;
//double ans;
//
//int main() {
//	int i,j;
//	cin>>a>>b;
//	if(a<=40) {
//		ans+=a*b;
//	} else {
//		if(a<=50) {
//			ans+=40*b+(a-40)*b*1.5;
//		} else {
//			ans+=40*b+10*b*1.5+(a-50)*b*2;
//		}
//	}
//	printf("%.2lf\n",ans);
//}



//#include<bits/stdc++.h>
//using namespace std;
//
//const int N=22;
//int a[N],n,m;
//int v[N];
//int ans,flag;
//void dfs(int idx,int sum){
//	if(sum==m){
//		for(int i=0;i<n;i++){
//			if(v[i]==2) cout<<a[i]<<" ";
//		}
//		cout<<endl;
//		ans++;
//		if(flag){
//			return ;
//		}
//		flag=1;
//	}
//	if(v[idx]==0){
//		v[idx]=2;
//		dfs(idx+1,sum+a[idx]);
//		v[idx]=0;
//		dfs(idx+1,sum);
//	}
//}
//int main(){
//	int i,j;
//	cin>>n;
//	for(i=0;i<n;i++){
//		cin>>a[i];
//	}
//	cin>>m;
//	dfs(0,0);
//	cout<<ans<<endl;
//}



//#include<bits/stdc++.h>
//using namespace std;
//
//const int N = 22;
//int a[N], n, m;
//int v[N];
//int ans, flag;
//void dfs(int idx, int sum) {
//	if (sum == m) {
//		for (int i = n-1; i>=0; i--) {
//			if (v[i] == 2) cout << a[i] << " ";
//		}
//		cout << endl;
//		ans++;
//		if (flag) {
//			return;
//		}
//		flag = 1;
//	}
//	if (v[idx] == 0) {
//		v[idx] = 2;
//		dfs(idx + 1, sum + a[idx]);
//		v[idx] = 0;
//		dfs(idx + 1, sum);
//	}
//}
//int main() {
//	int i, j;
//	cin >> n;
//	for (i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//	cin >> m;
//	dfs(0, 0);
//	cout << ans << endl;
//}





//#include<bits/stdc++.h>
//using namespace std;
//
//const int N = 22;
//int a[N], n, m;
//int v[N];
//int ans, flag;
//void dfs(int idx, int sum) {
//	if (sum == m) {
//		for (int i = 0; i<n; i++) {
//			if (v[i]) cout << a[i] << " ";
//		}
//		cout << endl;
//		ans++;
//		return;
//	}
//	if(idx==-1) {
//		return ;
//	}
//	v[idx] = 1;
//	dfs(idx -1, sum + a[idx]);
//	v[idx] = 0;
//	dfs(idx - 1, sum);
//}
//int main() {
//	int i, j;
//	cin >> n;
//	for (i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//	cin >> m;
//	dfs(n-1, 0);
//	cout << ans << endl;
//}


/*
5
-7 -3 -2 5 9
0


*/


//#include<bits/stdc++.h>
//using namespace std;
//
//const int N=22;
//int a[N];
//int n,m;
//int main(){
//	cin>>n;
//	int i,j;
//	for(i=0;i<n;i++)
//		cin>>a[i];
//	cin>>m;
//	int cnt=0;
//	for(i=1;i<(1<<n);i++){
//		int x=0;
//		for(j=0;j<n;j++){
//			if((i>>j)&1) x+=a[j];
//		}
//		if(x==m){
//			for(j=0;j<n;j++){
//				if((i>>j)&1)cout<<a[j]<<" ";
//			}
//			cout<<endl;
//			cnt++;
//		}
//	}
//	cout<<cnt<<endl;
//}




////#include<bits/stdc++.h>
//#include  <map>
//#include  <set>
//#include  <cmath>
//#include  <queue>
//#include  <cstdio>
//#include  <vector>
//#include  <climits>
//#include  <cstring>
//#include  <cstdlib>
//#include  <iostream>
//#include  <algorithm>
//using namespace std;
//
//const int N=200000+9,M=N*2;
//int n;
//int e[N],ne[M],head[M],idx;
//int v[N];
//int ans=N,ji=N;
//
//void add(int a,int b){
//	e[idx]=b,ne[idx]=head[a],head[a]=idx++;
//}
//
//int dfs(int u){
//	v[u]=1;
//	int res=0,sum=1;
//	for(int i=head[u];i!=-1;i=ne[i]){
//		int j=e[i];
//		if(!v[j]){
//			int s=dfs(j);
//			res=max(res,s);
//			sum+=res;
//		}
//	}
//	res=max(res,n-sum);
////	if(ans>=res) ji=min(u,ji);
////	if(res<ans || (res==ans && u<ji)){
////		ans=res;
////		ji=u;
////	}
////	if(ans>res) {
////		ans=res;ji=u;
////	}
////	else{
////		if(ans==res) {
////			ji=min(ji,u);
////		}
////	}
//
//	ans=min(ans,res);
//	return sum;
//}
//
//int main(){
//	int i,j;
//	int t,t1=1;
//	scanf("%d",&t);
//	while(t--){
//		memset(head,-1,sizeof head);
//		memset(v,0,sizeof v);
//		ans=M,ji=M,idx=0;
//
//		scanf("%d",&n);
//		for(i=0;i<n-1;i++){
//			int x,y;
//			scanf("%d%d",&x,&y);
//			add(x,y);add(y,x);
//		}
//		dfs(1);
//		printf("Case %d: %d\n",t1++,ans);
//	}
//}


//#include  <map>
//#include  <set>
//#include  <cmath>
//#include  <queue>
//#include  <cstdio>
//#include  <vector>
//#include  <climits>
//#include  <cstring>
//#include  <cstdlib>
//#include  <iostream>
//#include  <algorithm>
//using namespace std;
//
//const int N=200000+9,M=N*2;
//int n;
//int e[N],ne[M],head[M],idx;
//int v[N];
//int ans,jj;
//
//void add(int a,int b) {
//	e[idx]=b,ne[idx]=head[a],head[a]=idx++;
//}
//
//int dfs(int u) {
//	v[u]=1;
//	int res=0,sum=1;
//	for(int i=head[u]; i!=-1; i=ne[i]) {
//		int j=e[i];
//		if(!v[j]) {
//			int s=dfs(j);
//			res=max(res,s);
//			sum+=res;
//		}
//	}
//	res=max(res,n-sum);
//
//	if (ans>res) {
//		ans=res,jj=u;
//	} else if (ans==res) {
//		jj=min(jj,u);
//	}
//	return sum;
//}
//int main() {
//	int i,j;
//	int t;
//	scanf("%d",&t);
//	while(t--) {
//		memset(head,-1,sizeof head);
//		memset(v,0,sizeof v);
//		ans=M,jj=0,idx=0;
//
//		scanf("%d",&n);
//		for(i=0; i<n-1; i++) {
//			int x,y;
//			scanf("%d%d",&x,&y);
//			add(x,y);
//			add(y,x);
//		}
//		dfs(1);
//		printf("%d %d\n",jj,ans);
//	}
//}



//#include<bits/stdc++.h>
//using namespace std;
//
//const int N=1e5+9;
//char s[N],p[N];
//int n,m;
//int ne[N];
//
//int main() {
//	int i,j;
//	cin>>s+1>>p+1;
//	n=strlen(s+1);m=strlen(p+1);
//	for (int i = 2, j = 0; i <= m; i ++ ) {
//		while (j && p[i] != p[j + 1]) j = ne[j];
//		if (p[i] == p[j + 1]) j ++ ;
//		ne[i] = j;
//	}
//
//	for (int i = 1, j = 0; i <= n; i ++ ) {
//		while (j && s[i] != p[j + 1]) j = ne[j];
//		if (s[i] == p[j + 1]) j ++ ;
//		if (j == m) {
//			j = ne[j];
//			cout<<i-m+1<<endl;
//			// 匹配成功后的逻辑
//		}
//	}
//
//	for (i = 1; i <=m; i ++) {
//		cout<<ne[i]<<" ";
//	}
//}



//#include<bits/stdc++.h>
//using namespace std;
//#define ll long long
//const int N=1e5+9,M=N*2,mod=10007;
//int h[N],e[M],ne[M],idx;
//bool st[N];
//int n,T;
//ll ans;
//
//void init(){
//	memset(st,0,sizeof st);
//	memset(h,-1,sizeof h);
//	idx=0;
//	ans=0;
//}
//
//void add(int a,int b){
//	e[a]=b;ne[idx]=h[a];h[a]=idx++;
//}
//
//int dfs(int u) {
//	st[u] = true; // st[u] 表示点u已经被遍历过
//	int sum=1,res=0;
//	for (int i = h[u]; i != -1; i = ne[i]) {
//		int j = e[i];
//		if (!st[j]) {
//			int s=dfs(j);
//			if(res==s)ans++;
//			res=max(res,s);
//			sum+=res;
//			if(sum==s)ans++;
//		}
//	}
//	if(res==n-sum)ans++;
//	res=max(res,n-sum);
//	return sum;
//}
//
//int main() {
//	int i,j;
//	cin>>T;
//	int t1=0;
//	while(T--){
//		init();
//		cin>>n;
//		for(i=0;i<n-1;i++){
//			int a,b;
//			cin>>a>>b;
//			add(a,b);add(b,a);
//		}
//		dfs(1);
//		printf("Case %d: %lld\n",++t1,ans);
//	}
//}


//#include<bits/stdc++.h>
//using namespace std;
//
//int mo[20]={31,28,31,30,31,30,31,31,30,31,30,31,30,31,30,31,30};
//int m[3],d[3],flag=0,cnt[3],y;
//
//int main(){
//	int i,j;
//	string s1,s2;
//	cin>>y;
//	if(y%4==0&&y%100!=0||y%100==0&&y%400==0) flag=1;
//	cin>>s1>>s2;
//	for(i=0;i<s1.size();i++){
//		s1[i]-='0';
//		s2[i]-='0';
//	}
//	m[1]=s1[0]*10+s1[1]; d[1]=s1[3]*10+s1[4];
//	m[2]=s2[0]*10+s2[1]; d[2]=s2[3]*10+s2[4];
//	if(m[1]>2) cnt[1]++;
//	if(m[2]>2) cnt[2]++;
//	for(i=0;i<m[1]-1;i++){
//		cnt[1]+=mo[i];
//	}
//	cnt[1]+=d[1];
//	for(i=0;i<m[2]-1;i++){
//		cnt[2]+=mo[i];
//	}
//	cnt[2]+=d[2];
//	cout<<abs(cnt[1]-cnt[2])<<endl;
//}


//#include<bits/stdc++.h>
//using namespace std;
//#define ll long long
//const int N=1e5+9,maxn=1e6+9;
//
//ll n,n1;
//int prime[maxn+5];
//bool number[maxn + 5];
//int size;
//
//void isprime() {
//	int i, j, c = 0;
//	memset(number, true, sizeof(number));
//	for (i = 2; i <= maxn; i++) {
//		if (number[i])
//			prime[c++] = i;
//		for (j = 0; j < c && prime[j] * i <= maxn; j++) {
//			number[prime[j] * i] = false;
//			if (i % prime[j] == 0)
//				break;
//		}
//	}
//	size=c;
//}
//vector<int> a;
//int main() {
//	ll i,j,k=0;
//	isprime();
//	int t;
//	cin>>t;
//	while(t--) {
//		a.clear();
//		cin>>n;
//		n1=n;
//		for(i=0; i<size; i++) {
//			while(n%prime[i]==0) {
//				a.push_back(prime[i]);
//				n/=prime[i];
//			}
//		}
//		if(n==1)cout<<a.size()<<endl;
//		else cout<<a.size()<<endl;
//		cout<<n1<<"=";
//		for(i=0; i<a.size()-1; i++) {
//			cout<<a[i]<<'*';
//		}
//		if(n==1&&a.size()==0) {
//			cout<<a[i]<<endl;
//		} else if(n!=1&&a.size()!=0){
//			cout<<a[i]<<'*'<<n<<endl;
//		}
//	}
//}





//#include<bits/stdc++.h>
//using namespace std;
//#define ll long long
//const int N=1e5+9,maxn=1e6+9;
//
//ll n,n1;
//int prime[maxn+5];
//bool number[maxn + 5];
//
//void isprime() {
//	int i, j;
//	memset(number, true, sizeof(number));
//	for (i = 2; i <= maxn; i++) {
//		if (number[i])
//			prime[++prime[0]] = i;
//		for (j = 1; j < prime[0] && prime[j] * i <= maxn; j++) {
//			number[prime[j] * i] = false;
//			if (i % prime[j] == 0)
//				break;
//		}
//	}
//}
//vector<int> a;
//int main() {
//	ll i,j,k=0;
//	isprime();
//	int t;
//	cin>>t;
//	while(t--) {
//		a.clear();
//		cin>>n;
//		n1=n;
//		for(i=1; i<=prime[0]; i++) {
//			while(n%prime[i]==0) {
//				a.push_back(prime[i]);
//				n/=prime[i];
//			}
//		}
//		if(n!=1)cout<<a.size()+1<<endl;
//		else cout<<a.size()<<endl;
//		cout<<n1<<"=";
//		for(i=0; i<a.size(); i++) {
//			cout<<a[i];
//			if(i!=a.size()-1)cout<<"*";
//		}
//		if(n!=1&&a.size()==0) {
//			cout<<n;
//		} else if(n!=1&&a.size()!=0) {
//			cout<<'*';
//		}
//		cout<<endl;
//	}
//}




//#include<bits/stdc++.h>
//using namespace std;
//#define ll long long
//const int N=30;
//ll n;
//int ans=0x3f,wei;
//bool v[N];
//char p[N];
//
//void dfs(int idx,int step,ll sum) {
//	if(sum%3==0) {
//		ans=max(ans,step);
//	}
//	if(idx==wei)return;
//	dfs(idx+1,step+1,sum*10+p[idx]-'0');
//	dfs(idx+1,step,sum);
//}
//int main() {
//	int i,j;
//	int t;
//	cin>>t;
//	while(t--) {
//		cin>>p;
//		ans=0;
//		wei=strlen(p);
//		dfs(0,0,0);
//		if(ans!=0)
//			printf("%d\n",wei-ans);
//		else printf("-1\n");
//	}
//}





//#include<bits/stdc++.h>
//using namespace std;
//
//const int N=1e5+9;
//int n;
//
//int main(){
//	int i,j;
//	int t;
//	scanf("%d",&t);
//	while(t--){
//		int ans=0;
//		scanf("%d",&n);
//		for(i=1;i*i<n;i++){
//			if(n%i==0) ans+=2;
//		}
//		if(i*i==n) ans++;
//		cout<<ans<<endl;
//	}
//}




//#include<bits/stdc++.h>
//using namespace std;
//#define ll long long
//const int N=1e6+9;
//int n,k;
//int a[N];
//int main(){
//	int i,j;
//	scanf("%d%d",&n,&k);
//	for(i=0;i<n;i++){
//		scanf("%d",&a[i]);
//	}
//	sort(a,a+n);
//	ll ans=0;
//	ans+=a[n-1]-1+a[n-1]-k;
//	cout<<ans<<endl;
//}


//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//const int maxn = 1e5 + 5;
//ll n;
//struct node {
//	ll val;
//	ll lazy;
//} tree[maxn << 2];
//ll a[maxn];
//void pushup(int root) {
//	tree[root].val = tree[root << 1].val + tree[root << 1 | 1].val;
//}
//void build(ll l, ll r, ll root) {
//	tree[root].lazy = 0;
//	if (l == r) {
//		tree[root].val = a[l];	//初始化
//		return;
//	}
//	ll mid = (l + r) >> 1;
//	build(l, mid, root << 1);
//	build(mid + 1, r, root << 1 | 1);
//	pushup(root);
//}
//void pushdown(ll root, ll l, ll r) {
//	if (!tree[root].lazy)return;
//	ll mid = (l + r) >> 1;
//	tree[root << 1].val = tree[root].lazy;		//更新左子树的值
//	tree[root << 1 | 1].val = tree[root].lazy;		//更新右子树的值
//	tree[root << 1].lazy = tree[root].lazy;			//向左子树传递lazy
//	tree[root << 1 | 1].lazy= tree[root].lazy;			//向右子树传递lazy
//	tree[root].lazy = 0;
//}
//void update(ll L, ll R, ll v, ll l, ll r, ll root) {
//	if (L > r || R < l)return;
//	if (L <= l && R >= r) {
//		tree[root].val = v;		//将数值加上lazy
//		tree[root].lazy = v;					//更新lazy
//		return;
//	}
//	pushdown(root, l, r);
//	ll mid = (l + r) >> 1;
//	update(L, R, v, l, mid, root << 1);
//	update(L, R, v, mid + 1, r, root << 1 | 1);
//	pushup(root);
//}
//ll query(ll L, ll R, ll l, ll r, ll root) {
//	if (L > r || R < l)return 0;
//	if (L <= l && R >= r)return tree[root].val;
//	pushdown(root, l, r);
//	ll mid = (l + r) >> 1;
//	return query(L, R, l, mid, root << 1) + query(L, R, mid + 1, r, root << 1 | 1);
//}
//int main() {
//	int i,j;
//	int l,r;
//	ll q;
//	scanf("%lld%lld",&n,&q);
//	build(1,n,1);
//	while(q--) {
//		scanf("%d%d",&l,&r);
//		update(1,n,0,l,r,1);
//	}
//	query
//}


//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//const int maxn = 1e5 + 5;
//ll n;
//struct node {
//	ll val;
//	ll lazy;
//} tree[maxn << 2];
//ll a[maxn];
//void pushup(int root) {
//	tree[root].val = tree[root << 1].val + tree[root << 1 | 1].val;
//}
//void build(ll l, ll r, ll root) {
//	tree[root].lazy = 0;
//	if (l == r) {
//		tree[root].val = a[l];	//初始化
//		return;
//	}
//	ll mid = (l + r) >> 1;
//	build(l, mid, root << 1);
//	build(mid + 1, r, root << 1 | 1);
//	pushup(root);
//}
//void pushdown(ll root, ll l, ll r) {
//	if (!tree[root].lazy)return;
//	ll mid = (l + r) >> 1;
//	tree[root << 1].val 	+= tree[root].lazy*(mid - l + 1);	//更新左子树的值
//	tree[root << 1 | 1].val	+= tree[root].lazy*(r - mid);		//更新右子树的值
//	tree[root << 1].lazy	+= tree[root].lazy;					//向左子树传递lazy
//	tree[root << 1 | 1].lazy+= tree[root].lazy;					//向右子树传递lazy
//	tree[root].lazy = 0;
//}
//void update(ll L, ll R, ll v, ll l, ll r, ll root) {
//	if (L > r || R < l)return;
//	if (L <= l && R >= r) {
//		tree[root].val += v * (r - l + 1);		//将数值加上lazy
//		tree[root].lazy += v;					//更新lazy
//		return;
//	}
//	pushdown(root, l, r);
//	ll mid = (l + r) >> 1;
//	update(L, R, v, l, mid, root << 1);
//	update(L, R, v, mid + 1, r, root << 1 | 1);
//	pushup(root);
//}
//ll query(ll L, ll R, ll l, ll r, ll root) {
//	if (L > r || R < l)return 0;
//	if (L <= l && R >= r)return tree[root].val;
//	pushdown(root, l, r);
//	ll mid = (l + r) >> 1;
//	return query(L, R, l, mid, root << 1) + query(L, R, mid + 1, r, root << 1 | 1);
//}
//int main() {
//	int i,j;
//	ll q;
//	scanf("%lld%lld",&n,&q);
//	for(i=1; i<=n; i++) {
//		scanf("%lld",&a[i]);
//	}
//	build(1,n,1);
//	char m;
//	while(q--) {
//		getchar();
//		scanf("%c",&m);
//		int a1,a2;
//		ll a3;
//		if(m=='Q') {
//			scanf("%d%d",&a1,&a2);
////			cout<<query(b,c,1,n,1)<<endl;
//			printf("%lld\n",query(a1,a2,1,n,1));
//		} else {
//
//			scanf("%d%d%lld",&a1,&a2,&a3);
//			update(a1,a2,a3,1,n,1);
//		}
//	}
//}



//#include<bits/stdc++.h>
//using namespace std;
//#define ll long long
//const int N=2e5+9;
//ll a[N],n,sum;
//
//int main(){
//	int i,j;
//	while(cin>>n){
//		sum=0;
//		for(i=0;i<n+1;i++){
//			cin>>a[i];
//		}
//		for(i=n;i>=0;i--){
//			sum+=a[i];
//			if(sum>=i)break;
//		}
//		cout<<i<<endl;
//	}
//}




//#include<bits/stdc++.h>
//using namespace std;
//#define ll long long
//int main() {
//	int i,j;
//	ll a,b,c,d;
////	while(cin>>a>>b>>c>>d)
//	for( a=1009; a<2020; a++)
//		for( b=a+1; b<2020; b++)
//			for( c=1009; c<2020; c++)
//				for( d=c+1; d<2020; d++) {
//					ll sum1=0,sum2=0,ge;
//					for(i=a; i<=b; i++) {
//						if(i%1009==0)break;
//					}
//					if(i<=b) {
//						ge=b/1009-i/1009+1;
////			cout<<ge<<endl;
//						if(ge%2==1) {
//							if(i/1009%2==1) {
//								sum1=ge/2+1;
//								sum2=ge-sum1;
//							} else {
//								sum2=ge/2+1;
//								sum1=ge-sum2;
//							}
//						} else {
//							sum1=sum2=ge/2;
//						}
//					}
////		printf("%d %d\n",sum1,sum2);
//
//					int sum3=0,sum4=0;
//					for(i=c; i<=d; i++) {
//						if(i%1009==0)break;
//					}
//					if(i<=d) {
//						ge=d/1009-i/1009+1;
////		cout<<ge<<endl;
//						if(ge%2==1) {
//							if(i/1009%2==1) {
//								sum3=ge/2+1;
//								sum4=ge-sum3;
//							} else {
//								sum4=ge/2+1;
//								sum3=ge-sum4;
//							}
//						} else {
//							sum3=sum4=ge/2;
//						}
//
//					}
////		printf("%d %d\n",sum3,sum4);
//					ll ans=0;
//					if(a%2==0) {
//						ans+=sum3*(b-a)/2+sum3;
//					} else {
//						ans+=sum3*(b-a+1)/2;
//					}
////		cout<<ans<<endl;
//					if(c%2==0) {
//						ans+=sum1*(d-c)/2+sum1;
//					} else {
//						ans+=sum1*(d-c+1)/2;
//					}
////		cout<<ans<<endl;
//					ans+=sum2*(d-c+1);
//					ans+=sum4*(b-a+1);
//					ans-=sum1*sum4+sum2*(sum3+sum4);
////					cout<<ans<<endl;
//					printf("%d %d %d %d %d\n",a,b,c,d,ans);
//				}
//}


/*
1 2 1 2018
*/






//#include<bits/stdc++.h>
//using namespace std;
//
//int main(){
//	int i,j;
//	int n;
//	cin>>n;
//	int a[n+9];
//	int sum=0;
//	for(i=0;i<n;i++){
//		cin>>a[i];
//		sum+=a[i];
//	}
//	printf("%d %d\n",sum,sum/n);
//}
//

//#include<bits/stdc++.h>
//using namespace std;
//
//const int N=1000+9;
//int a[N];
//int n,m;
//
//int main() {
//	int i,j;
//	cin>>n>>m;
//	for(i=0; i<n; i++) {
//		cin>>a[i];
//	}
//	sort(a,a+n);
//	vector<int >b[m+9];
//	for(j=0; j<m; j++) {
//		for(i=j; i<n; i+=m) {
//			b[j].push_back(a[i]);
//		}
//	}
//	int ans=0;
//	for(i=0; i<m; i++) {
//		int res=0;
//		for(j=0; j<b[i].size(); j++) {
//			res+=b[i][j];
//			ans+=res;
//		}
////		cout<<res<<" ";
//	}
//	cout<<ans<<endl;
//}




//#include<bits/stdc++.h>
//using namespace std;
//
//const int N=20;
//
//int n,m;
//int v[N][N];
//int ans;
//int dx[]={1,-1,0,0};
//int dy[]={0,0,1,-1};
//
//void dfs(int x,int y,int sum){
//	if(sum==n){
//		ans++;
//		return ;
//	}
//	for(int i=0;i<4;i++){
//		if(v[x+dx[i]][y+dy[i]]==0&&x>=1&&x<=n&&y>=1&&y<=n){
//			v[x+dx[i]][y+dy[i]]=1;
//			dfs(x+dx[i],y+dy[i],sum+1);
//		}
//	}
//	return ;
//}
//
//int main(){
//	int i,j;
//	int x,y;
//	cin>>n>>x>>y;
//	for(i=-1;i<=1;i++){
//		for(j=-1;j<=1;j++){
//			v[x+i][y+j]=1;
//		}
//	}
//	for(i=1;i<=n;i++){
//		for(j=1;j<=n;j++){
//			if(!v[i][j]){
//				dfs(i,j,0);
//			}
//		}
//	}
//
//	cout<<ans<<endl;
//}





//#include<bits/stdc++.h>
//using namespace std;
//#define ll long long
//const int M=20;
//int n,m;
//int v[M][M];
//int ans;
//int dx[]= {1,-1,0,0};
//int dy[]= {0,0,1,-1};
//const ll mod = 998244353;
//const int N = 1e3 + 9;
//ll f[N];
//ll  pow(ll x, ll n) {
//	ll res = 1;
//	while (n) {
//		if (n % 2 == 1) res = res * x % mod;
//		x = x * x % mod;
//		n >>= 1;
//	}
//	return res;
//}
//ll inv(ll x) {
//	return pow(x, mod - 2);
//}
//ll C(ll m, ll n) {
//	return f[m] * inv(f[n]) % mod * inv(f[m - n]) % mod;
//}
//void init() {
//    f[0] = 1;
//    for (int i = 1; i < N; i++) {
//        f[i] = f[i - 1] * i % mod;
//    }
//}
//int main() {
//	int i,j;
//	int x,y;
//	cin>>n>>x>>y;
//	for(i=-1; i<=1; i++) {
//		for(j=-1; j<=1; j++) {
//			v[x+i][y+j]=1;
//		}
//	}
//	int sum=0;
//	for(i=1; i<=n; i++) {
//		for(j=1; j<=n; j++) {
//			if(!v[i][j]) {
//				sum++;
//			}
//		}
//	}
////	ll zi=1,mu=1;
////	for(i=1; i<=sum; i++) zi*=i;
////	for(i=1; i<=n; i++) mu*=i;
////	for(i=1; i<=sum-n; i++) mu*=i;
//
////	cout<<zi<<" "<<mu<<endl;
//	init();
//	cout<<C(sum,n)<<endl;
//}



//#include<bits/stdc++.h>
//using namespace std;
//#define ll long long
//ll n;
//double p,k;
//int main(){
//	int i,j;
//	cin>>k>>n>>p;
//	double sum=0;
//	double ans=0;
//	for(i=1;i<=n;i++){
//		ans=(k*i+sum)*p;
//		sum+=k*i+ans;
//	}
//	printf("%.2lf",ans);
//}



//#include<bits/stdc++.h>
//using namespace std;
//
//char a[30*30][30*30];
//int main() {
//	int i,j;
//	int n;
//	cin>>n;
//	for(i=1; i<=n*n; i++) {
//		for(j=1; j<=n*n; j++) {
//			a[i][j]='.';
//		}
//	}
//	for(i=1; i<=n; i++) {
//		for(j=1; j<=n; j++) {
//			if(i==j) a[i][j]='A'+i-1;
//			if(i==n) a[i][j]='A'+j-1;
//			if(j==n) a[i][j]='A'+i-1;
//			a[2*n-i][j]=a[2*n-i][2*n-j]=a[i][2*n-j]=a[i][j];
//		}
//	}
//	for(i=1; i<n*2; i++) {
//		for(j=1; j<n*2; j++) {
//			cout<<a[i][j];
//		}
//		cout<<endl;
//	}
//}





//#include<bits/stdc++.h>
//using namespace std;
//
//const int N=20;
//
//int n,m;
//int v[N][N];
//int ans;
//int dx[]= {1,-1,0,0};
//int dy[]= {0,0,1,-1};
//
//void dfs(int x,int y,int sum) {
//	if(sum==n) {
//		ans++;
//		return ;
//	}
//	for(int i=0; i<4; i++) {
////		if(v[x+dx[i]][y+dy[i]]==0&&x>=1&&x<=n&&y>=1&&y<=n) {
//		if(x>=1&&x<=n&&y>=1&&y<=n) {
////			v[x+dx[i]][y+dy[i]]=1;
//			dfs(x+dx[i],y+dy[i],sum+1);
//		}
//	}
//	return ;
//}
//
//int main() {
//	int i,j;
//	int x,y;
//	cin>>n>>x>>y;
//	for(i=-1; i<=1; i++) {
//		for(j=-1; j<=1; j++) {
//			v[x+i][y+j]=1;
//		}
//	}
//	for(i=1; i<=n; i++) {
//		for(j=1; j<=n; j++) {
//			if(!v[i][j]) {break;
//			}
//		}
//	}
//	dfs(i,j,0);
//	cout<<ans<<endl;
//}



//#include<bits/stdc++.h>
//using namespace std;
//
//const int N=20;
//int v[N][N];
//bool l[N],r[N];
//int n;
//
//
//void dfs(int x,int y){
//	for(int i=x;i<n;i++){
//		dfs(i,j);
//	}
//}
//int main(){
//	int i,j;
//	cin>>n;
//	dfs();
//}

//#include <string>
//#include <string.h>
//#include <algorithm>
//#include <iostream>
//#include <cstdio>
//using namespace std;
//
//const int N=1e3+9;
//int a[N];
//int main() {
//	int i,j;
//	string s;
//	while(cin>>s) {
//		memset(a,0,sizeof a);
//		int k=0;
//		for(i=0; i<s.size(); i++) {
//			if(s[i]=='5') {
//				int sum1=1;
//				for(j=i-1; j>=0; j--) {
//					if(s[j]=='5')break;
//					a[k]+=sum1*(s[j]-'0');
//					sum1*=10;
//				}
//				if(j!=i-1)k++;
//			} else if(i==s.size()-1) {
//				int sum1=1;
//				for(j=i; j>=0; j--) {
//					if(s[j]=='5')break;
//					a[k]+=sum1*(s[j]-'0');
//					sum1*=10;
//				}
//				if(j!=i)k++;
//			}
//		}
//		sort(a,a+k);
//		for(i=0; i<k; i++) {
//			if(i==k-1)cout<<a[i]<<endl;
//			else cout<<a[i]<<" ";
//		}
//	}
//}








//#include <string>
//#include <string.h>
//#include <algorithm>
//#include <iostream>
//#include <cstdio>
//using namespace std;
//typedef long long ll;
//const int maxn = 2e5 + 5;
//struct node {
//	ll val;
//} tree[maxn << 2];
//ll n, w;
//ll a[maxn];
//void pushup(ll root) {
//	tree[root].val = max(tree[root << 1].val, tree[root << 1 | 1].val);			//区间最大值
//}
//void build(ll l, ll r, ll root) {
//	if (l == r) {
//		tree[root].val = a[l];		//初始化
//		return;
//	}
//	ll mid = (l + r) >> 1;
//	build(l, mid, root << 1);
//	build(mid + 1, r, root << 1 | 1);
//	pushup(root);
//}
//void update(ll idx, ll v, ll l, ll r, ll root) {
//	if (idx > r || idx < l)return;
//	if (idx <= l && idx >= r) {
//		tree[root].val = v;			//将树中值改为 v，增加改成+
//		return;
//	}
//	ll mid = (l + r) >> 1;
//	update(idx, v, l, mid, root << 1);
//	update(idx, v, mid + 1, r, root << 1 | 1);
//	pushup(root);
//}
//ll query(ll L, ll R, ll l, ll r, ll root) {
//	if (L > r || R < l)return 0;
//	if (L <= l && r <= R)return tree[root].val;
//	ll mid = (l + r) >> 1;
//	return max(query(L, R, l, mid, root << 1), query(L, R, mid + 1, r, root << 1 | 1));		//区间最大值
//}
//
//int main() {
//	while (~scanf("%lld%lld", &n, &w)) {
//		for (int i = 1; i <= n; i++)
//			scanf("%lld", &a[i]);
//		build(1, n, 1);
//		while (w--) {
//			getchar();
//			char s;
//			ll x, y;
//			scanf("%c%lld%lld", &s, &x, &y);
//			if (s == 'Q')printf("%lld\n", query(x, y, 1, n, 1));
//			else update(x, y, 1, n, 1);
//		}
//	}
//}



//#include <string>
//#include <string.h>
//#include <algorithm>
//#include <iostream>
//#include <cstdio>
//#include <queue>
//using namespace std;
//typedef long long ll;
//const int N=209;
//int n,ex,ey;
//int v[N];
//struct point {
//	int i,ai;
//};
//int a[N];
//void bfs() {
//	queue<point> q;
//	memset(v,0,sizeof v);
//	q.push({ex,a[ex]+ex});
//	v[ex]=1;
//	while(q.size()) {
//		point p=q.front();
//		q.pop();
//		if(p.ai==ey) {
//			cout<<v[p.i]<<endl;
////			printf("%d %d %d\n",p.i,p.ai,v[p.i]);
//			return ;
//		}
//		if(!(p.ai>=1&&p.ai<=n)) continue;
//		int x=p.ai+a[p.ai];
//		int x2=p.ai-a[p.ai];
////		printf("%d %d %d %d %d\n",p.i,p.ai,x,x2,v[p.i]);
//		if(x>=1&&x<=n&&!v[x]) {
//			q.push({p.ai,x});
//			v[p.ai]=v[p.i]+1;
//		}
//		if(x2>=1&&x2<=n&&!v[x2]) {
//			q.push({p.ai,x2});
//			v[p.ai]=v[p.i]+1;
//		}
//	}
//}
//int main() {
//	int i,j;
//	while(cin>>n&&n!=0) {
//		cin>>ex>>ey;
//		for(i=1; i<=n; i++) {
//			cin>>a[i];
//		}
//		bfs();
//	}
//}






//#include <string>
//#include <string.h>
//#include <algorithm>
//#include <iostream>
//#include <cstdio>
//#include <queue>
//using namespace std;
//const int N=209;
//int n,ex,ey;
//int v[N];
//struct point {
//	int x,step;
//};
//int a[N];
//int bfs() {
//	memset(v,0,sizeof v);
//	queue<point>q;
//	q.push({ex,0});
//	v[ex]=1;
//	while(q.size()) {
//		point p=q.front();
//		q.pop();
//		if(p.x==ey) {
//			return p.step;
//		}
//		int x1=p.x+a[p.x];
//		int x2=p.x-a[p.x];
////		printf("%d %d %d %d\n",p.x,p.step,x1,x2);
//		if(x1>=1&&x1<=n&&!v[x1]) {
//			q.push({x1,p.step+1});
//			v[x1]=1;
//		}
//		if(x2>=1&&x2<=n&&!v[x2]) {
//			q.push({x2,p.step+1});
//			v[x2]=1;
//		}
//	}
//	return -1;
//}
//int main() {
//	int i,j;
//	while(cin>>n&&n!=0) {
//		cin>>ex>>ey;
//		for(i=1; i<=n; i++) {
//			cin>>a[i];
//		}
////		if(ex==ey) {
////			cout<<"0"<<endl;
////			continue;
////		}
//		cout<<bfs()<<endl;
//	}
//}




//#include <string>
//#include <string.h>
//#include <algorithm>
//#include <iostream>
//#include <cstdio>
//#include <queue>
//using namespace std;
//typedef long long ll;
//const int N=209;
//int n,endx,endy;
//int v[N];
//int a[N];
//int bfs() {
//	int i,j;
//	queue<int>q;
//	memset(v,0,sizeof v);
//	q.push(endx);
//	v[endx]=1;
//	while(!q.empty()) {
//		int p=q.front();
//		q.pop();
//		if(p==endy){
//			return v[p]-1;
//		}
//		int xx=p+a[p];
//		int yy=p-a[p];
////        printf("%d %d %d %d\n",p,v[p],xx,yy);
//		if(xx>=1&&xx<=n&&v[xx]==0) {
//			q.push(xx);
//			v[xx]=v[p]+1;
//		}
//		if(yy>=1&&yy<=n&&v[yy]==0) {
//			q.push(yy);
//			v[yy]=v[p]+1;
//		}
//	}
//	return -1;
//}
//int main() {
//	int i,j;
//	while(cin>>n&&n!=0) {
//		cin>>endx>>endy;
//		for(i=1; i<=n; i++) {
//			cin>>a[i];
//		}
////		bfs();
////		for(i=1;i<=n;i++){
////			cout<<v[i]<<endl;
////		}
//		cout<<bfs()<<endl;
//	}
//}



//#include <string>
//#include <string.h>
//#include <algorithm>
//#include <iostream>
//#include <cstdio>
//#include <queue>
//using namespace std;
//typedef long long ll;
//const int N=209;
//int n,endx,endy;
//int v[N];
//struct point {
//	int i,ai;
//};
//int a[N];
//void bfs() {
//	int i,j;
//	queue<point>q;
//	memset(v,0,sizeof v);
//	q.push({endx,a[endx]+endx});
//	v[endx]=1;
//	while(!q.empty()) {
//		point p=q.front();
//		q.pop();
//		if(p.i==endy) {
//			cout<<v[p.ai]+1<<endl;
////            cout<<p.ai<<endl;
//			return ;
//		}
//		if(!(p.ai>=1&&p.ai<=n)) continue;
//		int xx=p.ai+a[p.ai];
//		int yy=p.ai-a[p.ai];
////        printf("%d %d %d %d\n",p.i,p.ai,xx,yy);
//		if(xx>=1&&xx<=n&&v[xx]==0) {
//			q.push({p.ai,xx});
//			v[xx]=v[p.ai]+1;
//		}
//		if(yy>=1&&yy<=n&&v[yy]==0) {
//			q.push({p.ai,yy});
//			v[yy]=v[p.ai]+1;
//		}
//	}
//	cout<<-1<<endl;
//}
//int main() {
//	int i,j;
//	while(cin>>n&&n!=0) {
//		cin>>endx>>endy;
//		for(i=1; i<=n; i++) {
//			cin>>a[i];
//		}
//		bfs();
//	}
//}

//#include <string>
//#include <string.h>
//#include <algorithm>
//#include <iostream>
//#include <cstdio>
//using namespace std;
//
//const int N=1000+9;
//int a[N][N],sum[N][N],sum2[N][N];
//int n,m,x,y;
//int main() {
//	int i,j;
//	int t;
//	scanf("%d",&t);
//	while(t--) {
//		scanf("%d%d%d%d",&n,&m,&x,&y);
//		for(i=1; i<=n; i++) {
//			for(j=1; j<=m; j++) {
//				scanf("%d",&a[i][j]);
//			}
//		}
//		for(i=1; i<=n; i++) {
//			for(j=1; j<=m; j++) {
//				sum[i][j] = sum[i][j-1] + sum[i-1][j] - sum[i-1][j-1] + a[i][j];
//			}
//		}
//
//		int ans=-0x3f3f3f;
//		for(i=1; i<=n-x+1; i++) {
//			for(j=1; j<=m-y+1; j++) {
//				int num=sum[i-1][j-1]-sum[i+x-1][j-1]-sum[i-1][j+y-1]+sum[i+x-1][j+y-1];
//				ans=max(ans,num);
//			}
//		}
//		cout<<ans<<endl;
//
////		for(i=1; i<=n; i++) {
////			for(j=1; j<=n; j++) {
////				cout<<sum[i][j]<<" ";
////			}
////			cout<<endl;
////		}
//
//	}
//}





/*
1
3 3 1 2
1 2 3
4 5 3
3 5 4
*/




//#include <string>
//#include <map>
//#include <algorithm>
//#include <iostream>
//#include <cstdio>
//using namespace std;
//
//map<string ,int>m;
//int main() {
//	int i,j;
//	m["zero"] = 0;
//	m["one"] = 1;
//	m["two"] = 2;
//	m["three"] = 3;
//	m["four"] = 4;
//	m["five"] = 5;
//	m["six"] = 6;
//	m["seven"] = 7;
//	m["eight"] = 8;
//	m["nine"] = 9;
//	m["+"] = -1;
//	m["="] = -1;
//	string s;
//	while(1) {
//		int a=0;
//		while(cin>>s) {
//			if(m[s]==-1)break;
//			a=a*10+m[s];
//		}
//		int b=0;
//		while(cin>>s) {
//			if(m[s]==-1)break;
//			b=b*10+m[s];
//		}
//		if(a==0&b==0)break;
//		cout<<a+b<<endl;
//	}
//}





//#include <iostream>
//#include <cmath>
//#include <cstdio>
//using namespace std;
//
//int main() {
//	int T;
//	int n;
//	scanf("%d",&T);
//	while(T--) {
//		scanf("%d",&n);
//		double p=n*log10((double)n);
//		printf("%lf\n",n*log10((double)n));
//		p=p-(long long int)p;
//		printf("%d\n",(int)pow(10.0,p));
//	}
//	return 0;
//}





//#include <iostream>
//#include <cstring>
//#include <algorithm>
//#include <queue>
//using namespace std;
//
//const int N = 1e3+9;
//
//int m,n;
//
//int g[N][N];  // 存储每条边
//int dist[N];  // 存储1号点到每个点的最短距离
//bool st[N];   // 存储每个点的最短路是否已经确定
//
//// 求1号点到n号点的最短路，如果不存在则返回-1
//int dijkstra()
//{
//    memset(dist, 0x3f, sizeof dist);
//    dist[1] = 0;
//
//    for (int i = 0; i < n - 1; i ++ )
//    {
//        int t = -1;     // 在还未确定最短路的点中，寻找距离最小的点
//        for (int j = 1; j <= n; j ++ )
//            if (!st[j] && (t == -1 || dist[t] > dist[j]))
//                t = j;
//
//        // 用t更新其他点的距离
//        for (int j = 1; j <= n; j ++ )
//            dist[j] = min(dist[j], dist[t] + g[t][j]);
//
//        st[t] = true;
//    }
//
//    if (dist[n] == 0x3f3f3f3f) return -1;
//    return dist[n];
//}
//
//
//
//int main(){
//	int i,j;
//	cin>>m>>n;
//	memset(g, 0x3f,sizeof g);
//	while(m--){
//		int a,b,c;
//		cin>>a>>b>>c;
//		g[a][b]=min(g[a][b],c);
//		g[b][a]=min(g[b][a],c);
//	}
//
//	cout<<dijkstra()<<endl;
//}


//#include <iostream>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//typedef long long ll;
//const int maxn = 1e5 + 5;
//int n,q;
//struct node {
//	ll val;
//	ll lazy;
//} tree[maxn << 2];
//void pushup(int root) {
//	tree[root].val = tree[root << 1].val + tree[root << 1 | 1].val;
//}
//void build(ll l, ll r, ll root) {
//	tree[root].lazy = 0;
//	if (l == r) {
//		tree[root].val = 1;
//		return;
//	}
//	ll mid = (l + r) >> 1;
//	build(l, mid, root << 1);
//	build(mid + 1, r, root << 1 | 1);
//	pushup(root);
//}
//void pushdown(ll root, ll l, ll r) {
//	if (!tree[root].lazy)return;
//	ll mid = (l + r) >> 1;
//	tree[root << 1].val		 = tree[root].lazy * (mid - l + 1);
//	tree[root << 1 | 1].val	 = tree[root].lazy * (r - mid);
//	tree[root << 1].lazy	 = tree[root].lazy;
//	tree[root << 1 | 1].lazy = tree[root].lazy;
//	tree[root].lazy = 0;
//}
//void update(ll L, ll R, ll v, ll l, ll r, ll root) {
//	if (L > r || R < l)return;
//	if (L <= l && R >= r) {
//		tree[root].val = v * (r - l + 1);
//		tree[root].lazy = v;
//		return;
//	}
//	pushdown(root, l, r);
//	ll mid = (l + r) >> 1;
//	update(L, R, v, l, mid, root << 1);
//	update(L, R, v, mid + 1, r, root << 1 | 1);
//	pushup(root);
//}
//ll query(ll L, ll R, ll l, ll r, ll root) {
//	if (L > r || R < l)return 0;
//	if (L <= l && R >= r)return tree[root].val;
//	pushdown(root, l, r);
//	ll mid = (l + r) >> 1;
//	return query(L, R, l, mid, root << 1) + query(L, R, mid + 1, r, root << 1 | 1);
//}
//int main() {
//	int i, j;
//	int t,t1=0;
//	scanf("%d",&t);
//	while(t--) {
//		scanf("%d%d", &n, &q);
//		build(1, n, 1);
//		while (q--) {
//			int a,b,c;
//			scanf("%d%d%d",&a,&b,&c);
//			update(a,b,c,1,n,1);
//		}
//		printf("Case %d: The total value of the hook is %lld.\n",++t1,query(1,n,1,n,1));
//	}
//}



//#include <iostream>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//typedef long long ll;
//const int maxn = 5e4 + 9;
//struct node {
//	ll max,min;
//} tree[maxn << 2];
//ll n, w;
//ll a[maxn];
//void pushup(ll root) {
//	tree[root].max = max(tree[root << 1].max, tree[root << 1 | 1].max);			//区间最大值
//	tree[root].min = min(tree[root << 1].min, tree[root << 1 | 1].min);
//}
//void build(ll l, ll r, ll root) {
//	if (l == r) {
//		tree[root].max = a[l];		//初始化
//		tree[root].min = a[l];		//初始化
//		return;
//	}
//	ll mid = (l + r) >> 1;
//	build(l, mid, root << 1);
//	build(mid + 1, r, root << 1 | 1);
//	pushup(root);
//}
//
//ll query(ll L, ll R, ll l, ll r, ll root) {
//	if (L > r || R < l)return 0;
//	if (L <= l && r <= R)return tree[root].max;
//	ll mid = (l + r) >> 1;
//	return max(query(L, R, l, mid, root << 1), query(L, R, mid + 1, r, root << 1 | 1));		//区间最大值
//}
//ll query2(ll L, ll R, ll l, ll r, ll root) {
//	if (L > r || R < l)return 0x3f3f3f3f;
//	if (L <= l && r <= R)return tree[root].min;
//	ll mid = (l + r) >> 1;
//	return min(query(L, R, l, mid, root << 1), query(L, R, mid + 1, r, root << 1 | 1));		//区间最大值
//}
//int main() {
//	scanf("%lld%lld", &n, &w);
//	for (int i = 1; i <= n; i++)
//		scanf("%lld", &a[i]);
//	build(1, n, 1);
////	for(int i=1;i<=3*n;i++){
////		printf("%d %d\n", tree[i].max,tree[i].min);
////	}
////	printf("\n");
//	while (w--) {
//		ll x, y;
//		scanf("%lld%lld", &x, &y);
//		printf("%lld %lld\n", query(x, y, 1, n, 1),query2(x, y, 1, n, 1));
////		printf("%lld\n", query(x, y, 1, n, 1)-query2(x, y, 1, n, 1));
//	}
//}


/*
6 4
1
7
3
4
2
5
1 1
1 5
4 6
2 2
*/



//#include <iostream>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//typedef long long ll;
//const int maxn = 5e4 + 9;
//struct node {
//	ll max,min;
//} tree[maxn << 2];
//ll n, w;
//ll a[maxn];
//void pushup(ll root) {
//	tree[root].max = max(tree[root << 1].max, tree[root << 1 | 1].max);			//????×?′ó?μ
//	tree[root].min = min(tree[root << 1].min, tree[root << 1 | 1].min);
//}
//void build(ll l, ll r, ll root) {
//	if (l == r) {
//		tree[root].max = a[l];		//3?ê??ˉ
//		tree[root].min = a[l];		//3?ê??ˉ
//		return;
//	}
//	ll mid = (l + r) >> 1;
//	build(l, mid, root << 1);
//	build(mid + 1, r, root << 1 | 1);
//	pushup(root);
//}
//ll query2(ll L, ll R, ll l, ll r, ll root) {
//	if (L > r || R < l)return 0;
//	if (L <= l && r <= R)return tree[root].max;
//	ll mid = (l + r) >> 1;
//	return max(query2(L, R, l, mid, root << 1), query2(L, R, mid + 1, r, root << 1 | 1));		//区间最大值
//}
//
//ll query(ll L, ll R, ll l, ll r, ll root) {
//	if (L > r || R < l)return 0x3f3f3f3f;
//	if (L <= l && r <= R)return tree[root].min;
//	ll mid = (l + r) >> 1;
//	int a=query(L, R, l, mid, root << 1);
//	int b=query(L, R, mid + 1, r, root << 1 | 1);
//	if(a>=b&&b!=0) return b;
//	else if(b>=a&&a!=0)return a;
//	else return 0x3f3f3f3f;
//}
//
//
//int main() {
//	scanf("%lld%lld", &n, &w );
//	for (int i = 1; i <= n; i++)
//		scanf("%lld", &a[i]);
//	build(1, n, 1);
//	while (w--) {
//		ll x, y;
//		scanf("%lld%lld", &x, &y);
//		printf("%lld\n",query2(x, y, 1, n, 1)-query(x, y, 1, n, 1));
//	}
//}



//#include <iostream>
//#include <cstring>
//#include <algorithm>
//#include <cmath>
//using namespace std;
//
//const int N=209;
//int n;
//struct node {
//	double x,y;
//} no[205];
//double g[N][N];  // 存储每条边
//double dist[N];  // 存储1号点到每个点的最短距离
//bool st[N];   // 存储每个点的最短路是否已经确定
//
//// 求1号点到n号点的最短路，如果不存在则返回-1
//int dijkstra() {
//	for(int i=1;i<=n;i++)
//		dist[i]=1e9;
//	dist[1] = 0;
//
//	for (int i = 1; i < n; i ++ ) {
//		int t = -1;     // 在还未确定最短路的点中，寻找距离最小的点
//		for (int j = i; j <= n; j ++ )
//			if (!st[j] && (t == -1 || dist[t] > dist[j]))
//				t = j;
//		// 用t更新其他点的距离
//		for (int j = i; j <= n; j ++ )
//			dist[j] = min(dist[j], dist[t] + g[t][j]);
//
//		st[t] = true;
//	}
//
//	if (dist[n] == 0x3f3f3f3f) return -1;
//	return dist[n];
//}
//
//
//int main() {
//	int i,j;
//	int t1=0;
//	while(scanf("%d",&n)==1&&n!=0) {
//		for(i=1; i<=n; i++)
//			for(j=1; j<=n; j++)
//				g[i][j]=1e9;
//		memset(st,0,sizeof st);
//		for(i=0; i<n; i++)
//			scanf("%lf%lf",&no[i].x,&no[i].y);
//
//		for(i=0; i<n; i++)
//			for(j=i; j<=n; j++)
//				g[i][j]=g[j][i]=sqrt((no[i].x-no[j].x)*(no[i].x-no[j].x)+(no[i].y-no[j].y)*(no[i].y-no[j].y));
//
//		for(i=1; i<=n; i++){
//			for(j=i; j<=n; j++){
//				printf("%lf ",g[i][j]);
//			}
//			printf("\n");
//		}
//
//
//
//		printf("Scenario #%d\nFrog Distance = %.3lf\n\n",++t1,dijkstra());
//	}
//}





//#include <iostream>
//#include <algorithm>
//#include <string.h>
//#include <math.h>
//using namespace std;
//const int MAXN=209;
//double x[MAXN],y[MAXN];
//double m[MAXN][MAXN];
//int n;
//void fl() {
//	for(int k=0; k<n; k++) {
//		for(int i=0; i<n; i++) {
//			for(int j=0; j<n; j++) {
//				m[i][j]=min(m[i][j],max(m[i][k],m[k][j]));
//			}
//		}
//	}
//}
//int main() {
//	int i,j;
//	int t=0;
//	while(cin>>n&&n) {
//		for(i=0; i<n; i++) {
//			cin>>x[i]>>y[i];
//		}
//		for(i=0; i<n; i++) {
//			for(j=i+1; j<n; j++) {
//				m[i][j]=m[j][i]=sqrt(pow((x[i]-x[j]),2)+pow((y[i]-y[j]),2));
//			}
//		}
//		fl();
//		printf("Scenario #%d\n",++t);
//		printf("Frog Distance = %.3f\n",m[1][2]);
//		printf("\n");
//	}
//}

//#include <iostream>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//const int N=1000+9;
//int n,m;
//
//int g[N][N];  // 存储每条边
//int dist[N];  // 存储1号点到每个点的最短距离
//bool st[N];   // 存储每个点的最短路是否已经确定
//
//int dij() {
//	memset(dist, 0x3f, sizeof dist);
//	dist[1] = 0;
//
//	for (int i = 0; i < n - 1; i ++ ) {
//		int t = -1;     // 在还未确定最短路的点中，寻找距离最小的点
//		for (int j = 1; j <= n; j ++ )
//			if (!st[j] && (t == -1 || dist[t] > dist[j]))
//				t = j;
//
//		// 用t更新其他点的距离
//		for (int j = 1; j <= n; j ++ )
//			dist[j] = (dist[j], dist[t] + g[t][j]);
//
//		st[t] = true;
//	}
//	return dist[n];
//}
//
//int main() {
//	int i,j;
//	int tt,t1=0;
//	cin>>tt;
//	while(tt--) {
//		cin>>n>>m;
//		memset(g,0x3f,sizeof g);
//		memset(st,false,sizeof st);
//		for(i=0; i<m; i++) {
//			int a,b,c;
//			cin>>a>>b>>c;
//			g[a][b]=g[a][b]=c;
//		}
//		cout<<"Scenario #"<<++t1<<":"<<endl;
//		cout<<dij()<<endl<<endl;
//	}
//}

/*
2
3 3
1 2 3
1 3 4
2 3 5
*/


//#include <iostream>
//#include <cstring>
//#include <algorithm>
//#include <queue>
//using namespace std;
//const int N=1000000+9;
//
//int n,m;
//int h[N], w[N], e[N], ne[N], idx;       // 邻接表存储所有边
//int dist[N];        // 存储每个点到1号点的最短距离
//bool st[N];     // 存储每个点是否在队列中
//
//void add(int a,int b,int c){
//    e[idx]=b,w[idx]=c,ne[idx]=h[a],h[a]=idx++;
//}
//
//// 求1号点到n号点的最短路距离，如果从1号点无法走到n号点则返回-1
//int spfa() {
//	memset(dist, 0x3f, sizeof dist);
//	dist[1] = 0;
//
//	queue<int> q;
//	q.push(1);
//	st[1] = true;
//
//	while (q.size()) {
//		int t = q.front();
//		q.pop();
//
//		st[t] = false;
//
//		for (int i = h[t]; i != -1; i = ne[i]) {
//			int j = e[i];
//			if (dist[j] > dist[t] + w[i]) {
//				dist[j] = dist[t] + w[i];
//				if (!st[j]) {   // 如果队列中已存在j，则不需要将j重复插入
//					q.push(j);
//					st[j] = true;
//				}
//			}
//		}
//	}
//
//	return dist[n];
//}
//
//int main() {
//	int i,j;
//	int tt,t1=0;
//	cin>>tt;
//	while(tt--) {
//		cin>>n>>m;
//		idx=0;
//		memset(h,-1,sizeof h);
//		memset(st,false,sizeof st);
//		for(i=0; i<m; i++) {
//			int a,b,c;
//			cin>>a>>b>>c;
//			add(a,b,c);add(b,a,c);
//		}
//		cout<<"Scenario #"<<++t1<<":"<<endl;
//		cout<<spfa()<<endl<<endl;
//	}
//}



//#include<bits/stdc++.h>
//using namespace std;
//
//int main(){
//	int i,j;
//	int t;
//	cin>>t;
//	int n;
//	int a[309];
//	while(t--){
//		cin>>n;
//		int flag=0,sum=0;
//		for(i=0;i<n;i++){
//			cin>>a[i];
//			if(a[i]<0)flag=1;
//		}
//		if(flag){
//			cout<<"NO"<<endl;
//		}
//		else{
//			flag=0;
//		sort(a,a+n);
//			if(a[0]==0){
//				flag=1;
//			}
//			cout<<"YES"<<endl;
//			int z=0;
//			if(flag==0)z=1;
//			for(i=z;i<=a[n-1];i++){
//				cout<<i<<" ";
//			}
//			cout<<endl;
//		}
//	}
//}

//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int t;
//	scanf("%d",&t);
//	for(int i=1;i<=t;i--)
//	{
//		if(i==1)
//		{
//
//		}
//	}
//}




//#include<bits/stdc++.h>
//using namespace std;
//
//int main() {
//	int i,j;
//	int t;
//	cin>>t;
//	int n;
//	int a[309];
//	while(t--) {
//		cin>>n;
//		int flag=0;
//		for(i=0; i<n; i++) {
//			cin>>a[i];
//			if(a[i]<0)flag=1;
//		}
//		if(flag) {
//			cout<<"NO"<<endl;
//		} else {
//			cout<<"YES"<<endl;
//			cout<<101<<endl;
//			for(i=0; i<=100; i++) {
//				cout<<i<<" ";
//			}
//			cout<<endl;
//		}
//	}
//}
//#include<bits/stdc++.h>
//using namespace std;
//int a[30];
//int n;
//string s;
//bool check(string x) {
//	int index = s.find(x);
//	if (index == string::npos)return false;
//	return true;
//}
//int main() {
//	int t;
//	scanf("%d",&t);
//	while(t--) {
//		memset(a,0,sizeof(a));
//		map<string,int>m;
//		cin>>n;
//		cin>>s;
//		for(int i=0; i<n; i++)
//			a[s[i]-'a']++;
//		int flag=0;
//		for(int i=0; i<26; i++) {
//			if(a[i]==0) {
//				flag=1;
//				char ll='a'+i;
//				cout<<ll<<endl;
//				break;
//			}
//		}
//		if(flag==0) {
//			for(int i=0; i<26; i++) {
//				string zz="";
//
//				for(int j=0; j<26; j++) {
//					zz='a'+i;
//					zz+='a'+j;
//					if(check(zz)==false) {
//						cout<<zz<<endl;
//						flag=1;
//						break;
//					}
//				}
//				if(flag==1)break;
//			}
//			if(flag==0) {
//				for(int i=0; i<26; i++) {
//					string zz="";
//					zz+='a'+i;;
//					for(int j=0; j<26; j++) {
//						string l=zz;
//						l+='a'+j;
//						for(int k=0; k<26; k++) {
//							string ll=l;
//							ll+='a'+k;
//							if(check(ll)==false) {
//								cout<<ll<<endl;
//								flag=1;
//								break;
//							}
//						}
//						if(flag==1)break;
//					}
//					if(flag==1)break;
//				}
//			}
//		}
//	}
//}

//#include<bits/stdc++.h>
//using namespace std;
//
//int main(){
//	int i,j;
//	int t,n;
//	cin>>t;
//	string s,ss;
//	while(t--){
//		ss.clear();
//		cin>>n>>s;
//		int flag=0;
//		char a='a';ss+='a';
//		while(1){
//			a='a';
//			for(i=0;i<26;i++){
//				for(j=0;j<s.size();j++){
//					if(s[j]==ss) break;
//				}
//
//				a=a+1;
//			}
//			if(flag)break;
//			ss+='a';
//		}
//		cout<<ss<<endl;
//	}
//}




//#include <iostream>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//
//const int N=1e3+9,INF=0x3f3f3f3f;
//
//int n,m;
//int g[N][N];  // 存储每条边
//int dist[N];  // 存储1号点到每个点的最短距离
//bool st[N];   // 存储每个点的最短路是否已经确定
//
//// 求1号点到n号点的最短路，如果不存在则返回-1
//int dij() {
//	for(int i=1; i<=n; i++) {
//		st[i]=false;
//		dist[i]=g[1][i];
//	}
//	int t=1 ;  // 在还未确定最短路的点中，寻找距离最小的点
//	for (int i = 1; i < n ; i ++ ) {
//		int maxx=0;
//		for (int j = 1; j <= n; j ++ ) {
//			if (!st[j] && (maxx < dist[j])) {
//				maxx = dist[j];
//				t = j;
//			}
//		}
//		st[t] = true;
//		// 用t更新其他点的距离
//		for (int j = 1; j <= n; j ++ ) {
//			if(!st[t]) {
//				dist[j] = min(dist[j], min(dist[t],g[t][j]));
//			}
//		}
//	}
//	return dist[n];
//}
//
//int main() {
//	int i,j;
//	int T,t1=0;
//	scanf("%d",&T);
//	while(T--) {
//		memset(g,0,sizeof g);
//		scanf("%d%d",&n,&m);
//		for(i=0; i<m; i++) {
//			int a,b,c;
//			scanf("%d%d%d",&a,&b,&c);
//			g[a][b]=g[b][a]=max(g[b][a],c);
//		}
//		printf("Scenario #%d:\n%d\n\n",++t1,dij());
//	}
//}



//#include <iostream>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//
//const int N=1e3+9,INF=0x3f3f3f3f;
//
//int n,m;
//int g[N][N];  // 存储每条边
//int dist[N];  // 存储1号点到每个点的最短距离
//bool st[N];   // 存储每个点的最短路是否已经确定
//
//// 求1号点到n号点的最短路，如果不存在则返回-1
//int dij() {
//	for(int i=1;i<=n;i++){
//		st[i]=false;
//		dist[i]=g[1][i];
//	}
//	for (int i = 0; i < n-1; i ++ ) {
//		int t = -1,maxx=0;     // 在还未确定最短路的点中，寻找距离最大的点
//		for (int j = 1; j <= n; j ++ )
//			if (!st[j] && (maxx < dist[j])){
//				t = j;
//				maxx=dist[j];
//			}
//		// 用t更新其他点的距离
//		for (int j = 1; j <= n; j ++ )
//			dist[j] = max(dist[j], min(dist[t] , g[t][j]));
//		st[t] = true;
//	}
//	return dist[n];
//}
//int main() {
//	int i,j;
//	int T,t1=0;
//	scanf("%d",&T);
//	while(T--) {
//		memset(g,0,sizeof g);
//		scanf("%d%d",&n,&m);
//		for(i=0; i<m; i++) {
//			int a,b,c;
//			scanf("%d%d%d",&a,&b,&c);
//			g[a][b]=g[b][a]=c;
//		}
//		printf("Scenario #%d:\n%d\n\n",++t1,dij());
//	}
//}

/*
1
3 3
1 2 3
1 3 4
2 3 5

*/

//using namespace std;
//#define Inf 0x3f3f3f3f
//int n, m;
//int vis[1111];
//int dis[1111];
//int dp[1111][1111];
//
//void Dijk(int u) {
//	memset(vis, 0, sizeof(vis));
//	for (int i = 1; i <= n; i++) {
//		dis[i] = dp[u][i];
//	}
//	vis[u] = 1;
//	for (int t = 1; t <= n; t++) {
//		int ma = 0;
//		int temp = -1;
//		for (int i = 1; i <= n; i++) {
//			if (!vis[i] && dis[i] > ma) {
//				ma = dis[i];
//				temp = i;
//			}
//		}
//		if (temp == -1) {
//			break;
//		}
//		vis[temp] = 1;
//		for (int i = 1; i <= n; i++) {
//			dis[i] = max(dis[i], min(dp[temp][i], dis[temp]));
//		}
//	}
//}
//
//int main() {
//	int t;
//	scanf("%d", &t);
//	for (int tt = 1; tt <= t; tt++) {
//		printf("Scenario #%d:\n", tt);
//		cin >> n >> m;
//		memset(dp, 0, sizeof(dp));
//		while (m--) {
//			int a, b, c;
//			scanf("%d %d %d", &a, &b, &c);
//			dp[a][b] = c;
//			dp[b][a] = c;
//		}
//		Dijk(1);
//		printf("%d\n\n", dis[n]);
//	}
//}
/*
1
3 3
1 2 3
1 3 4
2 3 5

*/


//#include <iostream>
//#include <cstring>
//#include <algorithm>
//#include <queue>
//using namespace std;
//const int N=1e6+9;
//
//int n,m;      // 总点数
//int h[N], w[N], e[N], ne[N], idx;       // 邻接表存储所有边
//int dist[N];        // 存储每个点到1号点的最短距离
//bool st[N];     // 存储每个点是否在队列中
//
//void add(int a,int b,int c) {
//	e[idx]=b,w[idx]=c,ne[idx]=h[a],h[a]=idx++;
//}
//
//int spfa() {
//	memset(st, false, sizeof st);
//	memset(dist, 0, sizeof dist);
//	dist[1]=0x3f3f3f3f;
////	for (int i = h[1]; i != -1; i = ne[i]) {
////		dist[e[i]]=w[i];
////	}
//
//	queue<int> q;
//	q.push(1);
////	st[1] = true;
//
//	while (q.size()) {
//		int t = q.front();
//		q.pop();
//
//		st[t] = false;
//
//		for (int i = h[t]; i != -1; i = ne[i]) {
//			int j = e[i];
//			if (dist[j] < min(dist[t],w[i])) {
//				dist[j] = min(dist[t],w[i]);
//				if (!st[j]) {   // 如果队列中已存在j，则不需要将j重复插入
//					q.push(j);
//					st[j] = true;
//				}
//			}
////			for(int i=1; i<=n; i++) {
////				cout<<dist[i]<<" ";
////			}
////			cout<<endl;
//		}
//	}
//	return dist[n];
//}
//
//int main() {
//	int i,j;
//	int t,t1=0;
//	cin>>t;
//	while(t--) {
//		memset(h,-1,sizeof h);
//		idx=0;
//		cin>>n>>m;
//		for(i=0; i<m; i++) {
//			int a,b,c;
//			cin>>a>>b>>c;
//			add(a,b,c);
//			add(b,a,c);
//		}
//		printf("Scenario #%d:\n%d\n\n",++t1,spfa());
//	}
//}


//#include <iostream>
//#include <cstring>
//#include <algorithm>
//#include <queue>
//using namespace std;
//const int N=1e6+9;
//
//int n,m;      // ×üμ?êy
//int h[N], w[N], e[N], ne[N], idx;       // áú?ó±í′?′￠?ùóD±?
//int dist[N];        // ′?′￠????μ?μ?1o?μ?μ?×??ì?àà?
//bool st[N];     // ′?′￠????μ?ê?·??ú?óáD?D
//
//void add(int a,int b,int c){
//    e[idx]=b,w[idx]=c,ne[idx]=h[a],h[a]=idx++;
//}
//
//int spfa() {
//	memset(st, false, sizeof st);
//	memset(dist, 0, sizeof dist);
//	dist[1]=0x3f3f3f3f;
////	for (int i = h[1]; i != -1; i = ne[i]){
////		dist[e[i]]=w[i];
////	}
//
//	queue<int> q;
//	q.push(1);
//	st[1] = true;
//
//	while (q.size()) {
//		int t = q.front();
//		q.pop();
//
//		st[t] = false;
//
//		for (int i = h[t]; i != -1; i = ne[i]) {
//			int j = e[i];
//			if (dist[j] < min(dist[t],w[i])) {
//				dist[j] = min(dist[t],w[i]);
//				if (!st[j]) {   // è?1??óáD?Dò?′??új￡??ò2?Dèòa??j???′2?è?
//					q.push(j);
//					st[j] = true;
//				}
//			}
//		}
//	}
//	return dist[n];
//}
//
//int main(){
//	int i,j;
//	int t,t1=0;
//	cin>>t;
//	while(t--){
//		memset(h,-1,sizeof h);idx=0;
//		cin>>n>>m;
//		for(i=0;i<m;i++){
//			int a,b,c;
//			cin>>a>>b>>c;
//			add(a,b,c);
//			add(b,a,c);
//		}
//		printf("Scenario #%d:\n%d\n\n",++t1,spfa());
//	}
//}


//#include <iostream>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//
//const int N=1e3+9,INF=0x3f3f3f3f;
//
//int n,m;
//int g[N][N];  // ′?′￠??ì?±?
//int dist[N];  // ′?′￠1o?μ?μ?????μ?μ?×??ì?àà?
//bool st[N];   // ′?′￠????μ?μ?×??ì?·ê?·?ò??-è·?¨
//
//int dij() {
//	for(int i=1; i<=n; i++) {
//		st[i]=false;
////		dist[i]=g[1][i];
//	}
//	memset(dist,0,sizeof dist);
//	dist[1]=0x3f3f3f3f;
//	for (int i = 0; i < n-1; i ++ ) {
//		int t = -1,maxx=0;
//		for (int j = 1; j <= n; j ++ )
//			if (!st[j] && (maxx < dist[j])) {
//				t = j;
//				maxx=dist[j];
//			}
//		for (int j = 1; j <= n; j ++ )
//			dist[j] = max(dist[j], min(dist[t] , g[t][j]));
//		st[t] = true;
//	}
//	return dist[n];
//}
//int main() {
//	int i,j;
//	int T,t1=0;
//	scanf("%d",&T);
//	while(T--) {
//		memset(g,0x3f,sizeof g);
//		scanf("%d%d",&n,&m);
//		for(i=0; i<m; i++) {
//			int a,b,c;
//			scanf("%d%d%d",&a,&b,&c);
//			g[a][b]=g[b][a]=c;
//		}
//		printf("Scenario #%d:\n%d\n\n",++t1,dij());
//	}
//}


//#include<bits/stdc++.h>
//using namespace std;
//int main() {
//	int i,j;
//	string s;
//	char a[10];
//	int ans=0;
//	while(cin>>s) {
//		for(i=0; i+3<s.size(); i++) {
//			int flag=0;
//			if((s[i]=='d'||s[i]=='D')&&(s[i+1]=='o'||s[i+1]=='O')&&(s[i+2]=='g'||s[i+2]=='G')&&
//			        (s[i+3]=='e'||s[i+3]=='E'))flag=4;
//			if(flag==4) ans++;
//		}
//	}
//	cout<<ans<<endl;
//}


//#include <iostream>
//#include <cstring>
//#include <algorithm>
//#include<set>
//using namespace std;
//#define ll long long
//
//const int N=1009;
//ll n,m,x[N*N],y[N*N],z[N*N];
//set<int> s;
//ll g[N][N];
//ll dist[N];
//bool st[N];
//
//void F() {
//	for(int i=0;i<2;i++){
//		z[i] = (x[i] * 90123 + y[i] ) % 8475871 + 1;
//	}
//	for(int i=2; i<n*n; i++) {
//		x[i]=((12345 + x[i-1] * 23456 + x[i-2] * 34567)%5837501 + x[i-1] * x[i-2] * 45678)  %  5837501;
//		y[i]=((56789 + y[i-1] * 67890 + y[i-2] * 78901)%9860381 + y[i-1] * y[i-2] * 89012)  %  9860381;
//		z[i] = (x[i] * 90123 + y[i] ) % 8475871 + 1;
//	}
//}
//
//void dij()
//{
//	memset(st, false, sizeof st);
//    memset(dist, 0x3f, sizeof dist);
//    dist[0] = 0;
//
//    for (int i = 0; i < n - 1; i ++ )
//    {
//        int t = -1;
//        for (int j = 0; j < n; j ++ )
//            if (!st[j] && (t == -1 || dist[t] > dist[j]))
//                t = j;
//
//        for (int j = 0; j <n; j ++ )
//            dist[j] = min(dist[j], dist[t] + g[t][j]);
//
//        st[t] = true;
//    }
//}
//int main() {
//	int i,j;
//	while(cin>>n>>m) {
//		s.clear();
//		memset(g,0x3f3f3f3f,sizeof g);
//		cin>>x[0]>>x[1]>>y[0]>>y[1];
//		F();
//		for(i=0;i<n;i++){
//			for(j=0;j<n;j++){
//				if(i==j) g[i][j]=0;
//				else{
//					g[i][j]=z[i*n+j];
//				}
//			}
//		}
//		dij();
//		for(i=1;i<n;i++){
////			cout<<dist[i]%m<<endl;
//			s.insert(dist[i]%m);
//		}
//		cout<<*s.begin()<<endl;
////		for(i=0;i<n;i++){
////			for(j=0;j<n;j++){
////				cout<<g[i][j]<<" ";
////			}
////			cout<<endl;
////		}
//
//	}
//
//}





//#include<bits/stdc++.h>
//using namespace std;
//
//
//const int N=509,INF=0x3f3f3f3f;
//
//int n,m;      // n表示点数
//int g[N][N];        // 邻接矩阵，存储所有边
//int dist[N];        // 存储其他点到当前最小生成树的距离
//bool st[N];     // 存储每个点是否已经在生成树中
//
//int prim()
//{
//	memset(st, false, sizeof st);
//    memset(dist, 0x3f, sizeof dist);
//
//    int res = 0;
//    for (int i = 0; i < n; i ++ )
//    {
//        int t = -1;
//        for (int j = 1; j <= n; j ++ )
//            if (!st[j] && (t == -1 || dist[t] > dist[j]))
//                t = j;
//
//        if (i && dist[t] == inf) return inf;
//
//        if (i) res += dist[t];
//        st[t] = true;
//
//        for (int j = 1; j <= n; j ++ ) dist[j] = min(dist[j], g[t][j]);
//    }
//
//    return res;
//}
//
//int main(){
//	cin>>n>>m;
//	memset(g,INF,sizeof g);
//	while(m--){
//		int a,b,c;
//		cin>>a>>b>>c;
//		g[a][b]=g[b][a]=min(g[a][b],c);
//	}
//	cout<<prim()<<endl;
//}






//#include<bits/stdc++.h>
//using namespace std;
//
//
//const int N=509,inf=0x3f3f3f3f;
//
//int n,m;      // n表示点数
//double g[N][N];        // 邻接矩阵，存储所有边
//double dist[N];        // 存储其他点到当前最小生成树的距离
//int dis[N];
//bool st[N];     // 存储每个点是否已经在生成树中
//
//int prim() {
//	memset(st, false, sizeof st);
//	memset(dist, 0x3f, sizeof dist);
//	memset(dis, 0, sizeof dis);
//	double res = 0;
//	for (int i = 0; i < n; i ++ ) {
//		int t = -1,maxx=0;
//		for (int j = 1; j <= n; j ++ )
//			if (!st[j] && (t == -1 || maxx > dist[j])){
//				maxx=dist[j];
//				t = j;
//			}
//		if (i && dist[t] == inf) return inf;
//
//		if (i){
//			res += dist[t];
//
//		}
//		st[t] = true;
//
//		for (int j = 1; j <= n; j ++ ){
//			if(dist[j]>g[t][j]&&g[t][j]>=10&&g[t][j]<=1000){
//				dist[j]=g[t][j];
//				dist[j]=pow((g[t][j]-),2)+;
//			}
//		}
//	}
//
//	return res;
//}
//
//int main() {
//	int t;
//	cin>>t;
//	while(t--) {
//		cin>>n>>m;
//		memset(g,inf,sizeof g);
//		while(m--) {
//			int a,b;double c;
//			cin>>a>>b>>c;
//			g[a][b]=g[b][a]=min(g[a][b],c);
//		}
//		int tt=prim();
//		if(tt==inf) puts("oh!");
//		else cout<<tt*100<<endl;
//	}
//
//}



//#include<bits/stdc++.h>
//using namespace std;
//
//const int N=20009,inf=0x3f3f3f3f;
//int n, m;       // n是点数，m是边数
//int p[N];       // 并查集的父节点数组
//
//struct Edge {   // 存储边
//	int a, b, w;
//
//	bool operator< (const Edge &W)const {
//		return w < W.w;
//	}
//} edges[N];
//
//int find(int x) {   // 并查集核心操作
//	if (p[x] != x) p[x] = find(p[x]);
//	return p[x];
//}
//
//int kru() {
//	sort(edges, edges + m);
//
//	for (int i = 1; i <= n; i ++ ) p[i] = i;    // 初始化并查集
//
//	int res = 0, cnt = 0;
//	for (int i = 0; i < m; i ++ ) {
//		int a = edges[i].a, b = edges[i].b, w = edges[i].w;
//
//		a = find(a), b = find(b);
//		if (a != b) {   // 如果两个连通块不连通，则将这两个连通块合并
//			p[a] = b;
//			res += w;
//			cnt ++ ;
//		}
//	}
//
//	if (cnt < n - 1) return inf;
//	return res;
//}
//int main() {
//	int i,j;
//	cin>>n>>m;
//	for(i=0;i<m;i++){
//		int a,b,c;
//		cin>>a>>b>>c;
//		edges[i]={a,b,c};
//	}
//	cout<<kru()<<endl;
//}






//#include<bits/stdc++.h>
//using namespace std;
//const int N=20009;
//int n;       // n是点数，m是边数
//int p[N];       // 并查集的父节点数组
//pair<double,double>pa[N];
//struct Edge {   // 存储边
//	int a, b;
//	double w;
//
//	bool operator< (const Edge &W)const {
//		return w < W.w;
//	}
//} edges[N];
//int len=1;
//int find(int x) {   // 并查集核心操作
//	if (p[x] != x) p[x] = find(p[x]);
//	return p[x];
//}
//void init() {
//	for(int i=1; i<N; i++)
//		p[i]=i;
//}
//double dis(double x,double y,double x1,double y1) {
//	return sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1));
//}
//int main() {
//	int  t;
//	scanf("%d",&t);
//	while(t--) {
//		int n;
//		len=1;
//		init();
//		scanf("%d",&n);
//		for(int i=1; i<=n; i++)
//			scanf("%lf%lf",&pa[i].first,&pa[i].second);
//		for(int i=1; i<=n; i++) {
//			for(int j=i+1; j<=n; j++) {
//				double xx=dis(pa[i].first,pa[i].second,pa[j].first,pa[j].second);
//				if(xx>=10&&xx<=1000)edges[len++]= {i,j,xx};
//			}
//		}
//		double ans=0;
//		int z=0;
//		sort(edges+1,edges+len);
//		for(int i=1; i<len; i++) {
//			int xx,yy;
//			xx=find(edges[i].a);
//			yy=find(edges[i].b);
//			if(xx!=yy) {
//				p[xx]=p[yy];
//				z++;
//				ans+=edges[i].w;
//			}
//		}
//		if(z==n-1&&ans!=0)printf("%.1lf\n",ans*100);
//		else printf("oh!\n");
//	}
//}


//#include<bits/stdc++.h>
//using namespace std;
//
//const int N=1e4+9;
//int a[N],b[N];
//
//int main() {
//	int i,j;
//	int n,m;
//	while(cin>>n>>m) {
//		double sum=0;
//		for(i=0; i<n; i++) {
//			cin>>a[i];
//			sum+=a[i];
//		}
//		for(i=0; i<n; i++) {
//			if(a[i]/sum-(int)a[i]/sum>1e-6) {
//				break;
//			}
//			b[i]=(int)a[i]/sum*a[i];
//		}
//		if(i==n) {
//			cout<<"Yes"<<endl;
//			for(i=0; i<n; i++) {
//				if(i==n-1)cout<<b[i];
//				else cout<<b[i]<<" ";
//			}
//			cout<<endl;
//		} else {
//			cout<<"No"<<endl;
//		}
//	}
//
//}





//#include<bits/stdc++.h>
//using namespace std;
//#define ll long long
//const int N=1e5+9;
//ll a[N];
//ll n,m;
//
//int main() {
//	int i,j;
//	while(cin>>n>>m) {
//		ll sum=1,sum1=0;
//		for(i=0; i<n; i++) {
//			cin>>a[i];
//		}
//		for(i=0; i<n; i++) {
//			sum=sum*a[i]/__gcd(a[i],sum);
//		}
//		for(i=0; i<n; i++) {
//			a[i]=sum/a[i];
//			sum1+=a[i];
//		}
//		if(m%sum1==0) {
//			cout<<"Yes"<<endl;
//			ll times = m/sum1;
//
//            cout<<a[0]*times;
//            for(i=1; i<n; i++) {
//                cout<<" "<<a[i]*times;
//            }
//            cout<<endl;
//		} else {
//			cout<<"No"<<endl;
//		}
//	}
//}




//#include<bits/stdc++.h>
//using namespace std;
//#define ll long long
//const int N=1e5+9;
//ll a[N];
//ll n,m;
//
//int main() {
//    int i,j;
//    while(cin>>n>>m) {
//        ll sum=1,sum1=0;
//        for(i=0; i<n; i++) {
//            cin>>a[i];
//        }
//        for(i=0; i<n; i++) {
//            sum=a[i]/__gcd(a[i],sum)*sum;
//        }
//        for(i=0; i<n; i++) {
//            a[i]=sum/a[i];
//            sum1+=a[i];
//        }
//        if(m%sum1==0) {
//            cout<<"Yes"<<endl;
//            ll ss=m/sum1;
//            cout<<a[0]*ss;
//            for(i=1; i<n; i++) {
//                cout<<" "<<ss*a[i];
//            }
//            cout<<endl;
//        } else {
//            cout<<"No"<<endl;
//        }
//    }
//}



//#include<bits/stdc++.h>
//using namespace std;
//#define ll long long
//const int N=1e3+9;
//int n;
//double a[N],b[N];
//
//int main(){
//	int i,j;
//	while(cin>>n){
//		for(i=0;i<n;i++)cin>>a[i];
//		for(i=0;i<n;i++){
//			double c=a[i]-(ll)a[i];
//			double c2=c*100-(int)c*100;
//			if(c2>=0.5) b[i]=ceil(a[i]);
//			else b[i]=floor(a[i]);
//		}
//		for(i=0;i<n;i++){
//			cout<<b[i]<<" ";
//		}
//		cout<<endl;
//	}
//}





//#include<bits/stdc++.h>
//using namespace std;
//#define ll long long
//const int N=1e3+9;
//int n;
//
//int main(){
//	int i,j;
//	while(cin>>n){
//		int sum=0;
//		string s;
//		for(i=0;i<n;i++){
//			cin>>s;
//			for(j=0;j<s.size();j++){
//				if(s[j]=='.')break;
//			}
//			if(s[j+3]>='5') sum+=10-s[j+3]+'0';
//			else sum+='0'-s[j+3];
//		}
//		printf("%.3lf\n",sum*0.001);
//	}
//}





//#include<bits/stdc++.h>
//using namespace std;
//
//int n;
//string s;
//char aa[]="avin";
//int a[4];
//int main(){
//	int i,j;
//	while(cin>>n){
//		memset(aa,0,sizeof aa);
//		cin>>s;
//		for(i=0;i<s.size();i++){
//			for(j=0;j<4;j++){
//				if(s[i]==aa[j]) a[j]++;
//			}
//		}
//
//	}
//}

//#include<bits/stdc++.h>
//using namespace std;
//
//const int N=109;
//int a[N];
//int n;
//
//int main(){
//	int i,j;
//	int t;
//	cin>>t;
//	while(t--){
//		cin>>n;
//		for(i=1;i<=n;i++){
//			cin>>a[i];
//		}
//		int ma=a[1],mi=a[1];
//		int maxx=1,minn=1;
//		for(i=2;i<=n;i++){
//			if(ma<a[i]){
//				ma=a[i];
//				maxx=i;
//			}
//			if(mi>a[i]){
//				mi=a[i];
//				minn=i;
//			}
//		}
//		int ans=min(max(maxx,minn),max(n-maxx+1,n-minn+1));
//		int ans2=min(n-minn+1+maxx,n-maxx+1+minn);
//		cout<<min(ans,ans2)<<endl;
//	}
//}


//#include<bits/stdc++.h>
//using namespace std;
//
//const int N=2e5+9;
//int a[N];
//int n;
//
//int main() {
//	int i,j;
//	int t;
//	cin>>t;
//	while(t--) {
//		cin>>n;
//		int sum=0;
//		for(i=0;i<n;i++){
//			cin>>a[i];
//			sum+=a[i];
//		}
//		if(sum/n*n!=sum){
//			cout<<-1<<endl;
//			continue;
//		}
//		int av=sum/n;
//		int ans=0;
//		for(i=0;i<n;i++){
//			if(a[i]>av)ans++;
//		}
//		cout<<ans<<endl;
//	}
//}




//#include<bits/stdc++.h>
//using namespace std;
//#define ll long long
//const int N=2e5+9;
//int n,l,r;
//int a[N];
//
//int main() {
//	int i,j;
//	int t;
//	cin>>t;
//	while(t--) {
//		cin>>n>>l>>r;
//		for(i=1; i<=n; i++) {
//			cin>>a[i];
//		}
//		sort(a+1,a+1+n);
//		ll sum=0;
//		for(i=1; i<=n; i++) {
//			int l2=i+1,r2=n+1;
//			while(l2<r2){
//				int mid=l2+r2>>1;
//				if(a[mid]>=l-a[i]) r2=mid;
//				else l2=mid+1;
//			}
////			printf("%d %d\n",aa,l2);
//			int bb = upper_bound(a + i + 1, a + n +1, r - a[i] ) - a;
//			int c = bb - l2;
//			sum += c;
//		}
//		cout<<sum<<endl;
//	}
//}



//#include<bits/stdc++.h>
//using namespace std;
//
//const int N=1e5+9;
//
//int main(){
//	int i,j;
//	string s;
//	getline(cin,s);
//	for(i=0;i<s.size();i++){
//		if(s[i]=='<'){
//			cout<<"&lt;";
//		}
//		else if(s[i]=='>'){
//			cout<<"&gt;";
//		}else{
//			cout<<s[i];
//		}
//	}
//	cout<<endl;
//}



//#include<bits/stdc++.h>
//using namespace std;
//#define ll long long
//const int N=5e6+9;
//int n,k;
//int main(){
//	int i,j;
//	scanf("%d",&n);
//	while(n--){
//		int a;
//		scanf("%d",&a);
//		while((a&1==1)){
//			k++;
//			a/=2;
//		}
//	}
//	printf("%d\n",k);
//}


//#include<bits/stdc++.h>
//using namespace std;
//#define ll long long
//const ll mod = 1e9+7;
//const int N = 1e6 + 9;
//ll f[N];
//ll  pow(ll x, ll n) {
//	ll res = 1;
//	while (n) {
//		if (n % 2 == 1) res = res * x % mod;
//		x = x * x % mod;
//		n >>= 1;
//	}
//	return res;
//}
//ll inv(ll x) {
//	return pow(x, mod - 2);
//}
//ll C(ll m, ll n) {
//	return f[m] * inv(f[n]) % mod * inv(f[m - n]) % mod;
//}
//void init() {
//	f[0] = 1;
//	for (int i = 1; i < N; i++) {
//		f[i] = f[i - 1] * i % mod;
//	}
//}
//int main() {
//	int i,j;
//	init();
//	int n;
//	cin>>n;
//	ll sum=1;
//	for(i=1;i<=n;i++){
//		sum=C(n-1,i-1)%mod*sum%mod;
//	}
//	cout<<sum<<endl;
//}



//#include<bits/stdc++.h>
//using namespace std;
//string a="name=\"csrfmidewaretoken\"";
//string s;
//int main(){
//	while(cin>>s){
//		if(s==a){
//			cin>>s;
//			for(int i=7;i<s.size()-1;i++){
//				cout<<s[i];
//			}
//		}
//	}
//	cout<<endl;
//}



//#include<bits/stdc++.h>
//using namespace std;
//
//class Point
//{
//
//public:
//    double x;
//    double y;
//    double z;
//    Point(double x, double y, double z);
//};
//Point::Point(double x, double y, double z)
//{
//    this->x = x;
//    this->y = y;
//    this->z = z;
//}
//
//double cal_volume(Point a, Point b, Point c, Point d)
//{
//    Point p_ad(a.x-d.x, a.y-d.y, a.z-d.z);
//    Point p_bd(b.x-d.x, b.y- d.y, b.z-d.z);
//    Point p_cd(c.x-d.x, c.y-d.y, c.z-d.z);
//    Point p_bd_cd(p_bd.y * p_cd.z - p_bd.z * p_cd.y, p_bd.z * p_cd.x - p_bd.x * p_cd.z, p_bd.x * p_cd.y - p_bd.y * p_cd.x);
//    double res = abs(p_ad.x * p_bd_cd.x + p_ad.y * p_bd_cd.y + p_ad.z * p_bd_cd.z) / 6.0;
//    return res;
//}
//int a[10][5];
//int main()
//{
//	for(int i=0;i<4;i++){
//		for(int j=0;j<3;j++){
//			cin>>a[i][j];
//		}
//	}
//    Point p1(a[0][0],a[0][1],a[0][2]);
//    Point p2(a[1][0],a[1][1],a[1][2]);
//    Point p3(a[2][0],a[2][1],a[2][2]);
//    Point p4(a[3][0],a[3][1],a[3][2]);
//    double v = cal_volume(p1, p2, p3, p4);
//    cout << v << endl;
//}




//#include<bits/stdc++.h>
//using namespace std;
//string s;
//int a[100];
//int main(){
//	cin>>s;
//	for(int i=0;i<s.size();i++){
//		a[s[i]-'a']++;
//	}
//	int sum=0;
//	for(i=0;i<26;i++){
//		if(a[i]>=1) sum++;
//	}
//	cout<<sum;
//}


//#include<bits/stdc++.h>
//using namespace std;
//string s;
//int a[100],b[100];
//int main(){
//    int i,j;
//	cin>>s;
//	for(i=0;i<s.size();i++){
//		a[s[i]-'a']++;
//	}
//	int sum=0,k=0;
//	for(i=0;i<26;i++){
//		if(a[i]>=1) b[k++]=a[i];
//	}
//	sort(b,b+k,greater<>());
////     int ans=0;
////     for(i=0;i<k-1;i++){
////         ans+=b[i]*(i+1);
////     }
////     ans+=b[i]*(k-1);
////     cout<<ans<<endl;
//    for(i=0;i<k;i++){
//        cout<<b[i]<<" ";
//    }
//}

//#include<bits/stdc++.h>
//using namespace std;
//string s;
//int a[100],b[100];
//int main(){
//    int i,j;
//	cin>>s;
//	for(i=0;i<s.size();i++){
//		a[s[i]-'a']++;
//	}
//	int sum=0,k=0;
//	for(i=0;i<26;i++){
//		if(a[i]>=1) b[k++]=a[i];
//	}
//	sort(b,b+k,greater<>());
////     int ans=0;
////     for(i=0;i<k-1;i++){
////         ans+=b[i]*(i+1);
////     }
////     ans+=b[i]*(k-1);
////     cout<<ans<<endl;
//}







//#include<bits/stdc++.h>
//using namespace std;
//#define ll long long
//const int N=2e5+9;
//int n,l,r;
//int a[N];
//
//int main() {
//	int i,j;
//	int t;
//	cin>>t;
//	while(t--) {
//		cin>>n>>l>>r;
//		for(i=1; i<=n; i++) {
//			cin>>a[i];
//		}
//		sort(a+1,a+1+n);
//		ll sum=0;
//		for(i=1; i<=n; i++) {
//			int l2=i+1,r2=n+1;
//			while(l2<r2){
//				int mid=l2+r2>>1;
//				if(a[mid]>=l-a[i]) r2=mid;
//				else l2=mid+1;
//			}
////			printf("%d %d\n",aa,l2);
//			int bb = upper_bound(a + i + 1, a + n +1, r - a[i] ) - a;
//			int c = bb - l2;
//			sum += c;
//		}
//		cout<<sum<<endl;
//	}
//}



//#include<bits/stdc++.h>
//using namespace std;
//
//const int N=1e5+9;
//int n,m;
//
//int main(){
//	int i,j;
//	while(cin>>n>>m){
//		if(n%2||m%2){
//			puts("-1");
//			continue;
//		}
//		for(i=1;i<=n;i++){
//			for(j=1;j<=m;j+=2){
//				if(i%2==1) cout<<"12";
//				else cout<<"34";
//			}
//			puts("");
//		}
//	}
//}





//#include<bits/stdc++.h>
//using namespace std;
//
//const int N=109;
//
//int p[N],size[N]; // 记录每个节点的父节点
//int n,m,s;
//
//void init(int n) {
//	for (int i = 1; i <= n; i ++ ) {
//		p[i] = i;
//		size[i] = 1;
//	}
//}
//
//int find(int x) {
//	if (p[x] != x) p[x] = find(p[x]);
//	return p[x];
//}
//
//void unite(int x, int y) {
//	int a = find(x);
//	int b = find(y);
//	p[a] = b;
//}
//struct {
//	int x,y;
//} a[1009];
//int vis[N];
//int main() {
//	int i,j;
//	int t;
//	cin>>t;
//	while(t--) {
//		cin>>n>>m>>s;
//		init(n);
//		memset(vis,0,sizeof vis);
//		memset(size,0,sizeof size);
//		for(i=1; i<=m; i++) {
//			cin>>a[i].x>>a[i].y;
//		}
//		while(s--) {
//			int aa;
//			cin>>aa;
//			vis[aa+1]=1;
//		}
//		for(i=1; i<=m; i++) {
//			if(vis[a[i].x+1]||vis[a[i].y+1]) continue;
//			unite(a[i].x+1,a[i].y+1);
//			size[find(a[i].y+1)] += size[find(a[i].x+1)];
//			p[find(a[i].x+1)] = find(a[i].y+1);
//		}
//		int sum=0;
//		for(i=1; i<=n; i++) {
//			if(vis[i])continue;
//			sum=max(size[i],sum);
//		}
//		cout<<sum<<endl;
//	}
//}



/*
1
4 3 4
0 1
1 2
0 2
0 1 2 3
*/

//#include<bits/stdc++.h>
//using namespace std;
//
//const int N=109;
//
//int p[N],size[N]; // ?????????úμ?μ????úμ?
//int n,m,s;
//
//void init() {
//	for (int i = 1; i <= N; i ++ ) {
//		p[i] = i;
//		size[i] = 1;
//	}
//}
//
//int find(int x) {
//	if (p[x] != x) p[x] = find(p[x]);
//	return p[x];
//}
//struct {
//	int x,y;
//} a[1009];
//int vis[N];
//int main() {
//	int i,j;
//	int t;
//	cin>>t;
//	while(t--) {
//		cin>>n>>m>>s;
//		init();
//		memset(vis,0,sizeof vis);
//		for(i=1; i<=m; i++) {
//			cin>>a[i].x>>a[i].y;
//		}
//		while(s--) {
//			int aa;
//			cin>>aa;
//			vis[aa+1]=1;
//		}
//		for(i=1; i<=m; i++) {
//			if(vis[a[i].x+1]||vis[a[i].y+1]) continue;
//			size[find(a[i].y+1)] += size[find(a[i].x+1)];
//			p[find(a[i].x+1)] = find(a[i].y+1);
//		}
//		for(i=1; i<=n; i++) {
////             cout<<p[i]<<endl;
//			cout<<size[i]<<endl;
////             cout<<find(i)<<endl;
////             cout<<vis[i]<<endl;
//		}
//
////		int sum=0;
////		for(i=1; i<=n; i++) {
////// 			if(vis[i])continue;
////// 			sum=max(size[find(i)],sum);
////			cout<<size[i]<<endl;
////		}
////		cout<<sum<<endl;
//	}
//}

/*
1
4 3 2
0 1
1 2
0 2
0 3
*/


//#include<bits/stdc++.h>
//using namespace std;
//#define ll long long
//const int N=2e5+9;
//int n,l,r;
//int a[N];
//
//int main() {
//	int i,j;
//	int t;
//	cin>>t;
//	while(t--) {
//		cin>>n>>l>>r;
//		for(i=1; i<=n; i++) {
//			cin>>a[i];
//		}
//		sort(a+1,a+1+n);
//		ll sum=0;
//		for(i=1; i<=n; i++) {
//			int l2=i+1,r2=n+1;
//			while(l2<r2){
//				int mid=l2+r2>>1;
//				if(a[mid]>=l-a[i]) r2=mid;
//				else l2=mid+1;
//			}
//			int l3=i+1,r3=n+1;
//			while(l3<r3){
//				int mid=l3+r3>>1;
//				if(a[mid]>r-a[i]) r3=mid;
//				else l3=mid+1;
//			}
//			int c = l3 - l2;
//			sum += c;
//		}
//		cout<<sum<<endl;
//	}
//}




//#include<bits/stdc++.h>
//using namespace std;
//
//const int N=1e5+9;
//int n,k,m,s,t;
//int main(){
//	int i,j;
//	cin>>n>>k>>m>>s>>t;
//	for(i=0;i<n;i++){
//
//	}
//}

//#include<bits/stdc++.h>
//using namespace std;
//const int N=1e6+10;
//
//int prime[N+10];
//bool visit[N+10];
//
//int main() {
//	int i,j;
//
//	int l,r;
//	cin>>l>>r;
//	Prime();
//	for(i=1; i<prime[0]; i++) {
//		if(l<prime[i])break;
//	}
//	if(prime[i-1]>l)i--;
//	int cnt=0;
//	while(1) {
//		if(r<prime[i])break;
//		cnt++;
//		i++;
//	}
//	cout<<cnt<<endl;
//}




//#include<bits/stdc++.h>
//using namespace std;
//
//const int N=1e5+9;
//
//int main(){
//	int i,j;
//	int l,r;
//	cin>>l>>r;
//	int ans=0;
//	for(i=l;i<=r;i++){
//		for(j=2;j*j<i;j++){
//			if(i%j==0)break;
//		}
//		if(j*j>i)ans++;
//	}
//	cout<<ans<<endl;
//}


//#include<bits/stdc++.h>
//using namespace std;
//
//const int N=1e5+9;
//
//int main(){
//	int i,j;
//	char a;
//	cin>>a;
//	if(a>='a'&&a<='z') a=a-'a'+'A';
//	else if(a>='A'&&a<='Z') a=a-'A'+'a';
//	cout<<a<<endl;
//}

//#include<bits/stdc++.h>
//using namespace std;
//
//const int N=1e5+9;
//
//int main() {
//	int i,j;
//	int n,x;
//	cin>>n>>x;
//	int cnt=0;
//	for(i=1; i<=n; i++) {
//		int a=i;
//		while(a) {
//			if(a%10==x)cnt++;
//			a/=10;
//		}
//	}
//	cout<<cnt;
//}



//#include<bits/stdc++.h>
//using namespace std;
//const int N=2147483647;
//
//int prime[N+10];
//bool visit[N+10];
//void Prime() {
//	memset(visit,1,sizeof(visit));
//	for (int i = 2; i <= r-l; i++) {
//		if (visit[i]) {
//			prime[++prime[0]] = i;
//		}
//		for (int j = 1; j <=prime[0] && i*prime[j] <= N; j++) {
//			visit[i*prime[j]]=false;
//			if (i % prime[j]==0) {
//				break;
//			}
//		}
//	}
//}
//int main() {
//	int i,j;
//	int l,r;
//	cin>>l>>r;
//	Prime();
//	for(i=1; i<prime[0]; i++) {
//		if(l<prime[i])break;
//	}
//	if(prime[i-1]>l)i--;
//	int cnt=0;
//	while(1) {
//		if(r<prime[i])break;
//		cnt++;
//		i++;
//	}
//	cout<<cnt<<endl;
//}




//#include<bits/stdc++.h>
//using namespace std;
//const int N=1e5+9;
//int n,m;
//int x[5],y[5];
//int sum;
//int main() {
//	int i,j;
//	cin>>n>>m;
//	cin>>x[1]>>y[1]>>x[2]>>y[2];
//
//	sum+=(y[1]-1)%2*(x[2]-x[1]+1);
//	sum+=(m-y[2])%2*(x[2]-x[1]+1);
//
//	if(m%2) {
//		sum+=(n-x[2]);
//		sum+=(x[1]-1);
//	}
//	cout<<(sum+1)/2<<endl;
//}


//#include<bits/stdc++.h>
//using namespace std;
//#define ll long long
//const int N=1e5+9;
//int n,m,d;
//int main(){
//	int i,j;
//	cin>>n>>m>>d;
//	for(i=1;i<=n;i++){
//		cin>>a[i];
//	}
//
//}

//#include<bits/stdc++.h>
//using namespace std;
//#define ll long long
//const int N=1e5+9;
//int n;
//priority_queue<ll,vector<ll>,greater<ll> > q;
//int main(){
//	int i,j;
//	cin>>n;
//	for(i=1;i<=n;i++){
//		int a;
//		cin>>a;
//		q.push(a);
//	}
//	int ans=0,flag=0,cnt=0;
//	while(q.size()!=1){
//		cnt++;
//		if(cnt>1e6){
//			flag=1;
//			break;
//		}
//		ll a=q.top();q.pop();
//		ll b=q.top();q.pop();
////		printf("%d %d\n",a,b);
//		if(a==b){
//			q.push(a+b);
//			continue;
//		}
//		if(a>b){
//			q.push(a);
//			ans++;
//			q.push(2*b);
//			continue;
//		}
//		if(a<b){
//			q.push(b);
//			ans++;
//			q.push(2*a);
//		}
//	}
//	if(flag){
//		puts("-1");
//	}
//	else cout<<ans<<endl;
//}




//#include<bits/stdc++.h>
//using namespace std;
//const int N=1e6+9;
//int a[N],sum[N],zhi[N];
//int n;
//
//int main(){
//	int i,j;
//	cin>>n;
//	string s="000000";
//	for(i=0;i<1e6;i++){
//		int b=0,c=0;
//
//		for(j=0;j<3;j++){
//			b+=s[j]-'0';
//		}
//		for(j=s.size()-3;j<s.size();j++){
//			c+=s[j]-'0';
//		}
//		zhi[abs(b-c)]++;
//		for(j=0;j<abs(b-c);j++){
//			sum[i]+=zhi[j];
//		}
//		s[s.size()-1]++;
//		for(j=s.size()-1;j>0;j--){
//			if(!(s[j]>='0'&&s[j]<='9')){
//				s[j-1]++;
//				s[j]='0';
//			}
//		}
//	}
//	for(i=0;i<n;i++){
//		cin>>s;
//		int b=0,c=0;
//		int t=0;
//		for(j=0;j<s.size();j++)
//			t=t*10+(s[j]-'0');
//		cout<<sum[t]<<endl;
//	}
//}


//#include<bits/stdc++.h>
//using namespace std;
//const int N=2e5+9;
//int n,m,d;
//int a[N],b[N];
//int v[N];
//int main(){
//	int i,j;
//	cin>>n>>m>>d;
//	for(i=1;i<=n;i++){
//		cin>>a[i];
//		b[i]=a[i];
//		v[i]=1;
//	}
//	sort(a+1,a+n+1);
//	int p=0,t=1;
//	int l,r;
//	for(i=1;i<=n;i++){
//		l=lower_bound(v+1,v+1+n,0)-v;
//		r=n;
//		printf("1 %d %d\n",l,r);
//		while(l<r){
//			int mid=l+r>>1;
//			if(v[mid]==0){
//				l++;
//				continue;
//			}
//			if(a[mid]>p+d)r=mid;
//			else l=mid+1;
//			printf("2 %d %d\n",l,r);
//		}
//
//		b[l]=t;
//		v[l]=0;
//		p=l;
//		if(p+d>n){
//			t++;
//			p=0;
//		}
//	}
//	cout<<t<<endl;
//	for(i=1;i<=n;i++){
//		cout<<b[i]<<" ";
//	}
//}

////	https://vjudge.net/contest/444314#problem/A
//#include<bits/stdc++.h>
//using namespace std;
//const int N=2e5+9;
//int n,m,d;
//int a[N];
//int main(){
//	int i,j;
//	cin>>n>>m>>d;
//	for(i=1;i<=n;i++){
//		cin>>a[i];
//	}
//
//}




//#include<bits/stdc++.h>
//using namespace std;
//
//const int N=1e5+9;
//double x[5],y[5];
//double h;
//int main(){
//	int i,j;
//	int t;
//	cin>>t;
//	while(t--){
//		cin>>x[1]>>y[1]>>x[2]>>y[2]>>h;
//		double a=sqrt((x[1]-x[2])*(x[1]-x[2])+(y[1]-y[2])*(y[1]-y[2]));
//		double b=ceil(a/h);
//		cout<<(int)(b*h/a)<<endl;
//	}
//}


//#include<bits/stdc++.h>
//using namespace std;
//#define ll long long
//const int N=1e5+9;
//ll a[N];
//map<ll,ll>m;
//int main(){
//	int i,j;
//	int n;
//	cin>>n;
//	for(i=1;i<=n;i++)cin>>a[i];
//	sort(a+1,a+1+n);
//	ll sum=0;
//	for(i=1;i<=n;i++){
//		m[a[i]]++;
//		if(m[a[i]]>a[i]) sum++;
//	}
////	map<ll,ll> ::iterator it;
////	for(it=m.begin();it!=m.end();it++){
//////		if(&&m[a[i]]>a[i]) sum+=m[a[i]]-a[i];
////	}
//	cout<<sum<<endl;
//}



//#include<bits/stdc++.h>
//using namespace std;
//#define ll long long
//const int N=1e5+9;
//ll a[N],b[N];
//map<ll,ll>m;
//int main(){
//	int i,j;
//	int n;
//	cin>>n;
//	for(i=1;i<=n;i++)cin>>a[i];
//	sort(a+1,a+1+n);
//	ll sum=0;
//	for(i=1;i<=n;i++){
//		m[a[i]]++;
////		if(b[i]!=b[i-1]){
////			i++;
////		}else{
////			b[i]++;
////		}
////         if(m[a[i]]>a[i]) sum++;
//	}
//	map<ll,ll> ::iterator it;
//    for(it=m.begin();it!=m.end();it++,i++){
//    	sum=it->second-it->first+sum;
//	}
//	cout<<sum<<endl;
//}




//#include<bits/stdc++.h>
//using namespace std;
//#define ll long long
//const int N=1e5+9,mod=998244353;
//
//ll f[N],siz[N];
//int find(int x) { //寻找x的根节点+路径压缩
//	if(f[x]!=x) f[x]=find(f[x]);
//	return f[x];
//}
//
//ll p[N];
//ll  pow(ll x, ll n) {
//    ll res = 1;
//    while (n) {
//        if (n % 2 == 1) res = res * x % mod;
//        x = x * x % mod;
//        n >>= 1;
//    }
//    return res;
//}
//ll inv(ll x) {
//    return pow(x, mod - 2);
//}
//ll A(ll m, ll n) {
//    return p[m] * inv(p[m-n])% mod;
//}
//void init() {
//    p[0] = 1;
//    for (int i = 1; i < N; i++) {
//        p[i] = p[i - 1] * i % mod;
//    }
//}
//
//int main() {
//	int i,j;
//	init();
//	int n,m;
//	cin>>n>>m;
//	for(i=1; i<=n; i++) {
//		f[i]=i;
//		siz[i]=1;
//	}
//	for(i=0; i<m; i++) {
//		int b,c;
//		cin>>b>>c;
//		if(find(b)!=find(c)) {
//			siz[find(c)]+=siz[find(b)];
//			f[find(b)]=find(c);
//		}
//	}
//	ll sum=1;
//	for(i=1;i<=n;i++){
//		int a=siz[i];
////		cout<<siz[i]<<endl;
//		sum=(A(a,a)*sum)%mod;
//	}
//	cout<<sum<<endl;
//}






//#include<bits/stdc++.h>
//using namespace std;
//
//const int N = 500010;
//
//int n, m;
//int w[N];
//struct Node
//{
//    int l, r;
//    int sum, lmax, rmax, tmax;
//}tr[N * 4];
//void pushup(Node &u, Node &l, Node &r){
//	u.sum=l.sum+r.sum;
//	u.lmax=max(l.lmax,l.sum+r.lmax);
//	u.rmax=max(r.rmax,r.sum+l.rmax);
//	u.tmax=max(l.rmax+r.lmax,max(l.tmax,r.tmax));
//}
//void pushup(int root){
//	pushup(tr[root],tr[root<<1],tr[root<<1|1]);
//}
//void build(int u, int l, int r){
//	if(l==r){
//		tr[u]={l,r,w[r],w[r],w[r],w[r]};
//	}
//	else{
//		tr[u].l=l,tr[u].r=r;
//		int mid=l+r>>1;
//		build(u<<1,l,mid);
//		build(u<<1|1,mid+1,r);
//		pushup(u);
//	}
//}
//void modify(int u, int x, int v){
//	if(tr[u].l==x&&tr[u].r==x) tr[u]={x,x,v,v,v,v};
//	else{
//		int mid=tr[u].l+tr[u].r>>1;
//		if(x<=mid) modify(u<<1,x,v);
//		else modify(u<<1|1,x,v);
//		pushup(u);
//	}
//}
//Node query(int u, int l, int r){
//	if(tr[u].l>=l&&tr[u].r<=r)return tr[u];
//	else{
//		int mid=tr[u].l+tr[u].r>>1;
//		if(r<=mid) return query(u<<1,l,r);
//		else if(l>mid) return query(u<<1|1,l,r);
//		else{
//			Node left=query(u<<1,l,r);
//			Node right=query(u<<1|1,l,r);
//			Node res;
//			pushup(res,left,right);
//			return res;
//		}
//	}
//}
//int main(){
//	int i,j;
//	cin>>n>>m;
//	for(i=1;i<=n;i++){
//		cin>>w[i];
//	}
//	build(1,1,n);
//	int k,x,y;
//	while(m--){
//		cin>>k>>x>>y;
//		if(k==1){
//			if(x>y) swap(x,y);
//			cout<<query(1,x,y).tmax<<"\n";
//		}else{
//			modify(1,x,y);
//		}
//	}
//}




//#include<bits/stdc++.h>
//using namespace std;
//
//const int N=509;
//int a[N][N];
//int n;
//int main(){
//	int i,j;
//	cin>>n;
//	for(i=1;i<=n;i++){
//		for(j=1;j<=n;j++){
//			cin>>a[i][j];
//		}
//	}
//	int x=1,y=1;
//	for(int k=0;k<n*n;k++){
//		while(1){
//			if(x-1<1||y+1>n) {
//				y++;
//				break;
//			}
//			cout<<a[x][y]<<" ";
//			x--;y++;
//		}
//		while(1){
//			if(x+1>n||y-1<1){
//				x++;
//				break;
//			}
//			cout<<a[x][y]<<" ";
//			x--;y++;
//		}
//	}
//
//}



//#include<bits/stdc++.h>
//using namespace std;
//#define ll long long
//const int N=1e5+9;
//
//int main(){
//	int i,j;
//	ll a,b;
//	int t,tt=1;
//	scanf("%d",&t);
//	while(t--){
//		scanf("%lld%lld",&a,&b);
//		printf("Case #%d:\n",tt++);
//		if(a==b){
//			printf("1\n%lld %lld\n",a,b);
//		}
//		else{
//			printf("2\n%lld %lld\n",a,b);
//			printf("%lld %lld\n",b,a);
//		}
//	}
//}


//#include<bits/stdc++.h>
//using namespace std;
//
//const int N=2e5+9;
//int a[N];
//int n;
//string s;
//int main() {
////	printf("%d %d %d %d",!(0&0),!(0&1),!(1&0),!(1&1));
//	int i,j;
//	int t,tt=0;
//	cin>>t;
//	while(t--) {
//		printf("Case #%d:\n",++tt);
//		int l=1,r=1;
//		cin>>n;
//		while(n--) {
//			cin>>s;
//			if(s[2]=='S') {		//PUSH x
//				int b;
//				cin>>b;
//				int bb=max(l,r);
//				if(bb==l)a[l++]=b;
//				else a[r++]=b;
//				continue;
//			}
//			if(s[2]=='V') {		//REVERSE
//				swap(l,r);
//				continue;
//			}
//			if(s[2]=='P') {		//POP
//				int bb=max(l,r);
//				if(bb==l) l--;
//				else r--;
//				continue;
//			}
////			printf("%d %d\n",l,r);
//			if(l==r){
//				cout<<"Invalid."<<endl;
//				continue;
//			}
//			int b,b3=max(l,r),b2=min(l,r);
//			for(i=b3-1;i>=b2;i--){
//				if(i==b3-1) b=a[b3-1];
//				else {
//					b=!(ba[i]);
//				}
//			}
//			cout<<b<<endl;
//		}
//	}
//}


//#include<bits/stdc++.h>
//using namespace std;
//
//const int N=1009;
//int a[N];
//int n;
//int main(){
//	int i,j;
//	cin>>n;
//	for(i=0;i<n;i++) cin>>a[i];
//	int ans=0;
//	for(i=0;i<n;i++){
//		for(j=i+1;j<n;j++){
//			ans=max(ans,a[i]-a[j]);
//		}
//	}
//	cout<<ans<<endl;
//}

//#include <iostream>
//#include <cstring>
//#include <algorithm>
//
//using namespace std;
//struct no{
//  int a,b,c,i,sum;
//}node[309];
//int n;
//bool cmp(no a,no b){
//	if(a.sum==b.sum){
//		if(a.a==b.a){
//			return a.i<b.i;
//		}
//		else{
//			return a.a>b.a;
//		}
//	}
//	return a.sum>b.sum;
//}
//int main(){
//    int i,j;
//    cin >> n;
//    for(i=1;i<=n;i++){
//    	node[i].i=i;
//        cin >> node[i].a>>node[i].b>>node[i].c;
//        node[i].sum=node[i].a+node[i].b+node[i].c;
//    }
//    sort(node+1,node+n+1,cmp);
//    for(i=1;i<=5;i++){
//    	cout<<node[i].i<<" "<<node[i].sum<<endl;
//	}
//}



//#include<bits/stdc++.h>
//using namespace std;
//#define ll long long
//const int N=1e6+9,mod=1e9+7;
//int n;
//ll a[N],sum[N];
//
//ll  pow(ll x, ll n) {
//    ll res = 1;
//    while (n) {
//        if (n % 2 == 1) res = res * x % mod;
//        x = x * x % mod;
//        n >>= 1;
//    }
//    return res;
//}
//
//int main(){
//	int i,j;
//	for(i=0;i<N;i++){
//		sum[i]=pow(2,i);
//	}
//	cin>>n;
//	for(i=1;i<=n;i++){
//		cin>>a[i];
//	}
//	ll ans=0;
//	for(i=1;i<=n;i++){
//		ans=ans+sum[i-1]*(a[i]-a[n-i+1])%mod;
//	}
//	cout<<ans<<endl;
//}



//#include <cstdio>
//#include <cstring>
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 1000000+9, M = N * 2,K = 21 ; //2^20 >N ,无向图需要 乘2
//
//int n, m;
//int h[N], e[M], ne[M], idx;
//int depth[N], fa[N][K];
//int q[N];
//
//void add(int a, int b) {
//	e[idx] = b, ne[idx] = h[a], h[a] = idx ++ ;
//}
//
//void bfs(int root) {
//	memset(depth, 0x3f, sizeof depth);
//	depth[0] = 0, depth[root] = 1;
//	int hh = 0, tt = 0;
//	q[0] = root;
//	while (hh <= tt) {
//		int t = q[hh ++ ];
//		for (int i = h[t]; ~i; i = ne[i]) {
//			int j = e[i];
//			if (depth[j] > depth[t] + 1) {
//				depth[j] = depth[t] + 1;
//				q[ ++ tt] = j;
//				fa[j][0] = t;
//				for (int k = 1; k <= K-1; k ++ )
//					fa[j][k] = fa[fa[j][k - 1]][k - 1];
//			}
//		}
//	}
//}
//
//int lca(int a, int b) {
//	if (depth[a] < depth[b]) swap(a, b);
//	for (int k = K-1; k >= 0; k -- )
//		if (depth[fa[a][k]] >= depth[b])
//			a = fa[a][k];
//	if (a == b) return a;
//	for (int k = K-1; k >= 0; k -- )
//		if (fa[a][k] != fa[b][k]) {
//			a = fa[a][k];
//			b = fa[b][k];
//		}
//	return fa[a][0];
//}
//
//int main() {
//	scanf("%d", &n);
//	int root = 0;	//作为根节点
//	memset(h, -1, sizeof h);
//
//	for (int i = 0; i < n; i ++ ) {
//		int a, b;
//		scanf("%d%d", &a, &b);
//		if (b == -1) root = a;	//根据输入初始化根节点
//		else add(a, b), add(b, a);	//无向图
//	}
//
//	bfs(root);	//对根节点bfs，预处理，
//
//	scanf("%d", &m);
//	while (m -- ) {
//		int a, b;
//		scanf("%d%d", &a, &b);
//		int p = lca(a, b);
//		if (p == a) puts("1");	//若 x 是 y 的祖先则输出 1，若 y 是 x 的祖先则输出 2，否则输出 0。
//		else if (p == b) puts("2");
//		else puts("0");
//	}
//	return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//const int N=20009;
//int n;       // n是点数，m是边数
//int p[N];       // 并查集的父节点数组
//pair<double,double>pa[N];
//struct Edge {   // 存储边
//	int a, b;
//	double w;
//
//	bool operator< (const Edge &W)const {
//		return w < W.w;
//	}
//} edges[N];
//int len=1;
//int find(int x) {   // 并查集核心操作
//	if (p[x] != x) p[x] = find(p[x]);
//	return p[x];
//}
//void init() {
//	for(int i=1; i<N; i++)
//		p[i]=i;
//}
//double dis(double x,double y,double x1,double y1) {
//	return sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1));
//}
//int main() {
//	int  t;
//	scanf("%d",&t);
//	while(t--) {
//		int n;
//		len=1;
//		init();
//		scanf("%d",&n);
//		for(int i=1; i<=n; i++)
//			scanf("%lf%lf",&pa[i].first,&pa[i].second);
//		for(int i=1; i<=n; i++) {
//			for(int j=i+1; j<=n; j++) {
//				double xx=dis(pa[i].first,pa[i].second,pa[j].first,pa[j].second);
//				if(xx>=10&&xx<=1000)edges[len++]= {i,j,xx};
//			}
//		}
//		double ans=0;
//		int z=0;
//		sort(edges+1,edges+len);
//		for(int i=1; i<len; i++) {
//			int xx,yy;
//			xx=find(edges[i].a);
//			yy=find(edges[i].b);
//			if(xx!=yy) {
//				p[xx]=p[yy];
//				z++;
//				ans+=edges[i].w;
//			}
//		}
//		if(z==n-1&&ans!=0)printf("%.1lf\n",ans*100);
//		else printf("oh!\n");
//	}
//}




//#include<bits/stdc++.h>
//using namespace std;
//
//int t;
//const int N=109,inf=0x3f3f3f3f;
//pair<double,double>pa[N];
//int n, m;       // n是点数，m是边数
//int p[N];       // 并查集的父节点数组
//
//struct Edge {   // 存储边
//	int a, b;
//	double w;
//
//	bool operator< (const Edge &W)const {
//		return w < W.w;
//	}
//} edges[N];
//
//double dis(double x,double y,double x1,double y1) {
//	return sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1));
//}
//
//int find(int x) {   // 并查集核心操作
//	if (p[x] != x) p[x] = find(p[x]);
//	return p[x];
//}
//
//double kru() {
//	sort(edges, edges + m);
//
//	for (int i = 1; i <= n; i ++ ) p[i] = i;    // 初始化并查集
//
//	double res = 0;
//	int cnt = 0;
//	for (int i = 0; i < m; i ++ ) {
//		int a = edges[i].a, b = edges[i].b;
//		double w = edges[i].w;
//		a = find(a), b = find(b);
//		if (a != b) {   // 如果两个连通块不连通，则将这两个连通块合并
//			p[a] = b;
//			res += w;
//			cnt ++ ;
//		}
//	}
//	cout<<cnt<<endl;
//	if (cnt < n - 1) return inf;
//	return res;
//}
//int main() {
//	int i,j;
//	cin>>t;
//	while(t--) {
//		cin>>n;
//		m=n;
//		int len=1;
//		for(int i=1; i<=n; i++)
//			scanf("%lf%lf",&pa[i].first,&pa[i].second);
//		for(int i=0; i<n; i++) {
//			for(int j=i+1; j<n; j++) {
//				double xx=dis(pa[i].first,pa[i].second,pa[j].first,pa[j].second);
//				if(xx>=10&&xx<=1000)edges[len++]= {i,j,xx};
//			}
//		}
//		double t=kru();
//		if(t-inf<1) puts("oh!");
//		else cout<<t<<endl;
//	}
//}


//#include<bits/stdc++.h>
//using namespace std;
//
////AcWing  859  Kruskal算法求最小生成树
//const int N=20009,inf=0x3f3f3f3f;
//int n, m;       // n是点数，m是边数
//int p[N];       // 并查集的父节点数组
//double x[N],y[N];
//double dis(double x,double y,double x1,double y1) {
//	return sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1));
//}
//struct Edge {   // 存储边
//	int a, b;
//	double w;
//	bool operator< (const Edge &W)const {
//		return w < W.w;
//	}
//} edges[N];
//
//int find(int x) {   // 并查集核心操作
//	if (p[x] != x) p[x] = find(p[x]);
//	return p[x];
//}
//
//double kru() {
//	sort(edges, edges + m);
//
//	for (int i = 1; i <= n; i ++ ) p[i] = i;    // 初始化并查集
//
//	double res = 0;
//	int  cnt = 0;
//	for (int i = 0; i < m; i ++ ) {
//		int a = edges[i].a, b = edges[i].b;
//		double  w = edges[i].w;
//
//		a = find(a), b = find(b);
////		printf("%d%d\n",a,b);
//		if (a != b) {   // 如果两个连通块不连通，则将这两个连通块合并
//			p[a] = b;
//			res += w;
//			cnt ++ ;
//		}
//	}
//	cout<<cnt<<endl;
//	if (cnt != n ) return inf;
//	return res;
//}
//int main() {
//	int i,j;
//	int t;
//	cin>>t;
//	while(t--) {
//		cin>>n;
//		m=0;
//		for(i=0; i<n; i++) {
//			cin>>x[i]>>y[i];
//		}
//		for(i=0; i<n; i++) {
//			for(j=i+1;j<n;j++){
//				double w=dis(x[i],y[i],x[j],y[j]);
//				if(w>=10&&w<=1000)edges[m++]={i,j,w};
//			}
//		}
////		for(i=0; i<m; i++){
////			printf("%d %d %lf\n",edges[i].a,edges[i].b,edges[i].w);
////		}
////		cout<<m<<endl;
//		n=m;
//		double t=kru();
////		cout<<t<<endl;
//		if(t==inf) puts("impossible");
//		else cout<<t*100<<endl;
//	}
//
//}


//#include<bits/stdc++.h>
//using namespace std;
//const int N=20009;
//int n;       // n是点数，m是边数
//int p[N];       // 并查集的父节点数组
//pair<double,double>pa[N];
//struct Edge {   // 存储边
//	int a, b;
//	double w;
//
//	bool operator< (const Edge &W)const {
//		return w < W.w;
//	}
//} edges[N];
//int len=1;
//int find(int x) {   // 并查集核心操作
//	if (p[x] != x) p[x] = find(p[x]);
//	return p[x];
//}
//void init() {
//	for(int i=1; i<N; i++)
//		p[i]=i;
//}
//double dis(double x,double y,double x1,double y1) {
//	return sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1));
//}
//int main() {
//	int  t;
//	scanf("%d",&t);
//	while(t--) {
//		int n;
//		len=1;
//		init();
//		scanf("%d",&n);
//		for(int i=1; i<=n; i++)
//			scanf("%lf%lf",&pa[i].first,&pa[i].second);
//		for(int i=1; i<=n; i++) {
//			for(int j=i+1; j<=n; j++) {
//				double xx=dis(pa[i].first,pa[i].second,pa[j].first,pa[j].second);
//				if(xx>=10&&xx<=1000)edges[len++]= {i,j,xx};
//			}
//		}
//		for(int i=1;i<len;i++){
//			printf("%d %d %lf\n",edges[i].a,edges[i].b,edges[i].w);
//		}
//		double ans=0;
//		int z=0;
//		sort(edges+1,edges+len);
//		for(int i=1; i<len; i++) {
//			int xx,yy;
//			xx=find(edges[i].a);
//			yy=find(edges[i].b);
//			if(xx!=yy) {
//				p[xx]=p[yy];
//				z++;
//				ans+=edges[i].w;
//			}
//		}
//		if(z==n-1&&ans!=0)printf("%.1lf\n",ans*100);
//		else printf("oh!\n");
//	}
//}

//// 			hdu1875
//#include <iostream>
//#include <cstring>
//#include <algorithm>
//#include<cmath>
//#include<bits/stdc++.h>
//using namespace std;
//const int N=20009;
//int n, m;
//int p[N];
//double x[N],y[N];
//double dis(double x,double y,double x1,double y1) {
//	return sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1));
//}
//struct Edge {
//	int a, b;
//	double w;
//	bool operator< (const Edge &W)const {
//		return w < W.w;
//	}
//} edges[N];
//
//int find(int x) {
//	if (p[x] != x) p[x] = find(p[x]);
//	return p[x];
//}
//int main() {
//	int i,j;
//	int t;
//	cin>>t;
//	while(t--){
//		cin>>n;
//		m=0;
//		for(i=1;i<=n;i++) p[i]=i;
//		for(i=1;i<=n;i++){
//			cin>>x[i]>>y[i];
//		}
//		for(i=1;i<=n;i++){
//			for(j=i+1;j<=n;j++){
//				double w=dis(x[i],y[i],x[j],y[j]);
//				if(w>=10&&w<=1000) edges[m++]={i,j,w};
//			}
//		}
//		sort(edges,edges+m);
//		double sum=0,cnt=0;
//		for(i=0;i<m;i++){
//			int a=edges[i].a,b=edges[i].b;
//			a=find(a),b=find(b);
//			if(a!=b){
//				p[a]=b;
//				cnt++;
//				sum+=edges[i].w;
//			}
//		}
//		if(cnt==n-1&&sum!=0) printf("%.1lf\n",sum*100);
//		else printf("oh!\n");
//	}
//}



//#include <iostream>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//
//const int N=1e6+9;
//char p[N];
//int ne[N];
//int main() {
//	int i,j;
//	while(scanf("%s",p+1)&&p[1]!='.') {
//		int m=strlen(p+1);
//		for (int i = 2, j = 0; i <= m; i ++ ) {
//			while (j && p[i] != p[j + 1]) j = ne[j];
//			if (p[i] == p[j + 1]) j ++ ;
//			ne[i] = j;
//		}
////		for (i = 1; i <= m; i ++ ) {
////			cout<<ne[i]<<" ";
////		}
////		cout<<endl;
//		if(m%(m-ne[m])==0)printf("%d\n",m/(m-ne[m]));
//		else puts("1");
////		cout<<<<endl;
//	}
//}



//#include<bits/stdc++.h>
//using namespace std;
//#define ll long long
//#define ull unsigned long long
//const int N=1e5+9;
//char p[N];
//int ne[N];
//unordered_map<ull, bool>mm;
//void hash1(string s)
//{
//    ull sum = 0;
//    for (int i = 0; i < s.length(); i++)
//        sum = (sum * 131 + s[i]);
//    mm[sum] = true;
//}
//int main() {
//	int i,j;
//	int t;
//	cin>>t;
//	while(t--) {
//		cin>>p+1;
//		int m=strlen(p+1);
//		for (i = 2, j = 0; i <= m; i ++ ) {
//			while (j && p[i] != p[j + 1]) j = ne[j];
//			if (p[i] == p[j + 1]) j ++ ;
//			ne[i] = j;
//		}
//		string s2="";
//		if(m%(m-ne[m])==0) m=m-ne[m];
//		for(i=1;i<=m;i++) s2+=p[i];
//		s2=p+1;
//		hash1(s);
//	}
//	printf("%d\n",mm.size());
//}

/*
1
abaabaaba
*/


//#include<bits/stdc++.h>
//using namespace std;
//#define ll long long
//const int N=1e5+9;
//int main(){
//	int i,j;
//	int t;
//	scanf("%d",&t);
//	while(t--){
//		int n,a,b;
//		scanf("%d%d%d",&n,&a,&b);
//		if(a==1){
//			if(n%b==1)puts("Yes");
//			else puts("No");
//			continue;
//		}
//		int flag=0,flag2=0;
//		while(n>0){
//			while(1){
//				if(n%a!=0)break;
//				n/=a;
////				cout<<n<<endl;
//			}
//			if(n==1){
//					flag2=1;
//					break;
//				}
//			while(1){
//				if(n%a==0)break;
//				n-=b;
//				if(n==1){
//					flag2=1;
//					break;
//				}
//				if(n<0){
//					flag=1;
//					break;
//				}
//			}
//			if(flag||flag2||n==1)break;
//		}
//		if(flag2&&!flag) puts("Yes");
//		else puts("No");
//	}
//}


//#include<bits/stdc++.h>
//using namespace std;
//const int N=5e5+9;
//int p[N],siz[N];
//int n,m,q;
//int find(int x)
//{
//    if (p[x] != x) p[x] = find(p[x]);
//    return p[x];
//}
//
//int main(){
//	int i,j;
//	cin>>n>>m>>q;
//	for(i=1;i<=n;i++) p[i]=i,siz[i]=1;
//	for(i=0;i<m;i++){
//		int a,b;
//		cin>>a>>b;
//		siz[find(a)]+=siz[find(b)];
//        p[find(b)]=find(a);
//	}
//	int sum=0;
//	for(i=1;i<=n;i++){
////		if(p[i]==i)sum++;
//		cout<<siz[i]<<" ";
//	}
//
//}







//#include <iostream>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//const int N = 1e5+3,inf=0x3f3f3f3f;
//int a[N],h[N],s[N];
//int n;
//int find(int x){
//    int k=(x%N+N)%N;
//    while (h[k]!=inf&&h[k]!=x) {
//        k++;
//        if(k==N)k=0;
//    }
//    return k;
//}
//int main(){
//    int i,j;
//    memset(h, 0x3f3f, sizeof h);
//    cin>>n;
//    for(i=0;i<n;i++) cin>>a[i];
//    int ans=0;
//    for(i=0,j=0;i<n;i++){
//        int k=find(a[i]);
//        h[k]=a[i];
//        int k2;
//        while(h[k]!=inf){
//            k2=find(a[k2]);
//            cout << k2<<endl;
//            h[k2]=inf;
////            k2++;
//        }
//        ans=max(ans,i-j+1);
//    }
//    cout << ans<<endl;
//}






//#include<bits/stdc++.h>
//using namespace std;
//#define ll long long
//#define ull unsigned long long
//unordered_map<ll, int>mm;
//const int N=1e5+3;
//int n,k;
//ll a[N],h[N],s[N];
//void hash(ll x){
//
//}
////int find(ll x){
////    int k=x%N;
////    while(h[k]!=inf&&h[k]!=x){
////        k++;
////        if(k==N)k=0;
////    }
////    return k;
////}
//int main(){
//	cin>>n>>k;
//	for(i=0;i<n;i++) cin>a[i];
//	int ans=0;
//	for(i=0,j=0;i<n;i++){
//		mm[a[i]]++;
//		while(mm[a[i]]>k){
//			mm[a[j]]--;
//			j++;
//		}
//		ans=max(anx,i-j+1);
//	}
//	cout<<ans<<endl;
//}


//#include<bits/stdc++.h>
//using namespace std;
//#define ll long long
//int main(){
//	int t;
//	cin>>t;
//	while(t--){
//		ll a,b;
//		cin>>a>>b;
//		if(a==b){
//			printf("0 0\n");
//			continue;
//		}
//		if(a<b)swap(a,b);
//		ll m=a-b;
//		printf("%lld %lld\n",a-b,min(b-b/m*m,(b/m+1)*m-b));
//	}
//}



//#include<bits/stdc++.h>
//using namespace std;
//#define ll long long
//ll sum;
//int main(){
//	int i,j;
//	int t;
//	scanf("%d",&t);
//	while(t--){
//		sum=0;
//		int n;
//		scanf("%d",&n);
//		int a;
//		for(i=0;i<n;i++){
//			scanf("%d",&a);
//			sum+=a;
//		}
//		ll m=sum%n;
//		printf("%lld\n",m*(n-m));
//	}
//}






//#include<cstdio>
//int main()
//{
//    int T;
//    scanf("%d",&T);
//    while(T--){
//        int n,k;
//        scanf("%d%d",&n,&k);
//        int cur=0,t;
//        for(int i=0;i<n;i++){
//            printf("%d\n",i^cur);
////            fflush(stdout);
//            cur^=(i^cur);
//            printf("cur=%d\n",cur);
//            scanf("%d",&t);
//            if(t==1) break;
//        }
//    }
//    return 0;
//}



//#include <iostream>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//typedef pair<int, int> pii;
//
//const int N = 2e6+9;
//pii a[N];
//int sum[N];
//int n;
//
//int main(){
//    int i,j;
//    scanf("%d", &n);
//    for ( i = 1; i <= n; i ++ ) {
//        int x;
//        scanf("%d", &x);
//        sum[i]=sum[i-1]+x;
//        a[i]={sum[i],i};
//    }
//    sort(a+1,a+n+1,greater<pii>() );
////     sort(a+1,a+n+1);
////     for ( i = 1; i <= n; i ++ ) {
////         printf("%d %d\n",a[i].first,a[i].second);
////     }
//    int ans=0,cnt=0,ji=0;
//    for ( i = 0; i <= n; i ++ ) {
//        if(a[i].second>a[ji].second)
//            ji=a[i].second;
//        else if(a[i].first<a[ji].first)
//                ans=max(ans,a[ji].second-a[i].second);
//    }
//    printf("%d\n",ans);
//}



//#include<bits/stdc++.h>
//using namespace std;
//struct node {
//	int sum,v;
//};
//bool cmp1(node x,node y) {
//    if(x.sum==y.sum)
//        return x.v>y.v;
//	return x.sum>y.sum;
//}
//int main() {
//	int n,i,j,ans=0;
//	cin>>n;
//	node p[n+7];
//	p[0].sum=0;
//	p[0].v=0;
//	for(i=1; i<=n; i++) {
//		int t;
//		cin>>t;
//		p[i].sum=t+p[i-1].sum;
//		p[i].v=i;
//	}
//	sort(p,p+1+n,cmp1);
//	for(i=0,j=0; i<n; i++) {
//		if(p[i].v>p[j].v)
//		    j=i;
//		else if(p[j].sum>p[i].sum)
//            ans=max(ans,p[j].v-p[i].v);
//	}
//	cout<<ans<<endl;
//}



//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//const int maxn=2e6+7;
//int n;
//struct node{
//    int pos,num;
//}p[maxn];
//bool cmp(node a,node b){
//    if(a.num==b.num) return a.pos>b.pos;
//    return a.num<b.num;
//}
//
//int main(){
//    scanf("%d",&n);
//    for(int i=1;i<=n;i++){
//        int x;
//        scanf("%d",&x);
//        p[i].num=p[i-1].num+x;
//        p[i].pos=i;
//    }
//    n++;
//    int minpos=n;
//    int ans=0;
//    sort(p+1,p+n+1,cmp);
//    for(int i=1;i<=n;i++){
//        printf("%d %d\n",p[i].num,p[i].pos);
//	}
//
//    for(int i=1;i<=n;i++){
//        minpos=min(minpos,p[i].pos);
//        if(minpos<p[i].pos)
//        ans=max(ans,p[i].pos-minpos);
//    }
//    printf("%d\n",ans);
//    return 0;
//}






//#include <iostream>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//typedef long long ll;
//
//const int N =200 ,mod=1000000007;
//ll dp[N][N];
//int k,l;
//ll ans;
//
//
//int main(){
//    int i,j,x,y;
//    scanf("%d%d", &k, &l);
//    for(i=1;i<k;i++) dp[1][i]=1;
//
//    for(i=2;i<=l;i++){
//        for(x=0;x<k;x++){
//            for(y=0;y<k;y++){
//                if(x+1!=y&&y+1!=x){
//                    dp[i][x]+=dp[i-1][y];
//                    dp[i][x]%=mod;
//                }
//            }
//        }
//    }
////    for(i=0;i<k;i++)printf("%d ",dp[l][i]);
//    for(i=0;i<k;i++) ans=(ans+dp[l][i])%mod;
//
//    printf("%lld",ans);
//
//}






//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<cmath>
//#define MAXN 1000
//typedef long long ll;
//int n,a[MAXN],check[MAXN][MAXN];
//int main() {
//	scanf("%d",&n);
//	int k=pow(2,n);
//	for(int i=1; i<k; i++) {
//		printf("<%d>",i);
//		memset(a,0,sizeof(a));
//		for(int j=1; j<=k; j++) {
//			if(!a[j]) {
//				int t=j+1;
//				while(1) {
//					if(!check[j][t]&&!a[t]) {
//						check[j][t]=1;
//						printf("%d-%d ",j,t);
//						break;
//					}
//					t++;
//				}
//				a[j]=a[t]=1;
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}





//#include<bits/stdc++.h>
//using namespace std;
//
//const int N=1e5+9;
//
//int main(){
//	int i,j;
//	int cnt=0;
//	for(i=11;i<100;i++){
//		int flag=0;
//		if((i%10+i/10)%3==0)flag=1;
//		int m=i;
//		while(m){
//			int mm=m%10;
//			if(mm==0||mm==3||mm==6||mm==9) flag=1;
//			m/=10;
//		}
//		if(flag) cnt++;
////		printf("%d ",i);
//	}
//	cout<<cnt;
//}

//#include<bits/stdc++.h>
//using namespace std;
//
//const int N=1e5+9;
//
//int main(){
//	int i,j;
//	int cnt=0;
////	for(i=1;i<=100;i++){
//	i=10;
//		int flag=0,flag1=0;
//		int m=i;
//		while(m){
//			int mm=m%10%3;
//			if(mm==0) flag=1;
//			if(mm==1)flag1=1;
//			m/=10;
//		}
//		if(flag)cout<<i;
//		if(flag) cnt++;
////	}
////	cout<<cnt;
//}



//#include<bits/stdc++.h>
//using namespace std;
//#define ll long long
//const int N=1e5+9;
//int a[]={1, 1,2,4,5,7,8,11,14,17,22,25,28,41,44,47,52,55,58,71,74,77,82,85,88};//25
//int main(){
//	int i,j;
//	int t;
//	cin>>t;
//	while(t--){
//		ll l,r;
//		cin>>l>>r;
//		if(r>100){
//			if(l>100){
//				printf("%d\n",r-l+1);
//				continue;
//			}else{
//				for(i=1;i<=24;i++){
//					if(l<=a[i]) break;
//				}
//				printf("%d\n",r-l+25-i);
//				continue;
//			}
//		}
//	}
//
//}

//#include <iostream>
//#include <cstring>
//using namespace std;
//typedef long long ll;
//int t,tot,a[20];
//ll l,r,dp[20][3][3][3][3][2][2];
//ll dfs(int p,int cnt0,int cnt1,int cnt2,int s,int pre,int lim){
//    if(p==0){
//        if(cnt0==2||cnt1==2||cnt2==2) return 1;
//        return 0;
//    }
//    if(dp[p][cnt0][cnt1][cnt2][s][pre][lim]!=-1) return dp[p][cnt0][cnt1][cnt2][s][pre][lim];
//    int up=lim? a[p]:9;
//    ll ans=0;
//    for(int i=0;i<=up;i++){
//         if(pre&&i==0){
//            ans+=dfs(p-1,cnt0,cnt1,cnt2,(s+i)%3,pre&&i==0,lim&&i==up);
//         }else{
//            if(cnt0<2&&(s+i)%3==0){
//                ans+=dfs(p-1,cnt0+1,cnt1,cnt2,(s+i)%3,pre&&i==0,lim&&i==up);
//            }else if(cnt1<2&&(s+i)%3==1){
//                ans+=dfs(p-1,cnt0,cnt1+1,cnt2,(s+i)%3,pre&&i==0,lim&&i==up);
//            }else if(cnt2<2&&(s+i)%3==2){
//                ans+=dfs(p-1,cnt0,cnt1,cnt2+1,(s+i)%3,pre&&i==0,lim&&i==up);
//            }else{
//                ans+=dfs(p-1,cnt0,cnt1,cnt2,(s+i)%3,pre&&i==0,lim&&i==up);
//            }
//         }
//    }
//    return dp[p][cnt0][cnt1][cnt2][s][pre][lim]=ans;
//}
//ll solve(ll x){
//    int tot=0;
//    memset(dp,-1,sizeof dp);
//    while(x){
//        a[++tot]=x%10;
//        x/=10;
//    }
//    return dfs(tot,1,0,0,0,1,1);
//}
//int main(){
//    scanf("%d",&t);
//    while(t--){
//        scanf("%lld %lld",&l,&r);
//        printf("%lld\n",solve(r)-solve(l-1));
//    }
//}



//#include<bits/stdc++.h>
//using namespace std;
//const int N=500000+9;
//int n;
//int a[N];
//int v[N];
//set <int> s;
//int main(){
//	int i,j;
//	scanf("%d",&n);
//	for(i=1;i<=n;i++) scanf("%d",&a[i]);
//	sort(a+1,a+n+1);
//	int len=1;
//	for(i=n;i<=a[n];i++){
//		for(j=len;j<=n;j++){
//			if(a[j]>i)break;
//		}
////		len=j-1;
//		for(i=)
//	}
//}



//#include <iostream>
//#include <cstring>
//#include <algorithm>
//#include <queue>
//
//using namespace std;
//const int N = 30;
//
//char a[N][N],b[N][N];
//int vis[N][N],vis2[N][N];
//int n=20;
//
//int dx[4] =  {1, 0, 0, -1}, dy[4] =  {0, -1, 1, 0};
//int dx2[4] = {1, 0, 0, -1}, dy2[4] = {0, 1, -1, 0};
//
//char pr[5]="DLRU";
//
//struct node {
//	int x,y;
//};
//
//bool check1(int x,int y) {
//	if(vis[x][y]&&a[x][y]=='.')return true;
//}
//
//bool check2(int x,int y) {
//	if(vis2[x][y]&&b[x][y]=='.')return true;
//}
//
//bool check3(int x,int y) {
//	if(x>=1&&x<=n&&y>=1&&y<=n)return true;
//}
//
//void bfs() {
//	queue<node>q,q2;
//	q.push({20,20});
//	q2.push({20,1});
//	vis[20][20]=1;
//	vis2[20][1]=1;
//	while (q.size()) {
//		node p=q.front();
//		q.pop();
////         node p2=q2.front();q2.pop();
//		int x=p.x,y=p.y;
////         int x2=p2.x,y2=p2.y;
//		// if(p.x==1&&p.y==20 /*&& p2.x==1&&p2.y==1*/){
//		//     return ;
//		// }
//		for (int i = 0; i < 4; i ++ ) {
//			int tx=x+dx[i],ty=y+dy[i];
//			int tx2=x2+dx2[i],ty2=y2+dy2[i];
//			// if(tx>=1&&tx<=n&&ty>=1&&ty<=n){
//			//     if(!vis[tx][ty]&&a[tx][ty]=='.'){
//			//         vis[tx][ty]=vis[x][y]+1;
//			//         q.push({tx,ty});
//			//     }
//			// }
//
//			if(check3(tx,ty))
//				if(check2(tx2,ty2)) {
//					vis2[tx2][ty2]=vis2[x2][y2] +1;
//					q2.push({tx2,ty2});
//
//					vis[tx][ty]=vis[x][y]+1;
//					q.push({tx,ty});
//				} else {
//					if(check3(tx2,ty2))
//						if(check2(tx2,ty2)) {
//							vis2[tx2][ty2]=vis2[x2][y2] +1;
//							q2.push({tx2,ty2});
//						}
//				}
//			else {
//				if(check3(tx2,ty2))
//					if(check(tx2,ty2)) {
//						vis2[tx2][ty2]=vis2[x2][y2] +1;
//						q2.push({tx2,ty2});
//					}
//			}
//
//		}
//
//	}
//}
//
//int main() {
//	int i,j;
//	for (int i = 1; i <= n; i ++ ) {
//		scanf("%s", a[i]+1);
//		scanf("%s", b[i]+1);
//	}
//	bfs();
//	// for (int i = 1; i <= n; i ++ ){
//	//     for (int j = 1; j <= n; j ++ ){
//	//         cout<<vis[i][j]<<" ";
//	//     }puts("");
//	// }
//	cout<<max(vis[1][20],vis2[1][1])<<endl;
//}




//#include <iostream>
//#include <cstring>
//#include <algorithm>
//#include <queue>
//
//using namespace std;
//const int N = 30;
//
//char a[N][N],b[N][N];
//int vis[N][N],vis2[N][N];
//int n=20;
//
//int dx[4] =  {1, 0, 0, -1}, dy[4] =  {0, -1, 1, 0};
//int dx2[4] = {1, 0, 0, -1}, dy2[4] = {0, 1, -1, 0};
//
//char pr[5]="DLRU";
//
//struct node {
//	int x,y;
//};
//
//bool check1(int x,int y) {
//	if(vis[x][y]&&a[x][y]=='.')return true;
//}
//
//bool check2(int x,int y) {
//	if(vis2[x][y]&&b[x][y]=='.')return true;
//}
//
//bool check3(int x,int y) {
//	if(x>=1&&x<=n&&y>=1&&y<=n)return true;
//}
//
//void bfs() {
//	queue<node>q,q2;
//	q.push({20,20});
//	q2.push({20,1});
//	vis[20][20]=1;
//	vis2[20][1]=1;
//	while (q.size()&&q2.size()) {
//		node p=q.front();
//		q.pop();
//		node p2=q2.front();
//		q2.pop();
//		int x=p.x,y=p.y;
//		int x2=p2.x,y2=p2.y;
//// 		if(p.x==1&&p.y==20 && p2.x==1&&p2.y==1){
//// 		    return ;
//// 		}
//		// printf("%d %d\n",x,y);
//		for (int i = 0; i < 4; i ++ ) {
//			int tx=x+dx[i],ty=y+dy[i];
//			int tx2=x2+dx2[i],ty2=y2+dy2[i];
//			printf("%d %d %d %d\n",tx,ty,tx2,ty2);
//			if(!check3(tx,ty)|| !check3(tx2,ty2)) continue;
//			if(check1(tx,ty)) {
//				if(check2(tx2,ty2)) {
//					vis2[tx2][ty2]=vis2[x2][y2] +1;
//					q2.push({tx2,ty2});
//
//					vis[tx][ty]=vis[x][y]+1;
//					q.push({tx,ty});
//				} else {
//					vis[tx][ty]=vis[x][y]+1;
//					q.push({tx,ty});
//				}
//			} else {
//				if(check2(tx2,ty2)) {
//					vis2[tx2][ty2]=vis2[x2][y2] +1;
//					q2.push({tx2,ty2});
//				}
//			}
//
//
//		}
//
//	}
//}
//
//int main() {
//	int i,j;
//	for (int i = 1; i <= n; i ++ ) {
//		scanf("%s", a[i]+1);
//		scanf("%s", b[i]+1);
//	}
//	bfs();
//	for (int i = 1; i <= n; i ++ ) {
//		for (int j = 1; j <= n; j ++ ) {
//			cout<<vis[i][j]<<" ";
//		}
//		puts("");
//	}
//	cout<<max(vis[1][20],vis2[1][1])<<endl;
//}



//#include <iostream>
//#include <cstring>
//#include <algorithm>
//#include <queue>
//
//using namespace std;
//const int N = 30;
//
//char a[N][N],b[N][N];
//int vis[N][N],vis2[N][N];
//int n=20;
//
//int dx[4] =  {1, 0, 0, -1}, dy[4] =  {0, -1, 1, 0};
//int dx2[4] = {1, 0, 0, -1}, dy2[4] = {0, 1, -1, 0};
//
//char pr[5]="DLRU";
//
//struct node {
//	int x,y;
//};
//
//bool check1(int x,int y) {
//	if(vis[x][y]==0&&a[x][y]=='.')return true;
//	return false;
//}
//
//bool check2(int x,int y) {
//	if(vis2[x][y]==0&&b[x][y]=='.')return true;
//	return false;
//}
//
//bool check3(int x,int y) {
//	if(x>=1&&x<=n&&y>=1&&y<=n)return true;
//	return false;
//}
//
//void bfs() {
//	queue<node>q,q2;
//	q.push({20,20});
//	q2.push({20,1});
//	vis[20][20]=1;
//	vis2[20][1]=1;
//	while (q.size() && q2.size()) {
//		node p=q.front();q.pop();
//		node p2=q2.front();q2.pop();
//		int x=p.x,y=p.y;
//		int x2=p2.x,y2=p2.y;
// 		if(p.x==1&&p.y==20 && p2.x==1&&p2.y==1){
// 		    return ;
// 		}
//		// printf("%d %d\n",x,y);
//		for (int i = 0; i < 4; i ++ ) {
//			int tx=x+dx[i],ty=y+dy[i];
//			int tx2=x2+dx2[i],ty2=y2+dy2[i];
//
//			if(!check3(tx,ty) || !check3(tx2,ty2)) continue;
////			printf("%d %d %d %d\n",tx,ty,tx2,ty2);
//			if(check1(tx,ty)) {
//				if(check2(tx2,ty2)) {//同时
//					vis2[tx2][ty2]=vis2[x2][y2] +1;
//					q2.push({tx2,ty2});
//					vis[tx][ty]=vis[x][y]+1;
//					q.push({tx,ty});
//				} else {//第1个走
////				printf("%d %d %d %d\n",tx,ty,tx2,ty2);
//					vis[tx][ty]=vis[x][y]+1;
////					if(a[tx][ty]=='#'&&vis[tx][ty]==0)continue;
//					q.push({tx,ty});
//				}
//			}
//			else {
////				printf("%d %d %d %d\n",tx,ty,tx2,ty2);
//				if(check2(tx2,ty2)) {//第2个走
//					vis2[tx2][ty2]=vis2[x2][y2] +1;
////					if(b[tx2][ty2]=='#'&&vis2[tx2][ty2]==0)continue;
//					q2.push({tx2,ty2});
//				}
//			}
//
//
//		}
//
//	}
//}
//
//int main() {
//	int i,j;
//	for (int i = 1; i <= n; i ++ ) {
//		scanf("%s", a[i]+1);
//		scanf("%s", b[i]+1);
//	}
//	bfs();
//	for (int i = 1; i <= n; i ++ ) {
//		for (int j = 1; j <= n; j ++ ) {
//			printf("%2d ",vis[i][j]);
//		}
//		puts("");
//	}
//	cout<<max(vis[1][20],vis2[1][1])<<endl;
//}







//#include <iostream>
//#include <cstring>
//#include <algorithm>
//#include <map>
//#include <queue>
//
//using namespace std;
//
//map<string,int> d;
//queue<string>q;
//int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};
//
//
//int bfs(string s) {
//	string end="12345678x";
//
//	d[s]=0;
//	q.push(s);
//	while(q.size()) {
//		string t=q.front();
//		q.pop();
////		cout << t <<endl;
//		int dis=d[t];
//		if(t==end) return dis;
//
//		int k=t.find('x');
//
//		int x=k/3,y=k%3;
//
//		for (int i = 0; i < 4; i ++ ) {
//
//			int xx=x+dx[i],yy=y+dy[i];
//
//			if(xx>=0&&xx<3 &&yy>=0&&yy<3){
//                swap(t[k],t[xx*3+yy]);
//                if(!d.count(t)){
//                    d[t]=dis+1;
//                    q.push(t);
//                }
//                swap(t[k],t[xx*3+yy]);
//            }
//
//		}
//	}
//	 return -1;
//}
//
//int main() {
//	string s,c;
//	for (int i = 0; i < 9; i ++ ) {
//		cin >> c;
//		s+=c;
//	}
//	cout << bfs(s) <<endl;
//
//	// puts("");
//	// for(auto m:d){
//	//     cout << m.first;
//	//     printf(" %d\n",m.second);
//	// }
//
//}




//#include<iostream>
//#include<string>
//#include<map>
//#include<algorithm>
//#include<set>
//using namespace std;
//string subop;
//string K,t;
//string op;
//string name;
//struct plan{
//	int years;
//	int month;
//	int day;
//	int hours;
//	int minutes;
//	int length;
//	friend bool operator <(plan a,plan b){
//		if(a.years<b.years) return true;
//		else if(a.years==b.years){
//			if(a.month<b.month) return true;
//			else if(a.month==b.month){
//				if(a.day<b.day) return true;
//				else if(a.day==b.day){
//					if(a.hours<b.hours) return true;
//					else if(a.hours==b.hours){
//						if(a.minutes<b.minutes) return true;
//						else return false;
//					}
//					else return false;
//				}
//				else return false;
//			}
//			else return false;
//		}
//		else return false;
//	}
//}Time_temp;
//struct info{
//	string platform;
//	string url;
//	string note;
//	string state;
//	set<plan> P;
//}temp;
//map<string,info> Vlist;
//map<string,info>::iterator it;
//set<string> DD;
//set<string> SH;
//set<string> ME;
//void VUP(){
//	while(cin>>subop){
//		if(subop=="add"){
//			cin>>name;
//			cin>>temp.platform;
//			cin>>temp.url;
//			cin>>temp.note;
//			cin>>temp.state;
//			if(Vlist.find(name)==Vlist.end()){
//				cout<<"VUP_addY\n";
//				Vlist[name]=temp;
//				if(temp.state=="DD") DD.insert(name);
//				else if(temp.state=="Shielding_for") SH.insert(name);
//				else if(temp.state=="Memorialize") ME.insert(name);
//			}
//			else cout<<"VUP_addN\n";
//		}
//
//
//
//		else if(subop=="alter"){
//			cin>>name>>K>>t;
//			it=Vlist.find(name);
//			if(it!=Vlist.end()){
//				if(K=="live_broadcasting_platform"){
//					Vlist[name].platform=t;
//					cout<<"VUP_alterY\n";
//				}
//				else if(K=="url"){
//					Vlist[name].url=t;
//					cout<<"VUP_alterY\n";
//				}
//				else if(K=="note"){
//					Vlist[name].note=t;
//					cout<<"VUP_alterY\n";
//				}
//				else if(K=="state"){
//					if(t=="DD") DD.insert(name);
//					else if(t=="Shielding_for") SH.insert(name);
//					else if(t=="Memorialize") ME.insert(name);
//					if(Vlist[name].state=="DD") DD.erase(name);
//					else if(Vlist[name].state=="Shielding_for") SH.erase(name);
//					else if(Vlist[name].state=="Memorialize") ME.erase(name);
//					Vlist[name].state=t;
//					cout<<"VUP_alterY\n";
//				}
//				else if(K=="name"){
//					if(Vlist[name].state=="DD"){
//						DD.erase(name);
//						DD.insert(t);
//					}
//					else if(Vlist[name].state=="Shielding_for"){
//						SH.erase(name);
//						SH.insert(t);
//					}
//					else if(Vlist[name].state=="Memorialize"){
//						ME.erase(name);
//						ME.insert(t);
//					}
//					Vlist[t]=it->second;
//					Vlist.erase(it);
//					cout<<"VUP_alterY\n";
//				}
//				else cout<<"error\n";
//			}
//			else cout<<"VUP_alterN\n";
//		}
//
//
//
//		else if(subop=="delete"){
//			cin>>name;
//			it=Vlist.find(name);
//			if(it!=Vlist.end()){
//				cout<<"VUP_deleteY\n";
//				if(Vlist[name].state=="DD") DD.erase(name);
//				else if(Vlist[name].state=="Shielding_for") SH.erase(name);
//				else if(Vlist[name].state=="Memorialize") ME.erase(name);
//				Vlist.erase(it);
//			}
//			else cout<<"VUP_deleteN\n";
//		}
//
//
//
//		else if(subop=="query"){
//			cin>>name;
//			it=Vlist.find(name);
//			if(it!=Vlist.end()){
//				cout<<"name:"<<name<<"\n";
//				cout<<"live_broadcasting_platform:"<<Vlist[name].platform<<"\n";
//				cout<<"url:"<<Vlist[name].url<<"\n";
//				cout<<"note:"<<Vlist[name].note<<"\n";
//				cout<<"state:"<<Vlist[name].state<<"\n";
//			}
//			else cout<<"VUP_queryN\n";
//		}
//
//
//
//		else if(subop=="add_Live_plan"){
//			cin>>name;
//			cin>>Time_temp.years>>Time_temp.month>>Time_temp.day>>Time_temp.hours>>Time_temp.minutes>>Time_temp.length;
//			it=Vlist.find(name);
//			if(it!=Vlist.end()){
//				int len=Vlist[name].P.size();
//				Vlist[name].P.insert(Time_temp);
//				if(Vlist[name].P.size()==len) cout<<"VUP_add_Live_planN\n";
//				else cout<<"VUP_add_Live_planY\n";
//			}
//			else cout<<"VUP_add_Live_planN\n";
//		}
//		else if(subop=="next") break;
//		else cout<<"error\n";
//	}
//}
//void DDL(){
//	cout<<"DD_list:\n";
//	if(DD.empty()) cout<<"DD_listN\n";
//	else{
//		for(set<string>::iterator sit=DD.begin();sit!=DD.end();++sit){
//			cout<<"name:"<<*sit<<"\n";
//			cout<<"live_broadcasting_platform:"<<Vlist[*sit].platform<<"\n";
//			cout<<"url:"<<Vlist[*sit].url<<"\n";
//			cout<<"note:"<<Vlist[*sit].note<<"\n\n";
//		}
//	}
//}
//void SHL(){
//	cout<<"Shielding_for_list:\n";
//	if(SH.empty()) cout<<"Shielding_for_listN\n";
//	else{
//		for(set<string>::iterator sit=SH.begin();sit!=SH.end();++sit){
//			cout<<"name:"<<*sit<<"\n";
//			cout<<"live_broadcasting_platform:"<<Vlist[*sit].platform<<"\n";
//			cout<<"url:"<<Vlist[*sit].url<<"\n";
//			cout<<"note:"<<Vlist[*sit].note<<"\n\n";
//		}
//	}
//}
//void MEL(){
//	cout<<"Memorialize_list:\n";
//	if(SH.empty()) cout<<"Memorialize_listN\n";
//	else{
//		for(set<string>::iterator sit=ME.begin();sit!=ME.end();++sit){
//			cout<<"name:"<<*sit<<"\n";
//			cout<<"live_broadcasting_platform:"<<Vlist[*sit].platform<<"\n";
//			cout<<"url:"<<Vlist[*sit].url<<"\n";
//			cout<<"note:"<<Vlist[*sit].note<<"\n\n";
//		}
//	}
//}
//void DDQ(){
//	int sign=0;
//	cout<<"Query_Live_plan:\n";
//	if(DD.empty()) cout<<"Query_Live_planN\n";
//	else{
//		for(set<string>::iterator sit=DD.begin();sit!=DD.end();++sit){
//			for(set<plan>::iterator ssit=Vlist[*sit].P.begin();ssit!=Vlist[*sit].P.end();++ssit){
//				cout<<"name:"<<*sit<<"\n";
//				cout<<"live_broadcasting_platform:"<<Vlist[*sit].platform<<"\n";
//				cout<<"url:"<<Vlist[*sit].url<<"\n";
//				cout<<"years:"<<ssit->years<<"\n";
//				cout<<"month:"<<ssit->month<<"\n";
//				cout<<"day:"<<ssit->day<<"\n";
//				cout<<"hours:"<<ssit->hours<<"\n";
//				cout<<"minutes:"<<ssit->minutes<<"\n";
//				cout<<"The_live_time:"<<ssit->length<<"\n\n";
//				sign=1;
//			}
//		}
//		if(!sign) cout<<"Query_Live_planN\n";
//	}
//}
//void SPQ(){
//	int sign=0;
//	cin>>name;
//	cout<<"Specify_query_Live_plan:\n";
//	if(Vlist.find(name)!=Vlist.end()){
//		for(set<plan>::iterator sit=Vlist[name].P.begin();sit!=Vlist[name].P.end();++sit){
//			cout<<"name:"<<name<<"\n";
//			cout<<"live_broadcasting_platform:"<<Vlist[name].platform<<"\n";
//			cout<<"url:"<<Vlist[name].url<<"\n";
//			cout<<"state:"<<Vlist[name].state<<"\n";
//			cout<<"years:"<<sit->years<<"\n";
//			cout<<"month:"<<sit->month<<"\n";
//			cout<<"day:"<<sit->day<<"\n";
//			cout<<"hours:"<<sit->hours<<"\n";
//			cout<<"minutes:"<<sit->minutes<<"\n";
//			cout<<"The_live_time:"<<sit->length<<"\n\n";
//			sign=1;
//		}
//		if(!sign) cout<<"Specify_query_Live_planN\n";
//	}
//	else cout<<"Specify_query_Live_planN\n";
//}
//int main(){
////	ios::sync_with_stdio(false);
////	cin.tie(0);
////	cout.tie(0);
//	while(cin>>op){
//		if(op=="The_next_time_a_certain") break;
//		else if(op=="VUP") VUP();
//		else if(op=="DD_list") DDL();
//		else if(op=="Shielding_for_list") SHL();
//		else if(op=="Memorialize_list") MEL();
//		else if(op=="Query_Live_plan") DDQ();
//		else if(op=="Specify_query_Live_plan") SPQ();
//		else cout<<"error\n";
//	}
//	return 0;
//}



//#include<bits/stdc++.h>
//
//using namespace std;
//
//typedef long long ll;
//
//const int N = 1e7+9;
//
//// const int M=1e7+10;
//int primes[N], cnt;     // primes[]存储所有素数
//bool st[N];         // st[x]存储x是否被筛掉
//
//void get_primes(int n)
//{
//    for (int i = 2; i <= n; i ++ )
//    {
//        if (!st[i]) primes[cnt ++ ] = i;
//        for (int j = 0; primes[j] <= n / i; j ++ )
//        {
//            st[primes[j] * i] = true;
//            if (i % primes[j] == 0) break;
//        }
//    }
//}
//
//
//ll a[N];
//
//int main(){
//    int t,n;
//    scanf("%d", &t);
//    get_primes(N);
//    a[2]=0;
//    for(int i=3;i<N;i++){
//        if(st[i]){ //????
//            a[i]=a[i-1]+i;
//        }else{
//            if(i!=3)
//			a[i]=i*2+a[i-1];
//            else a[i]=6;
//        }
//    }
//
//    while (t -- ){
//        scanf("%d", &n);
//        printf("%lld\n",a[n]);
//    }
//}




//#include<bits/stdc++.h>
//
//using namespace std;
//
//typedef long long ll;
//
//const int N = 1e7+9;
//
//int primes[N], cnt;
//bool st[N];
//
//void get_primes(int n)
//{
//    for (int i = 2; i <= n; i ++ )
//    {
//        if (!st[i]) primes[cnt ++ ] = i;
//        for (int j = 0; primes[j] <= n / i; j ++ )
//        {
//            st[primes[j] * i] = true;
//            if (i % primes[j] == 0) break;
//        }
//    }
//}
//
//
//ll a[N];
//
//int main(){
//    int t,n;
//    scanf("%d", &t);
//    get_primes(N);
//    a[2]=0;
//    for(int i=3;i<N;i++){
//        if(st[i]){
//            a[i]=a[i-1]+i;
//        }else{
//            if(i!=3)a[i]=i*2+a[i-1];
//            else a[i]=6;
//        }
//    }
//
//    while (t -- ){
//        scanf("%d", &n);
//        printf("%lld\n",a[n]);
//    }
//}






//
//#include <iostream>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//
//const int N = 1e5+9,M=30*1e5+9;
//
//int a[N],son[M][2],idx;
//int n,k;
//
//void insert(int x) {
//	int p=0;
//	for(int i=30; i>=0; i--) {
//		int &s=son[p][x>>i&1];
//		if(!s) s=++idx;		//创建新节点
//		p=s;	//向下传递
//	}
//}
//
//int query(int x) {
//	int res=0,p=0;		//res为最大异或和
//	for(int i=30; i>=0; i--) {
//		int s=x>>i&1;
//		if(son[p][!s]) {	//若与s相反的节点存在 即异或最大
//			res+=1<<i;		//计算最大异或
//			p=son[p][!s];	//向下传递
//		} else p=son[p][s];	//往另一侧走
//	}
//	return res;
//}
//
//int main() {
//	int i,j;
//	int t;
//	scanf("%d",&t);
//	while(t--) {
//		scanf("%d%d", &n,&k);
//		for(i=0; i<n; i++) {
//			scanf("%d", &a[i]);
//			insert(a[i]);
//		}
//		int ans=0;
//		for(i=0; i<n ; i ++) {
//			if(query(a[i])>=k){
//				ans=k;
//				break;
//			}
//		}
//		cout<<ans<<endl;
//	}
//}





//#include <iostream>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//
//
//const int N = 2e3+9;
//
//int a[N][N],b[N][N],sum[N][N];
//int stk[N][N];
//int n,m;
//
//int ans[N][N];
//
//int main() {
//	int t;
//	scanf("%d", &t);
//	while (t -- ) {
//		scanf("%d%d", &n, &m);
//		for (int i = 0; i <= n; i ++ ) {
//			for (int j = 1; j <= m; j ++ ) {
//				sum[i][j]=0;
//			}
//		}
//		for (int i = 1; i <= n; i ++ ) {
//			for (int j = 1; j <= m; j ++ ) {
//				scanf("%d", &a[i][j]);
//				b[i][j]=a[i][j]-a[i-1][j];
//			}
//		}
//		for (int i = 1; i <= n; i ++ ) {
//			for (int j = 1; j <= m; j ++ ) {
//				if(b[i][j]>=0) {
//					a[i][j]=1;
//				} else {
//					a[i][j]=0;
//				}
//				printf("%d ",a[i][j]);
//			}
//			puts("");
//		}
//		for( int i = 1; i <= n; i++ )
//			for( int j = 1; j <= m; j++ )
//				sum[i][j] = a[i][j]+sum[i-1][j];
//
//		for (int i = 1; i <= n; i ++ ) {
//			int tt = 0;
//			for(int j = 1; j <= m; j++ ) {
//				while (tt && stk[tt]>=sum[i][j] ) tt --;
//				if(tt)ans[i][j]=stk[tt];
//				else ans[i][j]=-1;
//				stk[ ++ tt] = sum[i][j];
//			}
//		}
//		int res=0;
//		for (int i = 1; i <= n; i ++ )
//			for (int j = 1; j <= m; j ++ ) {
//				res=max(res,sum[n][i]);
//			}
//		printf("%d\n",res);
//		// for (int j = 1; j <= m; j ++ ){
//		//     for (int i = 1; i <= n; i ++ ){
//
//		//     }
//		// }
//
//	}
//}







//#include <iostream>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//
//
//const int N = 2e3+9;
//
//int a[N][N],b[N][N],sum[N][N];
//int stk[N];
//int n,m;
//
//int ans[N][N];
//
//int main() {
//	int t;
//	scanf("%d", &t);
//	while (t -- ) {
//		scanf("%d%d", &n, &m);
//		for (int i = 0; i <= n; i ++ ) {
//			for (int j = 1; j <= m; j ++ ) {
//				sum[i][j]=0;
//			}
//		}
//		for (int i = 1; i <= n; i ++ ) {
//			for (int j = 1; j <= m; j ++ ) {
//				scanf("%d", &a[i][j]);
//				b[i][j]=a[i][j]-a[i-1][j];
//			}
//		}
//		for (int i = 1; i <= n; i ++ ) {
//			for (int j = 1; j <= m; j ++ ) {
//				if(b[i][j]>=0) {
//					a[i][j]=1;
//				} else {
//					a[i][j]=0;
//				}
//				printf("%d ",a[i][j]);
//			}
//			puts("");
//		}
//		for( int i = 1; i <= n; i++ )
//			for( int j = 1; j <= m; j++ )
//				sum[i][j] = a[i][j]+sum[i-1][j];
//
//		for (int i = 1; i <= n; i ++ ) {
//			int tt = 0;
//// 			memset(stk,0,sizeof stk);
//			for(int j = 1; j <= m; j++ ) {
//				while (tt && stk[tt]<sum[i][j] ) tt --;
//				if(tt)ans[i][j]=stk[tt];
//				else {
//
//				}
//				stk[ ++ tt] = sum[i][j];
//			}
//		}
//		for (int i = 1; i <= n; i ++ ) {
//			for (int j = 1; j <= m; j ++ ) {
//				printf("%d " ,ans[i][j]);
//			}
//			puts("");
//		}
//
//
//// 		int res=0;
//// 		for (int i = 1; i <= n; i ++ )
//// 			for (int j = 1; j <= m; j ++ ) {
//// 				res=max(res,ans[i][j]);
//// 			}
//// 		printf("%d\n",res);
//
//	}
//}
/*
2
4 3
2 1 2
1 2 1
2 3 2
1 4 1
4 4
1 1 1 1
2 2 2 2
3 3 1 3
2 4 2 4
*/







//#include <iostream>
//#include <cstring>
//#include <algorithm>
//
//using namespace std;
//
//const int N=2e6+9,inf=0x3f3f3f3f;
//int n, m,k;       // n???,m???
//int p[N];
//int v[N];
//
//struct Edge {   // ???
//	int a, b, w;
//
//	bool operator< (const Edge &W)const {
//		return w < W.w;
//	}
//} edges[N];
//
//int find(int x) { // ???
//	if (p[x] != x) p[x] = find(p[x]);
//	return p[x];
//}
//
//
//int check(int x) {
//	for (int i = 1; i <= n; i ++ ) p[i]=i;
//	for (int i = 1; i <= m; i ++ ) {
//		if(edges[i].w<=x) {
//			int a=find(edges[i].a);
//			int b=find(edges[i].b);
//			p[a]=b;
//		} else break;
//	}
//	int cnt=0;
//	for (int i = 1; i <= n; i ++ ) {
//		if(i==find(i))cnt++;
//	}
//	return cnt;
//}
//
//int main() {
//	freopen("1.in","r",stdin);
//	int i,j;
//	int t;
//	scanf("%d", &t);
//	while(t--) {
//		scanf("%d%d%d", &n, &m,&k);
//		for(int i=1; i<= m ; i++) {
//			int a,b,w;
//			scanf("%d%d%d", &a, &b, &w);
//			edges[i]= {a,b,w};
//		}
//		sort(edges+1,edges+m+1);
//
//		int l=0,r=1e5;
//		while(l<r) {
//			int mid=l+r>>1;
//			if(check(mid)<=k) r=mid;
//			else l=mid+1;
//		}
//		if(check(l)!=k)puts("-1");
//		else printf("%d\n",l);
//
//	}
//}





//#include <iostream>
//#include <cstring>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 1e5+9;
//
//int n;
//int color[N];
//char a[N];
//
//int son[N][20], cnt[N], idx;
//
//void insert(char *str) {
//	int p = 0;
//	for (int i = 0; str[i]; i ++ ) {
//		int u = str[i] - '0';
//		if (!son[p][u]) son[p][u] = ++ idx;
//		p = son[p][u];
//		cnt[p] ++ ;
//	}
//}
//
//int query(char *str) {
//	int p = 0;
//	for (int i = 0; str[i]; i ++ ) {
//		int u = str[i] - '0';
//		if(cnt[son[p][u]]==1) return 1;
//		p = son[p][u];
//	}
//	// if(color[p]>1) return 1;
//	return 0;
//}
//
//
//char b[N][20];
//
//int main() {
//	int i,j;
//	int t;
//	scanf("%d", &t);
//	while (t -- ) {
//		idx=0;
//		// for (int i = 0; i <= N; i ++ ){
//		//     color[i]=0;
//		//     cnt[i]=0;
//		// }
//		memset(cnt, 0, sizeof cnt);
//		memset(color, 0, sizeof color);
//		memset(son, 0, sizeof son);
//		scanf("%d", &n);
//		for (int i = 0; i < n; i ++ ) {
//			scanf("%s", &b[i]);
//			insert(b[i]);
//		}
//		int flag=0;
//		for (int i = 0; i < n; i ++ ) if(query(b[i])) flag=1;
//		if(flag) puts("NO");
//		else puts("YES");
//	}
//}





//#include <iostream>
//#include <cstring>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 1e5*30+9, inf =0x3f3f3f3f;
//
//int cnt[N],son[N][2],idx;
//int n,k;
//int ans=inf;
//
//int a[N];
//
//void insert(int x,int id) {
//	int p=0;
//	for(int i=30; i>=0; i--) {
//		int u=x>> i&1;
//		if(!son[p][u]) son[p][u]=++idx;
//		p=son[p][u];	//向下传递
//		cnt[p]=id;
//	}
//}
//
//void getLeft(int x, int k, int id, int& l, int& r) {
//	int pos = 0;
//	int ret = -1;
//	for (int i = 30; i >= 0; i--) {
//		int d1 = (x >> i) & 1;
//		int d2 = (k >> i) & 1;
//		if (d2) {
//			pos = son[pos][d1 ^ 1];
//		} else {
//			if (son[pos][d1 ^ 1]) ret = max(ret, cnt[son[pos][d1 ^ 1]]);//走这步可以大于k
//			pos = son[pos][d1];
//		}
//		if (!pos) break;//没找过的数不存在使得异或x后大于等于k的数
//	}
//	if (pos) ret = max(ret, cnt[pos]);//pos存在说明走到这一步可以大于等于k
//	if (ret >= 0 && (r - l + 1) > (id - ret + 1)) r = id, l = ret;
//}
//
//
//
//int main() {
//	int t;
//	scanf("%d", &t);
//	while (t -- ) {
//		idx=0;
//		memset(son, 0, sizeof son);
//		memset(cnt, 0, sizeof cnt);
//		scanf("%d%d", &n, &k);
//		for (int i = 1; i <= n; i ++ ) {
//			int x;
//			scanf("%d", &x);
//			a[i]=a[i-1]^x;
//		}
//		int l=-1,r=n;
//		for (int i = 0; i <= n; i++) {
//			getLeft(a[i], k, i, l, r);
//			insert(a[i], i);
//		}
//
//		printf("%d %d\n",l,r);
//	}
//}





//#include <iostream>
//#include <cstring>
//#include <algorithm>
//
//using namespace std;
//typedef long long ll;
//
//const int N = 100000+9, mod=1000000007;
//
//int n;
//char a[N];
//
//ll ksm(ll x, ll y) {
//	ll ans = 1;
//	while (y) {
//		if (y & 1)ans = ans * x % mod;
//		x = x * x % mod;
//		y >>= 1;
//	}
//	return ans;
//}
//
//int main() {
//	int t;
//	scanf("%d", &t);
//	while (t -- ) {
//		scanf("%d", &n);
//		scanf("%s", a);
//		int sum=1;
//		for (int i = 1; i < n; i ++ ) {
//			if(a[i]==a[i-1]) {
//				sum++;
//			} else break;
//		}
//		printf("%lld\n",ksm(2,sum-1)%mod);
//	}
//}


//#include <iostream>
//#include <cstring>
//#include <algorithm>
//
//using namespace std;
//typedef long long ll;
//
//const int N = 100000+9, mod=1e9+7;
//
//ll m=0;
//
//ll ksc(ll a, ll b){
//	ll ans = 0;
//	while( b > 0 ){
//		if( b&1 ) ans = (ans + a) % mod;
//		a = ( a + a ) % mod;
//		b >>= 1;
//	}
//	return ans;
//}
//
//int main() {
//	int t;
//	ll a,b;
//	cin>>a>>b;
//	a%=mod;b%=mod;
//	cout<<ksc(a,b)<<endl;
//}





//#include <iostream>
//#include <cstring>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 1e5+9,M=30*N;
//
//int son[M][2], cnt[N], idx;
//
//void insert(char *str) { // ?????
//	int p = 0;
//	for (int i = 0; str[i]; i ++ ) {
//		int u = str[i] - 'a';
//		if (!son[p][u]) son[p][u] = ++ idx;
//		p = son[p][u];
//	}
//	cnt[p] ++ ;
//}
//
//int query(char *str) { // ?????????
//	int p = 0;
//	for (int i = 0; str[i]; i ++ ) {
//		int u = str[i] - 'a';
//		if (!son[p][u]) return 0;
//		p = son[p][u];
//	}
//	return cnt[p];
//}
//
//
//
//int main() {
//	int t1=0;
//
//	idx=0;
//	memset(son, 0, sizeof son);
//	memset(cnt, 0, sizeof cnt);
//	scanf("%d%d", &n, &m);
//	for (int i = 0; i < n; i ++ ) {
//		int x;
//		scanf("%d",&x);
//		insert(x);
//	}
//	for (int i = 0; i < m; i ++ ) {
//		int x;
//		scanf("%d", &x);
//		printf("%d\n",query(x)^x);
//	}
//}
//}




//#include <iostream>
//#include <cstring>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 1e5+9,M=30*N;
//
//char a[N][109];
//
//int son[M][3], cnt[N], idx;
//
//void insert(char *str) { // ?????
//	int p = 0;
//	for (int i = 0; str[i]; i ++ ) {
//		int u = str[i] - '0';
//		if (!son[p][u]) son[p][u] = ++ idx;
//		p = son[p][u];
//		cnt[p] ++ ;
//	}
//}
//
//int query(char *str) { // ?????????
//	int p = 0;
//	for (int i = 0; str[i]; i ++ ) {
//		int u = str[i] - '0';
//		p = son[p][u];
//		if(cnt[p]==1)return 0;
//	}
//	return 1;
//}
//
//int main() {
//	int t1=0,n=0;
//
//	while(scanf("%s",a[n++])) {
//		if(a[n-1][0]=='9') {
//			int flag=0;
//			for (int i = 0; i < n; i ++ ) {
//				if(query(a[i]))flag=1;
//			}
//			if(flag)printf("Set %d is immediately decodable",++t1);
//			else printf("Set %d is not immediately decodable",++t1);
//			n=0;
//			idx=0;
//			memset(son, 0, sizeof son);
//			memset(cnt, 0, sizeof cnt);
//			continue;
//		}
//		insert(a[n-1]);
//	}
//}





//#include <iostream>
//#include <cstring>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 20;
//
//int n;
//
//char s[N];
//
//void build(int rt,int l,int r)
//{
//	if(l==r)
//	{
//		if(s[l]=='0')cout<<'B';
//		else cout<<'I';
//		return;
//	}
//	int mid=(l+r)>>1;
//	build(rt<<1,l,mid);
//	build(rt<<1|1,mid+1,r);
//	int flag1=0,flag2=0;
//	for(int i=l;i<=r;i++){
//		if(s[i]=='0')flag1=1;
//		if(s[i]=='1')flag2=1;
//	}
//	if(flag1&&flag2==0){
//		cout<<'B';
//	}
//	if(flag1==0&&flag2){
//		cout<<'I';
//	}
//	if(flag1&&flag2) {
//		cout<<'F';
//	}
//
//}
//
//
//int main() {
//	scanf("%d", &n);
//	scanf("%s", s+1);
//	build(1,1,strlen(s+1));
//}




//#include <iostream>
//#include <cstring>
//#include <algorithm>
//#include <queue>
//
//using namespace std;
//typedef pair<int, int> pii;
//#define x first
//#define y second
//
//const int N = 1009;
//
//int a[N][N];
//int v[N][N];
//pii cz[N][N];
//int n;
//int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};
//
//
//struct no {
//	int x,y;
//};
//
//void bfs(int tx,int ty) {
//	queue<no> q;
//	q.push({tx,ty});
//	v[tx][ty]=1;
//	while(q.size()) {
//		no p=q.front();
//		q.pop();
//		int x=p.x,y=p.y;
//		if(x==n&&y==n) {
//			return;
//		}
//		for (int i = 0; i < 4; i ++ ) {
//			int xx=x+dx[i],yy=y+dy[i];
//			if(xx>=1&&xx<=n&&yy>=1&&yy<=n&&!v[xx][yy]&&a[xx][yy]==0) {
//				cz[xx][yy]= {x,y};
//				q.push({xx,yy});
//				v[xx][yy]=1;
//
//			}
//		}
//	}
//}
//
//int main() {
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i ++ )
//		for (int j = 1; j <= n; j ++ )
//			scanf("%d", &a[i][j]);
//	bfs(1,1);
//	int i,j=n;
//	pii b[N][N];
//	for (i = n; i >= 1;  i=cz[i][j].x,j=cz[i][j].y) {
//		printf("%d %d\n",cz[i][j].x,cz[i][j].y);
//	}
//}





//#include <cstdio>
//#include <algorithm>
//using namespace std;
//int t,n;
//struct ath {
//	int r[6];
//} a[50005];
//int jud(ath x,ath y) {
//	int num=0;
//	for(int i=1; i<=5; i++)
//		if(x.r[i]<y.r[i])
//			num++;
//	if(num>=3)return 1;
//	return 0;
//}
//int main() {
//	scanf("%d",&t);
//	while(t--) {
//		scanf("%d",&n);
//		ath m;
//		int sign=0;
//		for(int i=0; i<n; i++) {
//			scanf("%d%d%d%d%d",&a[i].r[1],&a[i].r[2],&a[i].r[3],&a[i].r[4],&a[i].r[5]);
//			if(i==0)
//				m=a[i];
//			else if(jud(a[i],m)) {
//				m=a[i];
//				sign=i;
//			}
//		}
//		if(n==1) {
//			printf("1\n");
//			continue;
//		}
//		int suc=1;
//		for(int i=0; i<n; i++) {
//			if(i==sign)continue;
//			if(jud(m,a[i])==0) {
//				suc=0;
//				break;
//			}
//		}
//		if(suc==1) {
//			printf("%d\n",sign+1);
//			continue;
//		} else printf("-1\n");
//	}
//	return 0;
//}





//#include <iostream>
//#include<cmath>
//using namespace std;
//const int N=20;
//int t,ac,n,a[N];
//void dfs(int p,int sum1,int sum2) {
//	if(p>n) {
//		if(sum1!=0&&sum1==sum2) ac=1;
//		return;
//	}
//	dfs(p+1,sum1+a[p],sum2);
//	dfs(p+1,sum1,sum2+a[p]);
//	dfs(p+1,sum1,sum2);
//}
//
//int main() {
//	cin>>t;
//	while(t--) {
//		cin>>n;
//		ac=0;
//		int ok=0;
//		for(int i=1; i<=n; i++) {
//			cin>>a[i];
//			a[i]=abs(a[i]);
//			if(a[i]==0) {
//				ok=1;
//			}
//		}
//		dfs(1,0,0);
//		if(ok) {
//			cout<<"YES\n";
//		} else {
//			if(ac==1) {
//				cout<<"YES\n";
//			} else {
//				cout<<"NO\n";
//			}
//		}
//	}
//}


//#include <iostream>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//typedef long long ll;
//
//const int N = 2e5+9;
//
//int n;
//
//ll cnt[N];//??????
//ll a[N],c[N];//???
//ll b[N];//????????
//void merge(ll  a[],ll l, ll r) { //????????????????????????
//	if(l==r)return ;//??????????1?,??
//	ll mid=(l+r)>>1;
//	merge(a,l,mid);
//	merge(a,mid+1,r);//???????????
//	ll i=l,j=mid+1;//i?j???????????
//	for(ll k=l; k<=r; k++) {
//		if(j>r||(i<=mid&&a[i]<=a[j]))   //???????????????????????????????????????
//			b[k]=a[i++];   //???????????????,????????
//		else {
//			//??????????????,??????????????????????????
//			cnt[r]+=mid-i+1;
//			b[k]=a[j++];
//		}
//	}
//	for(ll k=l; k<=r; k++)
//		a[k]=b[k];//???????????
//}
//
//int main() {
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i ++ ) {
//		scanf("%lld", &a[i]);
//		c[i]=a[i];
//	}
//	merge(a,1,n);
//	ll ma=1,mi=0,minn=N;
//	for (int i = 1; i <= n; i ++ ) {
//		if(cnt[ma]<cnt[i]) {
//			ma=i;
//		}
//		if(cnt[i]<minn&&cnt[i]!=0) {
//			mi=i;
//			minn=cnt[i];
//		}
//		// printf("%d ",cnt[i]);
//	}
//	// printf("%d %d\n",mi,ma);
//	c[ma]++,c[mi]++;
//	for (int i = 1; i <= n; i ++ ) {
//		a[i]=c[i];
//		b[i]=cnt[i]=0;
//	}
//	merge(a,1,n);
//	ll ans=0;
//	for (int i = 1; i <= n; i ++ ) {
//		ans+=cnt[i];
//	}
//	printf("%lld",ans);
//}



//#include<bits/stdc++.h>
//using namespace std;
//#define MAX_N 100005
//int n, m, x, y;
//double a[MAX_N], b[MAX_N], sum[MAX_N];
//double l, r;
//
//double check(double tot) {
//	for (int i = 1; i <= n; i++) {
//		b[i] = a[i] - tot;
//		sum[i] = sum[i - 1] + b[i];
//	}
//	double num = 0x3f3f3f3f;
//	for (int i = x; i <= n; i++) {
//		num = min(num, sum[i - x]);
//		if (sum[i] - num >= 0) return 1;
//	}
//	return 0;
//}
//
//double check1(double tot) {
//	for (int i = 1; i <= m; i++) {
//		b[i] = a[i] - tot;
//		sum[i] = sum[i - 1] + b[i];
//	}
//	double num = 0x3f3f3f3f;
//	for (int i = y; i <= m; i++) {
//		num = min(num, sum[i - y]);
//		if (sum[i] - num >= 0) return 1;
//	}
//	return 0;
//}
//double eps=1e-8;
//int main() {
//	cin >> n >> m >> x >> y;
//	l = 0x3f3f3f3f, r = -0x3f3f3f3f;
//	for (int i = 1; i <= n; i++) {
//		cin >> a[i];
//		l = min(l, a[i]);
//		r = max(r, a[i]);
//	}
//	while (fabs(r-l)>eps) {
//		double mid = (l + r ) / 2;
//		if (check(mid)) l = mid;
//		else r = mid;
//	}
//	printf("%lf",l);
//	double hs=l,lsy=0;
//	l = 0x3f3f3f3f, r = -0x3f3f3f3f;
//	for (int i = 1; i <= m; i++) {
//		cin >> a[i];
//		l = min(l, a[i]);
//		r = max(r, a[i]);
//	}
//	while (fabs(r-l)>eps) {
//		double mid = (l + r ) / 2;
//		if (check1(mid)) l = mid;
//		else r = mid ;
//	}
//	lsy=l;
////	printf("%.10lf\n",lsy+hs);
//	return 0;
//}




//#include<bits/stdc++.h>
//using namespace std;
//int m[20];
//void check2(int x){
//	while(x){
//		m[x%10]=1;
//		x/=10;
//	}
//}
//bool check(int a,int b,int c){
//	if (!(c/(double)a==3&&b/(double)a==2))return false;
//	 memset(m,0,sizeof m);
//	 check2(a);
//	 check2(b);
//	 check2(c);
//	 for(int i=1;i<=9;i++){
//	 	if(m[i]==0)return false;
//	 }
//	 return true;
//}
//int main(){
////	FILE *fp = NULL;
////	fp = fopen("C:/Users/qlw/Desktop/22.txt", "w+");
//freopen("C:/Users/qlw/Desktop/22.txt","w",stdout);
//	for(int i=123;i<1000;i++){
//		for(int j=i+1;j<1000;j++){
//			for(int k=j+1;k<1000;k++){
//				if(check(i,j,k)){
////					fprintf(fp,"%d %d %d\n",i,j,k);
//					printf("%d %d %d\n",i,j,k);
//				}
//			}
//		}
//	}
//}


//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	printf("192 384 576\n
//	219 438 657\n
//	273 546 819\n
//	327 654 981\n");
//}


//#include <cstdio>
//using namespace std;
//typedef long long ll;
//ll t,n,k;
//ll getans(ll n) {
//	if(n<=k)return 1;
//	if(n%2==0)
//		return 2*getans(n/2)+1;
//	else
//		return 1+getans(n/2)+getans(n/2+1);
//}
//int main() {
//	freopen("C:/Users/qlw/Desktop/in.txt","r",stdin);
////	freopen("C:/Users/qlw/Desktop/22.txt","w",stdout);
//
//	for(n=10; n<=1000; n++) {
//		for(k=1; k<=100; k++){
//			printf("%lld %lld %lld\n",n,k,getans(n));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <iostream>
//#include <cstring>
//#include <algorithm>
//
//using namespace std;
//typedef long long ll;
//ll t,n,k;
//ll getans(ll n) {
//	if(n<=k)return 1;
//	if(n%2==0)
//		return 2*getans(n/2)+1;
//	else
//		return 1+getans(n/2)+getans(n/2+1);
//}
//int main() {
////	freopen("C:/Users/qlw/Desktop/in.txt","r",stdin);
////	freopen("C:/Users/qlw/Desktop/22.txt","w",stdout);
//	int t;
//	cin>>t;
//	while(t--){
//		int n,k;
//		cin>>n>>k;
//		getans(n);
////		printf("%lld %lld %lld\n",n,k,getans(n));
//	}
//	return 0;
//}



//#include <iostream>
//#include <cstring>
//#include <algorithm>
//int a[10000]={0,1,3,5,7,9,11};
//int main(){
//	freopen("C:/Users/qlw/Desktop/22.txt","w",stdout);
//	for(int i=3;i<5000;i++){
//		a[i]=a[i/2]+a[i-i/2]+1;
//		printf("%d %d\n",i,a[i]);
//	}
//
//}



//#include <iostream>
//#include <cstring>
//#include <algorithm>
//#define ll long long
//int main(){
//	int t;
//	scanf("%d",&t);
//	while(t--){
//		ll n,k;
//		scanf("%lld%lld",&n,&k);
//		printf("%lld",)
//	}
//
//}


//#include <iostream>
//#include <cstring>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 40, M=109;
//
//char a[N][M];
//
//int n;
//
//int main() {
//	int t,t1=0;
//	scanf("%d", &t);
//	while(t--) {
//		printf("Case #%d:\n",++t1);
//		for (int i = 1; i <= 30; i ++ ) {
//			scanf("%s",a[i]+1);
//		}
//		int l=1,r=1;
//		int flag2=0;
//		for (int j = 1; j <= strlen(a[1]+1); j ++ ) {
//			int flag=0;
//			for (int i = 1; i <= 30; i ++ ) {
//				if(a[i][j]=='#') flag=1;
//			}
//			if(flag) {
//				r=j;
//				if(flag2==0)l=j,flag2=1;
//			} else {
//				if(flag2) {
//					printf("%d %d\n",l,r);
//					flag2=0;
//				}
//			}
//		}
//	}
//}






//#include <bits/stdc++.h>
//
//using namespace std;
//
//const int N = 40, M=109;
//
//char a[N][M];
//
//int n;
//int st[N][M];
//struct no{
//    int x,y;
//};
//int dx[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
//int dy[8] = {-1, 0, 1, 1, 1, 0, -1, -1};
//
//int maxx=0;
//void bfs(int tx,int ty){
//    queue<no> q;
//    q.push({tx,ty});
//    st[tx][ty]=1;
//    while(q.size()){
//        no p=q.front();q.pop();
//        int x=p.x,y=p.y;
//        if(a[x][y]=='#'){
//        	maxx=max(maxx,y);
//		}
//        for (int i = 0; i < 8; i ++ ){
//            int xx=x+dx[i],yy=y+dy[i];
//            if(!(xx>=1&&xx<=30&&yy>=1&&yy<=20)) continue;
//            if(st[xx][yy]||a[xx][yy]!='#') continue;
//            q.push({xx,yy});
//            st[xx][yy]=1;
//        }
//    }
//}
//
//int main() {
//	int t,t1=0;
//	scanf("%d", &t);
//	while(t--) {
//		maxx=0;
//		memset(st,0,sizeof st);
//		printf("Case #%d:\n",++t1);
//		for (int i = 1; i <= 30; i ++ ) {
//			scanf("%s",a[i]+1);
//		}
//		int l=1,r=1;
//		int flag2=0;
//		int j=1;
//		for (j=1 ; j <= 20; j ++ ) {
//			int flag=0;
//			for (int i = 1; i <= 30; i ++ ) {
//				if(a[i][j]=='#') flag=1;
//			}
//			if(flag) break;
//		}
//		l=j;
//		for (j+=12 ; j <= 20; j ++ ) {
//			for (int i = 1; i <= 30; i ++ ) {
//				if(a[i][j]=='#'&&!st[i][i]){
//					bfs(i,j);
//				}
//			}
//		}
//		printf("%d %d\n",l,maxx);
//		for (j=maxx+1 ; j <= strlen(a[1]+1); j ++ ) {
//			int flag=0;
//			for (int i = 1; i <= 30; i ++ ) {
//				if(a[i][j]=='#') flag=1;
//			}
//			if(flag) {
//				r=j;
//				if(flag2==0)l=j,flag2=1;
//			} else {
//				if(flag2) {
//					printf("%d %d\n",l,r);
//					flag2=0;
//				}
//			}
//		}
//	}
//}





//#include <iostream>
//#include <vector>
//#include <cstring>
//using namespace std;
//typedef long long ll;
//const int N=2007;
//const ll mod1=1e9+7;
//const ll mod2=1e9+9;
//vector <int> ho[N];
//int T,cnt,n,p[N],a[N],vis[N],col[N][N];
//ll pw1[N],pw2[N];
//void init() {
//	cnt=0;
//	for(int i=0; i<=n+1; i++) {
//		ho[i].clear();
//	}
//}
//ll ksm(ll x,ll p,ll mod) {
//	ll res=1;
//	while(p) {
//		if(p&1) res=res*x%mod;
//		p>>=1;
//		x=x*x%mod;
//	}
//	return res;
//}
//int dfs(int now,int p,int fa) {
//	col[now][p]=cnt;
//	for(int i=0; i<ho[p].size(); i++) {
//		int v=ho[p][i];
//		if(v==fa) continue;
//		if(!vis[a[v]]) cnt++;
//		vis[a[v]]++;
//		dfs(now,v,p);
//		vis[a[v]]--;
//		if(!vis[a[v]]) cnt--;
//	}
//}
//void sovle() {
//	scanf("%d",&n);
//	init();
//	for(int i=2; i<=n; i++) {
//		int u,v;
//		scanf("%d",&v);
//		u=i;
//		ho[u].push_back(v);
//		ho[v].push_back(u);
//	}
//	for(int i=0; i<=n; i++) {
//		pw1[i]=ksm(19560929,i,1e9+7);
//		pw2[i]=ksm(19560929,i,1e9+9);
//	}
//	for(int i=1; i<=n; i++) {
//		scanf("%d",&a[i]);
//	}
//	for(int i=1; i<=n; i++) {
//		memset(vis,0,sizeof vis);
//		vis[a[i]]++;
//		cnt=1;
//		dfs(i,i,-1);
//	}
//	for(int i=1; i<=n; i++) {
//		ll ans1=0,ans2=0;
//		for(int j=1; j<=n; j++) {
//			ans1=(ans1+(ll)col[i][j]*pw1[j-1]%mod1)%mod1;
//			ans2=(ans2+(ll)col[i][j]*pw2[j-1]%mod2)%mod2;
//		}
//		printf("%lld %lld\n",ans1,ans2);
//	}
//}
//int main() {
//	scanf("%d",&T);
//	while(T--) sovle();
//}






// #include <iostream>
// #include <cstring>
// #include <algorithm>

// using namespace std;

// const int N = 2000+9,mod=1e9+7,mod2=1e9+9,zhi=19560929;
// int a[N],b[N],c[N][N];

// int g[N][N];
// int n;
// struct no{
//     int x,y;
// };
// void bfs(){
//     int num[N];
//     queue<no> q;
//     q.push()
// }
// int main(){
//     int t;
//     scanf("%d", &t);
//     while(t--){
//         memset(g, 0, sizeof g);
//         scanf("%d", &n);
//         for (int i = 2; i <= n; i ++ ){
//             int x;
//             scanf("%d", &x);
//             g[i][x]=1;g[x][i]=1;
//         }
//         for (int i = 1; i <= n; i ++ ) {
//             scanf("%d", &a[i]);
//         }

//     }

// }



//#include <iostream>
//#include <cstring>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 1e5+9;
//typedef long long ll;
//
//int n;
//
//int main() {
//	int t;
//	scanf("%d", &t);
//	while(t--) {
//		ll a,b;
//		scanf("%lld%lld", &a, &b);
//		if(a>b) {
//			puts("0");
//			continue;
//		}
//		b++;
//		int i;
//		ll ans=0;
//		for (i = 0; (a>>i) > 0; i ++ ) {
//			// printf("%d %d\n",a>>i&1,b>>i&1);
//			if(((a>>i&1)==0)&&((b>>i&1)==0)) {
//				ans=ans+(1<<i);
//				// printf("%d %d\n",i, 1<<i);
//			}
//		}
//		// if(b>>i >0){
//		for (; (b>>i) > 0; i ++ ) {
//			if(b>>i&1) ans=ans+(1<<i);
//		}
//		printf("%lld\n",ans);
//		// }else{
//		//     printf("%lld\n",ans+2);
//		// }
//	}
//}








//#include <iostream>
//#include <cstring>
//#include <algorithm>
//#include <cmath>
//
//using namespace std;
//typedef long long ll;
//
//ll n;
//
//int main() {
//	int t;
//	scanf("%d", &t);
//	while(t--) {
//		scanf("%lld", &n);
//		ll a=(ll)ceil(n/(double)6.0)*15;
//		printf("%lld\n",a);
//	}
//}


//#include<bits/stdc++.h>
//using namespace std;
//#define ll long long
//const int N=1e5+7;
//int main() {
//	//ios::sync_with_stdio(0);
//	int t;
//	cin>>t;
//	while(t--) {
//		int w,h;
//		cin>>w>>h;
//		int x1,y1,x2,y2;
//		cin>>x1>>y1>>x2>>y2;
//		int w1,h1;
//		cin>>w1>>h1;
//		int w2=x2-x1,h2=y2-y1;
//		if(w1+w2>w&&h1+h2>h) {
//			cout<<-1<<endl;
//			continue;
//		}
//		if(w1>w||h1>h) {
//			cout<<-1<<endl;
//			continue;
//		}
//		int hup=h-y2,hdown=y1;
//		int wz=x1,wy=w-x2;
//		int ans=1e9;
//		if(hup<hdown) {
//			swap(hup,hdown);
//		}
//		if(wz<wy) {
//			swap(wz,wy);
//		}
//		if(hup<h1&&wz<w1) {
//			if(hdown>=h1-hup) {
//				ans=min(ans,h1-hup);
//			}
//			if(wy>=w1-wz) {
//				ans=min(ans,w1-wz);
//			}
//		}
//		//cout<<hh<<"]["<<ww<<endl;
//		if(ans==1e9)
//			ans=0;
//		printf("%.9lf\n",(double)ans);
//	}
//	return 0;
//}




// #include <iostream>
// #include <cstring>
// #include <algorithm>

// using namespace std;

// int a,b;

// int main(){
//     int t;
//     scanf("%d", &t);
//     while(t--){
//         scanf("%d%d", &a, &b);
//         if(a>b){
//             printf("%d %d\n",a-b,a-b);
//             continue;
//         }
//         if(a%2!=b%2){
//             if()
//             puts("-1 -1");
//             continue;
//         }
//         printf("%d %d\n",__gcd(a,b),b-a);
//     }
// }





//#include <iostream>
//#include <cstring>
//#include <algorithm>
//#include <set>
//using namespace std;
//const int N = 109;
//int a[N];
//int b[N][N];
//set<int>s;
//int temp;
//int num;
//int n;
//void dfs(int p) {
//	for(int i=1; i<=n; i++) {
//		if(b[p][i]==num)
//			break;
//		if(s.count(b[p][i])==0) {
//
//			s.insert(b[p][i]);
//			temp++;
//			dfs(b[p][i]);
//			break;
//		}
//	}
//}
//int main() {
//	int t;
//	cin>>t;
//	while(t--) {
//		cin>>n;
//		num=0;
//		temp=0;
//		s.clear();
//		for(int i=1; i<=n; i++) {
//			cin>>a[i];
//			if(a[i]==1) num=i;
//		}
//
//		for(int i=1; i<=n; i++)
//			for(int j=1; j<=n; j++)
//				cin>>b[i][j];
//		if(b[num][1]==num) {
//			cout<<"lieren"<<endl;
//			continue;
//		}
//		temp++;
//		s.insert(b[num][1]);
//		dfs(b[num][1]);
//
//		if(temp>=n-2) cout<<"langren"<<endl;
//		else cout<<"lieren"<<endl;
//	}
//	return 0;
//}





//#include <iostream>
//#include <cstring>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 109;
//
//char a[N][N];
//int t,n;
//int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};
//int st[N][N];
//int start[10],en[10];
//int flag;
//
//void dfs(int x,int y) {
//	if(x==en[1]+1 &&y==en[2]+1) {
//		flag=1;
//		return ;
//	}
//	for (int i = 0; i < 4; i ++ ) {
//		int tx=x+dx[i],ty=y+dy[i];
//		if(tx>=1&&tx<=n&&ty>=1&ty<=n&&!st[tx][ty]&&a[tx][ty]=='.') {
//			st[tx][ty]=1;
//			dfs(tx,ty);
//		}
//	}
//}
//
//
//
//int main() {
//	scanf("%d", &t);
//	while (t -- ) {
//		memset(st, 0, sizeof st);
//		scanf("%d", &n);
//		for (int i = 1; i <= n; i ++ ) scanf("%s", a[i]+1);
//		scanf("%d%d%d%d", &start[1], &start[2],&en[1], &en[2]);
//		flag=0;
//		st[start[1]+1][start[2]+1]=1;
//		dfs(start[1]+1,start[2]+1);
//		if(flag)puts("YES");
//		else puts("NO");
//	}
//}





//#include<bits/stdc++.h>
//using namespace std;
//#define x first
//#define y second
//const int N = 1009;
//
//char a[N][N];
//int v[N][N][5];
//int n,m;
//int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};
//
//int ans;
//struct no {
//	int x,y,fang,step,fla;
//};
//bool bfs(int tx,int ty) {
//	queue<no> q;
//	for (int i = 0; i < 4; i ++ ) {
//		q.push({tx,ty,i,0,0});
//		v[tx][ty][i]=1;
//	}
//	while(q.size()) {
//		no p=q.front();
//		q.pop();
//		int x=p.x,y=p.y,fang=p.fang,step=p.step;
//		// printf("%d %d %d %d\n",x,y,fang,v[x][y][fang]);
//		if(a[x][y]=='E') {
//			ans=step;
//			return true;
//		}
//		// if(v[x][y][fang]) continue;
//		for (int i = 0; i < 4; i ++ ) {
//			int xx=x+dx[i],yy=y+dy[i];
//			if(!(xx>=1&&xx<=n&&yy>=1&&yy<=m)) continue;
//			if(!v[xx][yy][i]&&a[xx][yy]!='*') {
//				if(fang==i&&p.fla==0) {
//					int xx=x+dx[i],yy=y+dy[i];
//					q.push({xx,yy,i,step,1});
//					v[xx][yy][i]=1;
//					continue;
//				}
//				q.push({xx,yy,i,step+1,0});
//				v[xx][yy][i]=1;
//			}
//		}
//	}
//	return false;
//}
//
//int main() {
//	scanf("%d%d", &n,&m);
//	for (int i = 1; i <= n; i ++ ) scanf("%s",a[i]+1);
//	int x,y;
//	for (int i = 1; i <= n; i ++ )
//		for (int j = 1; j <= m; j ++ )
//			if(a[i][j]=='S') {
//				x=i,y=j;
//				break;
//			}
//
//	if(!bfs(x,y)) puts("-1");
//	else {
//		printf("%d\n",ans);
//	}
//}
/*
5 6
..S*..
...*..
...*..
...*..
.....E
*/
/*
5 6
.....E
...*..
.S..*.
...*..
......
*/
/*
5 6
..S...
...*..
...*..
...*..
...*.E
*/

//#include<bits/stdc++.h>
//using namespace std;
//#define ll long long
//char mp[2010][2010];
//int vis[2010][2010][4];
//int n,m;
//int aa[4][2]= {-1,0,0,1,1,0,-1,0};
//struct tt {
//	int x,y,id,step;
//};
//int idx=0;
//int bfs(int a,int b,int c,int d) {
//	tt node1,node2,node3,node4;
//	node1.x=a,node1.y=b,node1.id=0,node1.step=0;
//	node2.x=a,node2.y=b,node2.id=1,node2.step=0;
//	node3.x=a,node3.y=b,node3.id=2,node3.step=0;
//	node4.x=a,node4.y=b,node4.id=3,node4.step=0;
//	vis[a][b][0]=1;
//	vis[a][b][1]=1;
//	vis[a][b][2]=1;
//	vis[a][b][3]=1;
//	queue<tt>qu;
//	qu.push(node1);
//	qu.push(node2);
//	qu.push(node3);
//	qu.push(node4);
//	while(!qu.empty()) {
//		tt node=qu.front();
//		qu.pop();
//		printf("%d %d %d %d\n",node.x,node.y,node.id,node.step);
//		if(node.x==c&&node.y==d) {
//			return node.step;
//		}
//		for(int i=0;i<4;i++){
//			int xx=node.x+aa[i][0];
//            int yy=node.y+aa[i][1];
//            if(node.id==i){
//                int xxx=xx+aa[i][0];
//                int yyy=yy+aa[i][1];
//                if(xxx>=1&&yyy>=1&&xxx<=n&&yyy<=m&&!vis[xxx][yyy][i]&&mp[xx][yy]!='*'&&mp[xxx][yyy]!='*'){
//                    vis[xxx][yyy][i]=1;
//                    qu.push({xxx,yyy,i,node.step+1});
//        	    }
//            }
//            if(!(xx>=1&&yy>=1&&xx<=n&&yy<=m&&!vis[xx][yy][i]&&mp[xx][yy]!='*'))continue;
//                vis[xx][yy][i]=1;
//                qu.push({xx,yy,i,node.step+1});
//        }
//	}
//	return -1;
//}
//int main() {
//	scanf("%d%d",&n,&m);
//	for(int i=1; i<=n; i++) {
//		scanf("%s",mp[i]+1);
//	}
//	int x,y,xx,yy;
//	for(int i=1; i<=n; i++) {
//		for(int j=1; j<=m; j++) {
//			if(mp[i][j]=='S') {
//				x=i,y=j;
//			} else if(mp[i][j]=='E') {
//				xx=i,yy=j;
//			}
//		}
//	}
//	int f=bfs(x,y,xx,yy);
//	printf("%d\n",f);
//}


//#include <iostream>
//#include <cstring>
//#include <algorithm>
//
//using namespace std;
//typedef long long ll;
//
//const int N = 1e5+9;
//ll g[N];
//ll n,m,k;
//ll a,b,c;
//bool check(ll x) {
//	ll cnt=0;
//	for (ll i = 1; i <= n; i ++ ) {
//		ll res=a * i * i + b * i;
//		if( c == 0 ) {
//			if( res <= x) cnt += m;
//			continue;
//		}
//		res=x-res;
//		if( c > 0) {
//			cnt+=max(m-res/c,0ll);
//			continue;
//		}
//		cnt+=max(-res/c,0ll);
//	}
//	printf("cnt=%d\n",cnt);
//	return cnt<=k;
//}
//int main() {
//	scanf("%lld%lld%lld", &n, &m, &k);
//	scanf("%lld%lld%lld", &a, &b, &c);
//	ll l=1,r=1e3;
//	ll ans=1;
//	while(l<r) {
//		ll mid=l+r>>1;
//		if(check(mid)) r=mid,ans=mid;
//		else l=mid+1;
//		 printf("%lld %lld\n",l,r);
//	}
//
//	printf("%d\n",ans);
//
//}





//#include <iostream>
//#include <cstring>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 2e5+9;
//
//int tot;
//int son[N][5],a[N];
//int n;
//int len(int l,int r){
//	if(r>=l)return r-l+1;
//	return l-r+1;
//}
//void build(int a[],int L,int R) {
//	if(L>R)return;
//	tot++;
//	int keyid;
//	if(L==R) {
//		keyid=a[L];
//		// return tot;
//		return ;
//	}
//	if(len(L,R)==1) {
//		int mid=L+R>>1;
//		build(a,L,L);
//		build(a,R,R);
//	} else {
//		int mm=(len(L,R))/3;
//		if((R-L+1)%3!=0)mm++;
//		int B=L+mm-1;
//
////		int B=L+((R-L+1)/3)-1;
//
//		int C=B+R>>1;
//		build(a,L,B);
//		build(a,B+1,C);
//		build(a,C+1,R);
////		for (int i = 1; i <= R; i ++ ) {
////			keyid=keyid+a[i];
////		}
//		// return keyid;
//	}
//}
//
//
//
//int main() {
//	freopen("C:\\Users\\qlw\\Desktop\\in.txt","r",stdin);
//	freopen("C:\\Users\\qlw\\Desktop\\1.txt","a",stdout);
//	int t;
//	scanf("%d", &t);
//	while(t--) {
//		tot=0;
//		memset(son, 0, sizeof son);
//		scanf("%d", &n);
//		for (int i = 1; i <= n; i ++ ) scanf("%d", &a[i]);
//		build(a,1,n);
//		printf("%d\n",tot);
//	}
//}





//#include <iostream>
//#include <cstring>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//const int N = 20;
//
//int a[N];
//int n;
//int cnt;
//vector<int> b[N];
//int ans=N;
//
//void dfs(int id){
//
//    if(id==n) ans=min(ans,cnt);
//
//    for (int i = 0; i < cnt; i ++ ){
//        int flag=0;
//        for (int j = 0; j < b[i].size(); j ++ ){
//            if(__gcd(a[id],a[j])!=1)flag=1;
//        }
//        if(!flag){
//            b[cnt].push_back(a[id]);
//            dfs(id+1);
//            b[cnt].pop_back();
//        }
//    }
//
//    b[cnt++].push_back(a[id]);
//    dfs(id+1);
//    b[--cnt].pop_back();
//
//}
//
//int main(){
//    scanf("%d", &n);
//    for (int i = 0; i < n; i ++ ) scanf("%d", &a[i]);
//
//    dfs(0);
//
//    printf("%d\n",ans);
//}




//#include<bits/stdc++.h>
//
//using namespace std;
//
//const int N = 30;
//int a[N][N];
//int v[N][N];
//
//
//
//int dx[12]= {1,1,2,2,2,2,-1,-1,-2,-2,-2,-2};
//int dy[12]= {-2,2,-2,-1,1,2,-2,2,-1,1,-2,2};
//
//
//struct no {
//	int x,y;
//};
//int bfs(int tx,int ty) {
//	queue<no> q;
//	q.push({tx,ty});
//	v[tx][ty]=1;
//	while(q.size()) {
//		no p=q.front();
//		q.pop();
//		int x=p.x,y=p.y;
//		if(x==1&&y==1) {
//			return v[x][y]-1;
//		}
//		for (int i = 0; i < 12; i ++ ) {
//			int xx=x+dx[i],yy=y+dy[i];
//			if(!(xx>=1&&xx<=100&&yy>=1&&yy<=100)) continue;
//			if(!(v[xx][yy]==0)) continue;
//			q.push({xx,yy});
//			v[xx][yy]=v[x][y]+1;
//		}
//
//	}
//	return -1;
//}
//
//int main() {
//	int x1,y1,x2,y2;
//	scanf("%d%d%d%d", &x1, &y1, &x2,&y2);
//	printf("%d\n",bfs(x1,y1));
//	memset(v, 0, sizeof v);
//	printf("%d\n",bfs(x2,y2));
//}

//#include<bits/stdc++.h>
//
//using namespace std;
//
//const int N = 1000+9;
//char a[N][N];
//int v[N][N];
//
//int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};
//
//int sx,sy,x2,y2;
//int n;
//struct no {
//	int x,y;
//};
//int bfs(int tx,int ty) {
//	queue<no> q;
//	q.push({tx,ty});
//	v[tx][ty]=1;
//	while(q.size()) {
//		no p=q.front();
//		q.pop();
//		int x=p.x,y=p.y;
//		if(x==x2&&y==y2) {
//			return v[x][y]-1;
//		}
//		for (int i = 0; i < 8; i ++ ) {
//			int xx=x+dx[i],yy=y+dy[i];
//			if(!(xx>=1&&xx<=n&&yy>=1&&yy<=n)) continue;
//			if(!(v[xx][yy]==0)) continue;
//			q.push({xx,yy});
//			v[xx][yy]=v[x][y]+1;
//		}
//
//	}
//	return -1;
//}
//
//int main() {
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i ++ ) scanf("%s", a[i]+1);
//
//	scanf("%d%d%d%d", &sx, &sy, &x2,&y2);
//	printf("%d\n",bfs(sx,sy));
//}




//#include<bits/stdc++.h>
//
//using namespace std;
//
//const int N = 1000+9;
//char a[N][N];
//int v[N][N];
//
//int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};
//
//int sx,sy,x2,y2;
//int n;
//struct no {
//	int x,y;
//};
//int bfs(int tx,int ty) {
//	queue<no> q;
//	q.push({tx,ty});
//	v[tx][ty]=1;
//	while(q.size()) {
//		no p=q.front();
//		q.pop();
//		int x=p.x,y=p.y;
//		if(x==x2&&y==y2) {
//			return v[x][y]-1;
//		}
//		for (int i = 0; i < 12; i ++ ) {
//			int xx=x+dx[i],yy=y+dy[i];
//			if(!(xx>=1&&xx<=n&&yy>=1&&yy<=n)) continue;
//			if(!(v[xx][yy]==0&&a[xx][yy]=='0')) continue;
//			q.push({xx,yy});
//			v[xx][yy]=v[x][y]+1;
//		}
//
//	}
//	return -1;
//}
//
//int main() {
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i ++ ) scanf("%s", a[i]+1);
//
//	scanf("%d%d%d%d", &sx, &sy, &x2,&y2);
//	printf("%d\n",bfs(sx,sy));
//}


//#include<bits/stdc++.h>
//using namespace std;
//const int N=1e7+9;
//int primes[N];
//int st[N];
//int cnt;
//void get_primes(int n)
//{
//    for (int i = 2; i <= n; i ++ )
//    {
//        if (!st[i]) primes[cnt ++ ] = i;
//        for (int j = 0; primes[j] <= n / i; j ++ )
//        {
//            st[primes[j] * i] = true;
//            if (i % primes[j] == 0) break;
//        }
//    }
//}
//
//int main(){
//	get_primes(100);
//	for(int i=0;i<50;i++){
//		printf("%d ",primes[i]);
//	}
//}



//#include <iostream>
//#include <cstring>
//#include <algorithm>
//
//using namespace std;
//typedef long long ll;
//
//const int N = 2e7+9,M=1e7+9;
//
//ll n;
//ll a[N];
//
//ll primes[N];
//int st[N];
//int cnt;
//
//void get_primes(ll n)
//{
//    for (ll i = 2; i <= n; i ++ )
//    {
//        if (!st[i]) primes[cnt ++ ] = i;
//        for (ll j = 0; primes[j] <= n / i; j ++ )
//        {
//            st[primes[j] * i] = true;
//            if (i % primes[j] == 0) break;
//        }
//    }
//}
//
//int main(){
//    get_primes(M);
//    // printf("%d",st[4]);
//
//    scanf("%lld", &n);
//    for (int i = 1; i <= n; i ++ ) scanf("%lld", &a[i]);
//    for (int i = 1; i <= n; i ++ ){
//        if(a[i]==0){
//            puts("3");
//            continue;
//        }
//         if(a[i]==1){
//            puts("2");
//            continue;
//        }
//        if(a[i]>1){
//            if(!st[a[i]]) printf("1\n");
//            else{
//                if(!st[a[i]+a[i]+1]||!st[a[i]+a[i]-1]) puts("2");
//                else{
//                    if(!st[a[i]+1]) printf("%lld\n",a[i]*2+1 +1);
//                    else printf("%lld\n",a[i]*2+1 +2);
//                }
//            }
//        }
//
//        if(a[i]<0){
//        	ll sum=abs(a[i])+1;
//            if(!st[sum]) printf("%lld\n",sum-a[i]+1);
//            else{
//                if(!st[sum+sum-1]) printf("%lld\n",sum-a[i]);
//                else{
//                	if(!st[sum+sum+1])printf("%lld\n",sum-a[i]+2);
//				}
//            }
//        }
//    }
//}






//#include <iostream>
//#include <cstring>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//	freopen("C:/Users/qlw/Desktop/out.txt","w",stdout);
//	int n=500;
//	int x,s,y;
//	for (x = 1; x < n; x ++ ) {
//		for (s = 1; s < n; s ++ ) {
//			int cnt=0;
//			for (y = 1; y < n; y ++ ) {
//				if( (x| y)==s)cnt++;
//			}
//			printf("%d %d  %d\n",x,s,cnt);
//		}
//	}
//}





//#include <iostream>
//#include <cstring>
//#include <algorithm>
//
//
//using namespace std;
//typedef long long ll;
//int m;
//int n,ma,mi,ave;
//int main() {
//	scanf("%d", &m);
//	while (m -- ) {
//		int flag=0;
//		scanf("%d%d%d%d",&n,&ma,&mi,&ave);
//		if(ma<mi||ave>ma||ave<mi) {
//			flag=1;
//		}
//		if(n==1) {
//			if(!(ma==mi&&mi==ave)) flag=1;
//		} else {
//			if(n==2) {
//				if(!((ma+mi)==2*ave)) flag=1;
//			} else {
//				double he=n*ave-ma-mi;
//				if(!(he/(n-2)>=mi&&he/(n-2)<=ma)) flag=1;
//			}
//		}
//		if(flag) puts("no");
//		else puts("yes");
//	}
//}



//#include <iostream>
//#include <cstring>
//#include <algorithm>
//#include <cmath>
//#include <cstdio>
//using namespace std;
//
//const int N=900,M=N*N/2;
//int n, m;
//int p[N];
//int xx[N],yy[N];
//
//struct Edge {
//	int a, b;
//	double w;
//
//	bool operator< (const Edge &W)const {
//		return w < W.w;
//	}
//} edges[M];
//
//int find(int x) {
//	if (p[x] != x) p[x] = find(p[x]);
//	return p[x];
//}
//
//void kru() {
//	sort(edges, edges + m);
//
//	for (int i = 0; i < m; i ++ ) {
//		int a = edges[i].a, b = edges[i].b;
//
//		a = find(a), b = find(b);
//		if (a != b) {
//			p[a] = b;
//			printf("%d %d\n",edges[i].a,edges[i].b);
//		}
//	}
//
//}
//
//double dis(int x1,int y1,int x2,int y2){
//    return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
//}
//
//int main(){
//	freopen("C:/Users/qlw/Desktop/in.txt","r",stdin);
//	freopen("C:/Users/qlw/Desktop/out.txt","w",stdout);
//    int t;
//    scanf("%d", &t);
//    while(t--){
//        m=0;
//        scanf("%d", &n);
//        for (int i = 1; i <= n; i ++ ) p[i] = i;
//        for (int i = 0; i < n; i ++ ){
//            scanf("%d%d", &xx[i], &yy[i]);
//        }
//        int len;
//        scanf("%d", &len);
//        for (int i = 0; i < len; i ++ ){
//            int a,b;
//            scanf("%d%d", &a, &b);
//            a=find(a),b=find(b);
//            p[a]=b;
//        }
//        for (int i = 0; i < n; i ++ ){
//            for (int j = i+1 ; j < n; j ++ ){
//                double w=dis(xx[i],yy[i],xx[j],yy[j]);
//                edges[m++]={i+1,j+1,w};
//                // printf("%d %d %lf\n",i,j,w);
//            }
//        }
//
//        kru();
//    }
//}




//#include <iostream>
//#include <cstring>
//#include <algorithm>
//#include <cmath>
//#include <cstdio>
//using namespace std;
//
//const int N=900,M=N*N/2;
//int n, m;
//int p[N];
//int xx[N],yy[N];
//
//struct Edge {
//	int a, b;
//	double w;
//
//	bool operator< (const Edge &W)const {
//		return w < W.w;
//	}
//} edges[M];
//
//int find(int x) {
//	if (p[x] != x) p[x] = find(p[x]);
//	return p[x];
//}
//
//int kru() {
//    int len=0;
//	sort(edges, edges + m);
//
//	for (int i = 0; i < m; i ++ ) {
//		int a = edges[i].a, b = edges[i].b;
//
//		a = find(a), b = find(b);
//		if (a != b) {
//			p[a] = b;
//// 			printf("%d %d\n",edges[i].a,edges[i].b);
//            xx[len]=edges[i].a; yy[len++]=edges[i].b;
//		}
//	}
//    return len;
//}
//
//double dis(int x1,int y1,int x2,int y2){
//    return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
//}
//
//int main(){
////	freopen("C:/Users/qlw/Desktop/in.txt","r",stdin);
////	freopen("C:/Users/qlw/Desktop/out.txt","w",stdout);
//    int t;
//    scanf("%d", &t);
//    while(t--){
//        m=0;
//        scanf("%d", &n);
//        for (int i = 1; i <= n; i ++ ) p[i] = i;
//        for (int i = 0; i < n; i ++ ){
//            scanf("%d%d", &xx[i], &yy[i]);
//        }
//        int len;
//        scanf("%d", &len);
//        for (int i = 0; i < len; i ++ ){
//            int a,b;
//            scanf("%d%d", &a, &b);
//            a=find(a),b=find(b);
//            if(a!=b) p[a]=b;
//        }
//        for (int i = 0; i < n; i ++ ){
//            for (int j = i+1 ; j < n; j ++ ){
//                double w=dis(xx[i],yy[i],xx[j],yy[j]);
//                edges[m++]={i+1,j+1,w};
//                // printf("%d %d %lf\n",i,j,w);
//            }
//        }
//        int cnt=kru();
////        printf("%d\n",cnt);
//        if(len+cnt>=n-1&&cnt>0) {
//            for (int i = 0; i < cnt; i ++ ){
//                printf("%d %d\n",xx[i],yy[i]);
//            }
//        }
//        else puts("No new highways need");
////        puts("");
//    }
//}




//#include <iostream>
//#include <cstring>
//#include <algorithm>
//#include <queue>
//#include <cstdio>
//
//using namespace std;
//
//const int N = 509;
//
//int n,m;
//char a[N][N];
//int st[N][N];
//int len;
//int idx;
//int f[N][N];
//
//int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};
//
//struct no {
//	int x,y;
//};
//
//int p[N];
//
//struct Edge {
//	int a, b, w;
//
//	bool operator< (const Edge &W)const {
//		return w < W.w;
//	}
//} edges[N*N];
//
//int find(int x) {
//	if (p[x] != x) p[x] = find(p[x]);
//	return p[x];
//}
//
//void kru() {
//	sort(edges, edges + len);
//
//	for (int i = 1; i <= N; i ++ ) p[i] = i;
//
//	int res = 0, cnt = 0;
//	for (int i = 0; i < len; i ++ ) {
//		int a = edges[i].a, b = edges[i].b, w = edges[i].w;
//
//		a = find(a), b = find(b);
//		if (a != b) {
//			p[a] = b;
//			res += w;
//			cnt ++ ;
//		}
//	}
//	printf("%d\n",res);
//
//}
//
//int bfs(int tx,int ty) {
//	memset(st, 0, sizeof st);
//	queue<no> q;
//	q.push({tx,ty});
//	st[tx][ty]=1;
//	while(q.size()) {
//		no p=q.front();
//		q.pop();
//		int x=p.x,y=p.y;
//		if(a[x][y]=='A') {
//			edges[len++]= {f[tx][ty],f[x][y],st[x][y]-1};
//		}
//		for (int i = 0; i < 4; i ++ ) {
//			int xx=x+dx[i],yy=y+dy[i];
//			if(!(xx>=1&&xx<=n&&yy>=1&&yy<=m)) continue;
//			if(!(!st[xx][yy]&&a[xx][yy]!='#')) continue;
//			q.push({xx,yy});
//			st[xx][yy]=st[x][y]+1;
//		}
//	}
//	return -1;
//}
//
//
//int main() {
//	freopen("C:/Users/qlw/Desktop/in.txt","r",stdin);
//	freopen("C:/Users/qlw/Desktop/out.txt","w",stdout);
//	int t;
//	scanf("%d", &t);
//	while (t -- ) {
//		len=0;
//		idx=0;
//		scanf("%d %d", &m, &n);
//		// getchar();
//		gets(a[0]);
//		for (int i = 1; i <= n; i ++ ) {
//			scanf("%[^\n]", a[i]+1);
//			gets(a[0]);
//		}
//		for (int i = 1; i <= n; i ++ ) {
//			for (int j = 1; j <= m; j ++ ) {
//				if(a[i][j]=='S') a[i][j]='A';
//				if(a[i][j]=='A') f[i][j]=++idx;
//			}
//		}
//
//		for (int i = 1; i <= n; i ++ ) {
//			for (int j = 1; j <= m; j ++ ) {
//				if(a[i][j]=='A') bfs(i,j);
//			}
//		}
//		kru();
//	}
//}


//#include <iostream>
//#include <cstring>
//#include <algorithm>
//#include <queue>
//#include <cstdio>
//
//using namespace std;
//
//const int N = 500,inf=0x3f3f3f3f;
//
//int n,m;
//char a[N][N];
//int st[N][N];
//int len;
//int idx;
//int f[N][N];
//
//int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};
//
//struct no{
//    int x,y;
//};
//
//int g[N][N];
//int dist[N];
//bool stt[N];
//int prim()
//{
//	memset(stt, false, sizeof stt);
//    memset(dist, 0x3f, sizeof dist);
//
//    int res = 0;
//    for (int i = 0; i < idx; i ++ )
//    {
//        int t = -1;
//        for (int j = 1; j <= idx; j ++ )
//            if (!stt[j] && (t == -1 || dist[t] > dist[j]))
//                t = j;
//
//        if (i && dist[t] == inf) return inf;
//
//        if (i) res += dist[t];
//        stt[t] = 1;
//
//        for (int j = 1; j <= idx; j ++ ) dist[j] = min(dist[j], g[t][j]);
//    }
//
//    printf("%d\n",res);
//}
//
//int bfs(int tx,int ty){
//    memset(st, 0, sizeof st);
//    queue<no> q;
//    q.push({tx,ty});
//    st[tx][ty]=1;
//    while(q.size()){
//        no p=q.front();q.pop();
//        int x=p.x,y=p.y;
//        if(a[x][y]=='A'){
//            g[f[tx][ty]][f[x][y]]=st[x][y]-1;
//        }
//        for (int i = 0; i < 4; i ++ ){
//            int xx=x+dx[i],yy=y+dy[i];
//            if(!(xx>=1&&xx<=n&&yy>=1&&yy<=m)) continue;
//            if(!(!st[xx][yy]&&a[xx][yy]!='#')) continue;
//            q.push({xx,yy});
//            st[xx][yy]=st[x][y]+1;
//        }
//    }
//    return -1;
//}
//
//
//int main(){
//    int t=1;
//    scanf("%d", &t);
//    while (t -- ){
//        len=0;
//        idx=0;
//        memset(g,inf,sizeof g);
//
//        scanf("%d%d", &m, &n);
//        // getchar();
//         gets(a[0]);
//        for (int i = 1; i <= n; i ++ ){
//            scanf("%[^\n]", a[i]+1);
//            getchar();
//        }
//        for (int i = 1; i <= n; i ++ ) {
//            for (int j = 1; j <= m; j ++ ){
//                if(a[i][j]=='S') a[i][j]='A';
//                if(a[i][j]=='A') f[i][j]=++idx;
//            }
//        }
//
//        for (int i = 1; i <= n; i ++ ){
//            for (int j = 1; j <= m; j ++ ){
//                if(a[i][j]=='A') bfs(i,j);
//            }
//        }
//        prim();
//    }
//}




//#include <iostream>
//#include <cstring>
//#include <algorithm>
//
//using namespace std;
//typedef long long ll;
//
//const int N = 1e5+9, mod = 998244353;
//
//char s[N];
//
//int main(){
//	freopen("C:/Users/qlw/Desktop/in.txt","r",stdin);
////	freopen("C:/Users/qlw/Desktop/out.txt","w",stdout);
//    int t;
//    scanf("%d", &t);
//    while (t -- ){
//        scanf("%s", s+1);
//        int n=strlen(s+1);
//        ll ans=0;
//        for (int c = 'a'; c <= 'z' ; c ++ ){
//            for (int i = 1; i <= n; i ++ ){
//                for (int j = i; j <= n; j ++ ){
//                    ll cnt=0;
//                    for (int k = i; k <= j; k ++ ){
//                        if(s[k]==c) cnt++;
//                    }
//                    if(cnt!=0) printf("%c %d %d %d\n",c,i,j,cnt);
//                    ans+=cnt*cnt;
//                }
//            }
//        }
//        printf("%lld\n",ans);
//    }
//}





//#include <iostream>
//#include <cstring>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//typedef long long ll;
//
//const int N =  1e5+9, mod = 998244353;
//
//vector<int> a[30];
//
//char s[N];
//int n;
//
//int solve(vector<int> vec) {
//	vec.push_back(n+1);
//	ll ans=0,per=0,dif=0;
//	for (int i=1; i<vec.size(); i++) {
//		ans=(ans+per*(vec[i]-vec[i-1]))%mod;
//		dif=(dif+2*vec[i-1]+vec[i]-vec[i-1])%mod;
//		per=(per+dif)%mod;
//	}
//	return ans;
//}
//
//void solve() {
//    scanf("%s", s+1);
//    n=strlen(s+1);
//    // s[n+1]='\0';
//    for (int i = 0; i < 30; i ++ ) {
//        a[i].clear();
//        a[i].push_back(0);
//    }
//    for (int i = 1; i <= n; i ++ ){
//        a[s[i]-'a'].push_back(i);
//    }
//    ll ans=0;
//    for (int i = 0; i <= 25; i ++ ){
//        ans=(ans+solve(a[i]))%mod;
//    }
//    printf("%lld\n",ans);
//}
//
//int main() {
//	freopen("C:/Users/qlw/Desktop/in.txt","r",stdin);
//	freopen("C:/Users/qlw/Desktop/out.txt","w",stdout);
//	int t;
//    scanf("%d", &t);
//    while (t -- ) solve();
//}



//#include <iostream>
//#include <cstring>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//typedef long long ll;
//
//const int N=5e3+9,inf=0x3f3f3f3f;
//
//int n,m;
//int g[N][N];
//int dist[N];
//bool st[N];
//
//int prim() {
//	memset(st, false, sizeof st);
//	memset(dist, 0x3f, sizeof dist);
//
//	int res = -inf;
//	for (int i = 0; i < n; i ++ ) {
//		int t = -1;
//		for (int j = 1; j <= n; j ++ )
//			if (!st[j] && (t == -1 || dist[t] > dist[j]))
//				t = j;
//
//		if (i && dist[t] == inf) return inf;
//
//		if (i)
//		res = max(res,dist[t]);
//		st[t] = true;
//
//		for (int j = 1; j <= n; j ++ ) dist[j] = min(dist[j], g[t][j]);
//	}
//
//	return res;
//}
//
//int x[N],y[N];
//
//void solve() {
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i ++ ) {
//		scanf("%d%d", &x[i], &y[i]);
//	}
//	memset(g, inf, sizeof g);
//	for (int i = 1; i <= n; i ++ ) {
//		for (int j = i+1; j <= n; j ++ ) {
//			g[i][j]=min(abs(x[i]-x[j]),abs(y[i]-y[j]));
//		}
//	}
//	printf("%d\n",prim());
//}
//
//int main() {
//	freopen("C:/Users/qlw/Desktop/in.txt","r",stdin);
//	int t;
//	scanf("%d", &t);
//	while (t -- ) solve();
//}





//#include <iostream>
//#include <cstring>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//typedef long long ll;
//
//const int N= 5e3 +9 ;
//const ll inf = 1e15 +9 ;
//
//int n,m;
//ll g[N][N];
//ll dist[N];
//bool st[N];
//
//ll prim() {
//	memset(st, false, sizeof st);
//	for (int i = 0; i <= n; i ++ ) dist[i] = inf;
//
//	ll res = -inf;
//	for (int i = 0; i < n; i ++ ) {
//		int t = -1;
//		for (int j = 1; j <= n; j ++ )
//			if (!st[j] && (t == -1 || dist[t] > dist[j]))
//				t = j;
//
//		if (i) res = max(res,dist[t]);
//		st[t] = true;
//
//		for (int j = 1; j <= n; j ++ ) dist[j] = min(dist[j], g[t][j]);
//	}
//
//	return res;
//}
//
//ll x[N],y[N];
//
//ll dis(ll x1,ll x2,ll y1,ll y2) {
//	return (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
//}
//
//void solve() {
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i ++ ) {
//		scanf("%lld%lld", &x[i], &y[i]);
//	}
//
//	for (int i = 1; i <= n; i ++ ) {
//		for (int j =  1; j <= n; j ++ ) {
//			g[i][j]=dis(x[i],x[j],y[i],y[j]);
//		}
//	}
//
//	printf("%lld\n",prim());
//}
//
//int main() {
////	freopen("C:/Users/qlw/Desktop/in.txt","r",stdin);
//	int t;
//	scanf("%d", &t);
//	while (t -- ) solve();
//}






//#include <cstdio>
//#include <cstring>
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 10010, S = 55, M = 1000010;
//
//int n;
//int tr[N * S][26], cnt[N * S], idx;
//char str[M];
//int q[N * S], ne[N * S];
//
//void insert() {
//	int p = 0;
//	for (int i = 0; str[i]; i ++ ) {
//		int t = str[i] - 'a';
//		if (!tr[p][t]) tr[p][t] = ++ idx;
//		p = tr[p][t];
//	}
//	cnt[p] ++ ;
//}
//
//void build() {
//	int hh = 0, tt = -1;
//	for (int i = 0; i < 26; i ++ )
//		if (tr[0][i])
//			q[ ++ tt] = tr[0][i];
//
//	while (hh <= tt) {
//		int t = q[hh ++ ];
//		for (int i = 0; i < 26; i ++ ) {
//			int p = tr[t][i];
//			if (!p) tr[t][i] = tr[ne[t]][i];
//			else {
//				ne[p] = tr[ne[t]][i];
//				q[ ++ tt] = p;
//			}
//		}
//	}
//}
//char ss[M];
//int main() {
//	freopen("C:/Users/qlw/Desktop/in.txt","r",stdin);
//	int T;
//	scanf("%d", &T);
//	while (T -- ) {
//		memset(tr, 0, sizeof tr);
//		memset(cnt, 0, sizeof cnt);
//		memset(ne, 0, sizeof ne);
//		idx = 0;
//		scanf("%s", ss);
//
//		scanf("%d", &n);
//		for (int i = 0; i < n; i ++ ) {
//			scanf("%s", str);
//			insert();
//		}
//
//		build();
//
//		int res = 0;
//		for (int i = 0, j = 0; ss[i]; i ++ ) {
////			res=0;
//			int t = ss[i] - 'a';
//			j = tr[j][t];
//
//			int p = j;
//			while (p) {
//				res += cnt[p];
//				// cnt[p] = 0;
//				p = ne[p];
//
//			}
////			printf("%d\n", res);
//		}
//
//		printf("%d\n", res);
//	}
//
//	return 0;
//}



//// 杭电多校8  1012
//
//#include <iostream>
//#include <cstring>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//typedef long long ll;
//
//const int N =  1e5+9, mod = 998244353;
//
//vector<int> a[30];
//
//char s[N];
//int n;
//
//int solve(vector<int> vec) {
//	vec.push_back(n+1);
//	ll ans=0,per=0,dif=0;
//	for (int i=1; i<vec.size(); i++) {
//		ans=(ans+per*(vec[i]-vec[i-1]))%mod;
//		dif=(dif+2*vec[i-1]+vec[i]-vec[i-1])%mod;
//		per=(per+dif)%mod;
//	}
//	return ans;
//}
//
//void solve() {
//	scanf("%s", s+1);
//	n=strlen(s+1);
//	for (int i = 0; i < 30; i ++ ) {
//		a[i].clear();
//		a[i].push_back(0);
//	}
//	for (int i = 1; i <= n; i ++ ) {
//		a[s[i]-'a'].push_back(i);
//	}
//	ll ans=0;
//	for (int i = 0; i <= 25; i ++ ) {
//		ans=(ans+solve(a[i]))%mod;
//	}
//	printf("%lld\n",ans);
//}
//
//int main() {
//	int t;
//	scanf("%d", &t);
//	while (t -- ) solve();
//}









//#include <cstdio>
//#include <iostream>
//using namespace std;
//int a[10] = {2, 3, 6}, b[60];
//int main(){
//	int n, m = 3, cnt = 1;
//	cin >> n;
//	while(n > m){
//		++cnt;
//		n -= m;
//		m *= 3;
//	}
//	--n;
//	for(int i = 1; i <= cnt; ++i){
//		b[i] = n % 3;
//		n /= 3;
//	}
//	for(int i = cnt; i > 0; --i) cout << a[b[i]];
//	cout << endl;
//	return 0;
//}







//#include <iostream>
//#include <cstring>
//#include <algorithm>
//
//using namespace std;
//
//const int N=2e5+9, M = N ;
//int n, m;
//int p[N];
//
//struct Edge {
//	int a, b, w;
//} edges[N];
//
//
//void kru() {
//	printf("%d %d\n",n,m);
//}
//int main() {
//	int n;
//	scanf("%d", &n);
//	m=n-1;
//	for (int i = 0; i < m; i ++ ) {
//		int a,b,w;
//		scanf("%d%d%d", &a, &b,&w);
//		edges[i]= {a,b,w};
//	}
//	printf("%d %d\n",n,m);
//	kru();
//}






//#include <iostream>
//#include <cstring>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 30000+9;
//
//int p[N];
//
//int find(int x) { // ???
//	if (p[x] != x) p[x] = find(p[x]);
//	return p[x];
//}
//
//
//int main() {
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i ++ ) {
//		int m;
//		scanf("%d", &m);
//		for (int i = 1; i <= m; i ++ ) {
//			int x;
//			scanf("%d", &x);
//
//		}
//	}
//}



//#include <iostream>
//#include <cstring>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 1e5+9;
//int a[N];
//
//void solve() {
//	int n;
//	scanf("%d", &n);
//	int ma=-1;
//	for (int i = 1; i <= n; i ++ ) scanf("%d", &a[i]),ma=max(ma,a[i]);
//	int ans=1,sum=1;
//	for (int i = 2; i <= n; i ++ ) {
//		if(a[i]==a[i-1]) sum++;
//		else {
//			if(ma==a[i-1]) ans=max(ans,sum);
//			sum=1;
//		}
////		printf("%d %d\n",i,sum);
//	}
//	if(ma==a[n]) ans=max(ans,sum);
//	printf("%d\n",ans);
//}
//
//int main() {
//	freopen("C:/Users/qlw/Desktop/in.txt","r",stdin);
//	int n;
//	scanf("%d", &n);
//	while (n -- ) solve();
//}



//#include <iostream>
//#include <cstring>
//#include <algorithm>
//#include<bits/stdc++.h>
//
//using namespace std;
//typedef long long ll;
//
//int main(){
//    int cnt=0;
//    for (ll i = 1;  ; i ++ ){
//        // printf("%lld,",i);
////        cnt++;
//         printf("%lld,",(ll)pow(i,i));
//         if((ll)pow(i,i)> 1e18)break;
//    }
////    printf("%d",cnt);
//}



//#include<bits/stdc++.h>
//using namespace std;
//#define ll long long
//const int N=1e4+7;
//struct node {
//	int s,x;
//} a[N];
//bool cmp(node a,node b) {
//	return a.s>b.s;
//}
//int p[N],b[N];
//
//int main() {
//	freopen("C:/Users/qlw/Desktop/in.txt","r",stdin);
//	int T;
//	scanf("%d",&T);
//	while(T--) {
//		memset(a,0,sizeof a);
//		memset(b,0,sizeof b);
//		int n;
//		scanf("%d",&n);
//		for(int i=1; i<=n; i++) {
//			scanf("%d",&p[i]);
//			a[i].s=p[i];
//			a[i].x=i;
//		}
//		for(int i=1; i<=n; i++)
//			scanf("%d",&b[i]);
//		sort(a+1,a+n+1,cmp);
//		sort(b+1,b+n+1);
//		for(int i=1; i<=n; i++) {
//			int ma=p[i]+b[n];
//			int mi=p[i]+b[1];
//			int cnt=1,r=0,l=0;
//			for(int j=1; j<=n; j++) {
//				cout<<ma<<" "<<a[j].s+b[cnt]<<endl;
//				if(a[j].x!=i&&a[j].s+b[cnt]<=ma) {
//
//					r++;
//					cnt++;
//				}
//				if(cnt==n)
//					break;
//			}
//			cnt=n;
//			for(int j=n; j>0; j--) {
////				cout<<mi<<"   "<<a[j].s+b[cnt]<<endl;
//				if(a[j].x!=i&&a[j].s+b[cnt]>mi) {
//					l++;
//					cnt--;
//				}
//				if(cnt==1)
//					break;
//			}
////			printf("%d %d\n",n-r,l+1);
//		}
//		puts("");
//	}
//}


//#include <iostream>
//#include <cstring>
//#include <algorithm>
//
//using namespace std;
//typedef pair<int, int> pii;
//#define x first
//#define y second
//
//const int N = 5e3+9, M = 2*N ;
//
//pii a[M],b[N];
//int v[M];
//pii c[M];
//void solve() {
//	int n;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i ++ ) {
//		int x;
//		scanf("%d", &x);
//		a[i]= {x,i};
//	}
//
//	for (int i = 1; i <= n; i ++ ) {
//		int x;
//		scanf("%d", &x);
//		b[i]= {x,i};
//	}
//	sort(a+1,a+n+1);
//	sort(b+1,b+n+1,greater<pii>() );
//	for (int i = 1; i <= n; i ++ ) {
//		a[n+i]= {a[i].x+b[1].x,a[i].y};
//		a[i]= {a[i].x+b[n].x,a[i].y};
//	}
//	sort(a+1,a+2*n+1);
//	for (int i = 1; i <= 2*n; i ++ ) {
//		int num=1;
//		memset(v, 0, sizeof v);
//		int flag=0;
//		for (int j = 1; j < i; j ++ ) {
//			if(a[i].x==a[j].x)continue;
//			if(a[i].y==a[j].y) {
//				flag=1;
//				continue;
//			}
//			v[a[j].y]++;
//			if(v[a[j].y]==1&&!flag)num++;
//			if(v[a[j].y]==1&&flag)num--;
//		}
//		printf("%d\n",num);
//		if(c[a[i].y].x==0) {
//			c[a[i].y].x=num;
//		} else {
//			c[a[i].y].y=num;
//		}
//	}
//	for (int i = 1; i <= 2*n; i ++ ) {
//		printf("%d %d\n",a[i].x,a[i].y);
//	}
//	puts("");
//
//	for (int i = 1; i <= n; i ++ ) {
//		printf("%d %d\n",c[i].x,c[i].y);
//	}
//	puts("");
//}
//
//int main() {
//	int n;
//	scanf("%d", &n);
//	while (n -- ) solve();
//}




//#include <iostream>
//#include <cstring>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 2e7+9;
//int a[N],idx;
//int b[N];
//void solve() {
//	for (int i = 0; i <= N; i ++ ) {
//		a[i]=b[i]=0;
//	}
//	idx=0;
//
//	int l=1e7,r=1e7,mid=1e7;
//	int len;
//	int n;
//	scanf("%d", &n);
//	for (int q = 1; q <= n; q ++ ) {
//		char op[2];
//		scanf("%s", op);
//
//		if(op[0]=='L') {
//			a[l--]=++idx;
//			b[idx-1]=l+1;
//			continue;
//		}
//		if(op[0]=='R') {
//			a[r++]=++idx;
//			b[idx-1]=r-1;
//			continue;
//		}
//		if(op[0]=='Q') {
//			printf("%d\n",a[mid]);
//			continue;
//		}
//
//		int x;
//		scanf("%d", &x);
//		a[b[x]]=0;
//		for (int i = l; i <= r; i ++ ) {
//			printf("%d ",a[i]);
//		}
//		puts("");
//
//	}
//}
//
//int main() {
//	int n;
//	scanf("%d", &n);
//	while (n -- ) solve();
//}



//#include <iostream>
//#include <cstring>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 2e7+9;
//int a[N],idx;
//int b[N];
//int l=1e7,r=1e7,mid=1e7;
//int len;
//void solve() {
//
//}
//
//int main() {
//	int n;
//	scanf("%d", &n);
//	for (int q = 1; q <= n; q ++ ) {
//
//		// for (int i = l; i <= r; i ++ ){
//		//     printf("%d ",a[i]);
//		// }
//		// puts("");
//		// printf("%d\n",mid);
//
//		char op[2];
//		scanf("%s", op);
//
//		if(op[0]=='L') {
//			a[l--]=++idx;
//			b[idx-1]=l+1;
//			if(len%2) {
//				do {
//					mid--;
//				} while(a[mid]==0);
//			}
//			len++;
//			continue;
//		}
//		if(op[0]=='R') {
//			a[++r]=++idx;
//			b[idx-1]=r-1;
//			len++;
//			do {
//				mid++;
//			} while(a[mid]==0);
//			continue;
//		}
//		if(op[0]=='Q') {
//			// printf("%d  ",mid);
//			printf("%d\n",a[mid]);
//
//			continue;
//		}
//
//		if(op[0]=='G') {
//			int x;
//			scanf("%d", &x);
//			if(len%2) {
//				if(mid>=x) {
//					do {
//						mid--;
//					} while(a[mid]==0);
//				}
//			} else {
//				if(mid<=x) {
//					do {
//						mid++;
//					} while(a[mid]==0);
//				}
//			}
//			a[b[x]]=0;
//		}
//
//
//
//	}
//}


//#include <iostream>
//#include <cstring>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 2e7+9;
//int a[N],idx;
//int b[N];
//int l=1e7,r=1e7,mid=1e7;
//int len;
//void solve() {
//
//}
//
//int main() {
//	freopen("C:/Users/qlw/Desktop/in.txt","r",stdin);
//	freopen("C:/Users/qlw/Desktop/out.txt","w",stdout);
//	int n;
//	scanf("%d", &n);
//	for (int q = 1; q <= n; q ++ ) {
//
//		// for (int i = l; i <= r; i ++ ){
//		//     printf("%d ",a[i]);
//		// }
//		// puts("");
//		// printf("%d\n",mid);
//
//		char op[2];
//		scanf("%s", op);
//
//		if(op[0]=='L') {
//			a[l--]=++idx;
//			b[idx-1]=l+1;
//			if(len%2) {
//				do {
//					mid--;
//				} while(a[mid]==0);
//			}
//			len++;
//			continue;
//		}
//		if(op[0]=='R') {
//			a[++r]=++idx;
//			b[idx-1]=r-1;
//			// if(len%2){
//			do {
//				mid++;
//			} while(a[mid]==0);
//			// }
//			len++;
//			continue;
//		}
//		if(op[0]=='Q') {
//			// printf("%d  ",mid);
//			printf("%d\n",a[mid]);
//
//			continue;
//		}
//
//		if(op[0]=='G') {
//			int x;
//			scanf("%d", &x);
//			if(len%2) {
//				if(mid>=x) {
//					do {
//						mid--;
//					} while(a[mid]==0);
//				}
//			} else {
//				if(mid<=x) {
//					do {
//						mid++;
//					} while(a[mid]==0);
//				}
//			}
//			a[b[x]]=0;
//		}
//
//
//
//	}
//}




//#include <iostream>
//#include<bitset>
//using namespace std;
//const int N = 1e7+10;
//struct node {
//	int l, r,val,pos;
//} e[N];
//int idx,sz,tot;
//int res;
//int mi = 0;
//bitset<N> f;
//void init() {
//	e[0].r = 1;
//	e[1].l = 0;
//	idx = 2;
//}
//void xiyong() {
//	int m = (sz + 2) / 2;
//	while (mi > m)res =e[res].l, mi--;
//	while (mi < m)res =e[res].r, mi++;
//}
//void insertL(int x) {
//	e[idx].l = 0;
//	e[idx].val = x;
//	e[idx].r = e[0].r;
//	e[0].r = idx;
//	e[e[idx].r].l = idx;
//	e[idx].pos=e[e[idx].r].pos-1;
//	idx++;
//
//	mi++, sz++;
//
//	if (sz == 1)res = idx-1;
//	else xiyong();
//}
//void insertR(int x) {
//	e[idx].val = x;
//	e[idx].l = e[1].l;
//	e[e[idx].l].r = idx;
//	e[idx].r = 1;
//	e[1].l = idx;
//	e[idx].pos=e[e[idx].l].pos+1;
//	idx++;
//
//	sz++;
//	if (sz == 1)res = idx-1;
//	else xiyong();
//}
//void remove(int k) {
//	sz--;
//	if(k-1==e[mi].val) {
//		res=e[res].r;
//		e[e[k].l].r = e[k].r;
//		e[e[k].r].l = e[k].l;
//		xiyong();
//		return;
//
//	} else if (e[k-1].pos<e[mi].pos)mi--;
//	e[e[k].l].r = e[k].r;
//	e[e[k].r].l = e[k].l;
//
//	xiyong();
//}
//void out() {
//	for (int i = e[0].r; i != 1; i = e[i].r)cout<<i<<' '<<e[i].pos<<' ';
//	cout << endl;
//}
//int main() {
//	freopen("C:/Users/qlw/Desktop/in.txt","r",stdin);
//	freopen("C:/Users/qlw/Desktop/out.txt","w",stdout);
//	int m;
//	scanf("%d", &m);
//	init();
//	while (m--) {
//		char op[33];
//		scanf("%s", op);
//		int x;
//		if (*op == 'L')insertL(++tot);
//		else if (*op == 'R')insertR(++tot);
//		else if (*op == 'G') {
//			int x;
//			scanf("%d", &x);
//			remove(x+1);
//		} else printf("%d\n", e[res].val);
//
//	}
//	return 0;
//}




//#include <iostream>
//#include <cstring>
//#include <algorithm>
//#include <set>
//
//using namespace std;
//typedef long long ll;
//
//int main(){
//    set<ll> s;
//    for (ll i = 6; i <= 1e12; i *=6 ){
//        s.insert(i);
//    }
//    for (ll i = 1; i <= 1e12; i *=9 ){
//        s.insert(i);
//    }
//    for(auto i:s){
//        // printf("%lld ",i);
//        cout<<i<<endl;
//    }
//    printf("\n%d",s.size());
//}

//



//#include <iostream>
//#include <cstring>
//#include <algorithm>
//#include <cmath>
//
//using namespace std;
//typedef long long ll;
//
//const int N = 28;
//ll a[30]= {1,6,9,36,81,216,729,1296,6561,7776,46656,
//           59049,279936,531441,1679616,4782969,10077696,43046721,
//           60466176,362797056,387420489,2176782336,3486784401,13060694016,
//           31381059609,78364164096,282429536481,470184984576
//          };
//
//int ans=1e9;
//void dfs(int u,ll yu,int cnt) {
////	printf("%d %lld %d %d\n",u,yu,cnt,ans);
//	if(yu<0) {
//		return ;
//	}
//	if(yu==0) {
//		ans=min(cnt,ans);
//		return ;
//	}
//	for (int i = u; i >= 0; i -- ) {
//		if(yu>=a[i]) {
//			dfs(u-1,yu-a[i],cnt+1);
//		}
//	}
//}
//
//void solve() {
//	ll x;
//	scanf("%d", &x);
//	ans=1e9;
//	dfs(28,x,0);
//	printf("%d\n",ans);
//}
//
//int main() {
////	freopen("C:/Users/qlw/Desktop/out.txt","w",stdout);
//	int n;
//	scanf("%d", &n);
//	while (n -- )  solve();
//}


//#include <iostream>
//#include <cstring>
//#include <algorithm>
//#include <cmath>
//
//using namespace std;
//typedef long long ll;
//
//const int N = 28;
//ll a[30]= {1,6,9,36,81,216,729,1296,6561,7776,46656,
//           59049,279936,531441,1679616,4782969,10077696,43046721,
//           60466176,362797056,387420489,2176782336,3486784401,13060694016,
//           31381059609,78364164096,282429536481,470184984576
//          };
//
//int ans=1e9;
//void dfs(int u,ll yu,int cnt) {
////	printf("%d %lld %d %d\n",u,yu,cnt,ans);
//	if(yu<0) {
//		return ;
//	}
//	if(yu==0) {
//		ans=min(cnt,ans);
//		return ;
//	}
//	for (int i = u; i >= 0; i -- ) {
//		if(yu>=a[i]) {
//			dfs(u-1,yu-a[i],cnt+1);
//		}
//	}
//}
//
//void solve() {
//	ll x;
//	scanf("%d", &x);
//	dfs(28,x,0);
//	printf("%d\n",ans);
//}
//
//int main() {
////	freopen("C:/Users/qlw/Desktop/out.txt","w",stdout);
////	int n;
////	scanf("%d", &n);
////	while (n -- )  solve();
//	for(int i=1;i<100;i++){
//		ans=1e9;
//		dfs(28,i,0);
//		printf("%d %d\n",i,ans);
////		printf("%d ",ans);
//	}
//}



// #include <iostream>
// #include <cstring>
// #include <algorithm>
// #include <cmath>

// using namespace std;
// typedef long long ll;

// const int N = 28;
// ll a[30]={1,6,9,36,81,216,729,1296,6561,7776,46656,
// 59049,279936,531441,1679616,4782969,10077696,43046721,
// 60466176,362797056,387420489,2176782336,3486784401,13060694016,
// 31381059609,78364164096,282429536481,470184984576};

// int ans=1e9;
// void dfs(int u,ll yu,int cnt){
//     printf("%d %lld %d\n",u,yu,cnt);
//     if(yu<0){
//         return ;
//     }
//     if(yu==0){
//         ans=min(cnt,ans);
//         return ;
//     }
//     for (int i = 0; i < u; i ++ ){
//         if(yu>=a[i]){
//             dfs(i,yu-u,cnt+1);
//         }
//     }
// }

// void solve(){
//     ll x;
//     scanf("%d", &x);
//     dfs(28,x,0);
// }

// int main(){
//     int n;
//     scanf("%d", &n);
//     while (n -- )  solve();
// }


//#include <iostream>
//#include <cstring>
//#include <algorithm>
//#include <cmath>
//
//using namespace std;
//typedef long long ll;
//
//const int N = 28;
//ll a[30]= {1,6,9,36,81,216,729,1296,6561,7776,46656,
//           59049,279936,531441,1679616,4782969,10077696,43046721,
//           60466176,362797056,387420489,2176782336,3486784401,13060694016,
//           31381059609,78364164096,282429536481,470184984576
//          };
//
//void solve() {
//	ll x;
//	scanf("%d", &x);
//
//}
//
//int main() {
//	int n;
//	scanf("%d", &n);
//	while (n -- )  solve();
//}



//#include <iostream>
//#include <cstring>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//const int N = 1e4;
//int a[N][N];
//int main() {
////	freopen("C:/Users/qlw/Desktop/out.txt","w",stdout);
//	int cnt=1;
//	int n=1e3;
//	for (int j = 1; j <= n; j ++ ) {
//		int i=1;
//		for (i  ; i < j; i ++ ) {
//			a[i][j]=cnt++;
//		}
//		if(cnt>1e9)break;
//		for (i = j ; i >= 1; i -- ) {
//			a[j][i]=cnt++;
//		}
//		if(cnt>1e9)break;
//	}
//	printf("%d\n",cnt);
////	 for (int i = 1; i <= n; i ++ ){
////	     for (int j = 1; j <= n; j ++ ){
////	         printf("%3d ",a[i][j]);
////	     }
////	     puts("");
////	 }
//
//
//}

// void solve(){
//     int k;
//     scanf("%d", &k);

// }

// int main(){
//     int n;
//     scanf("%d", &n);
//     while (n -- ) solve();
// }









//#include <cstring>
//#include <iostream>
//#include <algorithm>
//#include <deque>
//#include <set>
//
//#define x first
//#define y second
//
//using namespace std;
//
//typedef pair<int, int> PII;
//
//const int N = 500, M = 5000, P = 1 << 10;
//
//int n, m, k, p;
//int h[N * N], e[M], w[M], ne[M], idx;
//int g[N][N], key[N * N];
//int dist[N * N][P];
//bool st[N * N][P];
//
//set<PII> edges;
//
//void add(int a, int b, int c) {
//	e[idx] = b, w[idx] = c, ne[idx] = h[a], h[a] = idx ++ ;
//}
//
//void build() {
//	int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};
//	for (int i = 1; i <= n; i ++ )
//		for (int j = 1; j <= m; j ++ )
//			for (int u = 0; u < 4; u ++ ) {
//				int x = i + dx[u], y = j + dy[u];
//				if (!x || x > n || !y || y > m) continue;
//				int a = g[i][j], b = g[x][y];
//				if (!edges.count({a, b})) add(a, b, 0);
//			}
//}
//
//int bfs() {
//	memset(dist, 0x3f, sizeof dist);
//	dist[1][0] = 0;
//
//	deque<PII> q;
//	q.push_back({1, 0});
//
//	while (q.size()) {
//		PII t = q.front();
//		q.pop_front();
//
//		if (st[t.x][t.y]) continue;
//		st[t.x][t.y] = true;
//
//		if (t.x == n * m) return dist[t.x][t.y];
//
//		if (key[t.x]) {
//			int state = t.y | key[t.x];
//			if (dist[t.x][state] > dist[t.x][t.y]) {
//				dist[t.x][state] = dist[t.x][t.y];
//				q.push_front({t.x, state});
//			}
//		}
//
//		for (int i = h[t.x]; ~i; i = ne[i]) {
//			int j = e[i];
//			if (w[i] && !(t.y >> w[i] - 1 & 1)) continue;
//			if (dist[j][t.y] > dist[t.x][t.y] + 1) {
//				dist[j][t.y] = dist[t.x][t.y] + 1;
//				q.push_back({j, t.y});
//			}
//		}
//	}
//
//	return -1;
//}
//
//int main() {
//	cin >> n >> m >> p >> k;
//
//	for (int i = 1, t = 1; i <= n; i ++ )
//		for (int j = 1; j <= m; j ++ )
//			g[i][j] = t ++ ;
//
//	memset(h, -1, sizeof h);
//	while (k -- ) {
//		int x1, y1, x2, y2, c;
//		cin >> x1 >> y1 >> x2 >> y2 >> c;
//		int a = g[x1][y1], b = g[x2][y2];
//
//		edges.insert({a, b}), edges.insert({b, a});
//		if (c) add(a, b, c), add(b, a, c);
//	}
//
//	build();
//
//	int s;
//	cin >> s;
//	while (s -- ) {
//		int x, y, c;
//		cin >> x >> y >> c;
//		key[g[x][y]] |= 1 << c - 1;
//	}
//
//	cout << bfs() << endl;
//
//	return 0;
//}




//#include<bits/stdc++.h>
//using namespace std;
//int main() {
//	freopen("C:/Users/qlw/Desktop/out.txt","w",stdout);
////	while(1) {
//		for(int n=1; n<=2e3; n++) {
//			for(int i=0; i<(1<<(n+2)); i++) {
//				int sum=0;
//				for(int j=0; (1<<j)<=i; j++) {
//					if((i>>j)&1) sum=sum+(j+1)*(j+1);
//					else sum=sum-(j+1)*(j+1);
//				}
//				if(sum==n) {
//					cout<<"n="<<n<<"  i="<<i<<"   s=";
//					int t=i;
//					int sum=0;
//					while(t) {
//						int x=t%2;
//						t/=2;
//						sum++;
//						cout<<x;
//					}
//					cout<<"  sum="<<sum;
//					puts("");
//					break;
//				}
//			}
//		}
////	}
//}




// int p = 0 ,sum = 0, ans =0,kai=0;
// for (int i = 0; i < m; i ++ ){
//     int res = upper_bound(a.begin() + l + p ,a.begin() + r , b[i]) - a.begin() ;
//     if(res == n ){
//         puts("-1");
//         return ;
//     }
//     if(i == 0) kai = res;
//     // sum++;
//     if(i == m - 1 ){
//         ans =max(ans, r - res + m);
//     }
//     p = res;
//     printf("%d %d\n",i,res);
// }





//#include <iostream>
//#include <cstring>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 1e5+9;
//
//int n,m,q;
//// char a[N],b[N];
//char aa[N];
//vector<int> a,b;
//void solve(){
//    int l,r;
//    scanf("%d%d", &l, &r);
//    l--;r--;
//    int ans=0,res=l;
//    for (int i = 0; i < m  ; i ++ ){
//        res = lower_bound(a.begin() + res ,a.begin() + r , b[i]) - a.begin();
//    }
//    // res = upper_bound(a.begin() + l + res ,a.begin() + r , b[r]) - a.begin();
//
//    // printf("%d\n", res );
//    printf("%d\n",n + 0 - res + m );
//
//}
//
//int main(){
//    scanf("%d%d%d", &n, &m ,&q);
//    scanf("%s", aa);
//    for (int i = 0; i < n; i ++ ) a.push_back(aa[i]-'a');
//    scanf("%s", aa);
//    for (int i = 0; i < m; i ++ ) b.push_back(aa[i]-'a');
//    while (q -- ){
//        solve();
//    }
//}


//#include<bits/stdc++.h>
//using namespace std;
//// AcWing  858
//const int N=509,inf=0x3f3f3f3f;
//
//int n,m;      // n????
//int g[N][N];        // ????,?????
//int dist[N];        // ????????????????
//bool st[N];     // ??????????????
//
//int prim() {
//	memset(st, false, sizeof st);
//	memset(dist, 0x3f, sizeof dist);
//
//	int res = 0;
//	for (int i = 0; i < n; i ++ ) {
//		int t = -1;
//		for (int j = 1; j <= n; j ++ )
//			if (!st[j] && (t == -1 || dist[t] > dist[j]))
//				t = j;
//
//		if (i && dist[t] == inf) return inf;
//
//		if (i) res += dist[t];
//		st[t] = true;
//
//		for (int j = 1; j <= n; j ++ ) dist[j] = min(dist[j], g[t][j]);
//	}
//
//	return res;
//}
//int main() {
//	scanf("%d%d", &n, &m);
//	memset(g,inf,sizeof g);
//	while(m--){
//		int a,b,c;
//		scanf("%d%d%d", &a, &b ,&c);
//		g[a][b]=g[b][a]=min(g[a][b],c);
//	}
//	int t=prim();
//	if(t==inf) puts("impossible");
//	else printf("%d\n",t);
//}




#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

typedef long long ll;

const int N = 100010, M = 300010;

int n, m;
int h[N], e[M], w[M], ne[M], idx;
LL dist[N];
int q[N], cnt[N];
bool st[N];

void add(int a, int b, int c) {
	e[idx] = b, w[idx] = c, ne[idx] = h[a], h[a] = idx ++;
}

int spfa(int start) {
	memset(dist, 0x3f, sizeof dist);
	dist[start] = 0;

	queue<int> q;
	q.push(start);
	st[start] = true;

	while (q.size()) {
		auto t = q.front();
		q.pop();

		st[t] = false;

		for (int i = h[t]; i != -1; i = ne[i]) {
			int j = e[i];
			if (dist[j] > dist[t] + w[i]) {
				dist[j] = dist[t] + w[i];
				if (!st[j]) {   // ????????j,?????j????
					q.push(j);
					st[j] = true;
				}
			}
		}
	}

	// if (dist[en] == 0x3f3f3f3f) return -1;
	return dist[en];
}

int main() {
	memset(h, -1, sizeof h);
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= m; i ++ ) {
		scanf("%d%d%d", &x, &a, &b);
		if(x==1) add(a, b, c);
		add(b, a, 0);
		if(x==2) add(a, b, 1);
		if(x==3) add(b, a, 0);
		if(x==4) add(b, a, 1);
		if(x==5) add(a, b, 0);
	}
	printf("%d", spfa());
}




