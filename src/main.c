#include "m_interface.h"
#include <stdio.h>

int main() {
  // Инициализация учеников первого и второго класса
  Student class1[25] = {{55, 162}, {59, 165}, {53, 160}, {65, 170}, {68, 172},
                        {70, 168}, {74, 175}, {76, 180}, {78, 182}, {80, 184},
                        {82, 186}, {60, 163}, {62, 165}, {64, 167}, {66, 169},
                        {68, 171}, {70, 173}, {72, 175}, {74, 177}, {76, 179},
                        {78, 181}, {80, 183}, {82, 185}, {84, 187}, {86, 189}};
  Student class2[25] = {{50, 150}, {52, 152}, {54, 154}, {56, 156}, {58, 158},
                        {60, 160}, {62, 162}, {64, 164}, {66, 166}, {68, 168},
                        {70, 170}, {72, 172}, {74, 174}, {76, 176}, {78, 178},
                        {80, 180}, {82, 182}, {84, 184}, {86, 186}, {88, 188},
                        {90, 190}, {92, 192}, {94, 194}, {96, 196}, {98, 198}};

  defineTallerOfThirdFattest(class1, class2, 25);

  return 0;
}
