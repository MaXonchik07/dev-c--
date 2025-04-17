#include "stdio.h"
int soedin(int a, int b, int c){
		int temp = b;
		int len1 = 0;
		int len2 = 0;
		for(int i = 0; temp>0; i++){
			temp/=10;
			len1++;
		}
		for(int i = 0; i<len1;i++){		
			a*=10;
		}
		a+=b;
		temp = c;
		for(int i = 0; temp>0; i++){
			temp/=10;
			len2++;
			}
		for(int i = 0; i<len2;i++){		
			a*=10;
			}
		a+=c;
		return a;
	}
int dvoi(int a){
	int res = a;
	int res1;
	res1 = res;
	if(res%10==0){
		while(res%10==0){
			res/=10;
		}
		res -= 1;
		while(res<res1){
			res*=10;
			res+=1;
		}
		res/=10;
	}
	else
		res-=1;
	res1 = res;
	return res1;
}
int cifri(int a, int b){
	int c;
	int arr[10] = {0};
	for(int i = 0; i < 10; i++){
		arr[i] = -1;
	}
	if(a==0 || b==0){
		arr[0] = 0;
	}
	for(int i = 0; i < 10; i++){
		while(a>0){
			c = a%10;
			a /= 10;
			for(int j = 0; j < 10; j++){
				if(j==c){
					arr[j] = c;
					}
				}
			}
		}
	for(int i = 0; i< 10; i++){
		while(b>0){
			c = b%10;
			b /= 10;
			for(int j = 0; j < 10; j++){
				if(j==c){
					arr[j] = c;
					}
				}
			}
		}
	for(int i = 0; i < 10; i++){
		if (arr[i]==-1)
			continue;
		printf("%i", arr[i]);
	}
}
int zmeika(int a, int b){
	int k = 1;
	int n = 0;
	if(a < b){
	for(int i = 0; i < a; i++){
		if(i%2==0){
		 	if(k>n && k!=1)
		 		k+=b;
			for(int j = 0; j < b; j++){
				if(k<10)
					printf("%i   ", k);
				else if(k>100) 
					printf("%i ", k);
				else
					printf("%i  ", k);
				k++;
				
			}
		}
		else
			for(int j = 0; j < b; j++){
				n+=(b+k-1);
				if(n<10)
					printf("%i   ", n);
				else if(n>100)
					printf("%i ", n);
				else
					printf("%i  ", n);
				n-=(b+k);
				if(j==b-1)
					n = 0;
		}
		printf("\n");
	}
}
	else{
		n = 0;
		for(int i = 0; i < a; i++){
			if(i%2==0){
		 		if(k>n && k!=1)
		 			k+=b;
				for(int j = 0; j < b; j++){
					if(k<10)
						printf("%i   ", k);
					else 
						printf("%i  ", k);
					k++;
				
			}
		}
		else
			for(int j = 0; j < b; j++){
				n+=(b+k-1);
				if(n<10)
					printf("%i   ", n);
				else
					printf("%i  ", n);
				n-=(b+k);
				if(j==b-1)
					n = 0;
		}
		printf("\n");
		}
	}
}
int main(){
//	printf("", zmeika(8, 5));
//	printf("%i", soedin(15, 53, 230));
//	printf("%i", dvoi(1110));
//	cifri(1230,456);
}
