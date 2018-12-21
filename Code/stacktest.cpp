#include<iostream>
#include<stack>

//Stack s;
using namespace std;


bool bSearch(int data[], int nItems, int key)
{
	stack <int> s;
	int low=0, mid, high = nItems-1;

	while(low<high)
	{
		mid = (low+high) / 2;
		s.push(mid);

		if(key>data[mid])
			{
				low = mid + 1;
			}
			else 
				high = mid;
	}
	if(key == data[low])
	{
		return true;
	}
	else 
		return false;

}

int main(void)
{
	stack <int> s;
	 
	int data[] = {3,5,10,15,16,19,23,37};
	while(!s.empty())
	{
		 //showstack(s);
		int num = s.top();
		 //s.pop();
		 cout<<"num is" << num <<endl;
		

	}
	if(bSearch(data,8,19))
	{
		cout << "found" << endl;
	}
	else
		cout << "not found" << endl;

	
	return 0;

}