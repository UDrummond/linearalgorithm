//Michael Drummond 
//Linear Search
#include <iostream>
using namespace std;

//Set position negitive for return value if search not found
int position = -1;

int linear_search(char Array[], int size, char search)
{
	for (position = 0; position <size; position++)
	{
		if (Array[position] == search)
		{
			return position;
		}
	}

	//Return -1 (not found)
	return position;
}

int main()
{
	const int size = 100;
	char Array[size];
	char search;
	

	cout << "Enter characters (" << size << ") max:";
	cin.getline(Array, size);

	cout << "\nEnter search:";
	cin >> search;

	// Output users input
	cout << "Searching for:" << search << " in the list " << (Array);

	int result = linear_search(Array, size, search);

	if (result == -1)
	{
		cout << "\n" << search << " not found";
	}
	else
	{
		cout << "\n" << search << " found at location: " << position << endl;
	}
	return 0;
}
