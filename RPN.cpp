#include "stdio.h"
#include "math.h"
char find(int i, char* arr){
	char sin[] = "sin";
	char cos[] = "cos";
	char sin1[3] = "s";
	char cos1[3] = "c";
	for(i; arr[i] < '0' || arr[i] > '9'; i++){
		if(arr[i] == 'i' || arr[i] == 'I'){
			sin1[1] = 'i';
		}
		else if(arr[i] == 'o' || arr[i] == 'O'){
			cos1[1] = 'o';
		}
		else if(arr[i] == 'n' || arr[i] == 'N'){
			if(sin1[1] == 'i' || sin1[1] == 'I'){
				sin1[2] = 'n';	
				return sin1[0];
			}
			else{
				continue;
			}
		}
		else if(arr[i] == 's' || arr[i] == 'S'){
			if(cos1[1] == 'o' || cos1[1] == 'O'){
				cos1[2] = 's';
				return cos1[0];
			}
			else{
				continue;
			}
		}
	}
}
float stepen(float a, float b){
	float c = a;
	for(float i = 1; i < b; i++){
		a*=c;
	}
	return a;
}
char sqrtP(char* arr, int i){
	char sqrt[4] = "s"; 
	for(i; arr[i] < '0' || arr[i] > '9'; i++){
		if(arr[i] == 'q'){
			sqrt[1] = 'q';
		} 
		else if(arr[i] == 'r'){
			if(sqrt[1] == 'q'){
				sqrt[2] = 'r';
			}
			else{
				continue;
			}
		}
		else if(arr[i] == 't'){
			if(sqrt[2] == 'r'){
				sqrt[3] = 't';
				return sqrt[3];
			}
		}
		else{
			continue;
		}
	}
}
char expP(char* arr, int i){
	char exp[3] = "e"; 
	for(i; arr[i] < '0' || arr[i] > '9'; i++){
		if(arr[i] == 'x'){
			exp[1] = 'x';
		} 
		else if(arr[i] == 'p'){
			if(exp[1] == 'x'){
				exp[2] = 'p';
				return exp[2];
			}
			else{
				continue;
			}
		}
		else{
			continue;
		}
	}
}
float fact(float a){
	int b = 1;
	for(int i = 1; i <= a; i++){
		b*=i;
	}	
	return b;
}
int main(){
	float res;
	float temp = 0;
	float temp1 = 0;
	float temp2 = 0;
	char func;
	int index;
	int count = 1;
	int flag12 = 0;
	int flag2 = 0;
	int flag1 = 0;
	char arr[30] = "56 + 2! *4!/3!"; //1)-6+2076-4*3/2+56*3 //2)-6.34-2076 //3) )(-6+2076)*4 //4) (-a6 78+34ã78) //5) -ds45 2 ^( 3 2 +34) // 6) sin(34)*cos(79) // 7) ScCvIeOnNs(34) // 8) sqrt(25*3) + eppxqrp(14/3) // 9) 56 + 2! *4!/3! // 10) 23x'+23'+2*2x'
	for(int i = 0, j = 0; arr[i]!='\0'; i++, j++){	
		if(arr[i] == '('){
			while(arr[i]!=')'){
				i+=1;
				if(arr[i] == '-'){
					if(arr[i+1] < '0' || arr[i+1] > '9'){
						while(arr[i+1]!='+'){
							i+=1;	
							if(arr[i+1] >= '0' && arr[i+1] <= '9'){
							temp -= (arr[i+1] - '0');
							temp *= 10;
						}
					}
					flag1 = 1;
				}
				else{
					while(arr[i+1] >= '0' && arr[i+1] <= '9'){
						temp -= (arr[i+1] - '0');
						temp *= 10;
						i+=1;
					}
						if(arr[i+1]=='.'){
							while(arr[i+2] >= '0' && arr[i+2] <= '9'){
								temp -= (arr[i+2] - '0');
								temp *= 10;
								i+=1;
								count*=10;	
							}
						}
					}
					j = i + 2;
					if(arr[i+1] == '*'){
						while(arr[j] >= '0' && arr[j] <= '9'){
							temp1 += (arr[j] - '0');
							temp1 *=10;
							j+=1;
						}
						temp/=10;
						temp1/=10;
						temp*=temp1;
						temp1 = 0;
						if(arr[j] == '/'){
							while(arr[j+1] >= '0' && arr[j+1] <= '9'){
								temp1 += (arr[j+1] - '0');
								temp1 *=10;
								j+=1;	
							}
							temp1/=10;
							temp/=temp1;
							res+=temp;
							temp = 0;
							temp1 = 0;
						}
					}
					temp/=10;										
					temp/=count;
					count = 1;
					res += temp;
					temp = 0;
					temp1 =0;
				}	
				else if(arr[i] == '+'){
					if(flag1 == 1){
						while(arr[i]!=')'){
							i+=1;
							if(arr[i] >= '0' && arr[i] <= '9'){
								temp += (arr[i] - '0');
								temp*=10;
							}
						}	
					temp/=10;
					}
					else{
						while(arr[i+1] >= '0' && arr[i+1] <= '9'){
							temp += (arr[i+1] - '0');
							temp*=10;
							i+=1;		
						}
						temp/=10;
					}	
					if(arr[i+1] =='*'){
						while(arr[i+2] >= '0' && arr[i+2] <= '9'){
							temp1 += (arr[i+2] - '0');
							temp1 *= 10;
							i+=1;
						}
					temp1/=10;
					}
					else{
						res+=temp;
					}
					i-=1;
					temp*=temp1;
					res+=temp;
					temp = 0;
					temp1 = 0;
				}
				else if(arr[i] == '*'){
					while(arr[i+1] >= '0' && arr[i+1] <= '9'){
						temp += (arr[i+1] - '0');
						temp *= 10;
						i+=1;
					}
					temp/=10;
					res*=temp;
					temp = 0;
				}
				else if(arr[i] == '/'){
					while(arr[i+1] >= '0' && arr[i+1] <= '9'){
						temp += (arr[i+1] - '0');
						temp *= 10;
						i+=1;
					}
					temp/=10;
					res/=temp;
					temp = 0;
				}	
			}
		}
		else{
			if(arr[i] == '-'){
				if(arr[i+1] < '0' || arr[i+1] > '9'){
					while(arr[i+1]!='^'){
						i+=1;	
						if(arr[i+1] >= '0' && arr[i+1] <= '9'){
							temp -= (arr[i+1] - '0');
							temp *= 10;
							}
						}
					}
				 	temp/=10;
					if(arr[i+1] == '^'){
						if(arr[i+3] < '0' || arr[i+3] > '9'){
							while(arr[i+3]!='+'){
								if(arr[i+3] >= '0' && arr[i+3] <= '9'){
									temp1 += (arr[i+3] - '0');
									temp1 *= 10;
								}
								i+=1;
							}	
						}
						if(arr[i+3] == '+'){
							while(arr[i+4] >= '0' && arr[i+4] <= '9'){
								temp2 += (arr[i+4] - '0');
								temp2 *= 10;
								i+=1;
							}
						}
						temp1/=10;
						temp2/=10;
						temp1 += temp2;
						temp2 = 0;
						res = stepen(temp, temp1);
						temp = 0;
						temp1 = 0;
						
					}
					else if(arr[i+1]=='.'){
						while(arr[i+2] >= '0' && arr[i+2] <= '9'){
							temp -= (arr[i+2] - '0');
							temp *= 10;
							i+=1;
							count*=10;	
						}
					}
				j = i + 2;
				if(arr[i+1] == '*'){
					flag12 = 1;
					while(arr[j] >= '0' && arr[j] <= '9'){
						temp1 += (arr[j] - '0');
						temp1 *=10;
						j+=1;
					}
					temp/=10;
					temp1/=10;
					temp*=temp1;
					temp1 = 0;
					if(arr[j] == '/'){
						flag2 = 1;
						while(arr[j+1] >= '0' && arr[j+1] <= '9'){
							temp1 += (arr[j+1] - '0');
							temp1 *=10;
							j+=1;	
						}
						temp1/=10;
						temp/=temp1;
						res+=temp;
						temp = 0;
						temp1 = 0;
					}
				}
				temp/=10;										
				temp/=count;
				count = 1;
				res += temp;
				temp = 0;
				temp1 =0;
			}	
//			else if(arr[i] == '+'){
//				while(arr[i+1] >= '0' && arr[i+1] <= '9'){
//					temp += (arr[i+1] - '0');
//					temp*=10;
//					i+=1;
//				}	
//				temp/=10;
//				if(arr[i+1] =='*'){
//					while(arr[i+2] >= '0' && arr[i+2] <= '9'){
//						temp1 += (arr[i+2] - '0');
//						temp1 *= 10;
//						i+=1;
//					}
//				temp1/=10;
//				i+=1;
//				}
//				else{
//					res+=temp;
//				}
//				temp*=temp1;
//				res+=temp;
//				temp = 0;
//				temp1 = 0;
//			}
			else if((arr[i] == '*') && (flag12 == 0)){
				while(arr[i+1] >= '0' && arr[i+1] <= '9'){
					temp += (arr[i+1] - '0');
					temp *= 10;
					i+=1;
				}
				temp/=10;
				res*=temp;
				temp = 0;
			}
			else if((arr[i] == '/') && (flag2 == 0)){
				while(arr[i+1] >= '0' && arr[i+1] <= '9'){
					temp += (arr[i+1] - '0');
					temp *= 10;
					i+=1;
				}
				temp/=10;
				res/=temp;
				temp = 0;
			}
		}
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
		if(arr[i] == 'S' || arr[i] == 'c'){
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
							res += temp;
							temp = 0;
						}		
					}
					break;
				}
			}
		}
		if(arr[i] == 's'){
			func = sqrtP(arr, i);
			while(arr[i]!='(' && temp2 == 0){
				i+=1;
				if(arr[i] == '('){
					temp2+=1;
					i+=1;
					while(arr[i]!='*' && temp2 == 1){
						temp += arr[i] - '0';
						temp*=10;
						i+=1;
						if(arr[i] == '*'){
							temp2+=1;
							i+=1;
							while(arr[i]!=')' && temp2 == 2){
								temp1 += arr[i] - '0';
								temp1*=10;
								i+=1;
							}
							if(arr[i] == ')'){
								temp2+=1;
								i+=1;
								temp/=10;
								temp1/=10;
								if(func == 't'){
									res = sqrt(temp*temp1);
									temp = 0;
									temp1 = 0;
								}
								while(arr[i] != 'e' && temp2 == 3){
									i+=1;
									if(arr[i] == 'e'){
										temp2+=1;
										func = expP(arr, i);
										while(arr[i]!='(' && temp2 == 4){
											i+=1;
											if(arr[i] == '('){
												temp2+=1;
												i+=1;
												while(arr[i]!='/' && temp2 == 5){
													temp += arr[i] - '0';
													temp*=10;
													i+=1;
													if(arr[i] == '/'){
														temp2+=1;
														temp/=10;
														i+=1;
														while(arr[i]!=')' && temp2 == 6){
															temp1 += arr[i] - '0';
															temp1*=10;
															i+=1;
															if(arr[i] == ')'){
																temp2+=1;
																temp1/=10;
																temp/=temp1;
																temp = exp(temp);
																res+=temp;
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
					}
				}
			}
		}
		if(arr[i] >= '0' && arr[i] <= '9' && arr[i] == '5'){
			while(arr[i] >= '0' && arr[i] <= '9' && temp2 == 0){
				temp += arr[i] - '0';
				temp*=10;
				i+=1;			
			}
			temp2+=1;
			temp/=10;
			while(arr[i]!='!' && temp2 == 1){
				i+=1;
				if(arr[i] == '!'){
					temp2+=1;
					temp1 = fact(arr[i-1] - '0');
					i+=1;
					while(arr[i]!='!' && temp2 == 2){
						i+=1;
						if(arr[i] == '!'){
							temp2+=1;
							temp1*=fact(arr[i-1] - '0');
							i+=1;
							while(arr[i]!='!' && temp2 == 3){
								i+=1;
								if(arr[i] == '!'){
									temp2+=1;
									temp1/=fact(arr[i-1] - '0');
									res+=temp;
									res+=temp1;
									temp = 0;
									temp1 = 0;
									temp2 = 0;
								}
							}
						}
					}
				}
			}
		}
		if(arr[i] >= '0' && arr[i] <= '9'){
			index = i;
			while(arr[i]!= 39 && temp2 == 0){
				i+=1;
				if(arr[i] == 39){
					if(arr[i-1] == 'x'){
						temp2 += 1;
						while(arr[index]!= 'x' && temp2 == 1){
							temp += arr[index] - '0';
							temp *= 10;
							index += 1;
							if(arr[index] == 'x'){
								temp/=10;
								temp2+=1;
								i+=1;
								while(arr[i]!=39 && temp2 == 2){
									i+=1;
									if(arr[i] == 39){
										if(arr[i-1] !='x'){
											temp2 +=1;
											while(arr[i]!='*' && temp2 == 3){
												i+=1;
												if(arr[i] == '*'){
													index = i-1;
													temp2 += 1;
													while(arr[index]!='*' && temp2 == 4){
														temp1 += arr[index] - '0';
														temp1 *= 10;
														index += 1;	
														if(arr[index] == '*'){
															temp2+=1;
															while(arr[i]!=39 && temp2 == 5){
																i+=1;
																if(arr[i] == 39 && arr[i-1] == 'x'){
																	temp2 += 1;
																	res += temp;
																	temp = 0;
																	index+=1;
																	while(arr[index]!='x' && temp2 == 6){
																		temp += arr[index] - '0';
																		temp *= 10;
																		index += 1;
																		if(arr[index] == 'x'){
																			temp2+=1;
																			temp1/=10;
																			temp /= 10;	
																			temp1 *= temp;
																			res += temp1;
																			temp1 = 0;
																			temp = 0;
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
								}
							}
						}
					}
				}
			}
		}
	}
	printf("res = %f", res);
}
