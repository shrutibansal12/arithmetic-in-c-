#include<iostream>
using namespace std;
int main() {
	int sum1= 26+34;
	int ans1= sum1*20;
	int ans2= ans1/sum1;
	int ans3= ans2%3;
	int result= ans3++;
	cout<<sum1<< "\n";
	cout<<ans1<< "\n";
	cout<<ans2<< "\n";
	cout<<ans3<< "\n";
	cout<<result;
	return 0;
	}
