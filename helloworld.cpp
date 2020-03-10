/*
> clang++ -std=c++17 -stdlib=libc++ helloworld.cpp -o helloworld.out --debug && ./helloworld.out

https://code.visualstudio.com/docs/cpp/config-clang-mac

=> Add VS Code to your PATH (need to do only once):
1. Press ⇧⌘P (shift-command-P) to open the Command Palette.
2. Start typing "Shell" and from the list of suggestions choose 
   Shell Command: Install 'code' command in PATH.
3. You should see a notification in the lower right of the VS Code window 
   that tells you that VS Code was successfully added to the PATH.

=> Start VS Code in a folder:
   > mkdir vscode-cpp && cd vscode-cpp
   > code .

=> Build task: .vscode/tasks.json
To run the build task that you defined in tasks.json, press ⇧⌘B (shift-command-B) or 
from the main menu choose View > Command Palette and start typing "Tasks: Run Build Task".

=> Run a debugging session: .vscode/launch.json
Press F5 or from the main menu choose Run > Start Debugging
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}