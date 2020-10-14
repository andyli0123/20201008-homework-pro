/*使用 cctype，輸入一串英文句子，
將第奇數個字改成大寫，第偶數個字改成小寫，
空白及標點符號不包含在字的計數內。*/ 
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
	string input;
	getline(cin, input);
	int i,a=0;
	for(i=0; i<=input.length(); i++){
		if(isalpha(input[i])){
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
