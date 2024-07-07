#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include<stdlib.h>
#include <string.h>
#include <Windows.h>

#define N 50
// основная структура
struct house_struct {
	char street[N];
	int house_number;
	int year_of_commissioning;// год сдачи в эксплучацию
	int floor_number;//кол-во этажей
	int apartment_number;// кол-во квартир
	double living_area;
	double total_area;
} house;

int check_int(int from, int to);// проверка ввода целых чисел (от; до] 3ghg 3.4
int input_and_adjustment(char n[]);//ввод и корректировка БД
int create_file_and_input(char n[]);//созданиефайла и ввод данных в него
int f_name(char n[]);// проверка ввода названия файла
int inputt(char n[], int k);//ввод
int check_street(char n[], int k);//проверка ввода строки
double check_double(double from, double to);//проверка ввода вещественного числа
int existing_file(char n[]);//выбор уже существующего файлв
int db_delete();//удаление файла
int output(char n[], int k);//вывод
int  delete_fields(char n[]);//удаление данных
int correct(char n[]);//корректировка данных
int reqq(char n[]);//запрос