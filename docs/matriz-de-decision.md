# Matriz de decisiones

| Decisión | Alternativas consideradas | Decisión final | Justificación | Riesgo si se modela mal |
|---|---|---|---|---|
| Cómo representar las zonas | vector, matriz, unordered_map | unordered_map | Permite buscar zonas rápidamente mediante un código único | La búsqueda puede ser lenta o confundirse con lógica de tablero |
| Cómo almacenar elementos interactivos | vector, arreglo estático, lista | vector | Permite agregar y eliminar elementos dinámicamente | Limita la flexibilidad o dificulta eliminar elementos |
| Cómo relacionar zonas entre sí | índices, strings, punteros | punteros a Zona | Facilita mover directamente al explorador entre zonas | Puede causar referencias incorrectas o navegación rota |
| Cómo representar elementos del juego | clases separadas sin herencia, herencia | herencia desde ElementoInteractivo | Reutiliza comportamiento y aplica polimorfismo | Código duplicado y difícil de mantener |
| Cómo permitir diferentes interacciones | if/else gigantes, métodos virtuales | métodos virtuales override | Cada clase implementa su propia lógica | El código se vuelve difícil de extender |
| Cómo manejar múltiples tipos de elementos | varios vectores, vector de punteros base | vector<ElementoInteractivo*> | Permite almacenar diferentes objetos en una sola colección | Se pierde polimorfismo y escalabilidad |
| Cómo representar el jugador | struct, variables globales, clase | clase Explorador | Encapsula atributos y comportamiento del jugador | Código desorganizado y difícil de controlar |
| Cómo manejar la memoria dinámica | objetos automáticos, punteros dinámicos | punteros con new/delete | Permite relaciones dinámicas entre objetos | Fugas de memoria o errores de acceso |
| Cómo organizar el flujo principal | todo en main, clase controladora | clase EcoMision | Centraliza el funcionamiento del juego | El programa se vuelve difícil de mantener |
| Cómo eliminar elementos consumibles | dejarlos permanentes, erase/delete | erase + delete | Permite que ciertos elementos desaparezcan después de usarse | Objetos infinitos o fugas de memoria |