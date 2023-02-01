#include<bits/stdc++.h>
using namespace std;

float f(float x,float y) //dy/dx = f(x,y)
{
    return x+y;
}
int main()
{
    float x0 = 0;
    float y0 = 0.1;
    float h = 0.1;

    float k1 = h*f(x0,y0);
    float k2 = h*f(x0 + h/2,y0 + k1/2);
    float k3 = h*f(x0 + h/2,y0 + k2/2);
    float k4 = h*f(x0 + h,y0 + k3);

    float y1 = y0 + (k1+2*k2+2*k3+k4)/6;

    cout<<y1;
}