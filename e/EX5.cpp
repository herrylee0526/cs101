#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

class ReadClass {
private:
    string classNames[100]; // 假设最多有 100 个类
    int classCount;

public:
    ReadClass() : classCount(0) {}

    // 读取文件内容并解析类名
    void readFile(const string& filename) {
        ifstream file(filename);
        if (!file.is_open()) {
            cerr << "无法打开文件 " << filename << endl;
            return;
        }

        string line;
        while (getline(file, line)) {
            istringstream iss(line);
            string word;
            while (iss >> word) {
                if (word == "class") {
                    string className;
                    if (iss >> className) {
                        // 去掉类名后的非字母字符
                        className = className.substr(0, className.find_first_of("{;"));
                        classNames[classCount++] = className;
                    }
                }
            }
        }

        file.close();
    }

    // 输出类名
    void showClass() const {
        cout << classCount << " class in main.cpp" << endl;
        for (int i = 0; i < classCount; ++i) {
            cout << "class " << classNames[i] << endl;
        }
    }
};

int main() {
    ReadClass rfile;
    rfile.readFile("main.cpp");
    rfile.showClass();
    return 0;
}

