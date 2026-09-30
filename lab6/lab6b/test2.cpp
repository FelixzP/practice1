#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

const int NUM_STUDENTS = 20;

struct Student {
    string id;
    string name;
    float test_scores[3]; 
    float total_score;
};

// Function prototypes
void getdata(Student students[], int n);
void sortdata(Student students[], int n);
void average(Student students[], int n, float averages[4]);
void displaydata(Student students[], int n, float averages[4]);

int main() {
    Student students[NUM_STUDENTS];
    float averages[4] = {0.0f};

    // 1. รับข้อมูลนักศึกษา
    getdata(students, NUM_STUDENTS);
    
    // 2. จัดเรียงข้อมูลตามคะแนนรวมจริงจากมากไปน้อย
    sortdata(students, NUM_STUDENTS);
    
    // 3. คำนวณหาค่าเฉลี่ย
    average(students, NUM_STUDENTS, averages);
    
    // 4. แสดงรายงาน
    displaydata(students, NUM_STUDENTS, averages);

    return 0;
}

void getdata(Student students[], int n) {
    cout << "Enter data for " << n << " students:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "[" << i + 1 << "] ID (5 digits): ";
        cin >> students[i].id;
        cout << "    Name: ";
        cin.ignore();
        getline(cin, students[i].name);
        
        float s1, s2, s3;
        cout << "    Score Test 1 (max 100): ";
        cin >> s1;
        cout << "    Score Test 2 (max 100): ";
        cin >> s2;
        cout << "    Score Test 3 (max 100): ";
        cin >> s3;
        
        // คำนวณคะแนนจริงแต่ละครั้งตามสัดส่วน (25%, 25%, 50%)
        students[i].test_scores[0] = s1 * 0.25f;
        students[i].test_scores[1] = s2 * 0.25f;
        students[i].test_scores[2] = s3 * 0.50f;
        
        // คำนวณคะแนนจริงรวม
        students[i].total_score = students[i].test_scores[0] + students[i].test_scores[1] + students[i].test_scores[2];
        cout << endl;
    }
}

void sortdata(Student students[], int n) {
    // ใช้ Bubble sort เพื่อเรียงลำดับคะแนนรวมจากมากไปน้อย
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (students[j].total_score < students[j+1].total_score) {
                // สลับตำแหน่งถ้าข้อมูลปัจจุบันน้อยกว่าข้อมูลถัดไป
                Student temp = students[j];
                students[j] = students[j+1];
                students[j+1] = temp;
            }
        }
    }
}

void average(Student students[], int n, float averages[4]) {
    for (int i = 0; i < 4; ++i) {
        averages[i] = 0.0f;
    }
    
    for (int i = 0; i < n; ++i) {
        averages[0] += students[i].test_scores[0];
        averages[1] += students[i].test_scores[1];
        averages[2] += students[i].test_scores[2];
        averages[3] += students[i].total_score;
    }
    
    // หาค่าเฉลี่ย
    if (n > 0) {
        for (int i = 0; i < 4; ++i) {
            averages[i] /= n;
        }
    }
}

void displaydata(Student students[], int n, float averages[4]) {
    cout << "\n";
    cout << setfill('-') << setw(97) << "-" << setfill(' ') << endl;
    cout << left << setw(8) << "No." 
         << setw(8) << "Id" 
         << setw(26) << "Name" 
         << right << setw(10) << "Test1(25%)" 
         << setw(15) << "Test2(25%)" 
         << setw(15) << "Test3(50%)" 
         << setw(15) << "Total(100%)" << endl;
    cout << setfill('-') << setw(97) << "-" << setfill(' ') << endl;
    
    for (int i = 0; i < n; ++i) {
        cout << right << setw(3) << i + 1 << "." << "    "
             << left << setw(8) << students[i].id
             << setw(22) << students[i].name
             << right << fixed << setprecision(2)
             << setw(14) << students[i].test_scores[0]
             << setw(15) << students[i].test_scores[1]
             << setw(15) << students[i].test_scores[2]
             << setw(15) << students[i].total_score << endl;
    }
    cout << setfill('-') << setw(97) << "-" << setfill(' ') << endl;
    cout << left << setw(42) << "Average of mark" 
         << right << fixed << setprecision(2)
         << setw(10) << averages[0]
         << setw(15) << averages[1]
         << setw(15) << averages[2]
         << setw(15) << averages[3] << endl;
}
