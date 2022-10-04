#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <dirent.h>
#include <filesystem>
using namespace std;

#define ELERES "/home/barna/projektek/filesystem_try_cpp/textFiles"

// ehhez létre kell hozni egy textfile-t

vector<string> fileNames;

void beolvas(DIR *dir)
{
  struct dirent *diread;

  if ((dir = opendir(ELERES)) != nullptr)
  {
    while ((diread = readdir(dir)) != nullptr)
    {
        fileNames.push_back(diread->d_name);

    }
    closedir(dir);
  }
  else
  {
    perror("opendir");
    throw EXIT_FAILURE;
  }

  fileNames.erase(fileNames.begin());
  fileNames.erase(fileNames.begin());


  delete diread;
}

void OpenFile(string fileName)
{ // függvény
  string line, answer;
  string files = "textFiles/"+fileName;

  ifstream file(files);
  if (file.is_open())
  {
    while (getline(file, line))
    { // beolvassa a file tartalmát
      cout << line << '\n';
    }
    file.close(); // file zárás
  }
  else
    cout << "Unable to open file";
  cout << endl
       << "Döntés: "; // Itt választ kér, hogy melyik legyen a következő file ami olvasásra kerül
  cin >> answer;
  cout << endl;
}

int main()
{
  //TODO: a dir pointer valamiért nem jó
  DIR *dir;
  beolvas(dir);

  for (int i = 0; i < fileNames.size(); i++)
  {
    OpenFile(fileNames[i]); // Kellene valami egyedi azonosító, hogy tudja, melyik adott file-t kell megnyitni...
  }
  
  delete dir;
  return 0;
}
