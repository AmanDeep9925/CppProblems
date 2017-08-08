// LARGEST ELEMENT IN THE ARRAY

#include <iostream>
using namespace std;

int  largest(int arr[], int N)
{	// assuming largest is first element
	int lar = arr[0];
	for (int i = 1 ; i <=N - 1; i++)
	{
		if(arr[i]>lar)// found largest element then first element
		{// need to update the lar
			lar = arr[i];
		}
	}

	return lar;// returning largest element in the array
}

void input(int arr[],int N)
{
	for (int i = 0; i < N; ++i)
	{
		cin>>arr[i];
	}
}

void output(int arr[],int N)
{
	for (int i = 0 ; i < N; ++i)
	{
		cout<<arr[i]<<" ";
	}
}

int main()
{
	int N, Arr[100];
	cout << "\n ENTER THE SIZE OF THE ARRAY :";
	cin >> N;
	// ENTER THE ELEMENTS IN THE ARRAY
	cout << "\n ENTER THE ELEMENTS IN THE ARRAY :";
	input(Arr, N);

	// DATA OF THE ARRAY IS AS
	cout << "\n ELEMENTS OF THE ARRAY ARE AS BELOW :";
	output(Arr, N);
	cout << "\n LARGEST ELEMENT IN THE ARRAY : ";
	int lar = largest(Arr, N);

	cout << lar;
}