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

template <typename T>
MyTemplateClass<T>::MyTemplateClass(T& value)
  : m_value(value)
  {
  }

template <typename T>
T MyTemplateClass<T>::getValue() const
  {
  return m_value;
  }