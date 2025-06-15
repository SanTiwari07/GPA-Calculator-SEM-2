#include <iostream>
#include <cmath>
using namespace std;

class marks_taker
{
public:
    int midsem[5];
    int internal[5];
    int endsem[5];
    int CIE[5];
    int TW[5];
    int attendance[5];
    string name[5] = {"SIC", "CST", "CGD", "OOP", "ESE"};
    int total[5];
    int SS_TW;
    int SS_CIE;
    int IIDTL_TW;
    int NPTEL;
    int CCA;
    float gpa;
    
    void midsem_taker()
    {
        for (int a = 0; a < 5; a++)
        {
            cout << "Enter MidSem Marks of " << name[a] << " (out of 20): ";
            cin >> midsem[a];
        }
        cout << endl;
    }
    void endsem_taker()
    {
        for (int a = 0; a < 5; a++)
        {
            cout << "Enter EndSem Marks of " << name[a] << " (out of 70): ";
            cin >> endsem[a];
        }
        cout << endl;
    }
    void CIE_taker()
    {
        for (int a = 0; a < 5; a++)
        {
            cout << "Enter CIE Marks of " << name[a] << " (out of 15): ";
            cin >> CIE[a];
        }
        cout << endl;
    }
    void attend_taker()
    {
        for (int a = 0; a < 5; a++)
        {
            cout << "Enter Your " << name[a] << " Theory percentage: ";
            cin >> attendance[a];
        }
        cout << endl;
    }
    void TW_taker()
    {
        for (int a = 0; a < 4; a++)
        {
            cout << "Enter TW Marks of " << name[a] << " (out of 25): ";
            cin >> TW[a];
        }
        TW[4] = 0;
    }
    void other_taker()
    {
        cout << "Enter Soft Skill TW Marks (out of 25): ";
        cin >> SS_TW;
        cout << "Enter Soft Skill CIE Marks + Attendance (out of 25): ";
        cin >> SS_CIE;
        cout << "Enter IIDTL TW Marks (out of 50): ";
        cin >> IIDTL_TW;
        cout << "Enter NPTEL Marks (out of 25): ";
        cin >> NPTEL;
        cout << "Enter CCA Marks (out of 25): ";
        cin >> CCA;
        cout << endl;
    }
};

class converted_number : public marks_taker
{
public:
    void attendance_converter()
    {
        for (int a = 0; a < 5; a++)
        {
            if (attendance[a] >= 90.0)
            {
                attendance[a] = 5.0;
            }
            else if (attendance[a] >= 85.0)
            {
                attendance[a] = 4.0;
            }
            else if (attendance[a] >= 80.0)
            {
                attendance[a] = 3.0;
            }
            else if (attendance[a] >= 75.0)
            {
                attendance[a] = 2.0;
            }
            else if (attendance[a] >= 0.0)
            {
                attendance[a] = 0.0;
            }
        }
    }
    void other_converter()
    {
        SS_TW *= 4;
        SS_CIE *= 4;
        IIDTL_TW *= 2;
        NPTEL *= 4;
        CCA *= 4;

        for (int a = 0; a < 5; a++)
        {
            TW[a] *= 4;
            endsem[a] = (60 * endsem[a]) / 70;
            endsem[a] = round(endsem[a]);
        }

        for (int a = 0; a < 5; a++)
        {
            total[a] = midsem[a] + endsem[a] + CIE[a] + attendance[a]; // theory ka hai
        }
    }

    int updated(int num)
    {
        if (num >= 91)

            return 10;

        else if (num >= 81)

            return 9;

        else if (num >= 71)

            return 8;

        else if (num >= 61)

            return 7;

        else if (num >= 51)

            return 6;

        else if (num >= 45)

            return 5;

        else if (num >= 40)

            return 4;

        else if (num >= 0)

            return 0;
    }
    void percent_to_grade()
    {
        for (int a = 0; a < 5; a++)
        {
            TW[a] = updated(TW[a]);
        }
        for (int a = 0; a < 5; a++)
        {
            total[a] = updated(total[a]);
        }

        SS_TW = updated(SS_TW);
        SS_CIE = updated(SS_CIE);
        IIDTL_TW = updated(IIDTL_TW);
        NPTEL = updated(NPTEL);
        CCA = updated(CCA);
    }

    void total_marks()
    {
        gpa = (3 * total[0] + 2 * total[1] + 2 * total[2] + 2 * total[3] + 2 * total[4] + TW[0] + TW[1] + TW[2] + TW[3] + SS_TW + SS_CIE + IIDTL_TW + NPTEL + CCA);
    }

    void display()
    {
        for (int a = 0; a < 5; a++)
        {
            cout << name[a] << " theory Grade Point: " << total[a] << endl;
        }
        for (int a = 0; a < 4; a++)
        {
            cout << name[a] << " TW Grade Point: " << TW[a] << endl;
        }
        cout << "IIDTL Grade Point: " << IIDTL_TW << endl;
        cout << "Soft Skill TW Grade Point: " << SS_TW << endl;
        cout << "Soft Skill Theory Grade Point: " << SS_CIE << endl;
        cout << "NPTEL Grade Point: " << NPTEL << endl;
        cout << "CCA Grade Point: " << CCA << endl
             << endl;
        cout << "Total SCGPA: " << gpa << "/20 = " << gpa / 20 << endl;
    }
};
int main()
{
    converted_number c1;
    c1.midsem_taker();
    c1.endsem_taker();
    c1.CIE_taker();
    c1.attend_taker();
    c1.TW_taker();
    c1.other_taker();
    c1.attendance_converter();
    c1.other_converter();
    c1.percent_to_grade();
    c1.total_marks();
    c1.display();
}
