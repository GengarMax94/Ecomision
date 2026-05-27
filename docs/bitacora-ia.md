# bitacora-ia.md

# Uso de inteligencia artificial en el proyecto

## ¿Para qué usamos IA generativa?

Usamos inteligencia artificial como apoyo para entender mejor algunos conceptos de programación orientada a objetos y para revisar ideas del diseño del proyecto. También la usamos para resolver dudas sobre herencia, polimorfismo, organización de clases y manejo de GitHub.

La IA se utilizó principalmente para:
- aclarar conceptos de POO;
- proponer ejemplos sencillos;
- revisar errores de compilación;
- ayudar a organizar el diagrama UML;
- y sugerir implementaciones básicas de algunas clases.


---

## ¿Qué decisión de diseño revisamos con IA?

Revisamos principalmente cómo representar las zonas de la reserva y cómo relacionarlas con la clase Reserva.

Inicialmente se pensó usar un vector de zonas, pero luego se revisó la posibilidad de utilizar `unordered_map`, ya que el proyecto requería registrar y buscar zonas mediante un código único.

También revisamos con IA cómo organizar la herencia entre `ElementoInteractivo` y las clases derivadas como:
- `AnimalHerido`;
- `ResiduoContaminante`;
- `EstacionEnergia`.

---

## ¿Qué sugerencia de IA aceptamos y por qué?

Aceptamos la sugerencia de usar una clase abstracta llamada `ElementoInteractivo` con el método virtual:

```cpp
virtual void interactuar(Explorador* explorador) = 0;
```

porque permitía aplicar polimorfismo de forma sencilla y coherente.

También aceptamos usar `unordered_map<string, Zona*>` dentro de `Reserva`, ya que facilita buscar zonas rápidamente usando códigos.

---

## ¿Qué sugerencia de IA corregimos o rechazamos y por qué?

En una parte del diseño, la IA sugirió manejar las interacciones directamente desde la clase `Explorador`. Después de revisarlo, el equipo decidió que era mejor que cada clase derivada de `ElementoInteractivo` tuviera su propia implementación de `interactuar()`.

Se tomó esa decisión porque así se aplicaba mejor el polimorfismo y cada elemento podía modificar el estado del explorador de manera diferente sin concentrar toda la lógica en una sola clase.

Esto también ayudó a que el código fuera más organizado y más fácil de entender durante el desarrollo.

---

## ¿Qué parte del proyecto puede defender cada integrante?

### Integrante 1 — Juan José Arenas 

Puede defender principalmente:

- Diseño general del sistema.
- Implementación de las clases `PortalDeRuta` y `EcoMision`.
- Integración del flujo principal del juego.
- Uso de herencia, polimorfismo y clases abstractas.
- Manejo de interacción entre zonas y explorador.
- Uso de Git y organización del proyecto.

### Integrante 2 — Jorge Santana

Puede defender principalmente:

- Implementación de las clases `Reserva`, `EstacionEnergia` y `ResiduoContaminante`.
- Uso de `unordered_map` para almacenar zonas.
- Manejo de elementos interactivos dentro de las zonas.
- Organización de estructuras dinámicas como `vector`.
- Implementación de interacciones y modificaciones de energía/puntaje.
- Documentación y diagramas UML del proyecto.

### Conocimiento compartido

Ambos integrantes pueden explicar:

- La arquitectura general del proyecto.
- El funcionamiento del menú e interacción del juego.
- Conceptos de programación orientada a objetos aplicados:
  - herencia;
  - polimorfismo;
  - encapsulamiento;
  - abstracción;
  - override;
  - sobrecarga.
- Uso básico de GitHub para trabajo colaborativo.