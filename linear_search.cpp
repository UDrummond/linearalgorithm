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

    const int size = 10;
    char Array[size];
    char search;

    cout <<"Enter characters ("<< size <<") max:";
    cin.getline (Array,size);

    cout <<"Search index:";

    for(int i=0; i<size; i++)
    {
        cout <<Array[i];
    }

    cout<<"\nEnter search:";
    cin >> search;

    int result= linear_search(Array,size,search);

    if(result == -1)
    {
        cout <<"Not found";
    }
    else
    {
        cout << Array[result] <<" found at location:" << result;
    }

    return 0;
}