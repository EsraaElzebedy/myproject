//pointer as a function argument
#include <stdio.h>
void Increment(int a){
	a=a+1;
	printf("the address is =%d\n",&a);
}
int main(){
int a;
a=10;
Increment(a);
	printf("the address is =%d\n",&a);

}
