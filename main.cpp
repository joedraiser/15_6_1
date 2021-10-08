#include <iostream>
#include <vector>

int main()
{
    std::vector<int> a = {-2, -3, 4, -1, 2, 1, -5, 3};
    int max=INT_MIN;
    int sum=0, wasSumPositiveBefore=0;
    int lowerBnd, upperBnd, currentLowerBnd=0, currentUpperBnd=0;

    for(int i=0;i<a.size();i++)
    {
        sum+=a[i];
        if(sum > 0 && !wasSumPositiveBefore)
        {
            wasSumPositiveBefore=1;
            currentLowerBnd=i;
            currentUpperBnd=i;
        }
        else if(sum > 0 && wasSumPositiveBefore)
        {
            currentUpperBnd=i;
        }

        if(sum>max)
        {
            max=sum;
            lowerBnd=currentLowerBnd;
            upperBnd=currentUpperBnd;
        }

        if(sum < 0)
        {
            wasSumPositiveBefore=0;
            currentLowerBnd=i;
            currentUpperBnd=i;
            sum=0;
        }
    }

    std::cout << lowerBnd << " " << upperBnd;
}
