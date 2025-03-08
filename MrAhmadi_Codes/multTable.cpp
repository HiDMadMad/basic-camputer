#include<iostream>

using namespace std;

int main()
{
    int row = 1;
    int col;
    int temp;

    while (row <= 10)
    {
        col = 1;
        while (col <= 10)
        {
            temp = row * col;
            cout<<temp<<"\t";
            col = col + 1;
        }

        cout<<"\n";
        row = row+1;
    }
    return 0;
}
