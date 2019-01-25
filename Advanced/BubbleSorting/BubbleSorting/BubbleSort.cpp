#include <iostream>
#include <vector>
using namespace std;

void Swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}


void bubbleSort(vector<int> &array)
{
	cout << "Your Array has: " << array.size() << " values" << endl;

	for (int i = 0; i < array.size(); i++)
	{
		for (int i = 0; i < array.size() - 1; i++)
		{
			if (array[i] > array[i + 1])
				Swap(&array[i], &array[i + 1]);
		}
	}
}

void printArray(vector<int> array)
{
	for (int i = 0; i < array.size(); i++)
		cout << array[i] << " ";
	cout << endl;
}


int main()
{
	cout << "Type in values for your array.  For each value press enter.\nWhen finished entering values type in -3 to sort\n";

	vector<int> array;
	int num = 0;
	while (num != -3)
	{
		cin >> num;
		if (num != -3)
			array.push_back(num);
	}

	bubbleSort(array);

	cout << "After bubble sort your array is \n";
	printArray(array);

	system("PAUSE");
	return 0;
}