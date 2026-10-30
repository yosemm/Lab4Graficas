// Comando gcc main.c -o main -O2 -lraylib -lGL -lm -lpthread -ldl -lrt -lX11

#include "raylib.h"

int main(void)
{

    const int sWidth = 580;
    const int sHeight = 480;

    InitWindow(sWidth, sHeight, "Lab 4 Modelo");
    SetTargetFPS(60);

    // Referencia utilizada para camara 3D https://www.raylib.com/examples/core/loader.html?name=core_3d_camera_mode

    Camera3D camera = {0};

    // Referencia utilizada para cargar un modelo https://www.raylib.com/examples/models/loader.html?name=models_loading
    Model monito = LoadModel("monito.obj");
    Vector3 posicionMonito = {0.0f, 0.0f, 0.0f};
    BoundingBox limitesMonito = GetModelBoundingBox(monito);

    camera.position = (Vector3){
        0.0f, 0.0f, (limitesMonito.max.z + 3.0f)};
    camera.target = (Vector3){0.0f, 0.0f, 0.0f};
    camera.up = (Vector3){0.0f, 1.0f, 0.0f};
    camera.fovy = 45.0f;
    camera.projection = CAMERA_PERSPECTIVE;

    while (!WindowShouldClose())
    {
        UpdateCamera(&camera, CAMERA_ORBITAL);

        BeginDrawing();
        ClearBackground(BLACK);

        BeginMode3D(camera);
        DrawModelWires(monito, posicionMonito, 1.0f, WHITE);
        EndMode3D();
        DrawFPS(5, 5);
        EndDrawing();
    }
    UnloadModel(monito);
    CloseWindow();
    return 0;
}