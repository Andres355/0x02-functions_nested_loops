# include  < unistd.h >

/ * *
 * _putchar: escribe el carácter c en stdout
 * @c: el personaje a imprimir
 * *
 * Retorno: en caso de éxito 1.
 * En caso de error, se devuelve -1 y se establece errno de manera adecuada.
 * /
int  _putchar ( char c)
{
	return ( escribir ( 1 , & c, 1 ));
}
