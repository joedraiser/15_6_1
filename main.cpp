#include <iostream>
#include <vector>

int main()
{
    std::vector<int> a = {-2,1,-3,4,-1,2,1,-5,4};
    int max=a[0];
    int sum=0;
    int upperBnd, lowerBnd;

    for(int i=0;i<a.size()-1;i++)
    {
        for(int j=i;j<a.size();j++)
        {
            sum += a[j];
            if(sum>max)
            {
                max = sum;
                upperBnd=i;
                lowerBnd=j;
            }
        }
        sum=0;
    }

    std::cout << upperBnd << " " << lowerBnd;
}
