#include <bits/stdc++.h>
using namespace std;

void pairSum(int input[], int size, int x) {
    sort(input, input+size);
    int left = 0;
    int right = size-1;

    while(left < right)
    {
        if(input[left] + input[right] > x)
        {
            right--;
        }
        else if(input[left] + input[right] < x)
        {
            left++;
        }
        else
        {
            int leftNum = input[left];
            int leftCount = 0;
            while(input[left] == leftNum)
            {
                leftCount++;
                left++;
            }

            int pairCount = 0;
            int rightNum = input[right];
            if(leftNum == rightNum)
            {
                pairCount = (leftCount * (leftCount - 1)) / 2;
            }
            else
            {
                int rightCount = 0;
                while(input[right] == rightNum)
                {
                    rightCount++;
                    right--;
                }
                pairCount = leftCount * rightCount;
            }
            while (pairCount--)
            {
                cout << leftNum << " " << rightNum << endl;
            }
        }
    }
}

int main() {

	int size;
	int x;

	cin>>size;
	int *input=new int[1+size];	
	
	for(int i=0;i<size;i++)
		cin>>input[i];
	cin>>x;
	pairSum(input,size,x);
		
	return 0;
}
