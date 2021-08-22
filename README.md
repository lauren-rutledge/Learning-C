# Learning-C
This repo holds my C code and notes from Pluralsight courses.
- [Getting Started with the C Language](https://app.pluralsight.com/library/courses/getting-started-c-language/table-of-contents)

### Create a new or open an existing project
1. Open Developer Command Prompt for Visual Studio
2. Navigate to the folder with the code or create one with `mkdir`
3. Type `code .` to launch VS Code

### How to create a new build task
Terminal -> Configure Default Build Task... -> C/C++ cl.exe build active file
  - Creates a [`tasks.json`](https://code.visualstudio.com/docs/cpp/config-msvc#_build-helloworldcpp) file with build instructions for the compiler
  
### How to configure the debugger
Run -> Add Configuration... -> C++ (Windows) -> cl.exe
  - Creates a [`launch.json`](https://code.visualstudio.com/docs/cpp/launch-json-reference) file with debugger settings

### Chosen conventions to follow
- Curly braces: [K&R style](https://en.wikipedia.org/wiki/Indentation_style#K&R_style)
- File names: [snake_case](https://en.wikipedia.org/wiki/Snake_case)


## Bugs/Errors/Resolutions
- `cl.exe is not recognized` when running the application
  - Make sure VS code was launched from the developer command prompt
- Strings are prepended with random chars before calling `strcat` or `strcat_s`
  - Initialize the string (or at least the first char) to empty before attempting to add to it.
    ```c
    char message[100];
    message[0] = '\0';
    ```
- [`benign redefinition of type. A type is redefined in a manner that has no effect on the generated code.`](https://docs.microsoft.com/en-us/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4142?view=msvc-160) compiler error
  - If you are calling a function you wrote, make sure it is above the calling function in the file (defined first).
