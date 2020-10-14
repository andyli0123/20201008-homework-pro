/*ㄏノ cctype块﹃璣ゅ
盢材计эΘ糶材案计эΘ糶
フの夹翴才腹ぃ璸计ず*/ 
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
