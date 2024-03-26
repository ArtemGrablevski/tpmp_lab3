//
// Created by Artem Grablevski 26.02.2024
//

#include "m_interface.h"
#include <stdio.h>

// Вспомогательная функция для сравнения двух студентов по весу.
static int compareStudentsByWeight(const void *a, const void *b) {
  return ((Student *)b)->weight - ((Student *)a)->weight;
}

void defineTallerOfThirdFattest(Student class1[], Student class2[],
                                size_t size) {
  // Сортировка учеников в каждом классе по убыванию веса
  qsort(class1, size, sizeof(Student), compareStudentsByWeight);
  qsort(class2, size, sizeof(Student), compareStudentsByWeight);

  // Определение и сравнение роста "третьего самого полного" ученика в каждом
  // классе
  if (class1[2].height > class2[2].height) {
    printf("Третий самый полный ученик выше в первом классе.\n");
  } else if (class1[2].height < class2[2].height) {
    printf("Третий самый полный ученик выше во втором классе.\n");
  } else {
    printf("Третий самый полный ученик одинакового роста в обоих классах.\n");
  }
}
