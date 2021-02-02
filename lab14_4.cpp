#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}
void shuffle(int &a,int &b,int &c,int &d){
	int ran[4] = {a,b,c,d};
	int temp;
	for (int i=0;i<4;i++){
		int w = rand()%4;
	  temp = ran[i];
	  ran[i] = ran [w];
	  ran[w] = temp;
	}
	 a=ran[0];
	 b=ran[1];
	 c=ran[2];
	 d=ran[3];
}