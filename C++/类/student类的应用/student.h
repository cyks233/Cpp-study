#ifndef _STUDENT
#define _STUDENT
class student
{
private:
	char* name;
	int score;
public:
	student(char* s, int t = 80);
	student(student& p);
	~student();
	void display(void);
	int getS(void);
};
#endif 

