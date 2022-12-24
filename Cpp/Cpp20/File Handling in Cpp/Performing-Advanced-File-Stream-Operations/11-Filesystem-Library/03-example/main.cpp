#include <iostream>
#include <filesystem>

using std::cout;
using std::endl;

namespace fs = std::filesystem;

int main()
{
    fs::path current_path{"/Users/Abrao/Desktop/Projects/filesystem/main.cpp"};

    cout << "Does path exist?: " << std::boolalpha << fs::exists(current_path) << endl;

    cout << "Root name: " << current_path.root_name() << endl;
    cout << "Root directory: " << current_path.root_directory() << endl;

    cout << "Relative path: " << current_path.relative_path() << endl;
    cout << "Parent path: " << current_path.parent_path() << endl;

    cout << "File name: " << current_path.filename() << endl;
    cout << "Stem: " << current_path.stem() << endl;
    cout << "Extension: " << current_path.extension() << endl;

    return 0;
}

/* OUTPUT
    Does path exist?: true
    Root name: ""
    Root directory: "/"
    Relative path: "Users/Abrao/Desktop/Projects/filesystem/main.cpp"
    Parent path: "/Users/Abrao/Desktop/Projects/filesystem"
    File name: "main.cpp"
    Stem: "main"
    Extension: ".cpp"
*/