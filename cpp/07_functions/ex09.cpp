#include <iostream>
using namespace std;

const int SLEN = 30;

struct student
{
  char fullname[SLEN];
  char hobby[SLEN];
  int ooplevel;
};

int getinfo(student pa[], int n);
void display1(student st);
void display2(const student* ps);
void display3(const student pa[], int n);

int main()
{
  cout << "Enter class size: ";
  int class_size;
  cin >> class_size;
  while(cin.get() != '\n')
    continue;

  student* ptr_stu = new student[class_size];
  int entered = getinfo(ptr_stu, class_size);
  for(int i=0; i < entered; i++)
  {
    display1(ptr_stu[i]);
    display2(&ptr_stu[i]);
  }

  display3(ptr_stu, entered);
  delete [] ptr_stu;
  cout << "Done!\n";
  return 0;
}

int getinfo(student pa[], int n)
{
  cout << "\n********** Enter students data **********\n";

  char student_fullname[SLEN];
  int i = 0;
  for(i=0; i<n; i++)
  {
    cout << "--- --- student #" << i << " --- ---\n";
    cout << "student's full name: ";
    cin.getline(student_fullname, SLEN);

    if(student_fullname[0] == '\0')
      break;

    int j = 0;
    while(true) //copy student name
    {
      pa[i].fullname[j] = student_fullname[j];
      if(student_fullname[j] == '\0')
        break;
      j++;
    }

    cout << "student's hobby: ";
    cin.getline(pa[i].hobby, SLEN);
    cout << "student's ooplevel: ";
    cin >> pa[i].ooplevel;
    cin.get();
  }

  return i;
}

void display1(student st)
{
  cout << "\n--- --- displaying a students data --- ---\n";
  cout << "student's fullname: " << st.fullname << "\n";
  cout << "student's hobby: " << st.hobby << "\n";
  cout << "student's ooplevel: " << st.ooplevel << "\n";
}

void display2(const student* ps)
{
  cout << "\n--- --- displaying a students data with a pointer --- ---\n";
  cout << "student's fullname: " << ps->fullname << "\n";
  cout << "student's hobby: " << ps->hobby << "\n";
  cout << "student's ooplevel: " << ps->ooplevel << "\n";
}

void display3(const student pa[], int n)
{
  cout << "\n--- --- displaying several students data --- ---\n";
  for(int i=0; i<n; i++)
  {
    cout << "student #" << i << "\n";
    cout << "student's fullname: " << pa[i].fullname << "\n";
    cout << "student's hobby: " << pa[i].hobby << "\n";
    cout << "student's ooplevel: " << pa[i].ooplevel << "\n";
  }
}
