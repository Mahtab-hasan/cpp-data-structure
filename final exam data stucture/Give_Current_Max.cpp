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
        this->marks = marks;
        this->roll = roll;
        this->name = name;
    }
};
class cmp
{
public:
    bool operator()(const Student a, const Student b) const
    {
        if (a.marks != b.marks)
        {
            return a.marks < b.marks;
        }
        return a.roll > b.roll;
    }
};
int main()
{
    int n;
    cin >> n;
    priority_queue<Student, vector<Student>, cmp> pq;
    for (int i = 0; i < n; i++)
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
        int command;
        cin >> command;

        if (command == 1)
        {
            if (!pq.empty())
            {
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else if (command == 2)
        {
            if (!pq.empty())
            {
                pq.pop();
                if (!pq.empty())
                {
                    cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
                }
                else
                {
                    cout << "Empty" << endl;
                }
            }
            else
            {
                cout << " Empty" << endl;
            }
        }
        else if (command == 0)
        {
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            pq.push(Student(name, roll, marks));
            cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        }
    }

    return 0;
}