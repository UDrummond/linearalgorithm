//Michael Drummond linear search
#include <iostream>
using namespace std;

int linear_search(char Array[],int size,char search)
{
    for(int i=0; i <size; i++)
    {
        if (Array[i]==search)
        {
            return i;
        }

    }
    return -1;

}

int main()
{

    const int size = 100;
    char Array[size];
    char search;

    cout <<"Enter characters ("<< size <<") max:";
    cin.getline (Array,size);

    cout<<"\nEnter search:";
    cin >> search;

    int result= linear_search(Array,size,search);

    if(result == -1)
    {
        cout <<"\n"<<"Not found";
    }
    else
    {
        cout << "\n" << search <<" found at location: " << result << endl;
    }

    return 0;
}
