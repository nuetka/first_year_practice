#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include<stdlib.h>
#include <string.h>
#include <Windows.h>

#define N 50
// �������� ���������
struct house_struct {
	char street[N];
	int house_number;
	int year_of_commissioning;// ��� ����� � �����������
	int floor_number;//���-�� ������
	int apartment_number;// ���-�� �������
	double living_area;
	double total_area;
} house;

int check_int(int from, int to);// �������� ����� ����� ����� (��; ��] 3ghg 3.4
int input_and_adjustment(char n[]);//���� � ������������� ��
int create_file_and_input(char n[]);//������������� � ���� ������ � ����
int f_name(char n[]);// �������� ����� �������� �����
int inputt(char n[], int k);//����
int check_street(char n[], int k);//�������� ����� ������
double check_double(double from, double to);//�������� ����� ������������� �����
int existing_file(char n[]);//����� ��� ������������� �����
int db_delete();//�������� �����
int output(char n[], int k);//�����
int  delete_fields(char n[]);//�������� ������
int correct(char n[]);//������������� ������
int reqq(char n[]);//������