#include "raylib.h"

int main() {
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 1800;
    const int screenHeight = 1250;

    InitWindow(screenWidth, screenHeight, "Project Name"); //Add your project name here, It is the title of the window

    // Set our game to run at 60 frames-per-second
    SetTargetFPS(60);

    // Animation variables
    float textAlpha = 0.0f;
    float textScale = 1.0f;
    bool textGrowing = true;

    // Main game loop
    while (!WindowShouldClose()) {
        // Update
        //----------------------------------------------------------------------------------
        // Update animation variables
        if (textGrowing) {
            textAlpha += 0.01f;
            textScale += 0.01f;
            if (textAlpha >= 1.0f) textGrowing = false;
        } else {
            textAlpha -= 0.01f;
            textScale -= 0.01f;
            if (textAlpha <= 0.0f) textGrowing = true;
        }

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

        ClearBackground(BLACK);

        // Draw animated text : This is just an Example.
        DrawTextEx(GetFontDefault(), "Welcome to your Raylib project!", 
                    (Vector2){ screenWidth / 2 - MeasureText("Welcome to your Raylib project!", 40) / 2, screenHeight / 2 - 20 }, 
                    40, textScale, LIGHTGRAY);
        DrawTextEx(GetFontDefault(), "This template provides a solid foundation for creating games and interactive applications using Raylib. You're now ready to start experimenting and building amazing projects.", 
                    (Vector2){ screenWidth / 2 - MeasureText("This template provides a solid foundation for creating games and interactive applications using Raylib. You're now ready to start experimenting and building amazing projects.", 20) / 2, screenHeight / 2 + 20 }, 
                    20, 1.0f, Fade(LIGHTGRAY, textAlpha));

        EndDrawing();
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context

    return 0;
}