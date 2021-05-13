#include<iostream>
int swap(int &a, int &b);

int main(int argc, char **argv){
	
	int a, b;
	std::cout<<"enter two numbers to be swapped:"<<std::endl;
	std::cin>>a>>b;
	swap(a, b);
	std::cout<<"the numbers after swapping are:"<<std::endl;
	std::cout<<a<<"  "<<b<<std::endl;

	return 0;
}

int swap(int &a, int &b){

	int temp;
	temp = a;
	a= b;
	b= temp;

	return 0;

}
