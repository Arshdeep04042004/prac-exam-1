main() function

#include <iostream>
using namespace std;
void printer(int arr[10][10])
{
	//printing array
  for(int i=0;i<10;i++)
  {
  	for(int j=0;j<10;j++)
  	{
       cout<<arr[i][j]<<" ";
  	}
  	
  	cout<<endl;
  }

}
int main()
{
  int arr[10][10];
  for(int i=0;i<10;i++)
  {
  	for(int j=0;j<10;j++)
  	{
  		cin>>arr[i][j];
  	}
  }
  printer(arr);
}