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
 
// Step 1: multiple inheritance merges Academic + Sports
class PerformanceSummary : public AcademicRecord, public SportsRecord {
public:
    float getAcademicSports() { return academicMarks + sportsMarks; }
};
 
class CulturalRecord {
protected:
    float culturalMarks;
public:
    void setCultural(float m) { culturalMarks = m; }
};
 
// Step 2: multilevel on top of the merged class, PLUS another merge with CulturalRecord = hybrid
class FinalResult : public PerformanceSummary, public CulturalRecord {
public:
    void showFinalResult() {
        float total = getAcademicSports() + culturalMarks;
        cout << "Academic+Sports Subtotal: " << getAcademicSports() << endl;
        cout << "Cultural Marks: " << culturalMarks << endl;
        cout << "Final Total: " << total << endl;
    }
};
 
int main() {
    FinalResult fr;
    fr.setAcademic(80);
    fr.setSports(12);
    fr.setCultural(8);
    fr.showFinalResult();
    return 0;
}
