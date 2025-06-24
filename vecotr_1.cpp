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

// #include <iostream >
// using namespace std;

// int linearsearch(int arr[], int sz, int traget)
// {
// 	for (int i = 0; i < sz; i++)
// 	{
// 		if (arr[i] == traget)
// 		{
// 			return i;
// 		}
// 	}
// 	return -1;
// }
// int main()
// {
// 	int arr[] = {4, 2, 7, 8, 1, 2, 5};
// 	int sz = 7;
// 	int traget = 8;
// 	cout << linearsearch(arr, sz, traget) << endl;
// 	return 0;
// }

#include <iostream>
#include <vector>
using namespace std;
              void pankaj(vector<int>& nums)
              {
                    int key =25;
            for(int i : nums){
                if (i == key){
                    cout<<"key is found :"<<i;
                    break;

                }}
              }
int main()
{
    vector<int> vec;
    vec.push_back(25);
    vec.push_back(30);
    vec.push_back(35);
    vec.push_back(45);
 cout<< pankaj(vec);
  
    return 0;
}