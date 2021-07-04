#include <iostream>

using namespace std; 

class Box {
 int m_length;
 int m_breadth;
 int m_height;
 public:
 Box()
 {
	 m_length =0;
	 m_breadth =0;
	 m_height=0;
 }
 Box(int length,int breadth,int height)
 {
	m_length = length;
	m_breadth= breadth;
	m_height = height;
 }
 Box(int side)
 {
	 m_length = side;
	 m_breadth = side;
	 m_height = side;
	 
 }
 Box(const Box& in_Box)
 {
	 m_length = in_Box.m_length;
	 m_breadth = in_Box.m_breadth;
	 m_height = in_Box.m_height;
	 
 }
 int length() const
 {
	 return m_length ;
 }
	
 int breadth() const
 {
	return m_breadth ;
	 
 }
 int height() const
 {
	 return m_height;
 }
 int volume() const
 {
	 return m_height*m_breadth*m_length;
 }
 void dispay() const
 {
	cout << "length: " << m_length << endl << "breadth: " << m_breadth << endl << "height :" << m_height <<endl;	 
 }
};

 class Account {
  std::string m_accNumber;
  std::string m_accName;
  double m_balance;
  public:
  Account()
  {
	  m_accNumber =0;
	  m_accName = "";
	  m_balance =0;
  }
  Account(std::string acc_number,std::string acc_name ,double balance)
  {
	  m_accNumber = acc_number ;
      m_accName = acc_name ;
	  m_balance = balance;	  	
  }
  Account(std::string accNumber,std::string accName)
  {
	m_accNumber = accNumber ;  
	m_accName = accName ;
	m_balance = 500;
	  
  }
  Account(const Account& in_Account)
  {
	 m_accNumber = in_Account.m_accNumber;
	 m_accName = in_Account.m_accName;
	 m_balance = in_Account.m_balance;
	 
  }
  void debit(double debit_amount)
  {
	  m_balance -= debit_amount;
  }
  void credit(double credit_amount)
  {
	  m_balance+= credit_amount;
  }
  double getBalance() const
  {
	  return m_balance;
  }
  void dispay() const
  {
	  cout << m_accName << endl << m_accNumber << endl << m_balance << endl;
	  
  }
};


enum Quadrant {
  Q1,
  Q2,
  Q3,
  Q4
};

class Point {
  int m_x;
  int m_y;
  public:
  Point()
  {
	  m_x = 0;
	  m_y =0;
	  
  }
  Point(int x ,int y )
  {
	  m_x = x;
	  m_y = y;
	  
  }
  Point(const Point& in_point)
  {
	  m_x = in_point.m_x;
	  m_y = in_point.m_y;
	  
  }
	
  double distanceFromOrigin()  const
  {
	  double distance = m_x*m_x + m_y*m_y;
	  return distance;
  }
  Quadrant quadrant() const
  {
	  if (m_x >0&& m_y>0) return Q1;
		  
	  else if(m_x <0 && m_y <0 ) return Q2;
			  
	  else if(m_x >0 && m_y < 0) return Q4;
		  
	  else if(m_x <0 && m_y >0 ) return Q3;
  }
  bool isOrigin() const
  {
	if ((m_x==0)&&(m_y==0)
		  return true;
		  
	else return false; 
  }
  bool isOnXAxis() const
  {
	if ((m_x>0)&&(m_y==0))
		return true;
	else return true; 
		
  }
  bool isOnYAxis() const
{
	if ((m_y>0)&&(m_x==0))
		return true;
	else return true; 
}
		
  void display() const
{
		cout << m_x << endl << m_y;
}
};


enum AccountType {
  Prepaid,
  Postpaid
};

class Customer {
  std::string m_custId;
  std::string m_custName;
  std::string m_phone; 
  double m_balance;
  AccountType m_type;
  public:
  Customer()
  {
  std::string m_custId="";
  std::string m_custName="";
  std::string m_phone=""; 
  double m_balance=0;
  AccountType m_type= Prepaid;  
  }
  Customer(std::string custID,std::string custName,std::string phone,double balance);
  {
  std::string m_custId= custID;
  std::string m_custName= custName;
  std::string m_phone= phone; 
  double m_balance=balance;
  }
  Customer(std::string custID,std::string custName,std::string phone)
  {
  std::string m_custId= custID;
  std::string m_custName= custName;
  std::string m_phone= phone; 
  double m_balance=0;
  }
  Customer(const Customer& customer)
  {
  std::string m_custId= customer.m_custId;
  std::string m_custName= customer.m_custName;
  std::string m_phone= customer.m_phone;
  double m_balance = 0;
  }
  void credit(double cred_amount)
  {
	  m_balance += cred_amount;
  }
  void makeCall(double minutes)
  {
	  m_balance -= minutes*0.15;
  }
  double getBalance() const
  {
	  return m_balance ;
	  
  }
  void dispay() const
  {
	  cout << m_custId << endl << m_custName << endl << m_phone<< endl<< m_balance << endl;
  }
};


enum IPClass {
  A,
  B,
  C,
  D
};

class IPAddress {
  uint32_t ipval;
  public:
  IPAddress();
  IPAddress(uint8_t,uint8_t,uint8_t,uint8_t);   //a,b,c,d vals
  IPAddress(std::string);                       //"a.b.c.d" format
  bool isLoopBack() const;
  IPClass getIPClass() const;
  void dispay() const;
};


typedef enum {
  RED=0xFF0000,
  GREEN=0x00FF00,
  BLUE=0x0000FF,
  WHITE=0xFFFFFF,
  BLACK=0x0
  //TODO: some more colors
}color_t;

class Color {
  int m_r; 
  int m_g;
  int m_b;
  public:
  Color()
  {
	  m_r = WHITE;
	  m_b = WHITE;
	  m_g = WHITE;
	  
  }
  Color(int red,int green ,int blue)
  {
	  m_r = red;
	  m_g= green;
	  m_b = blue; 
  }
  Color(int colour)
  {
	  m_r = colour;
	  m_g = colour;
	  m_b = colour; 
  }
  Color(std::string )
  {
	  
  }
  Color(color_t colour)
  {
	  return 
  }
  void invert();
  void display() const;
};

