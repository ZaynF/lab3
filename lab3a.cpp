#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<vector>
#include<algorithm>
#include"lab3a.h"
using namespace std;

vector<int>cow::readin(){
	int t,n=0,num=0;
	vector<int>v1(100000);
													
	ifstream A("file.in",ios::in);
	A>>num;
	while(n<num){	
		for(n=0;n<num;n++){
			A>>t;
			v1.at(n)=t;
		}
	}

	sort(v1.begin(),v1.end());
	v1.at(0)=num;
	A.close();
																															
	return v1;
}

int cow::calculation(vector<int>v2){
	int i,n,w=v2.at(0),total=0;
	for(i=99999;i>99994;i--){
		total=total+v2.at(i);
	}

	return total;
}
