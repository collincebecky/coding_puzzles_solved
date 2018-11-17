#include <iostream>
#include <algorithm>    // std::sort and find
#include <string>
#include <vector>
#include "stdlib.h"

using namespace std;
 void missing_numbers(vector<int> &values){
     vector<int> missing;
     for (int i=1;i<100;++i){
        if(find(values.begin(),values.end(),i)==values.end()){
                missing.push_back(i);

        }
     }
     for(int i=0;i<missing.size();++i){

        cout<<missing[i]<<'|';
     }

}
int main(int argc, char const *argv[])
{
	int random_no;
	vector<int> numbers;
    //generate random values between 0,100 one at a time 
    for (int i = 1; i < 100; ++i)
    {
		random_no=rand() % 100+1;
		if (std::find(numbers.begin(), numbers.end(), random_no)== numbers.end())
        {
           numbers.push_back(random_no);
        }

	}
	//printing out all the elements in the array
	cout<<"numbers begins from here"<<endl;
    std::sort(numbers.begin(),numbers.end());
    for (int i=0;i<numbers.size();++i){

        cout<<numbers[i]<<'|';
    }

	cout<<"";
	//sorting the numbers in order
    cout<<"Missing numbers include "<<endl;

    //printing out the numbers

    missing_numbers(numbers);

	return 0;
}
