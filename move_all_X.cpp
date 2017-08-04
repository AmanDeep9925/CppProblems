#include <iostream>
#include <cstring>
using namespace std;
int j, i = -1;
void moveX(char arr[], int be, int end) {
	if (be >= end)
		return ;
	moveX(arr, be+1 ,end);
	if (arr[be] == 'x')
	{	i++;


		for ( j = be; j < end - i; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[end - i] = 'x';

		be--;
	}


}
int main()
{
	char str[20];
	cin >> str;
	int n = strlen(str);
	int end = n - 1 ;
	moveX(str, 0, end);
	cout << str;
}