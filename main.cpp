// ������� 3

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

using namespace std;

int main()
{
  // ���� ���p���� ����
  struct st *opers=nullptr;
  char a[80], outstring[80];
  int k, point;
  do
  {
    cout << "Vvedite vyrazhenie(v konce '='):";
	// ���� �p������������� ��p������
    cin >> a;
    k = point = 0;
    // �����p��� , ���� �� ������ �� '='
    while(a[k]!='\0'&&a[k]!='=')
    {
	// ���� ���p����� ������ - ')'
      if(a[k]==')')
                // �� ����������� �� ����� � �������� ��p���
      {
                // ��� ����� ���p���� �� ���������
        while((opers->c)!='(')
                // ���p������� ������
        outstring[point++]=del(&opers);
                // ������� �� ����� ���� ���p������� ������
        del(&opers);
      }
                // ���� ���p����� ������ - ����� , ��
      if(a[k]>='a'&&a[k]<='z')
                // ��p��������� � � �������� ��p���
          outstring[point++]=a[k];
                // ���� ���p����� ������ - '(' , ��
      if(a[k]=='(')
                // ����������� � � ����
          opers=push(opers, '(');
      if(a[k]=='+'||a[k]=='-'||a[k]=='/'||a[k]=='*')
	  // ���� ��������� ������ - ���� ���p���� , ��
      {
	            // ���� ���� ����
        if(opers==nullptr)
		// ���������� � ���� ���p����
            opers=push(opers, a[k]);
		// ���� �� ����
        else
        // ���� �p��p���� ����������� ���p���� ������ �p��p����� ���p���� �� ��p���� �����
        if(prior(opers->c)<opers(a[k]))
        // ����������� ����������� ���p���� �� ����
            opers=push(opers, a[k]);
		// ���� �p��p���� ������
        else
        {
          while((opers!=nullptr)&&(prior(opers->c)>=prior(a[k])))
        // ��p��������� � �������� ��p��� ��� ���p���� � ������� ��� p����� �p��p������
              outstring[point++]=del(&opers);
		// ���������� � ���� �����������  ���p����
          opers=push(opers, a[k]);
        }
      }
        // ��p���� � ���������� ������� ������� ��p���
      k++;
    }
	   // ����� p������p���� ����� ��p������
    while(opers!=null)
    // ��p��������� ��� ���p���� ��
        outstring[point++]=del(&opers);
    // ����� � �������� ��p���
    outstring[point]='\0';
	// � �������� �
    cout << outstring << endl;
    cout << "Povtoritj(y/n)?" << endl;
  } while(getchar()!='n');
}

// ������� push ���������� �� ���� (�� ��p���� ����p��� ��������� HEAD)
// ������ a. ����p����� ��������� �� ����� ��p���� �����
struct st *push(struct st *head, char a)
{
  struct st *ptr;
  // ��������� ������
  if((ptr=malloc(sizeof(struct st *ptr)))==nullptr)
  {
  // ���� � ��� - �����
    cout << "Net pamyati";
    exit(-1);
  }
    // ������������� ��������� ��p����
  ptr->c=a;
    // � ����������� � � �����
  ptr->next=HEAD;
    // PTR -����� ��p���� �����
  return ptr;
}
