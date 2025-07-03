// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> vec;
//     cout << "size = " << vec.size() << endl;
//     vec.push_back(25);
//     vec.push_back(25);
//     vec.push_back(25);
//     cout << "after use push size is := " << vec.size() << endl;
//     vec.pop_back();
//     cout << "front = " << vec.front() << endl
//          << "in vecyor element are :";

//     for (int val : vec)
//     {
//         cout << val << endl;
//     }
//     return 0;
// }
#include<iostream>
using namespace std;

int sumofDigits(int num){
	int digSum=0;
	while(num > 0){
		int lastdig = num%10;
	 num = num/10; 
	 digSum  += lastdig;
	}
	return digSum;
}

int main(){

		cout<<"sum of"<<sumofDigits (1056) <<endl;
	return 0;
}