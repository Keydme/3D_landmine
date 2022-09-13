#include <iostream>
#include <random.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;


int test();
struct Tripoint{
	int x,y,z;
	bool flag;
	bool visi;
};
int a,b,c;

int main(int argc, char** argv) {
	setRandomSeed(1);
	cin>>a>>b>>c;
	int sum = a*b*c;
	int const *n = &sum;
	Tripoint l[sum];
	for (int i=0;i<sum;i++)
		cout<<l[i].x<<endl;
	cout<<sizeof(l)<<endl;
	cout<<sizeof(int)<<endl;
	return 0;
}

int test(){
	return randomInteger(1,10);
}

void init(Tripoint *l){
	for(int i=0;i<sizeof(l)/sizeof(l[0]);i++){
		
	}
}
