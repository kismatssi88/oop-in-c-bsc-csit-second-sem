#include <iostream>
using namespace std;
 
class AcademicRecord {
protected:
    float academicMarks;
public:
    void setAcademic(float m) { academicMarks = m; }
};
 
class SportsRecord {
protected:
    float sportsMarks;
public:
    void setSports(float m) { sportsMarks = m; }
};
 
class Student : public AcademicRecord, public SportsRecord {
public:
    void showTotal() {
        float total = academicMarks + sportsMarks;
        cout << "Academic Marks: " << academicMarks << endl;
        cout << "Sports Marks: " << sportsMarks << endl;
        cout << "Total Performance: " << total << endl;
    }
};
 
int main() {
    Student s;
    s.setAcademic(78.5);   // inherited from AcademicRecord
    s.setSports(15.0);     // inherited from SportsRecord
    s.showTotal();
    return 0;
}
