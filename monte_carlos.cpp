#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x, y, distance, pi;
    int interval, circle_points = 0, square_points = 0;

    srand(time(NULL));

    cout<< "Enter the total number of random points : ";
    cin>> interval;

    for (int i = 0; i < interval; i++)
    {
        x = double(rand() % (interval + 1)) / interval;
        y= double(rand() % (interval + 1)) / interval;

        distance = pow(x,2) + pow(y,2);

        if(distance<=1)
            circle_points ++;

        square_points ++;

        pi = double(4 * circle_points) / square_points;
    }

    cout<<"\nThe value of PI for the '" << interval <<"' random points is : " << pi <<endl;

    return 0;
}
