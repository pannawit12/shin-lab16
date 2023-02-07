#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int *a,int *b,int *c,int *d){
	int r=rand()%4,*t=0,*t1=0;
	if (r==0) {
		t=a;
	}
	else if (r==1) {
		t=b;
	}
	else if (r==2) {
		t=c;
	}
	else if (r==3) {
		t=d;
	}
	r=rand()%4;
	if (r==0) {
		t1=a;
	}
	else if (r==1) {
		t1=b;
	}
	else if (r==2) {
		t1=c;
	}
	else if (r==3) {
		t1=d;
	}
	int t2=*t1;
	*t1=*t;
	*t=t2;
}