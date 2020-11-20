#include  <iostream>
using namespace std;
int calc(int x, int y) ;
 
int main()
{
	int a,b,n;
	cout<<("Enter the number of test cases");
	cin>>n;
	while(n!=0)
	{
	cout<<("Enter the number of rows of the  matrix : ");
	cin>>a;
	cout<<("Enter the number of columns of the matrix : ");
	cin>>b;
	cout << "Number of ways - "<< calc(a,b)<<"\n";
	n--;
	}
		return  0;

}
int calc(int x, int y)
{
	if (x == 1 || y == 1)// If there is a singular matrix
    	{
        	return  1;
    	}
    	else
    	{
        	return calc(x - 1, y) + calc(x, y - 1);
    	}
    
}
