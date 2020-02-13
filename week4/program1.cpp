#include <stdio.h>
#include <cmath>
#include <iostream>
using namespace std;

const int ARR_SIZE = 10;
void calculations(int *nums, int sum);

int main()
{
    int nums[ARR_SIZE];
    int k = 0;
    int sum = 0;
    while(k<ARR_SIZE)
    {
        cout << "enter a number: ";
        cin >> nums[k];
        sum+=nums[k];
        k++;
    }
    calculations(nums, sum);
    return 1;
}

void calculations(int *nums, int sum){
    double avg = (double)sum/ARR_SIZE;
    double sd_sum = 0;
    for(int i=0;i<ARR_SIZE;i++){
        double k = nums[i]-avg;
        sd_sum += pow(k,2);
    }  
    double sd_avg = sd_sum/ARR_SIZE;
    double sd = sqrt(sd_avg);
    printf("Average: %f\nStandard deviation: %f\n", avg, sd);

}