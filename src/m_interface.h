//
// Created by Artem Grablevski 26.02.2024
//

#ifndef M_INTERFACE_H
#define M_INTERFACE_H

#include <stdlib.h> // For size_t

typedef struct {
  int weight; // Вес ученика
  int height; // Рост ученика
} Student;

// Функция для определения, в каком классе "третий из самых полных учеников"
// выше по росту. Принимает два массива структур Student, представляющих классы,
// и их размер. Не возвращает значение, но выводит результат на экран.
void defineTallerOfThirdFattest(Student class1[], Student class2[],
                                size_t size);

#endif
