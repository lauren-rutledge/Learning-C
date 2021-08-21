# Learning-C
This repo holds my C code and notes from Pluralsight courses.



### Create a new or open an existing project
1. Open Developer Command Prompt for Visual Studio
2. Navigate to the folder with the code or create one with `mkdir`
3. Type `code .` to launch VS Code

### How to create a new build task
Terminal -> Configure Default Build Task... -> C/C++ cl.exe build active file
  - Creates a `tasks.json` file with build instructions for the compiler
  
### How to configure the debugger
Run -> Add Configuration... -> C++ (Windows) -> cl.exe
  - Creates a `launch.json` file

### Chosen conventions to follow
- Curly braces: [K&R style](https://en.wikipedia.org/wiki/Indentation_style#K&R_style)
- File names: [snake_case](https://en.wikipedia.org/wiki/Snake_case)


## Errors/Resolutions
- `cl.exe is not recognized` when running the application
  - Make sure VS code was launched from the developer command prompt
