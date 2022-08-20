#include <stdio.h>
#include <string.h>

struct Employee
{
  int ID;
  char Name[30];
  char Pos[30];
  int Age;
  int Exper;
  int No;
} emp[100];

void addEmployee();
void search_viewEmployee();
void listEmployee();

int main()
{
  int choice;
  do
  {
    printf("\n\n********Employee Management System (EMS)********\n");
    printf("\n\t\tMain Menu\n");
    printf("\n1.New Record");
    printf("\n2.View Record");
    printf("\n3.Search Record");
    printf("\n4.List of Employees");
    printf("\n0.Exit");
    printf("\nEnter The Choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
      addEmployee();
      break;

    case 2:
      search_viewEmployee();
      break;

    case 3:
      search_viewEmployee();
      break;

    case 4:
      listEmployee();
      break;

    case 0:
      printf("\n\tThank you!!!");
      break;

    default:
      printf("\n\tINVALID INPUT!!! Try again...");
    }
  } while (choice != 0);
}

void addEmployee()
{
  int i, n;
  printf("\nEnter How Many Records to be Added: ");
  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    printf("\n\t\tAdd Record: %d", i + 1);
    printf("\nEmployee Name: ");
    scanf("%s", &emp[i].Name);
    printf("\nEmployee ID: ");
    scanf("%d", &emp[i].ID);
    printf("\nEmployee Position: ");
    scanf("%s", &emp[i].Pos);
    printf("\nEmployee Experience: ");
    scanf("%d", &emp[i].Exper);
    printf("\nEmployee Age: ");
    scanf("%d", &emp[i].Age);
    printf("\nEmployed Contact No: ");
    scanf("%d", &emp[i].No);
  }
}

void search_viewEmployee()
{
  int n;
  printf("\n\nEnter Employee ID: ");
  scanf("%d", &n);
  for (int i = 0; i < 100; i++)
  {
    if (emp[i].ID == n)
    {
      printf("\nEmployee Name: %s", emp[i].Name);
      printf("\nEmployee Id: %d", emp[i].ID);
      printf("\nEmployee Position: %s", emp[i].Pos);
      printf("\nEmployee Experience: %d", emp[i].Exper);
      printf("\nEmployee Age: %d", emp[i].Age);
      printf("\nEmployee Contact No: %d", emp[i].No);
      break;
    }
    continue;
    printf("\nEmployee ID Don't Exist");
  }
}

void listEmployee()
{
  printf("\n\t\tEmployee List\n");
  printf("ID \t Name \t Position \t Experience \t Age \t Contact No\n");
  for (int i = 0; i < 100; i++)
  {
    if (emp[i].ID != 0)
    {
      printf("\n%d \t  %s  \t    %s    \t     %d     \t %d  \t    %d",
             emp[i].ID, emp[i].Name, emp[i].Pos, emp[i].Exper,
             emp[i].Age, emp[i].No);
    }
    else
    {
      break;
    }
  }
}