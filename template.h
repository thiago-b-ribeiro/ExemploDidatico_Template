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

#ifndef TEMPLATE_H
#define TEMPLATE_H

template <typename T>
class MyTemplateClass
  {
  public:
    MyTemplateClass(T& value);
    ~MyTemplateClass();

    T getValue() const;

  private:
    T m_value;
  };

#endif