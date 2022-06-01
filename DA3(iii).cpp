// Create a five level inheritance 
// Access the members of all the four previuos levels from the fifth level class 
// Access the members of all the three previuos levels from the fourth level class 
//  Access the members of all the two previuos levels from the third level class 
// check the reverse accessing is allowed 

// Perform the private inheritance and explore the limitations 

// use friend fucntions to overcome the limitations of private inheritance.

#include <iostream>
using namespace std;
 
//Base Class : class One

class One
{
    private:
        int test1;
    public:
        int t1 = test1;
        void get_test1(int val_test1)
        {
            test1=val_test1;
        }
         
        void disp_test1(void)
        {
            cout << "Value of test1 is : " << test1 << endl;
        }
};


 
//Here Class two is base class for class three and Derived class for class one

class Two: public One
{
    private:
        int test2;
    public:
        int t2 = test2;
        //assign value of a from here
        void get_test2(int val_test1, int val_test2)
        {
            //assign value of a by calling function of class one
            get_test1(val_test1);   
            test2=val_test2;
        }
         
        void disp_test2(void)
        {
            //display value of test1
            disp_test1();
            cout << "Value of test2 is : " << test2 << endl;
        }
};
 
//Here class three is derived class and two is Base class
class Three: public Two
{
    private:
        int test3;
    public:
        int t3 = test3;
        //assign value for variables 
        void get_test3(int val_test1, int val_test2,int val_test3)
        {
            /* Multilevel Inheritance */
            
            get_test2(val_test1,val_test2); 
            test3=val_test3;
        }
         
        void disp_test3(void)
        {
            //display value of test1 and test2 using disp_test2()
            disp_test2();
            cout << "Value of test3 is : " << test3 << endl;
        }
};

//Here class four is derived class and three is Base class
class Four: public Three
{
    private:
        int test4;
    public:
        int t4 = test4;
        //assign value for variables 
        void get_test4(int val_test1, int val_test2,int val_test3,int val_test4)
        {
            /* Multilevel Inheritance */
            
            get_test3(val_test1,val_test2,val_test3); 
            test4=val_test4;
        }
         
        void disp_test4(void)
        {
            //display value of test1, test2 and test 3 using disp_test3()
            disp_test3();
            cout << "Value of test4 is : " << test4 << endl;
        }
};

//Here class five is derived class and four is Base class
class Five: private Four     //Performing private inheritance
{
    private:
        int test5;
    public:
        int t5 = test5;
        //assign value for variables 
        void get_test5(int val_test1, int val_test2,int val_test3,int val_test4,int val_test5)
        {
            /* Multilevel Inheritance */
            
            get_test4(val_test1,val_test2,val_test3,val_test4); 
            test5=val_test5;
        }
         
        void disp_test5(void)
        {
            //display value of test1, test2, test 3 and test 4 using disp_test4()
            disp_test4();
            cout << "Value of test5 is : " << test5 << endl;
        }
        
        friend void total(Five o);
};
//Friend function
        void total(Five o){
            int tot = o.t1+o.t2+o.t3+o.t4+o.t5;
            cout<<"Total score : "<<tot;
            //cout<<"Total score : "<<tot<<endl;
        }

 
int main()
{
    
    Five o;
    
    
    
    //create object of final class, which is Class Five
    
    Five obj5;  
    obj5.get_test5(111,222,333,444,555);
    obj5.disp_test5();
    total(o);
     
    return 0;
}

 