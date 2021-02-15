#pragma once
// RMG.h : RMG - Random Matrix Generator. ���� ���� �������� ��������� ������� ��� ��������� ������.


/// <summary> ����� ������� � �������. </summary>
void MatrixOut(int** matrix, short size);

/// <summary> ����� ������� � �������. </summary>
void MatrixOut(int** matrix, short size_x, short size_y);



/// <summary> ��������� ������� �� ���������. </summary>
int** GetRandomDualMatrix();

/// <summary> ��������� ������� ������������� �������. </summary>
int** GetRandomDualMatrix(short size);

/// <summary> ��������� ������� ������������� �������. </summary>
int** GetRandomDualMatrix(short size_x, short size_y);

/// <summary> ��������� ������� ������������� ������� � ����������� ���������
/// ��������� ��������� ���� ������������� ���������. </summary>
int** GetRandomDualMatrix(short size_x, short size_y, short max_limit);

/// <summary> ��������� ������� ������������� ������� � ����������� ���������
/// � ��������� ��������� � �������� ������. </summary>
int** GetRandomDualMatrix(short size_x, short size_y, short min_limit, short max_limit);