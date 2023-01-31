#include <iostream>
#include <random.h>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void change_1(int *a);
void change_2(int *a);
void print_1(int *a);
int check_1(int *a);
int check_2(int*a, int *b, int n);
int lmn;
int total;

int main(int argc, char** argv) {
//	setRandomSeed(1);

	int x,y,z;
	int a,b,c;
	cin>>x>>y>>z;
	cin>>lmn;
	total = x*y*z;
	const int *n = &total;
	cout<<x<<"\t"<<y<<"\t"<<z<<"\t"<<*n<<endl;
	int d[*n]={0};
	cout<<"abc  "<<sizeof(d)/sizeof(d[0])<<endl;
	
	cout<<r[0]<<endl;
	
//	d[total-1]=-1;
	print_1(d);
	change_1(d);
	print_1(d);
//	change_2(d);
	print_1(d);
	while (true){
		cin>>a>>b>>c;
		cout<<a;
		if (a==1) break;
	}
	return 0;
}

void change_1(int *a){
	int t,times=1;
	while(true){
		cout<<times<<"\n\n\n\n";
		times++;
		t=randomInteger(0, total);
//		cout<<"hdsjhdjsdhjd\t"<<t<<"\t"<<total<<endl;
		a[t]=-1;
		//print_1(a);
		if (check_1(a)==lmn) break;
	}
}

void change_2(int *a){
	for (int i=0;i<total;i++){
		if (a[i]==-1) ;
		else a[i]=check_2(a, r, i);
	}
}

int check_1(int *a){
	int n=0;
	for (int i=0;i<total;i++){
//		cout<<"\n"<<n<<endl;
		if(a[i]==-1){
			n++;
		}
	}
	return n;
}

int check_2(int*a, int *b, int n){
	int times=0;
	for(int i=n-13;i<n+13+1;i++)
		if (a[i]==-1 && i>=0 && i<total)
			times++;
	return times;
}

void print_1(int *a){
	for (int i=0;i<total;i++)
		cout<<a[i]<<"\t";
	cout<<endl;
}

void print_2(int *a, int *b){
	
}




