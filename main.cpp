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

#include "template.h"
#include <iostream>
#include <string>

int main(int argc, char* argv[])
  {
  int intValue = 42;
  MyTemplateClass<int> intInstance(intValue);
  std::cout << "Integer value: " << intInstance.getValue() << std::endl;

  double doubleValue = 3.14;
  MyTemplateClass<double> doubleInstance(doubleValue);
  std::cout << "Double value: " << doubleInstance.getValue() << std::endl;

  std::string stringValue = "Hello, Templates!";
  MyTemplateClass<std::string> stringInstance(stringValue);
  std::cout << "String value: " << stringInstance.getValue() << std::endl;

  return 0;
  }