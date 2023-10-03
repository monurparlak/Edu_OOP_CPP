///////////////////////////////////////////////////
/*-----------------------------------------------
//new & delete in C++?

new ==>> request for memory allocation in heap
delete ==>> erase that memory

new (malloc, calloc, realloc, ...) so dynamic memory allocations
delete (free)
-------------------------------------------------*/
///////////////////////////////////////////////////
/* Ex_1
#include <iostream>

//using namespace std;

int main()                                      // General address where program
executes {                                               // Scope

    int *ptr1 = NULL;
    ptr1 = new int;

    *ptr1 = 10;

    std::cout<< "*ptr1 : " << *ptr1 << std::endl;

    delete ptr1;

    return 0
} */
/////////////////////////////////////
/* Ex_2
#include <cstring>
#include <iostream>

class Data_Tester {
private:
  int mike;
  int oscar;
  int papa;
  void func_3();

public:
  int lima;
  int zulu;
  void func_1() {
    std::cout << "Func_1 started" << std::endl;
    func_2();
    func_3();
  }

protected:
  int bravo;
  void func_2();
};

void Data_Tester::func_2() { std::cout << "Func_2 started" << std::endl; }

void Data_Tester::func_3() { std::cout << "Func_3 started" << std::endl; }

int main() {
  Data_Tester dataTester;

  dataTester.lima = 5;
  dataTester.zulu = 6;

  dataTester.func_1();

  // Cannot access this class member cause of the private value
  // dataTester.func_2();

  return 0;
} */
/////////////////////////////////////
/* Ex_3
#include <iostream>

class myClass {
private:
  int alpha;

public:
  void func();
};
myClass quebec;

void myClass::func() { *this = quebec; }

int main() {
  myClass sierra;

  sierra.func();

  std::cout << "&sierra: " << &sierra << std::endl;
  std::cout << "&quebec: " << &quebec << std::endl;

  return 0;
} */
/////////////////////////////////////
/* Ex_4
#include <iostream>
#include <string>
#include <vector>

class BulletType {
public:
    BulletType(const std::string& name, int caliber) : name(name),
caliber(caliber) {}

    std::string getName() const {
        return name;
    }

    int getCaliber() const {
        return caliber;
    }

    void display() const {
        std::cout << this->name << " Bullet (" << this->caliber << "mm)" <<
std::endl;
    }

private:
    std::string name;
    int caliber;
};

class Magazine {
public:
    Magazine(int capacity, const BulletType& bulletType) : capacity(capacity),
bulletType(bulletType) {}

    void loadBullet(const BulletType& bullet) {
        if (this->bullets.size() < this->capacity && bullet.getCaliber() ==
this->bulletType.getCaliber()) { this->bullets.push_back(bullet);
        }
        else {
            std::cout << "Invalid bullet type or magazine is full." <<
std::endl;
        }
    }

    void display() const {
        std::cout << "Magazine (" << this->bullets.size() << "/" <<
this->capacity << ")" << std::endl;
    }

private:
    int capacity;
    const BulletType& bulletType;
    std::vector<BulletType> bullets;
};

class Weapon {
public:
    Weapon(const std::string& name, int damage) : name(name), damage(damage) {}

    void shoot(const Magazine& magazine) {
        if (magazine.getBullets().size() > 0) {
            std::cout << "Bang! " << this->name << " does " << this->damage << "
damage." << std::endl; magazine.removeBullet();
        }
        else {
            std::cout << "Click! The magazine is empty." << std::endl;
        }
    }

    std::string getName() const {
        return this->name;
    }

private:
    std::string name;
    int damage;
};

int main() {
    BulletType nineMillimeter("9mm", 9);
    Magazine magazine(15, nineMillimeter);
    Weapon pistol("Pistol", 30);

    magazine.loadBullet(nineMillimeter);
    magazine.loadBullet(nineMillimeter);

    pistol.shoot(magazine);
    pistol.shoot(magazine);

    return 0;
} */
/////////////////////////////////////
/* Ex_5
#include <cstring>
#include <iostream>

#define IGNITION 1

class Automobile {
public:
  int currentGear_ = 0;
  bool engineRunning_;

  // Constructor
  Automobile(std::string make, std::string model, int year)
      : make_(make), model_(model), year_(year), engineRunning_(false) {}

  // Public methods for door controls
  void LockDoors() {
    std::cout << "Doors are locked." << std::endl;
    doorsLocked_ = true;
  }

  void UnlockDoors() {
    std::cout << "Doors are unlocked." << std::endl;
    doorsLocked_ = false;
  }

  // Public methods for window controls
  void OpenWindows() {
    std::cout << "Windows are open." << std::endl;
    windowsOpen_ = true;
  }

  void CloseWindows() {
    std::cout << "Windows are closed." << std::endl;
    windowsOpen_ = false;
  }

  // Public getter methods for make, model, and year
  std::string GetMake() const { return make_; }

  std::string GetModel() const { return model_; }

  int GetYear() const { return year_; }

  void StartEngine() {
    if (!engineRunning_) {
      std::cout << "Engine is started." << std::endl;
      engineRunning_ = true;
    } else {
      std::cout << "Engine is already running." << std::endl;
    }
  }

  void StopEngine() {
    if (engineRunning_) {
      std::cout << "Engine is stopped." << std::endl;
      engineRunning_ = false;
      currentGear_ = 0; // Reset gear when the engine stops
    } else {
      std::cout << "Engine is already stopped." << std::endl;
    }
  }

private:
  std::string make_;
  std::string model_;
  int year_;
  bool doorsLocked_ = false;
  bool windowsOpen_ = false;
};

// Derived class for a specific car model
class SpecificCar : public Automobile {
public:
  // Constructor
  SpecificCar(std::string make, std::string model, int year)
      : Automobile(make, model, year) {}

  // Public method specific to this car model
  void PlayMusic() {
    if (engineRunning_) {
      std::cout << "Playing music in the " << GetMake() << " " << GetModel()
                << "." << std::endl;
    } else {
      std::cout << "Start the engine to play music." << std::endl;
    }
  }

  void ChangeGear(int gear) {
    if (engineRunning_) {
      std::cout << "Changed to gear " << gear << "." << std::endl;
      currentGear_ = gear;
    } else {
      std::cout << "Start the engine before changing gears." << std::endl;
    }
  }
};

int main() {
  SpecificCar car("Toyota", "Corolla", 2023);

  car.StartEngine();
  car.ChangeGear(IGNITION);
  car.LockDoors();
  car.OpenWindows();
  car.PlayMusic();
  car.StopEngine();

  return 0;
} */
/////////////////////////////////////
/* Ex_6
// Constructor - destructor - copy constructor - assigment operator
#include <iostream>

class myClass {
private:
  int x;

public:
  myClass() { std::cout << "Constructor" << std::endl; }
  ~myClass() { std::cout << "Destructor" << std::endl; }
};

int main() {
  myClass class_1;
  std::cout << "Test" << std::endl;

  return 0;
} */
/////////////////////////////////////
/* Ex_7
// Constructor - destructor - copy constructor - assigment operator
#include <iostream>

class myClass {
private:
  int x;

public:
  myClass() { std::cout << "Constructor" << std::endl; }
  ~myClass() { std::cout << "Destructor" << std::endl; }
};

int main() {
  myClass *pd = new myClass; // Constructor
  delete pd;                 // Constructor + Distructor

  std::cout << "Test" << std::endl;

  return 0;
} */
/////////////////////////////////////
/* Ex_8
// Constructor - destructor - copy constructor - assigment operator
#include <iostream>

class myClass {
private:
  int x;

public:
  myClass() { std::cout << "Constructor" << std::endl; }
  ~myClass() { std::cout << "Destructor" << std::endl; }
};

int main() {
  // myClass *pd = new myClass; // Constructor
  // delete pd;                 // Constructor + Distructor

  myClass *pd = new myClass[5]; // Constructor
  delete[] pd;                  // Constructor + Distructor

  std::cout << "Test" << std::endl;

  return 0;
} */
/////////////////////////////////////
/* Ex_9
// Constructor - destructor - copy constructor - assigment operator
#include <iostream>

class myClass {
private:
  int x;

public:
  myClass() { std::cout << "Default Constructor" << std::endl; }
  myClass(const myClass &r) { std::cout << "Copy Constructor" << std::endl; }
  ~myClass() { std::cout << "Destructor" << std::endl; }
};

int main() {
  myClass m1;
  myClass m2(m1);

  std::cout << "Test" << std::endl;

  return 0;
} */
/////////////////////////////////////
/* Ex_10
// Constructor - destructor - copy constructor - assigment operator
#include <iostream>

class myClass {
private:
  int x;

public:
  myClass() { std::cout << "Default Constructor" << std::endl; }
  myClass(const myClass &r) { std::cout << "Copy Constructor" << std::endl; }
  ~myClass() { std::cout << "Destructor" << std::endl; }
};

void func1(myClass x) {}
void func2(myClass &x) {}

int main() {
  myClass m1;
  func1(m1);
  func2(m1);

  std::cout << "Test" << std::endl;

  return 0;
} */
/////////////////////////////////////
/* Ex_11
// Constructor - destructor - copy constructor - assigment operator
#include <iostream>

class myClass {
private:
  int x;

public:
  myClass() { std::cout << "Default Constructor" << std::endl; }
  myClass(const myClass &r) { std::cout << "Copy Constructor" << std::endl; }
  ~myClass() { std::cout << "Destructor" << std::endl; }
};

myClass g;

myClass func() { return g; }

int main() {
  std::cout << "TEST-1" << std::endl;
  func();
  std::cout << "TEST-2" << std::endl;

  return 0;
} */
/////////////////////////////////////
/* Ex_12
// Constructor - destructor - copy constructor - assigment operator
#include <cstring>
#include <iostream>

class classAlpha {
private:
  char *pd;
  int len;

public:
  classAlpha(const char *p);
  classAlpha(const classAlpha &r);

  // void display() const;
  // int getlen() const;
  ~classAlpha();

  // classAlpha &operator=(const classAlpha &r);
};

classAlpha::classAlpha(const char *p) {
  len = strlen(p);
  pd = new char[len + 1];
  strcpy(pd, p);

  std::cout << "pd: " << p << std::endl;
}

classAlpha::~classAlpha() {
  std::cout << "Destructor" << std::endl;
  delete[] pd;
}

int main() {
  classAlpha alpha("ALPHA");   // Default Constructor
  classAlpha alpha2("ALPHA2"); // Copy Constructor
  std::cout << "TEST-2" << std::endl;

  return 0;
} */
/////////////////////////////////////
/* Ex_13
// Operator Overloading
#include <cstring>
#include <iostream>

class className {
private:
  char *pd;
  int len;

public:
  className(const char *p);
  ~className();
  className(const className &r) {
    len = r.len;
    pd = new char[len + 1];
    strcpy(pd, r.pd);
    std::cout << "Copy Constructor" << std::endl;
  }
  void display() const;
  int getlen() const;

  className &operator=(const className &r);
};

className::className(const char *p) {
  len = strlen(p);
  pd = new char[len + 1];
  strcpy(pd, p);
}

className::~className() {
  std::cout << "Destructor" << std::endl;
  delete[] pd;
}

void className::display() const {
  std::cout << "className: " << pd << std::endl;
}

int className::getlen() const { return len; }

void func(className p) {
  std::cout << "Destructor" << std::endl;
  std::cout << "~className done!" << std::endl;

  getchar();
}

className &className::operator=(const className &r) {
  len = r.len;
  delete[] pd;
  pd = new char[len + 1];
  strcpy(pd, r.pd);

  return *this;
}

int main() {
  std::cout << "Ex-13" << std::endl;
  className myclassName("ARTOS");
  myclassName.display();
  func(myclassName);
  std::cout << myclassName.getlen() << std::endl;
  myclassName.display();

  return 0;
} */
/////////////////////////////////////
/* Ex_14
// Operator Overloading
#include <cstring>
#include <iostream>

class Box {
private:
  double length;
  double width;
  double height;

public:
  Box() { std::cout << "Box Constructor" << std::endl; }

  Box(double l, double w, double h) {
    length = l;
    width = w;
    height = h;

    if (w < 0) {
      std::cout << "Unfortunately! width cannot be '0'" << std::endl;
      width = 0.0;
    }

    std::cout << "Box volume: " << (this->length * this->width * this->height)
              << std::endl;
  }

  ~Box() { std::cout << "Box Destructor" << std::endl; }

  double getVolume() { return length * width * height; }

  void setWigdth(double w) {
    if (w < 0)
      std::cout << "Unfortunately! width cannot be '0'" << std::endl;
    else
      width = w;
  }

  void setHeigt(double h) {
    if (h < 0)
      std::cout << "Unfortunately! height cannot be '0'" << std::endl;
    else
      height = h;
  }

  void setLength(double len) {
    if (len < 0)
      std::cout << "Unfortunately! length cannot be '0'" << std::endl;
    else
      length = len;
  }

  Box &operator=(const Box &r) {
    // length of box_1 | length of box_2
    // box_1(this) = box_2(r);
    this->length = r.length;
    this->width = r.width;
    this->height = r.height;

    return *this;
  }
};

int main() {
  std::cout << "Ex-14" << std::endl;
  Box box_1;

  Box box_2(1.2, 3.4, 5.6);
  std::cout << "box_2 volume: " << box_2.getVolume() << std::endl;

  box_2.setLength(25.3);
  box_2.setHeigt(6.2);
  box_2.setWigdth(2.9);
  std::cout << "box_2 volume: " << box_2.getVolume() << std::endl;

  box_2.setLength(-25.3);
  box_2.setHeigt(-6.2);
  box_2.setWigdth(-2.9);

  box_1 = box_2;
  std::cout << "box_1 volume: " << box_1.getVolume() << std::endl;

  return 0;
} */
/////////////////////////////////////
/* Ex_15
// Operator Overloading
#include <cstring>
#include <iostream>

class Box {
private:
  double length;
  double width;
  double height;

public:
  Box() { std::cout << "Box Constructor" << std::endl; }

  Box(double l, double w, double h) {
    length = l;
    width = w;
    height = h;

    if (w < 0) {
      std::cout << "Unfortunately! width cannot be '0'" << std::endl;
      width = 0.0;
    }

    std::cout << "Box volume: " << (this->length * this->width * this->height)
              << std::endl;
  }

  ~Box() { std::cout << "Box Destructor" << std::endl; }

  double getVolume() { return length * width * height; }

  void setWigdth(double w) {
    if (w < 0)
      std::cout << "Unfortunately! width cannot be '0'" << std::endl;
    else
      width = w;
  }

  void setHeigt(double h) {
    if (h < 0)
      std::cout << "Unfortunately! height cannot be '0'" << std::endl;
    else
      height = h;
  }

  void setLength(double len) {
    if (len < 0)
      std::cout << "Unfortunately! length cannot be '0'" << std::endl;
    else
      length = len;
  }

  void display() const {
    std::cout << "length/wigth/height: " << std::endl;
    std::cout << length << " " << width << " " << height << std::endl
              << std::endl;

    std::cout << "length/wigth/height (this): " << std::endl;
    std::cout << this->length << " " << this->width << " " << this->height
              << std::endl
              << std::endl;
  }

  Box &operator=(const Box &r) {
    // length of box_1 | length of box_2
    // box_1(this) = box_2(r);
    this->length = r.length;
    this->width = r.width;
    this->height = r.height;

    return *this;
  }

  Box &operator+(const Box &r) {
    this->length = this->length + r.length;
    this->width = this->width + r.width;
    this->height = this->height + r.height;

    return *this;
  }
};

int main() {
  std::cout << "Ex-15" << std::endl;
  Box box_1(2, 4, 8);
  Box box_2;
  Box box_3;

  box_1 = box_2;
  std::cout << "box_1 volume: " << box_1.getVolume() << std::endl << std::endl;

  box_3 = box_1 + box_2;

  box_1.display();
  box_2.display();
  box_3.display();

  return 0;
} */
/////////////////////////////////////
/* Ex_16
// Const Keyword
#include <cstring>
#include <iostream>

class classTest {
private:
  mutable int mx;

public:
  void func() const; // object cannot change
};

void classTest::func() const { mx = 0; }

int main() {
  std::cout << "Ex-16" << std::endl;
  classTest a;

  a.func();

  return 0;
} */
/////////////////////////////////////
/* Ex_17
// Const Keyword
#include <cstring>
#include <iostream>

class classTest {
private:
  mutable int mx;
  const int nx;

public:
  classTest(int kx) {
    kx = nx;
    // nx = 10;
    std::cout << "Default Constructor" << std::endl;
  }
};

int main() {
  std::cout << "Ex-17" << std::endl;
  classTest a(5);

  return 0;
} */
/////////////////////////////////////
/* Ex_18
// static keyword
#include "myClass.hpp" // "${fileDirname}\\myClass.hpp"
#include <cstring>
#include <iostream>

myClass myClass;

int main() {
  std::cout << "Ex-18" << std::endl;

  myClass.func();
  std::cout << myClass.a << std::endl;

  return 0;
} */
/////////////////////////////////////
/* Ex_19
// static keyword
#include "myClass.hpp" // "${fileDirname}\\myClass.hpp"
#include <cstring>
#include <iostream>

myClass myClass;

int main() {
  std::cout << "Ex-19" << std::endl;

  myClass.func();
  std::cout << myClass.sCount << std::endl;

  myClass.sfunc();

  return 0;
} */
/////////////////////////////////////
/* Ex_20
// static keyword
#include "myClass_2.hpp" // "${fileDirname}\\myClass.hpp"
#include <cstring>
#include <iostream>

myClass_2 myClass_2;

int main() {
  std::cout << "Ex-20" << std::endl;

  std::cout << "Class member pieces: " << myClass_2::getCounter() << std::endl;

  myClass_2 *ptr = new myClass_2;
  std::cout << "Class member pieces: " << myClass_2::getCounter() << std::endl;

  return 0;
} */
/////////////////////////////////////
/* Ex_21
// static keyword
#include "myClass_2.hpp" // "${fileDirname}\\myClass.hpp"
#include <cstring>
#include <iostream>

myClass_2 myClass_2;

int main() {
  std::cout << "Ex-21" << std::endl;

  std::cout << "Class member pieces: " << myClass_2::getCounter() << std::endl;

  myClass_2 *ptr = new new_Class; // Renamed the pointer to avoid conflict
  std::cout << "Class member pieces: " << new_Class::getCounter() << std::endl;

  delete ptr; // Don't forget to delete dynamically allocated objects to avoid
              // memory leaks
  return 0;
} */
/////////////////////////////////////
/* Ex_22
// Conversion Constructor - inline keyword
#include <cstring>
#include <iostream>

inline int max(int x, int y) { return (x > y) ? x : y; }

int main() {
  std::cout << "Ex-22" << std::endl;

  std::cout << "Max(3,6): " << max(3, 6) << std::endl;

  return 0;
} */
/////////////////////////////////////
/* Ex_23
// Conversion Constructor - inline keyword
#include <cstring>
#include <iostream>

class classTest {
private:
  int classVal;

public:
  classTest(int a) { classVal = a; }

  void display() const;
};

void classTest::display() const {
  std::cout << "Variable Value is: " << classVal << std::endl;
}

int main() {
  std::cout << "Ex-23" << std::endl;

  classTest test(5);
  test.display();

  test = 8;
  test.display();

  return 0;
} */
/////////////////////////////////////
/* Ex_24
// Conversion Constructor - inline keyword
#include <cstring>
#include <iostream>

class classTest {
private:
  int classVal;

public:
  classTest(int a);

  void display() const;

  classTest &operator=(const classTest &r) {
    std::cout << "Operator: " << std::endl;

    return *this;
  }
};

classTest::classTest(int a) { classVal = a; }

void classTest::display() const {
  std::cout << "Variable Value is: " << classVal << std::endl;
}

int main() {
  std::cout << "Ex-24" << std::endl;

  classTest test(5);
  test.display();

  test = 8;
  test.display();

  return 0;
} */
/////////////////////////////////////
/* Ex_25
// Conversion Constructor - inline keyword
#include <cstring>
#include <iostream>

class classTest {
private:
  int classVal;
  int classVal2;

public:
  classTest(int a) : classVal(a), classVal2(a) {
    classVal = a;
    classVal2 = a;
  }

  void display() const;

  // classTest &operator=(const classTest &r) {
  //   std::cout << "Operator: " << std::endl;
  //   return *this;
  // }
};

void classTest::display() const {
  std::cout << "(" << classVal << ")" << std::endl;
  std::cout << "(" << classVal2 << ")" << std::endl;
}

int main() {
  std::cout << "Ex-25" << std::endl;

  classTest test(100);
  test.display();

  test = 500;
  test.display();

  return 0;
} */