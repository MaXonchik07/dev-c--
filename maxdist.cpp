#include "stdio.h"
#include "math.h"
#include "locale.h"
int main(){
	setlocale(LC_ALL, "Rus"); 									    // ������������� ������� ����
	//������� �1.1, ������������ ���������� ����� ����� �������
	int n = 10; 											        // ���������� �����
	int pIndex1; 											  	    // ������� �����
	int pIndex2;
	int pIndex3;
	int pIndex4;
	float maxDist; 				   							        // ������������ ���������� ����� ����� �������
	int tempX; 													    // ���������� ��� ���������� � ���������� �����
	int tempY; 													    // ���������� ��� ���������� Y ���������� �����
	float tempDist; 									            // ���������� ����� ����� �������
	int arrX[n] = {3, 6, 1, 8, 2, 12, 15, 0, 23, 6};                // ���������� ����� �� ��� X
	int arrY[n] = {5, 0, 10, 3, 5, 7, 14, 18, 9, 6};                // ���������� ����� �� ��� Y

	for(int i = 0; i < n; i++){                                     // ���������� ��������� ��������
		for(int j = i + 1; j < n; j++){
			tempX = arrX[j] - arrX[i];                              // ������� ��� ���������� ��������� �������
			tempY = arrY[j] - arrY[i];
			tempDist = sqrt((tempX*tempX)+(tempY*tempY));           // ������� ��� ���������� ����� �������
			if(maxDist < tempDist){	                                // ������� ��� ����������� ������������� ���������� ����� ������� � �� �������
				maxDist = tempDist;
				pIndex1 = i + 1;
				pIndex2 = j + 1;
			} 
		}
	}
	printf("������������ ���������� ����� ������� = %f", maxDist);   // ������� ������������ ���������� ����� ����� ������� � �� �������
	printf(", ������ ����� = %i, %i\n", pIndex1, pIndex2);
	//������� �1.2, ������������ ������� ������������
	float maxS;                                                      // ������������ ������� ������������
	float p;                  						                 // ������������
	float S;													     // ������� ������������
	float vector1;                                                   // �������
	float vector2;
	float vector3;
	
	for(int i = 0; i < n; i++){ 								     // ���������� ��������� �������� � �� �����
		for(int j = i + 1; j < n; j++){
			for(int k = j + 1; k < n; k++){
				tempX = arrX[j] - arrX[i]; 						     // ������� ��� ���������� ��������� �������
				tempY = arrY[j] - arrY[i];  
				vector1 = sqrt((tempX*tempX)+(tempY*tempY));         // ������� ��� ���������� ����� �������
				tempX = arrX[k] - arrX[j];
				tempY = arrY[k] - arrY[j];
				vector2 = sqrt((tempX*tempX)+(tempY*tempY));
				tempX = arrX[k] - arrX[i];
				tempY = arrY[k] - arrY[i];
				vector3 = sqrt((tempX*tempX)+(tempY*tempY));
				p = (vector1 + vector2 + vector3)/2;                 // ������� ��� ���������� ������������� ������������
				S = sqrt(p*(p-vector1)*(p-vector2)*(p-vector3));     // ������� ��� ���������� ������� ������������
				if(maxS < S){                                        // ������� ��� ���������� ������������ ������� ������������ � �������� �����
					maxS = S;
					pIndex1 = i + 1;
					pIndex2 = j + 1;
					pIndex3 = k + 1;
				}
			}
		}
	}
	printf("������������ ������� ������������ = %f", maxS);          // ����� ������������ ������� ������������ � �������� �����
	printf(", ������ ����� = %i, %i, %i\n", pIndex1, pIndex2, pIndex3);
	//������� �1.3, ������������ ������� ��������
	float S1;                                                        // ������� ������� ������������
	float notMaxS;                                                   // ����� �������� ���� �������������
	float vector4;												     // �������
	float vector5;
	
	for(int i = 0; i < n; i++){                                      // ���������� ��������� �������� � �� �����
		for(int j = i + 1; j < n; j++){
			for(int k = j + 1; k < n; k++){
				for(int h = k + 1; h < n; h++){
					tempX = arrX[j] - arrX[i];                       // ������� ��� ���������� ��������� �������
					tempY = arrY[j] - arrY[i];
					vector1 = sqrt((tempX*tempX)+(tempY*tempY));     // ������� ��� ���������� ����� �������
					tempX = arrX[k] - arrX[j];
					tempY = arrY[k] - arrY[j];
					vector2 = sqrt((tempX*tempX)+(tempY*tempY));
					tempX = arrX[k] - arrX[i];
					tempY = arrY[k] - arrY[i];
					vector3 = sqrt((tempX*tempX)+(tempY*tempY));
					tempX = arrX[h] - arrX[i];
					tempY = arrY[h] - arrY[i];
					vector4 = sqrt((tempX*tempX)+(tempY*tempY));
					tempX = arrX[h] - arrX[k];
					tempY = arrY[h] - arrY[k];
					vector5 = sqrt((tempX*tempX)+(tempY*tempY));
					p = (vector1 + vector2 + vector3)/2;              // ������� ��� ���������� ������������� ������������
					S = sqrt(p*(p-vector1)*(p-vector2)*(p-vector3));  // ������� ��� ���������� ������� ������������
					p = (vector4 + vector5 + vector3)/2;
					S1 = sqrt(p*(p-vector4)*(p-vector5)*(p-vector3));
					notMaxS = S + S1;                                 // ����� �������� ���� �������������, ������� ��������
					if(maxS < notMaxS){                               // ������� ��� ���������� ������������ ������� �������� � �������� �����
						maxS = notMaxS;
						pIndex1 = i + 1;
						pIndex2 = j + 1;
						pIndex3 = k + 1;
						pIndex4 = h + 1;
					}
				}
			}
		}
	}
	printf("������������ ������� �������� = %f", maxS);               // ����� ������������ ������� �������� � �������� �����
	printf(", ������ ����� = %i, %i, %i, %i\n", pIndex1, pIndex2, pIndex3, pIndex4);
}

