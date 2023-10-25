#include <iostream>
#include <corecrt_math.h>
using namespace std;
int x;
int y;
int endsss = 0;
char oper = '+';
int z;
char p;
double result;
double pluss(double x, double y)
{
	return(x + y);
}
double minuss(double x, double y)
{
	return(x - y);
}
double dels(double x, double y)
{
	return(x / y);
}
double ymns(double x, double y)
{
	return(x * y);
}
double steps(double x, double y)
{
	return(pow(x,y));
}
double calc_oper(double x, char oper, double y)
{
    switch (oper)
    {
        case '+':
        {
            cout << pluss(x, y) << endl;
            break;
        }
        case '-':
        {
            cout << minuss(x, y) << endl;
            break;
        }
        case '*':
        {
            cout << ymns(x, y) << endl;
            break;
        }
        case '/':
        {
            cout << dels(x, y) << endl;
            break;
        }
        case '^':
        {
            cout << steps(x, y) << endl;
            break;
        }   
        return 0, 0;
    }
}
double simpl_calc()
{
    while (true)
    {
        cout << "Enter 1 number" << endl;
        cin >> x;
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "You didn't enter a number, try again!" << endl;
            cin >> x;
        }
        cout << "Enter 2 number" << endl;
        cin >> y;
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "You didn't enter a number, try again!" << endl;
            cin >> y;
        }
        cout << "Enter calculator operation" << endl;
        cin >> oper;
        while (p != '1')
        {
            if (oper != '-' and oper != '+' and oper != '*' and oper != '/' and oper != '^')
            {
                cout << "You didn't enter calculator operation, try again!" << endl;
                cin >> oper;
            }
            else
                p = '1';
        }
        return calc_oper(x, oper, y);
        cout << calc_oper(x, oper, y) << endl;
    }
}
int mat_calc()
{
    int i, j, n, m, a[10][10], b[10][10], d[10][10], flag = 0;
    char m_op = '+';
    std::cout << "Enter the size of the matrix" << endl;
    std::cin >> m;
    std::cin >> n;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            flag++;
            std::cout << "Enter the value number " << flag << endl;
            std::cout << "of A matrix " << endl;
            std::cin >> a[i][j];
            while (cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "You didn't enter a number!" << endl;
                break;
            }
        }
    }
    flag = 0;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            flag++;
            std::cout << "Enter the value number " << flag << endl;
            std::cout << "of B matrix " << endl;
            std::cin >> b[i][j];
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "You didn't enter a number!" << endl;
                break;
            }
        }
    }
    flag = 0;
    std::cout << "Enter + or - " << endl;
    std::cin >> m_op;
    int q = 0;
    while (q == 0)
    {
        if (m_op != '-' and m_op != '+')
        {
            std::cout << "You didn't enter + or -, try again!" << endl;
            std::cin >> m_op;
        }
        else
            q = 1;
    }
    {
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (m_op == '+')
                    d[i][j] = a[i][j] + b[i][j];
                else if (m_op == '-')
                    d[i][j] = a[i][j] - b[i][j];
            }
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            std::cout << d[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
int main()
{
    while (endsss == 0)
    {
        cout << "Calculator Console" << endl;
        cout << "Select operating mode. (1)-numerical calculator, (2)-matrix calculator" << endl;
        cin >> z;
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "You didn't enter a number, try again!" << endl;
            cin >> z;
        }
        while (z != 1 and z != 2)
        {
            cout << "You didn't enter 1 or 2!" << endl;
            cin >> z;
            while (cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "You didn't enter a number, try again!" << endl;
                cin >> z;
            }
        }
        if (z == 1)
            simpl_calc();
        else
            mat_calc();
        cout << "if you want to continue, press 0" << endl;
        cin >> endsss;
    }
}