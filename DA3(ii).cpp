// Extend this class using three more classes as public, private and protected
// Overcome the limitations of private using friend functions 

#include <iostream> 
using namespace std;

//Base class
class Faculty
{
	public:
	int score;
	void set_values (int x){
	    score=x;
	    
	}
	
	friend int course4_score(Faculty f);
	friend int course5_score(Faculty f);
}; 

//Derived classes

class Course1 : public Faculty
{
	public:
	int course1_score(){
	    return (score+10);
	}  
}; 
class Course2 : public Faculty 
{
	public:
	int course2_score(){
	    return (score+40); 
	    
	}
};

// Extending this class using three more classes as public, private and protected

class Course3 : public Faculty //public inheritance
{
	public:
	int course3_score(){
	    return (score+1); 
	    
	}
};
class Course4 : protected Faculty  //protected inheritance
{
	public:
	int course4_score(Faculty f){
	    return (f.score+2); 
	    
	}
};
class Course5 : private Faculty //private inheritance
{
	public:
	int course5_score(Faculty f){
	    return (f.score+3); 
	    
	}
};

int main ()
{
	Course1 c1;
	Faculty f;
	c1.set_values(50);
	cout << "The Course 1 value is :: " << c1.course1_score() << endl;
	
	Course2 c2;
	c2.set_values(50);
	cout << "The course 2 value is :: " << c2.course2_score() << endl;
	
	Course3 c3;
	c3.set_values(50);
	cout << "The Course 3 value is :: " << c3.course3_score() << endl;
	
	//Using friend function to overcome limitations of private
	
	Course4 c4;
    f.set_values(50);
	cout << "The Course 4 value is :: " << c4.course4_score(f) << endl;
	
	Course5 c5;
	f.set_values (50);
	cout << "The Course 5 value is :: " << c5.course5_score(f) << endl;
	
	
	cout << "The total score is : " << c1.course1_score()+c2.course2_score()+c3.course3_score()+c4.course4_score(f)+c5.course5_score(f)<< endl;
	
	return 0;
}