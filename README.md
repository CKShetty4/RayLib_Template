# RayLib C++ Template with VSCode
This repository serves as a template to quickly set up and develop C++ applications using the [RayLib](https://www.raylib.com/ "RayLib") library, designed for making simple and efficient games. It comes pre-configured with a Visual Studio Code (VSCode) workspace, making it easy to start developing without worrying about configuration setup.

------------


### Features:
- **RayLib Integration:** Pre-configured to use the RayLib library for game development and multimedia applications.

- **C++ Project Structure**: Organize your source code, headers, and assets effectively for small to medium-sized projects.

- **VSCode Workspace**: Ready-to-use .vscode configuration with tasks and debugging profiles for easy building and running.


------------


#### What's Included:
`.vscode/`: Preconfigured settings for building, running, and debugging your RayLib C++ project.

`src/`: Contains a simple C++ source file (`main.cpp`) demonstrating RayLib initialization and a basic game loop.

`lib/`: A folder for RayLib binaries and other libraries.

`Makefile`: The project comes with a fully configured Makefile for building the application.

`README.md`: A detailed guide on how to set up and run the project, including instructions for configuring RayLib 




Add your own C++ files, modify the game loop, and start developing your RayLib-based project!

------------

Raylib C++ Starter Template for Visual Studio Code on Windows. It works with raylib version 5.0. Tested on both Windows 10 and Windows 11.

------------


### Instructions: How to use this template
- First Download and setup [Raylib](http://https://www.raylib.com/ "Raylib") in your system. And then clone this repository or create a new repository with this template.
- Double click on the `main.code-workspace` file. This will open the template in VS Code.
- From the Explorer Window of VS Code navigate to the `src` folder and double click on the `main.cpp` file.
- Press `F5` on the keyboard to compile and run the program.


------------

#### Congratulations! You've successfully set up and run the Raylib template in Visual Studio Code! 🚀

Now you're all set to start creating awesome games or graphical applications. Here are a few ideas for your next steps:

- 🛠 Explore the template files and familiarize yourself with the code.
- 🎮 Modify the example to experiment with graphics, sound, and more.
- 🌟 Dive into the Raylib documentation to discover all the features available to you!
##### Happy coding, and welcome to the world of Raylib! Happy coding, and welcome to the world of Raylib!
###### Important Configuration Changes:

- `Makefile`: Navigate to Line 27 and replace "ProjectName" with the actual name of your project. This is crucial to ensure the correct output binary is generated.

- `src/main.cpp`: Instructions are embedded in the code comments. However, if no further modifications were made to the template, ensure the project name on Line 9 matches the name set in the Makefile. This step is essential for maintaining consistency across your project.
