#Assignment 1
###Q1.
>Class is a method to represent an object as a user-defined data type, it contains data representation and methods to manipulate data of the object.

###Q2.
>Classes achieve abstraction by hiding the information or providing only necessary details to the client.  
>while they achieve Encapsulation by binding the data and bahaviours together in a single unit, and this is achieved throw data hiding of the member data of the class.


###Q3.
>A class is a definition of an object, we can use class to define real life objects and specify its attributes  
when we make an instance of the class we can say that we made a new object of this thing that the class defines.

###Q4.
>The class data members are specific for each object of the class, while the functions are the same used by all the objects of that class.

###Q5.
```c++
 class BanckAccount{
 private:
	string dName, id;
	int balance;
 public:
	BanckAccount(string id, string name, int b);
	string displayName();
	string displayID();
	int displayBalance();
	void deposit(int n);
	void withdraw(int n);
 };
```
###Q6.
Class constructors are called when you make an instance of the class and you want to assign values to the data members, there's can be a default constructor that will be called whenever an instance of the class is made.  
While class destructors are called when the object of the class is deleted.

###Q7.
```c++
BanckAccount(){
		balance = 0;
	}
	BanckAccount(string n, string name, int b){
		id = n;
		dName = name;
		balance = b;
	}
```

###Q8.
Default constructor is a constructor that will be called everytime a new object of the class is declared.  
it can be used to make initialization for the data variables when the object is made.

###Q9.
```c++
const string& Stock::getCompany() const{
	return company;
}

const int& Stock::getShares()const{
	return shares;
}

const double& Stock::getShare_val()const{
	return share_val;
}

const double& Stock::getTotal_val()const{
	return total_val;
}
```

###Q10.
this returns a reference to the invoking object, while *this returns a clone to the object.