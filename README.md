# ft_printf

## 🏴Idiomes/languages:
- <img src="https://upload.wikimedia.org/wikipedia/commons/thumb/c/ce/Flag_of_Catalonia.svg/255px-Flag_of_Catalonia.svg.png" height="20px" width="30px" > [Català](#català)
- <img src="https://external-content.duckduckgo.com/iu/?u=https%3A%2F%2Fi.pinimg.com%2Foriginals%2Fbb%2F92%2Fa9%2Fbb92a9985e8defd0bbc75820ab7829c0.jpg" height="20px" width="30px"> [English](#english)

## Català:
### Objectiu:
| Nom del programa | libftprintf.a |
| :------------ | :------------ |
| **Fitxers d'entrega** | Makefile, \*.h, \*/\*.h, \*.c, \*/\*.c |
| **Makefile** | NAME, all, clean, fclean, re |
| **Funcions externes** | malloc, free, write, va_start, va_arg, va_copy, va_end |
| **Libft permés** | Si |
| **Descripció** | Escriu una llibrería que contingui `ft_printf()`, una funció que imitarà el `printf()` original |

Heu de recodificar la funció `printf()` de libc.
El prototip de `ft_printf()` és: `int ft_printf(const char *, ...);`
Aquests són els requisits:
- No implementeu la gestió de buffer del `printf()` original.
- La vostra funció ha de gestionar les conversions següents: cspdiuxX%.
- La vostra funció es compararà amb la `printf()`.
- Heu d'utilitzar l'ordre ar per crear la vostra biblioteca.
- L'ús de l'ordre libtool està prohibit.
- El vostre libftprintf.a s'ha de crear a l'arrel del vostre repositori.

### Nota:
![nota](https://raw.githubusercontent.com/nach131/42Barcelona/main/images/100.png "nota")

[========]

## English:
### Goal:
| Program name | libftprintf.a |
| :------------ | :------------ |
| **Turn in files** | Makefile, \*.h, \*/\*.h, \*.c, \*/\*.c |
| **Makefile** | NAME, all, clean, fclean, re |
| **External functs.** | malloc, free, write, va_start, va_arg, va_copy, va_end |
| **Libft authorized** | Si |
| **Description** | Write a library that contains `ft_printf()`, a function that will mimic the original `printf()` |

You have to recode the printf() function from libc.
EThe prototype of `ft_printf()` is: `int ft_printf(const char *, ...);`
Here are the requirements:
- Don't implement the buffer management of the original `printf()`.
- Your function has to handle the following conversions: cspdiuxX%.
- Your function will be compared against the original `printf()`.
- You must use the command ar to create your library.
- Using the libtool command is forbidden.
- Your libftprintf.a has to be created at the root of your repository.

### Note:
![note](https://raw.githubusercontent.com/nach131/42Barcelona/main/images/100.png "nota")
