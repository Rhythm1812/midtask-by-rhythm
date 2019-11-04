#include<iostream>
#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;




double stop_counting(double arr1[], int len)
{
	double curr_sum = arr1[0];
	double max_avg = arr1[0];
	double arr2[len];
	for(int i=1;i<len;i++)
	{
		
		curr_sum+=arr1[i];
		if (max_avg<curr_sum/(i+1))
		{
			max_avg=curr_sum/(i+1);
			
		}
		
	}
	return max_avg;
	
	
}

int main() 
{
   //cout << "Enter the array length: ";
   int l;
   cin >> l;
   double arr[l];
   //cout << "Enter the elements of array: ";
   for (int i = 0; i < l; i++) 
   {
      cin >> arr[i];
   }
   
   double max1 = stop_counting(arr,l);
   reverse(arr,arr+l);
   
   double max2 = stop_counting(arr,l);
   double max_payout = max1;
	if(max2>max1)
	{
		max_payout = max2;
		
	}
	if(max_payout<0)
	{
		max_payout=0;
		
	}
	cout<<setprecision (8) << fixed<<max_payout;
	
   return 0;
   
}