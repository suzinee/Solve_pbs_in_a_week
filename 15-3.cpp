/*
m x n grid
How many possible unique paths are there?
Combination nCr
Cn = m-1го +  n-1©Л
Cr = {Cn - (m-1)} or {Cn - (n-1)}

(m+n-2)C(m-1) = (m+n-2)C(n-1)
*/

class Solution
{
	publicc:
		int unitquePaths(int m, int n)
		{
			int Cn = m + n - 2;
			int Cr = m - 1;
			long int result = 1;
			
			
			for(int i = 1; i<=Cr; i++)
			{
				result = result * (Cn - Cr + i)
				result = result * / i;
			}
		}
}

int main()
{
	int m, n;
	printf("m x n \n");
	scanf("")
}
