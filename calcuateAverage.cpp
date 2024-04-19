#include <iostream>
using namespace std;

class student
{
public:
    int arr[5];
    int total = 500;
    float sum;
    float average;
    void calculateAverage()
    {
        cout << "Enter your marks in English";
        cin >> arr[0];
        cout << "Enter your marks in Economics";
        cin >> arr[1];
        cout << "Enter your marks in Busines Studies";
        cin >> arr[2];
        cout << "Enter your marks in Accountancy";
        cin >> arr[3];
        cout << "Enter your marks in Physical Education";
        cin >> arr[4];

        for (int i = 0; i < 5; i++)
        {
            sum += arr[i];
        }
        average = sum / total * 100;
        cout << "The averge of result is " << average;
    }
};

int main()
{
    student s1;
    s1.calculateAverage();
    return 0;
}