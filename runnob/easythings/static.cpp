#include <iostream>
using namespace std;

void func(void);

static int count = 10;

int main(){
	while (--count)
	{
		func();
	}
	return 0;
}

void func(void){

	static int i =5;
	i++;
	cout<<"变量i是"<<i;
	cout<<" ,变量count 为"<<count<< endl;
	
}
