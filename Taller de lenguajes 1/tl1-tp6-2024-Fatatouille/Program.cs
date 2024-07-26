// See https://aka.ms/new-console-template for more information
/*Console.WriteLine("Hello, World!");

int a;
int b;
a=10;
b=a;
Console.WriteLine("valor de a:"+a);
Console.WriteLine("valor de b:"+b);
*/

// EJERCICIO 4
Console.WriteLine("Cadena: ");
string cc = Console.ReadLine();
int longitud = cc.Length;
Console.WriteLine(longitud);
Console.WriteLine("Cadena 2: ");
string cc2 = Console.ReadLine(), combina= cc+cc2;
Console.WriteLine(combina);
foreach (var letra in combina)
{
    Console.WriteLine(letra);    
}