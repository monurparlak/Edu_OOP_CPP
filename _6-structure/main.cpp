#include <iostream>
#include <cstring>
/*
struct Student {
    char name[20];
    int points;
    double meanAveragePoint;
};

int main () {
    struct Student mehmet;

    mehmet.meanAveragePoint = 1.15;
    strcpy(mehmet.name, "Mehmet");
    mehmet.points           = 65;

    std::cout << "meanAveragePoint = " << mehmet.meanAveragePoint << std::endl;
    std::cout << "name = " << mehmet.name << std::endl;
    std::cout << "points = " << mehmet.points << std::endl;
    
}

*/
/*

typedef struct Student {
    char name[20];
    int points;
    double meanAveragePoint;
}Students_s;

int main () {
    Students_s mehmet;

    mehmet.meanAveragePoint = 1.15;
    strcpy(mehmet.name, "Mehmet");
    mehmet.points           = 65;

    std::cout << "meanAveragePoint = " << mehmet.meanAveragePoint << std::endl;
    std::cout << "name = " << mehmet.name << std::endl;
    std::cout << "points = " << mehmet.points << std::endl;
    
}
*/
typedef struct Student {
    char name[20];
    int points;
    double meanAveragePoint;
}Student_s;

void studentUpdateInfo(Student_s *studentVar);

int main () {
    Student_s mehmet;
    Student_s *ptrMehmet = &mehmet;

    studentUpdateInfo(ptrMehmet);

    std::cout << "meanAveragePoint = " << mehmet.meanAveragePoint << std::endl;
    std::cout << "name = " << mehmet.name << std::endl;
    std::cout << "points = " << mehmet.points << std::endl;
    
}
void studentUpdateInfo(Student_s *studentVar){
    strcpy(studentVar->name, "Mehmet");
    studentVar->meanAveragePoint = 1.11;
    studentVar->points           = 35;
}






