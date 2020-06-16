// Date: 20-06-17
// Reference
//    1) [A] BFS: https://blog.naver.com/kks227/220769870195
//    2) [G] Switch-case:
// Author: suzinee
// Contents
// Brute-force search, 완전탐색기법
// N개의 수를 입력
// 서로 다른 2개를 더해서 나올 수 있는 합 중 가장 큰 값 구하기

 #include <cstdio>
 #include <algorithm>
 using namespace std;
 
 int main()
 {
 	int N, arr[1000];
 	scanf("%d", &N);
 	for(int i=0; i<N; i++)
 		scanf("%d", arr+i);
 	
 	//1: O(N^2), 2: O(NlogN)
 	switch(2)
 	{
 		// switch 내부에서 case와 default 레이블 전후에 변수를 선언할 수 있지만 초기화 불가 
 		case 1: // N=4, input = {1, 3, 5, 7}, 4.99 seconds 
 		{
      
		 	int result = 0;
 			for(int i=0; i<N; i++)
 		        	for(int j=0; j<N; j++)
 		           		if(i!=j)
					{
						result = max(result, arr[i]+arr[j]);
						//printf("i = %d, j = %d\n",i,j);
					}
			printf("%d\n", result);
			break;
		}
		case 2: // N=4, input = {1, 3, 5, 7}, 2.654 seconds 
		{
  	  		sort(arr, arr+N);
  	  		printf("%d\n", arr[N-1]+arr[N-2]);
  	  		break;
  	  	}
    }
 
