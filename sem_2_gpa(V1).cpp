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
    char name[5][5] = {"SIC", "CST", "CGD", "OOP", "ESE"};
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
        cout<<endl;
    }
    void endsem_taker()
    {
        for (int a = 0; a < 5; a++)
        {
            cout << "Enter EndSem Marks of " << name[a] << " (out of 70): ";
            cin >> endsem[a];
        }
        cout<<endl;
    }
    void CIE_taker()
    {
        for (int a = 0; a < 5; a++)
        {
            cout << "Enter CIE Marks of " << name[a] << " (out of 15): ";
            cin >> CIE[a];
        }
        cout<<endl;
    }
    void attend_taker()
    {
        for (int a = 0; a < 5; a++)
        {
            cout << "Enter Your " << name[a] << " Theory percentage: ";
            cin >> attendance[a];
        }
        cout<<endl;
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
        cout<<endl;
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
    void percent_to_grade()
    {
        for (int a = 0; a < 5; a++)
        {
            if (TW[a] >= 91)
            {
                TW[a] = 10;
            }
            else if (TW[a] >= 81)
            {
                TW[a] = 9;
            }
            else if (TW[a] >= 71)
            {
                TW[a] = 8;
            }
            else if (TW[a] >= 61)
            {
                TW[a] = 7;
            }
            else if (TW[a] >= 51)
            {
                TW[a] = 6;
            }
            else if (TW[a] >= 45)
            {
                TW[a] = 5;
            }
            else if (TW[a] >= 40)
            {
                TW[a] = 4;
            }
            else if (TW[a] >= 0)
            {
                TW[a] = 0;
            }
        }
        for (int a = 0; a < 5; a++)
        {
            if (total[a] >= 91)
            {
                total[a] = 10;
            }
            else if (total[a] >= 81)
            {
                total[a] = 9;
            }
            else if (total[a] >= 71)
            {
                total[a] = 8;
            }
            else if (total[a] >= 61)
            {
                total[a] = 7;
            }
            else if (total[a] >= 51)
            {
                total[a] = 6;
            }
            else if (total[a] >= 45)
            {
                total[a] = 5;
            }
            else if (total[a] >= 40)
            {
                total[a] = 4;
            }
            else if (total[a] >= 0)
            {
                total[a] = 0;
            }
        }

        if (SS_TW >= 91)
        {
            SS_TW = 10;
        }
        else if (SS_TW >= 81)
        {
            SS_TW = 9;
        }
        else if (SS_TW >= 71)
        {
            SS_TW = 8;
        }
        else if (SS_TW >= 61)
        {
            SS_TW = 7;
        }
        else if (SS_TW >= 51)
        {
            SS_TW = 6;
        }
        else if (SS_TW >= 45)
        {
            SS_TW = 5;
        }
        else if (SS_TW >= 40)
        {
            SS_TW = 4;
        }
        else if (SS_TW >= 0)
        {
            SS_TW = 0;
        }

        if (SS_CIE >= 91)
        {
            SS_CIE = 10;
        }
        else if (SS_CIE >= 81)
        {
            SS_CIE = 9;
        }
        else if (SS_CIE >= 71)
        {
            SS_CIE = 8;
        }
        else if (SS_CIE >= 61)
        {
            SS_CIE = 7;
        }
        else if (SS_CIE >= 51)
        {
            SS_CIE = 6;
        }
        else if (SS_CIE >= 45)
        {
            SS_CIE = 5;
        }
        else if (SS_CIE >= 40)
        {
            SS_CIE = 4;
        }
        else if (SS_CIE >= 0)
        {
            SS_CIE = 0;
        }

        if (IIDTL_TW >= 91)
        {
            IIDTL_TW = 10;
        }
        else if (IIDTL_TW >= 81)
        {
            IIDTL_TW = 9;
        }
        else if (IIDTL_TW >= 71)
        {
            IIDTL_TW = 8;
        }
        else if (IIDTL_TW >= 61)
        {
            IIDTL_TW = 7;
        }
        else if (IIDTL_TW >= 51)
        {
            IIDTL_TW = 6;
        }
        else if (IIDTL_TW >= 45)
        {
            IIDTL_TW = 5;
        }
        else if (IIDTL_TW >= 40)
        {
            IIDTL_TW = 4;
        }
        else if (IIDTL_TW >= 0)
        {
            IIDTL_TW = 0;
        }

        if (NPTEL >= 91)
        {
            NPTEL = 10;
        }
        else if (NPTEL >= 81)
        {
            NPTEL = 9;
        }
        else if (NPTEL >= 71)
        {
            NPTEL = 8;
        }
        else if (NPTEL >= 61)
        {
            NPTEL = 7;
        }
        else if (NPTEL >= 51)
        {
            NPTEL = 6;
        }
        else if (NPTEL >= 45)
        {
            NPTEL = 5;
        }
        else if (NPTEL >= 40)
        {
            NPTEL = 4;
        }
        else if (NPTEL >= 0)
        {
            NPTEL = 0;
        }

        if (CCA >= 91)
        {
            CCA = 10;
        }
        else if (CCA >= 81)
        {
            CCA = 9;
        }
        else if (CCA >= 71)
        {
            CCA = 8;
        }
        else if (CCA >= 61)
        {
            CCA = 7;
        }
        else if (CCA >= 51)
        {
            CCA = 6;
        }
        else if (CCA >= 45)
        {
            CCA = 5;
        }
        else if (CCA >= 40)
        {
            CCA = 4;
        }
        else if (CCA >= 0)
        {
            CCA = 0;
        }
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
        cout << "Total SCGPA: " << gpa <<"/20 = "<<gpa/20<< endl;
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
