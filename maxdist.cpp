#include "stdio.h"
#include "math.h"
#include "locale.h"
int main(){
	setlocale(LC_ALL, "Rus"); 									    // Устанавливаем русский язык
	//Задание №1.1, максимальное расстояние между двумя точками
	int n = 10; 											        // Количество точек
	int pIndex1; 											  	    // Индексы точек
	int pIndex2;
	int pIndex3;
	int pIndex4;
	float maxDist; 				   							        // Максимальное расстояние между двумя точками
	int tempX; 													    // Переменная для нахождения Х координаты точки
	int tempY; 													    // Переменная для нахождения Y координаты точки
	float tempDist; 									            // Расстояние между двумя точками
	int arrX[n] = {3, 6, 1, 8, 2, 12, 15, 0, 23, 6};                // Координаты точек по оси X
	int arrY[n] = {5, 0, 10, 3, 5, 7, 14, 18, 9, 6};                // Координаты точек по оси Y

	for(int i = 0; i < n; i++){                                     // Нахождение координат векторов
		for(int j = i + 1; j < n; j++){
			tempX = arrX[j] - arrX[i];                              // Формулы для нахождения координат вектора
			tempY = arrY[j] - arrY[i];
			tempDist = sqrt((tempX*tempX)+(tempY*tempY));           // Формула для нахождения длины вектора
			if(maxDist < tempDist){	                                // Условие для определения максимального расстояния между точками и их индексы
				maxDist = tempDist;
				pIndex1 = i + 1;
				pIndex2 = j + 1;
			} 
		}
	}
	printf("Максимальное расстояние между точками = %f", maxDist);   // Выводим максимальное расстояние между двумя точками и их индексы
	printf(", индекс точек = %i, %i\n", pIndex1, pIndex2);
	//Задание №1.2, максимальная площадь треугольника
	float maxS;                                                      // Максимальная площадь треугольника
	float p;                  						                 // Полупериметр
	float S;													     // Площадь треугольника
	float vector1;                                                   // Вектора
	float vector2;
	float vector3;
	
	for(int i = 0; i < n; i++){ 								     // Нахождение координат векторов и их длины
		for(int j = i + 1; j < n; j++){
			for(int k = j + 1; k < n; k++){
				tempX = arrX[j] - arrX[i]; 						     // Формулы для нахождения координат вектора
				tempY = arrY[j] - arrY[i];  
				vector1 = sqrt((tempX*tempX)+(tempY*tempY));         // Формула для нахождения длины вектора
				tempX = arrX[k] - arrX[j];
				tempY = arrY[k] - arrY[j];
				vector2 = sqrt((tempX*tempX)+(tempY*tempY));
				tempX = arrX[k] - arrX[i];
				tempY = arrY[k] - arrY[i];
				vector3 = sqrt((tempX*tempX)+(tempY*tempY));
				p = (vector1 + vector2 + vector3)/2;                 // Формула для нахождения полупериметра треугольника
				S = sqrt(p*(p-vector1)*(p-vector2)*(p-vector3));     // Формула для нахождения площади треугольника
				if(maxS < S){                                        // Условие для нахождения максимальной площади треугольника и индексов точек
					maxS = S;
					pIndex1 = i + 1;
					pIndex2 = j + 1;
					pIndex3 = k + 1;
				}
			}
		}
	}
	printf("Максимальная площадь треугольника = %f", maxS);          // Вывод максимальной площади треугольника и индексов точек
	printf(", индекс точек = %i, %i, %i\n", pIndex1, pIndex2, pIndex3);
	//Задание №1.3, максимальная площадь квадрата
	float S1;                                                        // Площадь второго треугольника
	float notMaxS;                                                   // Сумма площадей двух треугольников
	float vector4;												     // Вектора
	float vector5;
	
	for(int i = 0; i < n; i++){                                      // Нахождение координат векторов и их длины
		for(int j = i + 1; j < n; j++){
			for(int k = j + 1; k < n; k++){
				for(int h = k + 1; h < n; h++){
					tempX = arrX[j] - arrX[i];                       // Формула для нахождения координат вектора
					tempY = arrY[j] - arrY[i];
					vector1 = sqrt((tempX*tempX)+(tempY*tempY));     // Формула для нахождения длины вектора
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
					p = (vector1 + vector2 + vector3)/2;              // Формула для нахождения полупериметра треугольника
					S = sqrt(p*(p-vector1)*(p-vector2)*(p-vector3));  // Формула для нахождения площади треугольника
					p = (vector4 + vector5 + vector3)/2;
					S1 = sqrt(p*(p-vector4)*(p-vector5)*(p-vector3));
					notMaxS = S + S1;                                 // Сумма площадей двух треугольников, площадь квадрата
					if(maxS < notMaxS){                               // Условие для нахождения максимальной площади квадрата и индексов точек
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
	printf("Максимальная площадь квадрата = %f", maxS);               // Вывод максимальной площади квадрата и индексов точек
	printf(", индекс точек = %i, %i, %i, %i\n", pIndex1, pIndex2, pIndex3, pIndex4);
}

