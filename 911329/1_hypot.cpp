//使用<cmath>，給直角三角形的兩個邊，求斜邊長。
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int a,b;
	cin >> a >> b;
	cout << hypot(a,b);	//輸出a^2+b^2開根號(畢氏定理) 
	return 0;
} 
