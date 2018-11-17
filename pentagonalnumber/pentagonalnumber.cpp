#include <iostream>
#include <string>
using namespace std;

int PentagonalNumber(int num) {
   
    
    int sumation=1;
    for(int i=1;i<num;i++){
         int prod=i*5;
        sumation+=prod;

    }
     
  return sumation; 
            
}

int main() { 
  
  // keep this function call here
	do
	{
	int figure;
	cout<<"Input the figure :"<<endl;
	cin>>figure;

  	cout <<"output : "<< PentagonalNumber(figure)<<endl;
	
	} while (true);
  return 0;
}  