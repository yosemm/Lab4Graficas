# Laboratorio 4: Carga de Modelos

El modelo lo obtuve de Blender, hice un proyecto base nuevo, agregué al mono, le di en Triangulate Faces en modo edición y luego lo exporté como monito.obj.

Las instrucciones mencionaban que no había problema con utilizar las funciones de Raylib, así que usé DrawModelWires() para dibujar las aristas.

Mi resultado fue:

<img width="500" alt="Captura wireframe monito Raylib" src="https://github.com/user-attachments/assets/caca397c-4511-403d-968b-6099772cca13" />

- Comando para compilar:
```bash
gcc main.c -o main -O2 -lraylib -lGL -lm -lpthread -ldl -lrt -lX11
```
- Para ejecutar:
```bash
./main
```

Las referencias que utilicé fueron:
- https://www.raylib.com/examples/core/loader.html?name=core_3d_camera_mode
- https://www.raylib.com/examples/models/loader.html?name=models_loading
