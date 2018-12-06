//#define _crt_secure_no_warnings
//#include <stdio.h>
//
//int gcd(int, int);
//
//int main()
//{
//	int n1, n2;
//	
//	scanf("%d %d", &n1, &n2);
//	
//	printf("%d", gcd(n1, n2));
//	return 0;
//}
//
//int gcd(int n1, int n2) {
//	int n3;
//	if (n1 > n2) {
//		int temp = n2;
//		n2 = n1;
//		n1 = temp;
//	}
//	for (int i = 1; i <= n1; i++) {
//		if (n1%i == 0 && n2%i == 0)
//			n3 = i;
//	}
//	return n3;
//}