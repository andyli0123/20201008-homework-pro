/*�ϥ� cctype�A��J�@��^��y�l�A
�N�ĩ_�ƭӦr�令�j�g�A�İ��ƭӦr�令�p�g�A
�ťդμ��I�Ÿ����]�t�b�r���p�Ƥ��C*/ 
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
	string input;
	getline(cin, input);
	int i,a=0;
	for(i=0; i<=input.length(); i++){
		if((input[i]>=65&&input[i]<=90)||(input[i]>=97&&input[i]<=122)){
			if(((i-a)%2)==0){
				putchar(toupper(input[i]));
			}else{
				putchar(tolower(input[i]));
			}
		}else{
			putchar(input[i]);
			a+=1;
		}
	}
	return 0;
}
