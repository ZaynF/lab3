#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<vector>
#include <algorithm>
#include"lab3a.h"
using namespace std;

int main(){
	int x;
	vector <int> mass;
				
	cow a;
	mass=a.readin();
	x=a.calculation(mass);
	cout<<x<<endl;
								
	return 0;						
}
