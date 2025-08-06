/**
 *           ESTUDO SOBRE TECNICAS C/C++
 *                    TEMPLATES
 *
 * @brief Templates possibilitam  uma programacao
 * generica, possibilitando a  criacao de metodos
 * e classes que  podem operar com diferentes ti-
 * pos de dados, sem a  necessidade de reescrever
 * o mesmo codigo para cada tipo de dado.
 *
 * @copyright © 2025 Todos os direitos reservados
 * @author THIAGO.B.RIBEIRO@HOTMAIL.COM
 * @date 2025-08-03
 * @version 1.0
 */

#include "template_A.h"
#include <iostream>
#include <string>

template <typename T1, typename T2>
T1 MethodTemplate(T1& valueA, T2& valueB)
  {
  T1 result;
  result = valueA + valueB;
  return (result);
  }

int main(int argc, char* argv[])
  {
  int intValue = 42;
  // ClassTemplateA<int> intInstance(intValue);
  ClassTemplateA<int>* intInstance = new ClassTemplateA<int>(intValue);
  std::cout << "Integer value: " << intInstance->getValue() << std::endl;

  double doubleValue = 3.14;
  ClassTemplateA<double>* doubleInstance = new ClassTemplateA<double>(doubleValue);
  std::cout << "Double value: " << doubleInstance->getValue() << std::endl;

  std::string stringValue = "Hello, Templates!";
  ClassTemplateA<std::string>* stringInstance = new ClassTemplateA<std::string>(stringValue);
  std::cout << "String value: " << stringInstance->getValue() << std::endl;

  return 0;
  }