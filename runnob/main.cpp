#include <iostream>

int count;
extern void write_count();

int main(){
	count = 5;
	write_count();
	return 0;
}
