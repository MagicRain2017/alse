# 🛒 Sistema de Carrito de Compras

##  Descripción
Este proyecto implementa un sistema básico de carrito de compras para una tienda en línea.  
El usuario puede agregar productos, eliminarlos, visualizar el carrito, finalizar compras y consultar su historial.

---

##  Estructura del proyecto

```
CarritoCompras/
│
├── inclu/                # Archivos de cabecera (.h)
│   ├── Producto.h
│   ├── ItemCarrito.h
│   ├── CarritoCompras.h
│   └── Usuario.h
│
├── src/                  # Archivos fuente (.cpp) y CMake
│   ├── main.cpp
│   ├── Producto.cpp
│   ├── ItemCarrito.cpp
│   ├── CarritoCompras.cpp
│   ├── Usuario.cpp
│   └── CMakeLists.txt
│
└── README.md
```

---

##  Funcionalidades principales

1. **Clase `Producto`**
   - Atributos: `nombre`, `precio`, `stock`.

2. **Clase `ItemCarrito`**
   - Representa un producto dentro del carrito (incluye cantidad).

3. **Clase `CarritoCompras`**
   - Permite agregar, eliminar y mostrar productos.
   - Calcula el total de la compra.

4. **Clase `Usuario`**
   - Contiene el historial de compras del usuario.

---

##  Ejecución (CMake)

1. Abre la carpeta del proyecto en tu entorno (CLion, Visual Studio o Code::Blocks con CMake).  
2. Ejecuta los siguientes comandos en terminal (si deseas hacerlo manualmente):

```bash
cd src
cmake .
make
./CarritoCompras
```

---

##  Autor
**David Quitián** – Ingeniería Electrónica  
Proyecto académico: *Sistema de Carrito de Compras en C++ (Programación Orientada a Objetos)*
