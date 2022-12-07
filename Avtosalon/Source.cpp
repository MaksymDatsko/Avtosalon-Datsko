#pragma once

#include <string>

using namespace std;

class Car abstract 
{
protected:
    string m_title;         // Назва авто.
    int m_yearOfIssue;      // рік випуску.
    double m_engineVolume;  // Об'єм двигуна.
    double m_price;         // Ціна.
public:
    // Конструктор без параметрів.
    Car();

    // Конструктор з всіма параметрами.
    Car(string title, int yearOfIssue, double engineVolume, double price);

    // Деструктор.
    virtual ~Car();

    // Встановіть значення поля "Назва марки".
    void set_title(string title);

    // Встановіть значення поля "Рік випуску".
    void set_yearOfIssue(int yearOfIssue);

    // Встановіть значення поля "Об'єм двигуна".
    void set_engineVolume(double engineVolume);

    // Встановіть значення поля "Ціна".
    void set_price(double price);

    // Отримати значення поля "Назва авто".
    string get_title();

    // Отримати значення поля "Рік випуску".
    int get_yearOfIssue();

    // Отримати значення поля "Об'єм двигуна".
    double get_engineVolume();

    // Отримати значення поля "Ціна".
    double get_price();

    // Показати об'єкт "Car".
    virtual void Print();

    // Запис об'єкта "Car" в текстовий файл.
    virtual void Write(ofstream& out);

    // Читання об'єкта "Car" з текстового файла.
    virtual void Read(ifstream& in);
};