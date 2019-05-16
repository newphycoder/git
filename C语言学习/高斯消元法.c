#include<stdio.h>

void input(int m,int n,int **a);
void show(int m,int n,int **a);
void solve(int m,int n,int **a);
int find(int i,int j,int n,int **a);
void exchange(int i,int j,int k,int n,int **a);
void subtract(int i,int j,int k,int m,int n,int **a);

int main()
{
	int m,n;
	printf("方程数=");
	scanf("%d",&m);
	printf("变量数=");
	scanf("%d",&n);

	int a[m][n+1];
	int*p[m];
	int t;
	for(t=0;t<m;t++){
		p[t]=a[t];
	}
	input(m,n,p);
	show(m,n,p);
	solve(m,n,p);
}

void input(int m,int n,int **a)
{
	int i,j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("第%d个方程的第%d变量的系数=",i+1,i+1);
			scanf("%d",&a[i][j]);
		}
		printf("第%d常数为",i+1);
		scanf("%d",&a[i][n]);
	}
}

void show(int m,int n,int **a)
{
	int i,j;
	for(i=0;i<m;i++){
		for(j=0;j<=n;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void solve(int m,int n,int **a)
{
	int i,j=0,k;
	int*p[m];
	int t;
	for(t=0;t<m;t++){
		p[t]=a[t];
	}
	for(i=0;i<m;i++){
		k=find(i,j,m,p);
		if(k==-1){
			j++;
			i--;
			continue;
		}else if(k!=i){
			exchange(i,j,k,n,p);
			show(m,n,p);		
		}
		if(k!=m){
			subtract(i,j,k,m,n,p);
		}
	}
}

int find(int i,int j,int m,int **a)
{
	int k;
	int ret=-1;
	for(k=i;k<m;k++){
		if(a[k][j]){
			ret=k;
			break;
		}
	}
	return ret;
}

void exchange(int i,int j,int k,int n,int **a)
{
	int t;
	int b[n+1];
	for(t=j;t<=n;t++){
		b[t]=a[i][t];
		a[i][t]=a[k][t];
		a[k][t]=b[t];
	}
}

void subtract(int i,int j,int k,int m,int n,int **a)
{
	int t,r;
	int*p[m];
	int s;
	for(s=0;s<m;s++){
		p[s]=a[s];
	for(t=k+1;t<m;t++){
		for(r=j;r<=n;r++){
			a[t][r]=a[t][r]*a[i][j]-a[i][r]*a[t][j];
		}
	}
	show(m,n,p);
	}
}
