#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string line, answer;
  string Y = "IGEN";
  string N = "NEM";
  char A,B,ans; //válaszok az egyes döntéseknél
  char a = 'A';
  char b = 'B';
  
  ifstream file("story-0.0.txt");
  if (file.is_open()) {
    while (getline(file, line)) {
      cout << line << '\n';
    }
    file.close();
  } else
    cout << "Unable to open file";
  cout << endl<<"Döntés: ";
  cin >> answer;
  cout << endl;

  while ((answer != Y) and (answer != N)) {
    ifstream file("story-0.2.txt");
    if (file.is_open()) {
      while (getline(file, line)) {
        cout << line << '\n';
      }
      file.close();
    } else
      cout << "Unable to open file";
    cout << endl<<"Döntés: ";
    cin >> answer;
    cout << endl;
  }

  if (answer == N) {
    ifstream file("story-0.1.txt");
    if (file.is_open()) {
      while (getline(file, line)) {
        cout << line << '\n';
      }
      file.close();
    } else
      cout << "Unable to open file";
  }

  else {
    ifstream file("story-1.txt");
    if (file.is_open()) {
      while (getline(file, line)) {
        cout << line << '\n';
      }
      file.close();
    } else
      cout << "Unable to open file";

    cout << endl << "Döntés: ";
    cin >> ans;
    cout << endl;

    while ((ans != a) and (ans != b)) {
      ifstream file("story-0.3.txt");
      if (file.is_open()) {
        while (getline(file, line)) {
          cout << line << '\n';
        }
        file.close();
      } else
        cout << "Unable to open file";
      cout<<"Döntés: ";
      cin >> ans;
    }

    if (ans == a) {
      ifstream file("story-2.1.txt");
      if (file.is_open()) {
        while (getline(file, line)) {
          cout << line << '\n';
        }
        file.close();
      } else
        cout << "Unable to open file";

      cout << endl << "Döntés: ";
      cin >> ans;
      cout << endl;

      while ((ans != a) and (ans != b)) {
        ifstream file("story-0.3.txt");
        if (file.is_open()) {
          while (getline(file, line)) {
            cout << line << '\n';
          }
          file.close();
        } else
          cout << "Unable to open file";
        cin >> ans;
      }

      if (ans == a) {
        ifstream file("story-3.1.txt");
        if (file.is_open()) {
          while (getline(file, line)) {
            cout << line << '\n';
          }
          file.close();
        } else
          cout << "Unable to open file";
      }

      else if (ans == b) {
        ifstream file("story-3.2.txt");
        if (file.is_open()) {
          while (getline(file, line)) {
            cout << line << '\n';
          }
          file.close();
        } else
          cout << "Unable to open file";
      }

    }

    else if (ans == b) {
      ifstream file("story-2.2.txt");
      if (file.is_open()) {
        while (getline(file, line)) {
          cout << line << '\n';
        }
        file.close();
      } else
        cout << "Unable to open file";

      cout << endl << "Döntés: ";
      cin >> ans;
      cout << endl;

      while ((ans != a) and (ans != b)) {
        ifstream file("story-0.3.txt");
        if (file.is_open()) {
          while (getline(file, line)) {
            cout << line << '\n';
          }
          file.close();
        } else
          cout << "Unable to open file";
        cin >> ans;
      }

      if (ans == a) {
        ifstream file("story-3.3.txt");
        if (file.is_open()) {
          while (getline(file, line)) {
            cout << line << '\n';
          }
          file.close();
        } else
          cout << "Unable to open file";
      }

      else if (ans == b) {
        ifstream file("story-3.4.txt");
        if (file.is_open()) {
          while (getline(file, line)) {
            cout << line << '\n';
          }
          file.close();
        } else
          cout << "Unable to open file";
      }
    }
  }
  return 0;
}
