// INSERTION IN THE ARRAY AT A GIVEN POSITION

#include <iostream>
using namespace std;

void input(int arr[], int N)
{
	for (int i = 0; i < N; ++i)
	{
		cin >> arr[i];
	}
}

void output(int arr[], int N)
{
	for (int i = 0; i < N; ++i)
	{
		cout << arr[i]<< " ";
	}
}



void insertion(int arr[], int N, int pos)
{
	int num;
	cout << "\n ENTER THE NUMBER TO BE INSERTED AT THE INDEX " << pos-1<< " :";
	cin >> num;

	for (int i = N; i >= pos ; --i)
	{
		arr[i] = arr[i - 1];
	}

	arr[pos - 1] = num ;

	cout << "INSERTION SUCCESFULL";
}

int main()
{
	cout << "\n ENTER THE SIZE OF THE ARRAY : ";
	int N;
	cin >> N;
	int arr[100];
	cout<<"\n ENTER THE ELEMENT OF THE ARRAY: ";
	input(arr,N);

	cout<<"\n ARRAY IS AS BELOW : ";
	output(arr,N);

	cout<<"\n ENTER THE POSITION AT WHICH ELEMENT IS TO BE INSERTED :";
	int pos;
	cin>>pos;
	// inserting the element in the array
	cout<<"\n INSERTING THE ELEMEN IN THE ARRAY ";
	insertion(arr,N,pos);

	cout<<"\n ARRAY AFTER THE INSERTION: ";
	output(arr,N+1);
}