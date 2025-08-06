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

 /**
  * @attention  A definicao  e a  implementacao da
  * classe, em templates, devem estar no mesmo ar-
  * quivo. Isso ocorre porque o compilador precisa
  * conhecer a implementacao completa da classe no
  * momento em que ela é instanciada.
  */

#ifndef TEMPLATE_A_H
#define TEMPLATE_A_H

template <typename T>
class ClassTemplateA
  {
  public:
    ClassTemplateA(T& value);
    ~ClassTemplateA();

    T getValue() const;

  private:
    T m_value;
  };

template <typename T>
ClassTemplateA<T>::ClassTemplateA(T& value)
  : m_value(value)
  {
  }

template <typename T>
T ClassTemplateA<T>::getValue() const
  {
  return m_value;
  }

#endif