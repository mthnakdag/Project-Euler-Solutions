//EXERCISE 1
/*If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.*/
#include <iostream>
using namespace std;
int sumfunction(int);
main()
{
    cout<<sumfunction(1000)<<endl;
}
int sumfunction(int num){
    int sum_of_numbers=0;
    for(int i=0;i<1000;i+=3)
        sum_of_numbers+=i;
    for(int i=0;i<1000;i+=5)
        sum_of_numbers+=i;
    for(int i=0;i<1000;i+=15)
        sum_of_numbers-=i;
    return sum_of_numbers;
}
