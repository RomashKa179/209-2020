/**
 * @file
 * @brief      Заголовочный файл с описанием структуры Token
 *
 * Данный файл содержит в себе описание типов токенов,
 * определение самой структуры Token, и функции реализующей
 * преобразование в список токенов.
 */

#pragma once

#include <sstream>
#include <vector>

/**
 * @brief      Набор возможных типов токенов
 */
enum class TokenType {
  INTEGER,  ///< Указывает, что токен является целым числом
  FLOAT,  ///< Указывает, что токен является действительным числом
  STRING,  ///< Указывает, что токен является строкой
  COLUMN,  ///< Указывает, что токен является полем таблицы
  LOGICAL_OP,  ///< Указывает, что токен является булевой операцией над результатом обработки узлов
  COMPARE_OP,  ///< Указывает, что токен является операцией сравнения
  SORT_OP,  ///< Указывает, что токен является спецсловом для определения поля сортировки
  PAREN_LEFT,  ///< Указывает, что токен является левой скобкой
  PAREN_RIGHT,  ///< Указывает, что токен является правой скобкой
  END,  ///< Указывает, что токен является окончанием ввода
  VOID ///< Токен пустого ввода
};

/**
 * @brief      Структура хранящая значение в строковом виде и тип токена
 */
struct Token {
  const std::string value;
  const TokenType type;
};

/**
 * @brief      Считывает из потока ввода и разбивает на токены
 *
 * @param      is    Поток ввода
 *
 * @return     Список токенов
 */
std::vector<Token> Tokenize(std::istream &is);

Token ReadToken(std::istream &is);
