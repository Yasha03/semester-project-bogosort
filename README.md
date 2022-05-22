# semester-project-bogosort

- _Мы реализуем сортировку bogosort (болотная сортировка)_
- _Алгоритм представляет из себя пример неэффективный сортировки, используемый только в образовательных целях_
- _Иногда bogosort может быть самой быстрой сортировкой и отработать за O(n), но среднее всемя работы O(n*n!)_

## Команда "Safin OneLove"

Группа: 11-101

|    Фамилия Имя    | Вклад (%) | Прозвище  |
|:-----------------:|:---------:|:---------:|
|  Судаков Дмитрий  |    50     |   _эмо_   |
|    Иванов Яков    |    50     | _скинхед_ |

**Девиз команды**
> _Не волнуйтесь, если что-то не работает. Если бы всё работало, вас бы уволили._

## Структура проекта

Проект состоит из следующих частей:

[`src`](src) - реализация структуры данных и тестер (исходный код и заголовочные файлы);

[`test_cases`](test_cases) - папка, куда тестовый генератор сохраняет сгенерированные тесты;

## Требования

Рекомендуемые требования:
1. С++ компилятор c поддержкой стандарта C++17 (например, _GNU GCC 8.1.x_ и выше).
2. Система автоматизации сборки _CMake_ (версия _3.12.x_ и выше).
3. Рекомендуемый объем оперативной памяти - не менее 32 ГБ.
4. Свободное дисковое пространство объемом ~ 512 ГБ (для входного набора данных).

#### Сборка проекта


Склонируйте проект к себе на устройство через [Git for Windows](https://gitforwindows.org/) (либо используйте возможности среды разработки):

```shell
git clone https://github.com/Yasha03/semester-project-bogosort.git
```

Сборка и запуск проекта осуществляется через среду разработки.

#### Генерация тестовых данных

_Тестовые данных хранятся в формате .txt_

Генерация тестового набора данных

Инструкции по генерации:
```shell
# для генерации тестовых данны необходимо открыть файл main.cpp и добавить следующие строки:
Test_generator tg;
tg.make_tests(argv[0]);

# после этого запускаем main.cpp
```
Тестовые данных хранятся в формате .txt
```100
sum 12 63
sum 6 96
set 79 -578328
sum 89 98
min 24 89
set 7 -414922
...
```

## Источники
_Список использованных при реализации структуры данных источников._

https://ru.wikipedia.org/wiki/Bogosort
