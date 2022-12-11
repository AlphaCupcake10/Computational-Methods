#include <bits/stdc++.h>
using namespace std;

float generate(float x,float x0 , vector<float>&arr)
{
    float ans = 1;
    for(float iter : arr)
    {
        if(iter != x0)
        {
            ans *= (x-iter);//numerator
            ans /= (x0-iter);//denominator
        }
    }

    return ans;
}

int main()
{
    vector<float>X = {5,6,9,11};
    vector<float>Y = {12,13,14,16};

    float ans = 0;
    float At = 10;

    for(int i = 0 ; i < Y.size() ; i ++)
    {
        ans += Y[i] * generate(At,X[i],X);
    }

    cout<<ans;
}