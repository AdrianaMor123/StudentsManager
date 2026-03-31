#include <iostream>
#include <vector>
using namespace std;

struct Student {
    string name, roll, course, clas, contact;
};

vector<Student> students;

void enter()
{
    int ch;
    cout << "How many students do you want to enter??" << endl;
    cin >> ch;

    for (int i = 0; i < ch; i++)
    {
        Student s;

        cout << "\nEnter data of student " << students.size() + 1 << endl;

        cout << "Enter name: ";
        cin >> s.name;

        cout << "Enter Roll no: ";
        cin >> s.roll;

        cout << "Enter course: ";
        cin >> s.course;

        cout << "Enter class: ";
        cin >> s.clas;

        cout << "Enter contact: ";
        cin >> s.contact;

        students.push_back(s);
    }
}

void show()
{
    if (students.empty())
    {
        cout << "No data is entered\n";
        return;
    }

    for (int i = 0; i < students.size(); i++)
    {
        cout << "\nData of Student " << i + 1 << endl;

        cout << "Name: " << students[i].name << endl;
        cout << "Roll no: " << students[i].roll << endl;
        cout << "Course: " << students[i].course << endl;
        cout << "Class: " << students[i].clas << endl;
        cout << "Contact: " << students[i].contact << endl;
    }
}

void search()
{
    if (students.empty())
    {
        cout << "No data is entered\n";
        return;
    }

    string rollno;
    cout << "Enter the roll no of student: ";
    cin >> rollno;

    bool found = false;

    for (auto& s : students)
    {
        if (s.roll == rollno)
        {
            cout << "\nStudent found:\n";
            cout << "Name: " << s.name << endl;
            cout << "Roll no: " << s.roll << endl;
            cout << "Course: " << s.course << endl;
            cout << "Class: " << s.clas << endl;
            cout << "Contact: " << s.contact << endl;
            found = true;
        }
    }

    if (!found)
        cout << "Student not found\n";
}

void update()
{
    if (students.empty())
    {
        cout << "No data is entered\n";
        return;
    }

    string rollno;
    cout << "Enter the roll no of student to update: ";
    cin >> rollno;

    for (auto& s : students)
    {
        if (s.roll == rollno)
        {
            cout << "\nPrevious data:\n";
            cout << "Name: " << s.name << endl;
            cout << "Roll no: " << s.roll << endl;
            cout << "Course: " << s.course << endl;
            cout << "Class: " << s.clas << endl;
            cout << "Contact: " << s.contact << endl;

            cout << "\nEnter new data:\n";

            cout << "Enter name: ";
            cin >> s.name;

            cout << "Enter Roll no: ";
            cin >> s.roll;

            cout << "Enter course: ";
            cin >> s.course;

            cout << "Enter class: ";
            cin >> s.clas;

            cout << "Enter contact: ";
            cin >> s.contact;

            cout << "Record updated successfully\n";
            return;
        }
    }

    cout << "Student not found\n";
}

void deleterecord()
{
    if (students.empty())
    {
        cout << "No data is entered\n";
        return;
    }

    int a;
    cout << "Press 1 to delete all records\n";
    cout << "Press 2 to delete specific record\n";
    cin >> a;

    if (a == 1)
    {
        students.clear();
        cout << "All records deleted\n";
    }
    else if (a == 2)
    {
        string rollno;
        cout << "Enter roll no to delete: ";
        cin >> rollno;

        for (int i = 0; i < students.size(); i++)
        {
            if (students[i].roll == rollno)
            {
                students.erase(students.begin() + i);
                cout << "Record deleted\n";
                return;
            }
        }

        cout << "Student not found\n";
    }
    else
    {
        cout << "Invalid input\n";
    }
}

int main()
{
    int value;

    while (true)
    {
        cout << "\n1. Enter data\n";
        cout << "2. Show data\n";
        cout << "3. Search data\n";
        cout << "4. Update data\n";
        cout << "5. Delete data\n";
        cout << "6. Exit\n";

        cin >> value;

        switch (value)
        {
        case 1: enter(); break;
        case 2: show(); break;
        case 3: search(); break;
        case 4: update(); break;
        case 5: deleterecord(); break;
        case 6: return 0;
        default: cout << "Invalid input\n";
        }
    }
}