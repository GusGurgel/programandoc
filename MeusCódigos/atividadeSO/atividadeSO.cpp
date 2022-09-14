#include <iostream>
#include <iomanip>

using namespace std;

bool equality(int, int, int, int, int);

int main()
{
	int combCount { 0 };
	float nums [5] {2, 4, 6, 8, 10};
	int   prior[5] {2, 1, 5, 4, 3};
	float sum { 0 };
	float saveSum { 0 };
	
	cout << fixed << setprecision(2);
	
	for(int a = 0; a < 5; a++)
	{
		for(int b = 0; b < 5; b++)
		{
			for(int c = 0; c < 5; c++)
		    {		
				for(int d = 0; d < 5; d++)
				{
					for(int e = 0; e < 5; e++)
					{
						if(equality(nums[a], nums[b], nums[c], nums[d], nums[e]))
						{
							continue;
						}
						
						combCount++;
						
						sum = 0;
						sum += (nums[a] * 5);
						sum += (nums[b] * 4);
						sum += (nums[c] * 3);
						sum += (nums[d] * 2);
						sum += (nums[e] * 1);
						saveSum = sum;
						
						sum /= 5;
						
						if(sum >= 18.7 && sum <= 18.8)
						{
							cout << "{" << prior[a] << "}" << nums[a] << " \t* 5 = \t" << nums[a] * 5  << endl; 
							cout << "{" << prior[b] << "}" << nums[b] << " \t* 4 = \t" << nums[b] * 4  << endl; 
							cout << "{" << prior[c] << "}" << nums[c] << " \t* 3 = \t" << nums[c] * 3  << endl; 
							cout << "{" << prior[d] << "}" << nums[d] << " \t* 2 = \t" << nums[d] * 2  << endl; 
							cout << "{" << prior[e] << "}" << nums[e] << " \t* 1 = \t" << nums[e] * 1  << endl; 
							cout << "sumt\t" << saveSum		   << endl; 
							cout << "sum/5 \t\t" << sum		   << endl; 
							cout << "=*=*=*=*=*=*=*=*=*=*=*=*=" << endl;
						}
					}
				}
			}
		}
	}
	cout << endl << combCount;
	
	return 0;
}

bool equality(int a, int b, int c, int d, int e)
{
	int arr[5] = {a, b, c, d, e};
	
	for(int i = 0; i < 5; i++)
	{
		for(int y = 0; y < 5; y++)
		{
			if(i == y)
				continue;
			if(arr[i] == arr[y])
			{
				return true;
			}
		}
	}
	
	return false;
}
