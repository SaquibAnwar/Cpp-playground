#include <iostream>
using namespace std;

void rotate(int *input, int d, int n)
{
    //Write your code here
    // for(int i = 0; i < d; i++)
    // {
    //     int firstElement = input[0];
    //     for(int j = 1; j < n; j++)
    //     {
    //         input[j-1] = input[j];
    //     }
    //     input[n-1] = firstElement;
    // }

    int left = 0;
    int right = n-1;

    while(left < right)
    {
        swap(input[left], input[right]);
        left++;
        right--;
    }

    left = 0;
    right = n - d - 1;

    while(left < right)
    {
        swap(input[left], input[right]);
        left++;
        right--;
    }

    left = n - d;
    right = n - 1;

    while(left < right)
    {
        swap(input[left], input[right]);
        left++;
        right--;
    }
}

int main()
{
	int t;
	cin >> t;
	
	while (t--)
	{
		int size;
		cin >> size;

		int *input = new int[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		int d;
		cin >> d;

		rotate(input, d, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}
		
		delete[] input;
		cout << endl;
	}

	return 0;
}