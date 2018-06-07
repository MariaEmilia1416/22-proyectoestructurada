/*----------------------------------------------------------------*/
/* Autor: Maria Emilia Palomec Reyes														  */
/* E-mail: emilia0599@gmail.com                                   */
/* Fecha creacion: 22/05/2018                                     */
/* Fecha actualizacion: 24/05/18                                  */
/* Descripcion: definicion de secuencia de colores                */
/*----------------------------------------------------------------*/

#ifndef COLORES_H_
#define COLORES_H_

/* El codigo de colores que utilizamos durante el codigo*/
#define _RESET        "\x1b[0m"     /* Resetear el color.   */
#define _ARESET       "\E[m"        /* Resetear todo.       */

#define _TNEGRO       "\x1b[30m"    /* Define el color del texto en negro.              */
#define _TROJO        "\x1b[31m"    /* Define el color del texto en rojo.               */
#define _TVERDE       "\x1b[32m"    /* Define el color del texto en verde.              */
#define _TAMARILLO    "\x1b[33m"    /* Define el color del texto en amarillo.           */
#define _TAZUL        "\x1b[34m"    /* Define el color del texto en azul.               */
#define _TMORADO      "\x1b[35m"    /* Define el color del texto en morado.             */
#define _TCYAN        "\x1b[36m"    /* Define el color del texto en cyan.               */
#define _TBLANCO      "\x1b[37m"    /* Define el color del texto en blanco.             */

#define _FNEGRO       "\x1b[40m"    /* Define el color del fondo del texto en negro.    */
#define _FROJO        "\x1b[41m"    /* Define el color del fondo del texto en rojo.     */
#define _FVERDE       "\x1b[42m"    /* Define el color del fondo del texto en verde.    */
#define _FAMARILLO    "\x1b[43m"    /* Define el color del fondo del texto en amarillo. */
#define _FAZUL        "\x1b[44m"    /* Define el color del fondo del texto en azul.     */
#define _FMORADO      "\x1b[45m"    /* Define el color del fondo del texto en morado.   */
#define _FCYAN        "\x1b[46m"    /* Define el color del fondo del texto en cyan.     */
#define _FBLANCO      "\x1b[47m"    /* Define el color del fondo del texto en blanco.   */

#define _NEGRITA      "\E[1m"       /* Negrita.        */
#define _NNEGRITA     "\E[22m"      /* No negrita.     */
#define _CURSIVA      "\E[3m"       /* Ccursiva.       */
#define _NCURSIVA     "\E[23m"      /* No cursiva.     */
#define _SUBRAYADO    "\E[4m"       /* Subrayado.      */
#define _NSUBRAYADO   "\E[24m"      /* No subrayado.   */
#define _PARPADEANTE  "\E[5m"       /* Parpadeante.    */
#define _NPARPADEANTE "\E[25m"      /* No parpadeante. */

#endif
