#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};
class cmp
{
public:
    bool operator()(Student a, Student b)
    {

        return (a.marks == b.marks) ? a.roll > b.roll : a.marks < b.marks;
    }
};

int main()
{
    int n;
    cin >> n;
    priority_queue<Student, vector<Student>, cmp> pq;
    while (n--)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        pq.push(Student(name, roll, marks));
    }
    int q;
    cin >> q;
    while (q--)
    {
        int c;
        cin >> c;
        if (c == 0)
        {
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            pq.push(Student(name, roll, marks));
            cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        }
        else if (c == 1)
        {
            (pq.empty()) ? cout << "Empty\n" : cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        }
        else if (c == 2)
        {
            if (pq.empty())
            {
                cout << "Empty\n";
                continue;
            }
            pq.pop();
            (pq.empty()) ? cout << "Empty\n" : cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        }
    }

    return 0;
}
