#include <iostream>
using namespace std;
int main()
{
int arr[]={500,98,54};

cout<<sizeof(arr)<<"\n";  // 4 * 3 = 12

cout<<"FIRST ELEMENT : "<<arr[0]<<"\n";

cout<<"SECOND ELEMENT : "<<arr[1]<<"\n";

cout<<"location : "<<& arr[0]<<"\n";
cout<<"location : "<<& arr[1]<<"\n";
cout<<"location : "<<& arr[2]<<"\n";


double dos[]{20 , 84.6 , 45.9 , 80 , 556.6};
cout<<sizeof(dos); // 8 * 5 = 40

    return 0; 
}