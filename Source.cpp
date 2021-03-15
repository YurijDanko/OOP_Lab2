#include <iostream>

using namespace std;

class Time
{
private:

	int k = 3;
	int *hour;
	int *minute;
	int *seconds;

public:
	Time() 
	{ 
		hour = new int[k], minute = new int[k], seconds = new int[k];
		hour[0] = minute[0] = seconds[0] = 0;
	}
	Time(int a, int b, int c) 
	{ 
		hour = new int[k], minute = new int[k], seconds = new int[k];
		hour[0] = a; 
		minute[0] = b; 
		seconds[0] = c; 
	}
	Time(const Time& obj) 
	{
		hour = new int[k], minute = new int[k], seconds = new int[k];
		for (int i = 0; i < k; i++) 
		{
			hour[i] = obj.hour[i];
			minute[i] = obj.minute[i];
			seconds[i] = obj.seconds[i];
		}
	}
	~Time() 
	{ 
		delete[] hour, delete[] minute, delete[] seconds; 
	}

	void Set_Hour(void) 
	{ 
		int a;
		hour = new int[k];
		p1:cout << "Hour: ";
		cin >> a;
		if (a >= 0 && a < 24) 
		{
			for (int i = 0; i < k; i++)
			{
				hour[i] = a;
			}
		}
		else
		{
			cout << "Error. Hours value is incorrect" << endl;
			goto p1;
		}
	}
	void Set_Minute(void)
	{ 
		int b;
		minute = new int[k];
		p2:cout << "Minutes: ";
		cin >> b;
		if (b >= 0 && b < 60)
		{
			for (int i = 0; i < k; i++)
			{
				minute[i] = b;
			}
		}
		else
		{
			cout << "Error. Minutes value is incorrect" << endl;
			goto p2;
		}
	}
	void Set_Sec(void)
	{ 
		int c;
		seconds = new int[k];
		p3:cout << "Seconds: ";
		cin >> c;
		if (c >= 0 && c < 60)
		{
			for (int i = 0; i < k; i++)
			{
				seconds[i] = c;
			}
		}
		else
		{
			cout << "Error. Seconds value is incorrect" << endl;
			goto p3;
		}
	}
	void Print1(void);
	void Print2(void);
};

void Time::Print1(void) 
{
	cout << hour[0] << ':' << minute[0] << ':' << seconds[0] << endl;
}
void Time::Print2(void)
{
	cout << hour[0] << " hours " << minute[0] << " minutes " << seconds[0] << " seconds " << endl;
}

int main()
{
	Time obj;
	obj.Set_Hour();
	obj.Set_Minute();
	obj.Set_Sec();

	obj.Print1();
	obj.Print2();
}