#include "stdio.h"
#include "math.h"
char find(int i, char* arr){
	char sin[] = "sin";
	char cos[] = "cos";
	char sin1[3] = "s";
	char cos1[3] = "c";
	for(i; arr[i] < '0' || arr[i] > '9'; i++){ //// csssoin
		if(arr[i] == 'i'){
			sin1[1] = 'i';
		}
		else if(arr[i] == 'o'){
			cos1[1] = 'o';
		}
		else if(arr[i] == 'n'){
			if(sin1[1] == 'i'){
				sin1[2] = 'n';	
				return sin1[0];
			}
			else{
				continue;
			}
		}
		else if(arr[i] == 's'){
			if(cos1[1] == 'o'){
				cos1[2] = 's';
				return cos1[0];
			}
			else{
				continue;
			}
		}
	}
//	return 0;
}
int main(){
	float temp = 0;
	float temp1 = 0;
	float res;
	char func;
	char arr[20] = "sin(34)*cos(79)";
	for(int i = 0; arr[i]!='0'; i++){
		if(arr[i] == 's' || arr[i] == 'c'){
			func = find(i, arr);
			while(arr[i]!='('){
				i+=1;
				if(arr[i] == '('){
					i+=1;
					while(arr[i]!=')'){
						temp += arr[i] - '0';
						temp*=10;
						i+=1;
						if(arr[i] == ')'){
							temp/=10;
							if(func == 's'){
								temp = sin(temp * 3.14/180);	
							}
							else{
								temp = cos(temp * 3.14/180);
							}
							i+=1;
							if(arr[i] == '*'){
								i+=1;
								func = find(i, arr);
								while(arr[i-1]!='('){
									i+=1;
									if(arr[i] == '('){
										i+=1;
										while(arr[i]!=')'){
										
											temp1 += arr[i] - '0';
											temp1*=10;
											i+=1;
											if(arr[i] == ')'){
												temp1/=10;
												if(func == 's'){
													temp1 = sin(temp1 * 3.14/180);
												}
												else{
													temp1 = cos(temp1 * 3.14/180);
												}
											}
										}
									temp*=temp1;
									res+=temp;
									temp = 0;
									temp1 = 0;
									printf("res = %f", res);
									break;
									}
								}					
							}
						}	
					}
				}
			}
		}	
	}
}
