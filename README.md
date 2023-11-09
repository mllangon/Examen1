# Examen1
Mario LLansó--> https://github.com/mllangon/Examen1.git

##PREGUNTAS MÚLTIPLE RESPUESTA:

1.-C++ es un lenguaje de programación ampliamente utilizado que ha evolucionado a lo largo de los años. ¿Cuáles de las siguientes opciones describen 
   correctamente las características centrales de C++?

d. Todas las anteriores

2.-Durante el proceso de desarrollo, a menudo es necesario compilar y enlazar múltiples archivos. En este contexto, ¿qué es un archivo makefile?

b. Un archivo que ayuda a gestionar y automatizar la compilación de proyectos de programación

3.-En C++, las variables pueden referirse a datos o direcciones de memoria. En relación a esto, ¿qué son los punteros en la programación C++?

b. Variables que almacenan la dirección de otra variable

##COMENTARIOS CÓDIGO:
1-->He hecho las operaciones básicas con un bucle que busca el operador elegido.
2-->He creado una clase que pide datos y los printea en la terminal
3-->He cambiado un puntero de un valor inicial a otro y viceversa
4-->La excepcion de una raiz cuadrada con un numero negativo
5-->Un estudiante que registra x materias y las devuelve en la terminal
6-->el promedio de las notas de un estudiante con un for
7-->He creado una clase que registra las asistencias, fecha y estado y las devuelvde con el elstudiante en la terminañ
8-->Un filtro de los grados y los estudiantes que los cursan con un bucle y vector
9-->La excepcion al resistrar una materia dos veces
10-->Una clase como la del estudiante pero en este caso con un profesor

##PREGUNTAS DE DESARROLLO

#La programación ha adoptado diferentes enfoques a lo largo del tiempo.
(Segun javapoint)

La programación orientada a objetos (POO) y la programación procedimental son dos paradigmas fundamentales en la programación. C++ es un lenguaje que soporta ambos paradigmas, lo que lo hace versátil para diferentes estilos de desarrollo.

Diferencias entre POO y Programación Procedimental:

Programación Procedimental:

Se centra en procedimientos o funciones.
Los datos y las funciones son entidades separadas.
Es más común en sistemas y aplicaciones donde la secuencia de acciones es crítica.
Programación Orientada a Objetos (POO):

Basada en conceptos de objetos y clases.
Encapsula datos y funciones juntos en objetos.
Favorece la reutilización, modularidad y mantenimiento del código, especialmente en proyectos grandes.
Soporte de C++ para Ambos Paradigmas:

C++ permite la programación procedimental heredando características de C, como funciones y estructuras de control.
C++ soporta POO a través de clases, objetos, herencia, polimorfismo y encapsulamiento.


#Las excepciones en C++ tienen un comportamiento específico
(Segun devut.github.io)

Propagación de una Excepción: La propagación de una excepción en C++ ocurre cuando una excepción es capturada en un bloque catch y luego se vuelve a lanzar, generalmente con el comando throw;. Esto permite que la excepción se maneje más arriba en la jerarquía de llamadas, posiblemente por un bloque catch en un nivel superior​​.

Excepción No Capturada: Si una excepción lanzada en C++ no es capturada por ningún bloque catch, el programa termina de forma anormal. La ejecución normal se detiene y el control se transfiere a una función especial llamada terminate(). Esta función por defecto detiene la ejecución del programa. No se especificó en la fuente consultada el comportamiento exacto de terminate() en cada situación, como si libera los recursos o no, pero generalmente se considera una terminación abrupta del programa.

#La gestión de recursos es un concepto crucial en la programación

En C++, la "Adquisición de Recursos" se maneja a través de una técnica conocida como RAII (Resource Acquisition Is Initialization). Según cppreference.com, RAII es una técnica de programación que vincula el ciclo de vida de un recurso que debe adquirirse antes de su uso (como memoria asignada, hilos, sockets abiertos, archivos, mutex, espacio en disco, conexiones a bases de datos, etc.) a la vida útil de un objeto​​.

Esta técnica es importante por varias razones:

Garantiza la Disponibilidad y Liberación de Recursos: RAII asegura que el recurso esté disponible para cualquier función que pueda acceder al objeto, y también garantiza que todos los recursos sean liberados cuando termina la vida útil de su objeto controlador. Si la adquisición de recursos falla (por ejemplo, si el constructor sale con una excepción), todos los recursos adquiridos por cada miembro completamente construido y subobjeto base se liberan en orden inverso de inicialización​​.

Constructor y Destructor: En RAII, el constructor adquiere el recurso y establece todas las invariantes de clase o lanza una excepción si eso no puede hacerse. El destructor libera el recurso y nunca lanza excepciones​​.

Uso a Través de Instancias de Clases RAII: Se debe usar el recurso a través de una instancia de una clase RAII que tenga una duración de almacenamiento automático o una vida útil temporal, o cuya vida útil esté limitada por la vida útil de un objeto automático o temporal​​.

Esta técnica se relaciona con la gestión de excepciones en C++ porque ayuda a garantizar la seguridad de las excepciones al manejar la liberación de recursos, incluso cuando ocurren excepciones, evitando así fugas de recursos y otros problemas relacionados.
