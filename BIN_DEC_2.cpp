#include<iostream>
using namespace std;

int bin_de(int binN){
	int ans= 0,pow = 1;
	
	while(binN >0){
		int rem = binN%10;
		ans +=rem*pow;
		
		binN /= 10;
		pow *=2;
	}
	return ans;
}



int main(){
		cout<<bin_de(10101010)<<endl;
	return 0;
}
